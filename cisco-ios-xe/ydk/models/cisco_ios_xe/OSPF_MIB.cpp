
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "OSPF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace OSPF_MIB {

OSPFMIB::OSPFMIB()
    :
    ospfgeneralgroup(std::make_shared<OSPFMIB::OspfGeneralGroup>())
    , ospfareatable(std::make_shared<OSPFMIB::OspfAreaTable>())
    , ospfstubareatable(std::make_shared<OSPFMIB::OspfStubAreaTable>())
    , ospflsdbtable(std::make_shared<OSPFMIB::OspfLsdbTable>())
    , ospfarearangetable(std::make_shared<OSPFMIB::OspfAreaRangeTable>())
    , ospfhosttable(std::make_shared<OSPFMIB::OspfHostTable>())
    , ospfiftable(std::make_shared<OSPFMIB::OspfIfTable>())
    , ospfifmetrictable(std::make_shared<OSPFMIB::OspfIfMetricTable>())
    , ospfvirtiftable(std::make_shared<OSPFMIB::OspfVirtIfTable>())
    , ospfnbrtable(std::make_shared<OSPFMIB::OspfNbrTable>())
    , ospfvirtnbrtable(std::make_shared<OSPFMIB::OspfVirtNbrTable>())
    , ospfextlsdbtable(std::make_shared<OSPFMIB::OspfExtLsdbTable>())
    , ospfareaaggregatetable(std::make_shared<OSPFMIB::OspfAreaAggregateTable>())
    , ospflocallsdbtable(std::make_shared<OSPFMIB::OspfLocalLsdbTable>())
    , ospfvirtlocallsdbtable(std::make_shared<OSPFMIB::OspfVirtLocalLsdbTable>())
    , ospfaslsdbtable(std::make_shared<OSPFMIB::OspfAsLsdbTable>())
    , ospfarealsacounttable(std::make_shared<OSPFMIB::OspfAreaLsaCountTable>())
{
    ospfgeneralgroup->parent = this;
    ospfareatable->parent = this;
    ospfstubareatable->parent = this;
    ospflsdbtable->parent = this;
    ospfarearangetable->parent = this;
    ospfhosttable->parent = this;
    ospfiftable->parent = this;
    ospfifmetrictable->parent = this;
    ospfvirtiftable->parent = this;
    ospfnbrtable->parent = this;
    ospfvirtnbrtable->parent = this;
    ospfextlsdbtable->parent = this;
    ospfareaaggregatetable->parent = this;
    ospflocallsdbtable->parent = this;
    ospfvirtlocallsdbtable->parent = this;
    ospfaslsdbtable->parent = this;
    ospfarealsacounttable->parent = this;

    yang_name = "OSPF-MIB"; yang_parent_name = "OSPF-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

OSPFMIB::~OSPFMIB()
{
}

bool OSPFMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ospfgeneralgroup !=  nullptr && ospfgeneralgroup->has_data())
	|| (ospfareatable !=  nullptr && ospfareatable->has_data())
	|| (ospfstubareatable !=  nullptr && ospfstubareatable->has_data())
	|| (ospflsdbtable !=  nullptr && ospflsdbtable->has_data())
	|| (ospfarearangetable !=  nullptr && ospfarearangetable->has_data())
	|| (ospfhosttable !=  nullptr && ospfhosttable->has_data())
	|| (ospfiftable !=  nullptr && ospfiftable->has_data())
	|| (ospfifmetrictable !=  nullptr && ospfifmetrictable->has_data())
	|| (ospfvirtiftable !=  nullptr && ospfvirtiftable->has_data())
	|| (ospfnbrtable !=  nullptr && ospfnbrtable->has_data())
	|| (ospfvirtnbrtable !=  nullptr && ospfvirtnbrtable->has_data())
	|| (ospfextlsdbtable !=  nullptr && ospfextlsdbtable->has_data())
	|| (ospfareaaggregatetable !=  nullptr && ospfareaaggregatetable->has_data())
	|| (ospflocallsdbtable !=  nullptr && ospflocallsdbtable->has_data())
	|| (ospfvirtlocallsdbtable !=  nullptr && ospfvirtlocallsdbtable->has_data())
	|| (ospfaslsdbtable !=  nullptr && ospfaslsdbtable->has_data())
	|| (ospfarealsacounttable !=  nullptr && ospfarealsacounttable->has_data());
}

bool OSPFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ospfgeneralgroup !=  nullptr && ospfgeneralgroup->has_operation())
	|| (ospfareatable !=  nullptr && ospfareatable->has_operation())
	|| (ospfstubareatable !=  nullptr && ospfstubareatable->has_operation())
	|| (ospflsdbtable !=  nullptr && ospflsdbtable->has_operation())
	|| (ospfarearangetable !=  nullptr && ospfarearangetable->has_operation())
	|| (ospfhosttable !=  nullptr && ospfhosttable->has_operation())
	|| (ospfiftable !=  nullptr && ospfiftable->has_operation())
	|| (ospfifmetrictable !=  nullptr && ospfifmetrictable->has_operation())
	|| (ospfvirtiftable !=  nullptr && ospfvirtiftable->has_operation())
	|| (ospfnbrtable !=  nullptr && ospfnbrtable->has_operation())
	|| (ospfvirtnbrtable !=  nullptr && ospfvirtnbrtable->has_operation())
	|| (ospfextlsdbtable !=  nullptr && ospfextlsdbtable->has_operation())
	|| (ospfareaaggregatetable !=  nullptr && ospfareaaggregatetable->has_operation())
	|| (ospflocallsdbtable !=  nullptr && ospflocallsdbtable->has_operation())
	|| (ospfvirtlocallsdbtable !=  nullptr && ospfvirtlocallsdbtable->has_operation())
	|| (ospfaslsdbtable !=  nullptr && ospfaslsdbtable->has_operation())
	|| (ospfarealsacounttable !=  nullptr && ospfarealsacounttable->has_operation());
}

std::string OSPFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfGeneralGroup")
    {
        if(ospfgeneralgroup == nullptr)
        {
            ospfgeneralgroup = std::make_shared<OSPFMIB::OspfGeneralGroup>();
        }
        return ospfgeneralgroup;
    }

    if(child_yang_name == "ospfAreaTable")
    {
        if(ospfareatable == nullptr)
        {
            ospfareatable = std::make_shared<OSPFMIB::OspfAreaTable>();
        }
        return ospfareatable;
    }

    if(child_yang_name == "ospfStubAreaTable")
    {
        if(ospfstubareatable == nullptr)
        {
            ospfstubareatable = std::make_shared<OSPFMIB::OspfStubAreaTable>();
        }
        return ospfstubareatable;
    }

    if(child_yang_name == "ospfLsdbTable")
    {
        if(ospflsdbtable == nullptr)
        {
            ospflsdbtable = std::make_shared<OSPFMIB::OspfLsdbTable>();
        }
        return ospflsdbtable;
    }

    if(child_yang_name == "ospfAreaRangeTable")
    {
        if(ospfarearangetable == nullptr)
        {
            ospfarearangetable = std::make_shared<OSPFMIB::OspfAreaRangeTable>();
        }
        return ospfarearangetable;
    }

    if(child_yang_name == "ospfHostTable")
    {
        if(ospfhosttable == nullptr)
        {
            ospfhosttable = std::make_shared<OSPFMIB::OspfHostTable>();
        }
        return ospfhosttable;
    }

    if(child_yang_name == "ospfIfTable")
    {
        if(ospfiftable == nullptr)
        {
            ospfiftable = std::make_shared<OSPFMIB::OspfIfTable>();
        }
        return ospfiftable;
    }

    if(child_yang_name == "ospfIfMetricTable")
    {
        if(ospfifmetrictable == nullptr)
        {
            ospfifmetrictable = std::make_shared<OSPFMIB::OspfIfMetricTable>();
        }
        return ospfifmetrictable;
    }

    if(child_yang_name == "ospfVirtIfTable")
    {
        if(ospfvirtiftable == nullptr)
        {
            ospfvirtiftable = std::make_shared<OSPFMIB::OspfVirtIfTable>();
        }
        return ospfvirtiftable;
    }

    if(child_yang_name == "ospfNbrTable")
    {
        if(ospfnbrtable == nullptr)
        {
            ospfnbrtable = std::make_shared<OSPFMIB::OspfNbrTable>();
        }
        return ospfnbrtable;
    }

    if(child_yang_name == "ospfVirtNbrTable")
    {
        if(ospfvirtnbrtable == nullptr)
        {
            ospfvirtnbrtable = std::make_shared<OSPFMIB::OspfVirtNbrTable>();
        }
        return ospfvirtnbrtable;
    }

    if(child_yang_name == "ospfExtLsdbTable")
    {
        if(ospfextlsdbtable == nullptr)
        {
            ospfextlsdbtable = std::make_shared<OSPFMIB::OspfExtLsdbTable>();
        }
        return ospfextlsdbtable;
    }

    if(child_yang_name == "ospfAreaAggregateTable")
    {
        if(ospfareaaggregatetable == nullptr)
        {
            ospfareaaggregatetable = std::make_shared<OSPFMIB::OspfAreaAggregateTable>();
        }
        return ospfareaaggregatetable;
    }

    if(child_yang_name == "ospfLocalLsdbTable")
    {
        if(ospflocallsdbtable == nullptr)
        {
            ospflocallsdbtable = std::make_shared<OSPFMIB::OspfLocalLsdbTable>();
        }
        return ospflocallsdbtable;
    }

    if(child_yang_name == "ospfVirtLocalLsdbTable")
    {
        if(ospfvirtlocallsdbtable == nullptr)
        {
            ospfvirtlocallsdbtable = std::make_shared<OSPFMIB::OspfVirtLocalLsdbTable>();
        }
        return ospfvirtlocallsdbtable;
    }

    if(child_yang_name == "ospfAsLsdbTable")
    {
        if(ospfaslsdbtable == nullptr)
        {
            ospfaslsdbtable = std::make_shared<OSPFMIB::OspfAsLsdbTable>();
        }
        return ospfaslsdbtable;
    }

    if(child_yang_name == "ospfAreaLsaCountTable")
    {
        if(ospfarealsacounttable == nullptr)
        {
            ospfarealsacounttable = std::make_shared<OSPFMIB::OspfAreaLsaCountTable>();
        }
        return ospfarealsacounttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfgeneralgroup != nullptr)
    {
        children["ospfGeneralGroup"] = ospfgeneralgroup;
    }

    if(ospfareatable != nullptr)
    {
        children["ospfAreaTable"] = ospfareatable;
    }

    if(ospfstubareatable != nullptr)
    {
        children["ospfStubAreaTable"] = ospfstubareatable;
    }

    if(ospflsdbtable != nullptr)
    {
        children["ospfLsdbTable"] = ospflsdbtable;
    }

    if(ospfarearangetable != nullptr)
    {
        children["ospfAreaRangeTable"] = ospfarearangetable;
    }

    if(ospfhosttable != nullptr)
    {
        children["ospfHostTable"] = ospfhosttable;
    }

    if(ospfiftable != nullptr)
    {
        children["ospfIfTable"] = ospfiftable;
    }

    if(ospfifmetrictable != nullptr)
    {
        children["ospfIfMetricTable"] = ospfifmetrictable;
    }

    if(ospfvirtiftable != nullptr)
    {
        children["ospfVirtIfTable"] = ospfvirtiftable;
    }

    if(ospfnbrtable != nullptr)
    {
        children["ospfNbrTable"] = ospfnbrtable;
    }

    if(ospfvirtnbrtable != nullptr)
    {
        children["ospfVirtNbrTable"] = ospfvirtnbrtable;
    }

    if(ospfextlsdbtable != nullptr)
    {
        children["ospfExtLsdbTable"] = ospfextlsdbtable;
    }

    if(ospfareaaggregatetable != nullptr)
    {
        children["ospfAreaAggregateTable"] = ospfareaaggregatetable;
    }

    if(ospflocallsdbtable != nullptr)
    {
        children["ospfLocalLsdbTable"] = ospflocallsdbtable;
    }

    if(ospfvirtlocallsdbtable != nullptr)
    {
        children["ospfVirtLocalLsdbTable"] = ospfvirtlocallsdbtable;
    }

    if(ospfaslsdbtable != nullptr)
    {
        children["ospfAsLsdbTable"] = ospfaslsdbtable;
    }

    if(ospfarealsacounttable != nullptr)
    {
        children["ospfAreaLsaCountTable"] = ospfarealsacounttable;
    }

    return children;
}

void OSPFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OSPFMIB::clone_ptr() const
{
    return std::make_shared<OSPFMIB>();
}

std::string OSPFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string OSPFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function OSPFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OSPFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool OSPFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfGeneralGroup" || name == "ospfAreaTable" || name == "ospfStubAreaTable" || name == "ospfLsdbTable" || name == "ospfAreaRangeTable" || name == "ospfHostTable" || name == "ospfIfTable" || name == "ospfIfMetricTable" || name == "ospfVirtIfTable" || name == "ospfNbrTable" || name == "ospfVirtNbrTable" || name == "ospfExtLsdbTable" || name == "ospfAreaAggregateTable" || name == "ospfLocalLsdbTable" || name == "ospfVirtLocalLsdbTable" || name == "ospfAsLsdbTable" || name == "ospfAreaLsaCountTable")
        return true;
    return false;
}

OSPFMIB::OspfGeneralGroup::OspfGeneralGroup()
    :
    ospfrouterid{YType::str, "ospfRouterId"},
    ospfadminstat{YType::enumeration, "ospfAdminStat"},
    ospfversionnumber{YType::enumeration, "ospfVersionNumber"},
    ospfareabdrrtrstatus{YType::boolean, "ospfAreaBdrRtrStatus"},
    ospfasbdrrtrstatus{YType::boolean, "ospfASBdrRtrStatus"},
    ospfexternlsacount{YType::uint32, "ospfExternLsaCount"},
    ospfexternlsacksumsum{YType::int32, "ospfExternLsaCksumSum"},
    ospftossupport{YType::boolean, "ospfTOSSupport"},
    ospforiginatenewlsas{YType::uint32, "ospfOriginateNewLsas"},
    ospfrxnewlsas{YType::uint32, "ospfRxNewLsas"},
    ospfextlsdblimit{YType::int32, "ospfExtLsdbLimit"},
    ospfmulticastextensions{YType::int32, "ospfMulticastExtensions"},
    ospfexitoverflowinterval{YType::int32, "ospfExitOverflowInterval"},
    ospfdemandextensions{YType::boolean, "ospfDemandExtensions"},
    ospfrfc1583compatibility{YType::boolean, "ospfRFC1583Compatibility"},
    ospfopaquelsasupport{YType::boolean, "ospfOpaqueLsaSupport"},
    ospfreferencebandwidth{YType::uint32, "ospfReferenceBandwidth"},
    ospfrestartsupport{YType::enumeration, "ospfRestartSupport"},
    ospfrestartinterval{YType::int32, "ospfRestartInterval"},
    ospfrestartstrictlsachecking{YType::boolean, "ospfRestartStrictLsaChecking"},
    ospfrestartstatus{YType::enumeration, "ospfRestartStatus"},
    ospfrestartage{YType::uint32, "ospfRestartAge"},
    ospfrestartexitreason{YType::enumeration, "ospfRestartExitReason"},
    ospfaslsacount{YType::uint32, "ospfAsLsaCount"},
    ospfaslsacksumsum{YType::uint32, "ospfAsLsaCksumSum"},
    ospfstubroutersupport{YType::boolean, "ospfStubRouterSupport"},
    ospfstubrouteradvertisement{YType::enumeration, "ospfStubRouterAdvertisement"},
    ospfdiscontinuitytime{YType::uint32, "ospfDiscontinuityTime"}
{

    yang_name = "ospfGeneralGroup"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfGeneralGroup::~OspfGeneralGroup()
{
}

bool OSPFMIB::OspfGeneralGroup::has_data() const
{
    if (is_presence_container) return true;
    return ospfrouterid.is_set
	|| ospfadminstat.is_set
	|| ospfversionnumber.is_set
	|| ospfareabdrrtrstatus.is_set
	|| ospfasbdrrtrstatus.is_set
	|| ospfexternlsacount.is_set
	|| ospfexternlsacksumsum.is_set
	|| ospftossupport.is_set
	|| ospforiginatenewlsas.is_set
	|| ospfrxnewlsas.is_set
	|| ospfextlsdblimit.is_set
	|| ospfmulticastextensions.is_set
	|| ospfexitoverflowinterval.is_set
	|| ospfdemandextensions.is_set
	|| ospfrfc1583compatibility.is_set
	|| ospfopaquelsasupport.is_set
	|| ospfreferencebandwidth.is_set
	|| ospfrestartsupport.is_set
	|| ospfrestartinterval.is_set
	|| ospfrestartstrictlsachecking.is_set
	|| ospfrestartstatus.is_set
	|| ospfrestartage.is_set
	|| ospfrestartexitreason.is_set
	|| ospfaslsacount.is_set
	|| ospfaslsacksumsum.is_set
	|| ospfstubroutersupport.is_set
	|| ospfstubrouteradvertisement.is_set
	|| ospfdiscontinuitytime.is_set;
}

bool OSPFMIB::OspfGeneralGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfrouterid.yfilter)
	|| ydk::is_set(ospfadminstat.yfilter)
	|| ydk::is_set(ospfversionnumber.yfilter)
	|| ydk::is_set(ospfareabdrrtrstatus.yfilter)
	|| ydk::is_set(ospfasbdrrtrstatus.yfilter)
	|| ydk::is_set(ospfexternlsacount.yfilter)
	|| ydk::is_set(ospfexternlsacksumsum.yfilter)
	|| ydk::is_set(ospftossupport.yfilter)
	|| ydk::is_set(ospforiginatenewlsas.yfilter)
	|| ydk::is_set(ospfrxnewlsas.yfilter)
	|| ydk::is_set(ospfextlsdblimit.yfilter)
	|| ydk::is_set(ospfmulticastextensions.yfilter)
	|| ydk::is_set(ospfexitoverflowinterval.yfilter)
	|| ydk::is_set(ospfdemandextensions.yfilter)
	|| ydk::is_set(ospfrfc1583compatibility.yfilter)
	|| ydk::is_set(ospfopaquelsasupport.yfilter)
	|| ydk::is_set(ospfreferencebandwidth.yfilter)
	|| ydk::is_set(ospfrestartsupport.yfilter)
	|| ydk::is_set(ospfrestartinterval.yfilter)
	|| ydk::is_set(ospfrestartstrictlsachecking.yfilter)
	|| ydk::is_set(ospfrestartstatus.yfilter)
	|| ydk::is_set(ospfrestartage.yfilter)
	|| ydk::is_set(ospfrestartexitreason.yfilter)
	|| ydk::is_set(ospfaslsacount.yfilter)
	|| ydk::is_set(ospfaslsacksumsum.yfilter)
	|| ydk::is_set(ospfstubroutersupport.yfilter)
	|| ydk::is_set(ospfstubrouteradvertisement.yfilter)
	|| ydk::is_set(ospfdiscontinuitytime.yfilter);
}

std::string OSPFMIB::OspfGeneralGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfGeneralGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfGeneralGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfGeneralGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfrouterid.is_set || is_set(ospfrouterid.yfilter)) leaf_name_data.push_back(ospfrouterid.get_name_leafdata());
    if (ospfadminstat.is_set || is_set(ospfadminstat.yfilter)) leaf_name_data.push_back(ospfadminstat.get_name_leafdata());
    if (ospfversionnumber.is_set || is_set(ospfversionnumber.yfilter)) leaf_name_data.push_back(ospfversionnumber.get_name_leafdata());
    if (ospfareabdrrtrstatus.is_set || is_set(ospfareabdrrtrstatus.yfilter)) leaf_name_data.push_back(ospfareabdrrtrstatus.get_name_leafdata());
    if (ospfasbdrrtrstatus.is_set || is_set(ospfasbdrrtrstatus.yfilter)) leaf_name_data.push_back(ospfasbdrrtrstatus.get_name_leafdata());
    if (ospfexternlsacount.is_set || is_set(ospfexternlsacount.yfilter)) leaf_name_data.push_back(ospfexternlsacount.get_name_leafdata());
    if (ospfexternlsacksumsum.is_set || is_set(ospfexternlsacksumsum.yfilter)) leaf_name_data.push_back(ospfexternlsacksumsum.get_name_leafdata());
    if (ospftossupport.is_set || is_set(ospftossupport.yfilter)) leaf_name_data.push_back(ospftossupport.get_name_leafdata());
    if (ospforiginatenewlsas.is_set || is_set(ospforiginatenewlsas.yfilter)) leaf_name_data.push_back(ospforiginatenewlsas.get_name_leafdata());
    if (ospfrxnewlsas.is_set || is_set(ospfrxnewlsas.yfilter)) leaf_name_data.push_back(ospfrxnewlsas.get_name_leafdata());
    if (ospfextlsdblimit.is_set || is_set(ospfextlsdblimit.yfilter)) leaf_name_data.push_back(ospfextlsdblimit.get_name_leafdata());
    if (ospfmulticastextensions.is_set || is_set(ospfmulticastextensions.yfilter)) leaf_name_data.push_back(ospfmulticastextensions.get_name_leafdata());
    if (ospfexitoverflowinterval.is_set || is_set(ospfexitoverflowinterval.yfilter)) leaf_name_data.push_back(ospfexitoverflowinterval.get_name_leafdata());
    if (ospfdemandextensions.is_set || is_set(ospfdemandextensions.yfilter)) leaf_name_data.push_back(ospfdemandextensions.get_name_leafdata());
    if (ospfrfc1583compatibility.is_set || is_set(ospfrfc1583compatibility.yfilter)) leaf_name_data.push_back(ospfrfc1583compatibility.get_name_leafdata());
    if (ospfopaquelsasupport.is_set || is_set(ospfopaquelsasupport.yfilter)) leaf_name_data.push_back(ospfopaquelsasupport.get_name_leafdata());
    if (ospfreferencebandwidth.is_set || is_set(ospfreferencebandwidth.yfilter)) leaf_name_data.push_back(ospfreferencebandwidth.get_name_leafdata());
    if (ospfrestartsupport.is_set || is_set(ospfrestartsupport.yfilter)) leaf_name_data.push_back(ospfrestartsupport.get_name_leafdata());
    if (ospfrestartinterval.is_set || is_set(ospfrestartinterval.yfilter)) leaf_name_data.push_back(ospfrestartinterval.get_name_leafdata());
    if (ospfrestartstrictlsachecking.is_set || is_set(ospfrestartstrictlsachecking.yfilter)) leaf_name_data.push_back(ospfrestartstrictlsachecking.get_name_leafdata());
    if (ospfrestartstatus.is_set || is_set(ospfrestartstatus.yfilter)) leaf_name_data.push_back(ospfrestartstatus.get_name_leafdata());
    if (ospfrestartage.is_set || is_set(ospfrestartage.yfilter)) leaf_name_data.push_back(ospfrestartage.get_name_leafdata());
    if (ospfrestartexitreason.is_set || is_set(ospfrestartexitreason.yfilter)) leaf_name_data.push_back(ospfrestartexitreason.get_name_leafdata());
    if (ospfaslsacount.is_set || is_set(ospfaslsacount.yfilter)) leaf_name_data.push_back(ospfaslsacount.get_name_leafdata());
    if (ospfaslsacksumsum.is_set || is_set(ospfaslsacksumsum.yfilter)) leaf_name_data.push_back(ospfaslsacksumsum.get_name_leafdata());
    if (ospfstubroutersupport.is_set || is_set(ospfstubroutersupport.yfilter)) leaf_name_data.push_back(ospfstubroutersupport.get_name_leafdata());
    if (ospfstubrouteradvertisement.is_set || is_set(ospfstubrouteradvertisement.yfilter)) leaf_name_data.push_back(ospfstubrouteradvertisement.get_name_leafdata());
    if (ospfdiscontinuitytime.is_set || is_set(ospfdiscontinuitytime.yfilter)) leaf_name_data.push_back(ospfdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfGeneralGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfGeneralGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfGeneralGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfRouterId")
    {
        ospfrouterid = value;
        ospfrouterid.value_namespace = name_space;
        ospfrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAdminStat")
    {
        ospfadminstat = value;
        ospfadminstat.value_namespace = name_space;
        ospfadminstat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVersionNumber")
    {
        ospfversionnumber = value;
        ospfversionnumber.value_namespace = name_space;
        ospfversionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaBdrRtrStatus")
    {
        ospfareabdrrtrstatus = value;
        ospfareabdrrtrstatus.value_namespace = name_space;
        ospfareabdrrtrstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfASBdrRtrStatus")
    {
        ospfasbdrrtrstatus = value;
        ospfasbdrrtrstatus.value_namespace = name_space;
        ospfasbdrrtrstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExternLsaCount")
    {
        ospfexternlsacount = value;
        ospfexternlsacount.value_namespace = name_space;
        ospfexternlsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExternLsaCksumSum")
    {
        ospfexternlsacksumsum = value;
        ospfexternlsacksumsum.value_namespace = name_space;
        ospfexternlsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfTOSSupport")
    {
        ospftossupport = value;
        ospftossupport.value_namespace = name_space;
        ospftossupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfOriginateNewLsas")
    {
        ospforiginatenewlsas = value;
        ospforiginatenewlsas.value_namespace = name_space;
        ospforiginatenewlsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRxNewLsas")
    {
        ospfrxnewlsas = value;
        ospfrxnewlsas.value_namespace = name_space;
        ospfrxnewlsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbLimit")
    {
        ospfextlsdblimit = value;
        ospfextlsdblimit.value_namespace = name_space;
        ospfextlsdblimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfMulticastExtensions")
    {
        ospfmulticastextensions = value;
        ospfmulticastextensions.value_namespace = name_space;
        ospfmulticastextensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExitOverflowInterval")
    {
        ospfexitoverflowinterval = value;
        ospfexitoverflowinterval.value_namespace = name_space;
        ospfexitoverflowinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfDemandExtensions")
    {
        ospfdemandextensions = value;
        ospfdemandextensions.value_namespace = name_space;
        ospfdemandextensions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRFC1583Compatibility")
    {
        ospfrfc1583compatibility = value;
        ospfrfc1583compatibility.value_namespace = name_space;
        ospfrfc1583compatibility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfOpaqueLsaSupport")
    {
        ospfopaquelsasupport = value;
        ospfopaquelsasupport.value_namespace = name_space;
        ospfopaquelsasupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfReferenceBandwidth")
    {
        ospfreferencebandwidth = value;
        ospfreferencebandwidth.value_namespace = name_space;
        ospfreferencebandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRestartSupport")
    {
        ospfrestartsupport = value;
        ospfrestartsupport.value_namespace = name_space;
        ospfrestartsupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRestartInterval")
    {
        ospfrestartinterval = value;
        ospfrestartinterval.value_namespace = name_space;
        ospfrestartinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRestartStrictLsaChecking")
    {
        ospfrestartstrictlsachecking = value;
        ospfrestartstrictlsachecking.value_namespace = name_space;
        ospfrestartstrictlsachecking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRestartStatus")
    {
        ospfrestartstatus = value;
        ospfrestartstatus.value_namespace = name_space;
        ospfrestartstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRestartAge")
    {
        ospfrestartage = value;
        ospfrestartage.value_namespace = name_space;
        ospfrestartage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfRestartExitReason")
    {
        ospfrestartexitreason = value;
        ospfrestartexitreason.value_namespace = name_space;
        ospfrestartexitreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsaCount")
    {
        ospfaslsacount = value;
        ospfaslsacount.value_namespace = name_space;
        ospfaslsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsaCksumSum")
    {
        ospfaslsacksumsum = value;
        ospfaslsacksumsum.value_namespace = name_space;
        ospfaslsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfStubRouterSupport")
    {
        ospfstubroutersupport = value;
        ospfstubroutersupport.value_namespace = name_space;
        ospfstubroutersupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfStubRouterAdvertisement")
    {
        ospfstubrouteradvertisement = value;
        ospfstubrouteradvertisement.value_namespace = name_space;
        ospfstubrouteradvertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfDiscontinuityTime")
    {
        ospfdiscontinuitytime = value;
        ospfdiscontinuitytime.value_namespace = name_space;
        ospfdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfGeneralGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfRouterId")
    {
        ospfrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfAdminStat")
    {
        ospfadminstat.yfilter = yfilter;
    }
    if(value_path == "ospfVersionNumber")
    {
        ospfversionnumber.yfilter = yfilter;
    }
    if(value_path == "ospfAreaBdrRtrStatus")
    {
        ospfareabdrrtrstatus.yfilter = yfilter;
    }
    if(value_path == "ospfASBdrRtrStatus")
    {
        ospfasbdrrtrstatus.yfilter = yfilter;
    }
    if(value_path == "ospfExternLsaCount")
    {
        ospfexternlsacount.yfilter = yfilter;
    }
    if(value_path == "ospfExternLsaCksumSum")
    {
        ospfexternlsacksumsum.yfilter = yfilter;
    }
    if(value_path == "ospfTOSSupport")
    {
        ospftossupport.yfilter = yfilter;
    }
    if(value_path == "ospfOriginateNewLsas")
    {
        ospforiginatenewlsas.yfilter = yfilter;
    }
    if(value_path == "ospfRxNewLsas")
    {
        ospfrxnewlsas.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbLimit")
    {
        ospfextlsdblimit.yfilter = yfilter;
    }
    if(value_path == "ospfMulticastExtensions")
    {
        ospfmulticastextensions.yfilter = yfilter;
    }
    if(value_path == "ospfExitOverflowInterval")
    {
        ospfexitoverflowinterval.yfilter = yfilter;
    }
    if(value_path == "ospfDemandExtensions")
    {
        ospfdemandextensions.yfilter = yfilter;
    }
    if(value_path == "ospfRFC1583Compatibility")
    {
        ospfrfc1583compatibility.yfilter = yfilter;
    }
    if(value_path == "ospfOpaqueLsaSupport")
    {
        ospfopaquelsasupport.yfilter = yfilter;
    }
    if(value_path == "ospfReferenceBandwidth")
    {
        ospfreferencebandwidth.yfilter = yfilter;
    }
    if(value_path == "ospfRestartSupport")
    {
        ospfrestartsupport.yfilter = yfilter;
    }
    if(value_path == "ospfRestartInterval")
    {
        ospfrestartinterval.yfilter = yfilter;
    }
    if(value_path == "ospfRestartStrictLsaChecking")
    {
        ospfrestartstrictlsachecking.yfilter = yfilter;
    }
    if(value_path == "ospfRestartStatus")
    {
        ospfrestartstatus.yfilter = yfilter;
    }
    if(value_path == "ospfRestartAge")
    {
        ospfrestartage.yfilter = yfilter;
    }
    if(value_path == "ospfRestartExitReason")
    {
        ospfrestartexitreason.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsaCount")
    {
        ospfaslsacount.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsaCksumSum")
    {
        ospfaslsacksumsum.yfilter = yfilter;
    }
    if(value_path == "ospfStubRouterSupport")
    {
        ospfstubroutersupport.yfilter = yfilter;
    }
    if(value_path == "ospfStubRouterAdvertisement")
    {
        ospfstubrouteradvertisement.yfilter = yfilter;
    }
    if(value_path == "ospfDiscontinuityTime")
    {
        ospfdiscontinuitytime.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfGeneralGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfRouterId" || name == "ospfAdminStat" || name == "ospfVersionNumber" || name == "ospfAreaBdrRtrStatus" || name == "ospfASBdrRtrStatus" || name == "ospfExternLsaCount" || name == "ospfExternLsaCksumSum" || name == "ospfTOSSupport" || name == "ospfOriginateNewLsas" || name == "ospfRxNewLsas" || name == "ospfExtLsdbLimit" || name == "ospfMulticastExtensions" || name == "ospfExitOverflowInterval" || name == "ospfDemandExtensions" || name == "ospfRFC1583Compatibility" || name == "ospfOpaqueLsaSupport" || name == "ospfReferenceBandwidth" || name == "ospfRestartSupport" || name == "ospfRestartInterval" || name == "ospfRestartStrictLsaChecking" || name == "ospfRestartStatus" || name == "ospfRestartAge" || name == "ospfRestartExitReason" || name == "ospfAsLsaCount" || name == "ospfAsLsaCksumSum" || name == "ospfStubRouterSupport" || name == "ospfStubRouterAdvertisement" || name == "ospfDiscontinuityTime")
        return true;
    return false;
}

OSPFMIB::OspfAreaTable::OspfAreaTable()
    :
    ospfareaentry(this, {"ospfareaid"})
{

    yang_name = "ospfAreaTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaTable::~OspfAreaTable()
{
}

bool OSPFMIB::OspfAreaTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfareaentry.len(); index++)
    {
        if(ospfareaentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfAreaTable::has_operation() const
{
    for (std::size_t index=0; index<ospfareaentry.len(); index++)
    {
        if(ospfareaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfAreaTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfAreaTable::OspfAreaEntry>();
        c->parent = this;
        ospfareaentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfareaentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfAreaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfAreaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfAreaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaEntry")
        return true;
    return false;
}

OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaEntry()
    :
    ospfareaid{YType::str, "ospfAreaId"},
    ospfauthtype{YType::enumeration, "ospfAuthType"},
    ospfimportasextern{YType::enumeration, "ospfImportAsExtern"},
    ospfspfruns{YType::uint32, "ospfSpfRuns"},
    ospfareabdrrtrcount{YType::uint32, "ospfAreaBdrRtrCount"},
    ospfasbdrrtrcount{YType::uint32, "ospfAsBdrRtrCount"},
    ospfarealsacount{YType::uint32, "ospfAreaLsaCount"},
    ospfarealsacksumsum{YType::int32, "ospfAreaLsaCksumSum"},
    ospfareasummary{YType::enumeration, "ospfAreaSummary"},
    ospfareastatus{YType::enumeration, "ospfAreaStatus"},
    ospfareanssatranslatorrole{YType::enumeration, "ospfAreaNssaTranslatorRole"},
    ospfareanssatranslatorstate{YType::enumeration, "ospfAreaNssaTranslatorState"},
    ospfareanssatranslatorstabilityinterval{YType::int32, "ospfAreaNssaTranslatorStabilityInterval"},
    ospfareanssatranslatorevents{YType::uint32, "ospfAreaNssaTranslatorEvents"},
    cospfopaquearealsacount{YType::uint32, "CISCO-OSPF-MIB:cospfOpaqueAreaLsaCount"},
    cospfopaquearealsacksumsum{YType::uint32, "CISCO-OSPF-MIB:cospfOpaqueAreaLsaCksumSum"},
    cospfareanssatranslatorrole{YType::enumeration, "CISCO-OSPF-MIB:cospfAreaNssaTranslatorRole"},
    cospfareanssatranslatorstate{YType::enumeration, "CISCO-OSPF-MIB:cospfAreaNssaTranslatorState"},
    cospfareanssatranslatorevents{YType::uint32, "CISCO-OSPF-MIB:cospfAreaNssaTranslatorEvents"}
{

    yang_name = "ospfAreaEntry"; yang_parent_name = "ospfAreaTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaTable::OspfAreaEntry::~OspfAreaEntry()
{
}

bool OSPFMIB::OspfAreaTable::OspfAreaEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfareaid.is_set
	|| ospfauthtype.is_set
	|| ospfimportasextern.is_set
	|| ospfspfruns.is_set
	|| ospfareabdrrtrcount.is_set
	|| ospfasbdrrtrcount.is_set
	|| ospfarealsacount.is_set
	|| ospfarealsacksumsum.is_set
	|| ospfareasummary.is_set
	|| ospfareastatus.is_set
	|| ospfareanssatranslatorrole.is_set
	|| ospfareanssatranslatorstate.is_set
	|| ospfareanssatranslatorstabilityinterval.is_set
	|| ospfareanssatranslatorevents.is_set
	|| cospfopaquearealsacount.is_set
	|| cospfopaquearealsacksumsum.is_set
	|| cospfareanssatranslatorrole.is_set
	|| cospfareanssatranslatorstate.is_set
	|| cospfareanssatranslatorevents.is_set;
}

bool OSPFMIB::OspfAreaTable::OspfAreaEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfareaid.yfilter)
	|| ydk::is_set(ospfauthtype.yfilter)
	|| ydk::is_set(ospfimportasextern.yfilter)
	|| ydk::is_set(ospfspfruns.yfilter)
	|| ydk::is_set(ospfareabdrrtrcount.yfilter)
	|| ydk::is_set(ospfasbdrrtrcount.yfilter)
	|| ydk::is_set(ospfarealsacount.yfilter)
	|| ydk::is_set(ospfarealsacksumsum.yfilter)
	|| ydk::is_set(ospfareasummary.yfilter)
	|| ydk::is_set(ospfareastatus.yfilter)
	|| ydk::is_set(ospfareanssatranslatorrole.yfilter)
	|| ydk::is_set(ospfareanssatranslatorstate.yfilter)
	|| ydk::is_set(ospfareanssatranslatorstabilityinterval.yfilter)
	|| ydk::is_set(ospfareanssatranslatorevents.yfilter)
	|| ydk::is_set(cospfopaquearealsacount.yfilter)
	|| ydk::is_set(cospfopaquearealsacksumsum.yfilter)
	|| ydk::is_set(cospfareanssatranslatorrole.yfilter)
	|| ydk::is_set(cospfareanssatranslatorstate.yfilter)
	|| ydk::is_set(cospfareanssatranslatorevents.yfilter);
}

std::string OSPFMIB::OspfAreaTable::OspfAreaEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaTable::OspfAreaEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaEntry";
    ADD_KEY_TOKEN(ospfareaid, "ospfAreaId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaTable::OspfAreaEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfareaid.is_set || is_set(ospfareaid.yfilter)) leaf_name_data.push_back(ospfareaid.get_name_leafdata());
    if (ospfauthtype.is_set || is_set(ospfauthtype.yfilter)) leaf_name_data.push_back(ospfauthtype.get_name_leafdata());
    if (ospfimportasextern.is_set || is_set(ospfimportasextern.yfilter)) leaf_name_data.push_back(ospfimportasextern.get_name_leafdata());
    if (ospfspfruns.is_set || is_set(ospfspfruns.yfilter)) leaf_name_data.push_back(ospfspfruns.get_name_leafdata());
    if (ospfareabdrrtrcount.is_set || is_set(ospfareabdrrtrcount.yfilter)) leaf_name_data.push_back(ospfareabdrrtrcount.get_name_leafdata());
    if (ospfasbdrrtrcount.is_set || is_set(ospfasbdrrtrcount.yfilter)) leaf_name_data.push_back(ospfasbdrrtrcount.get_name_leafdata());
    if (ospfarealsacount.is_set || is_set(ospfarealsacount.yfilter)) leaf_name_data.push_back(ospfarealsacount.get_name_leafdata());
    if (ospfarealsacksumsum.is_set || is_set(ospfarealsacksumsum.yfilter)) leaf_name_data.push_back(ospfarealsacksumsum.get_name_leafdata());
    if (ospfareasummary.is_set || is_set(ospfareasummary.yfilter)) leaf_name_data.push_back(ospfareasummary.get_name_leafdata());
    if (ospfareastatus.is_set || is_set(ospfareastatus.yfilter)) leaf_name_data.push_back(ospfareastatus.get_name_leafdata());
    if (ospfareanssatranslatorrole.is_set || is_set(ospfareanssatranslatorrole.yfilter)) leaf_name_data.push_back(ospfareanssatranslatorrole.get_name_leafdata());
    if (ospfareanssatranslatorstate.is_set || is_set(ospfareanssatranslatorstate.yfilter)) leaf_name_data.push_back(ospfareanssatranslatorstate.get_name_leafdata());
    if (ospfareanssatranslatorstabilityinterval.is_set || is_set(ospfareanssatranslatorstabilityinterval.yfilter)) leaf_name_data.push_back(ospfareanssatranslatorstabilityinterval.get_name_leafdata());
    if (ospfareanssatranslatorevents.is_set || is_set(ospfareanssatranslatorevents.yfilter)) leaf_name_data.push_back(ospfareanssatranslatorevents.get_name_leafdata());
    if (cospfopaquearealsacount.is_set || is_set(cospfopaquearealsacount.yfilter)) leaf_name_data.push_back(cospfopaquearealsacount.get_name_leafdata());
    if (cospfopaquearealsacksumsum.is_set || is_set(cospfopaquearealsacksumsum.yfilter)) leaf_name_data.push_back(cospfopaquearealsacksumsum.get_name_leafdata());
    if (cospfareanssatranslatorrole.is_set || is_set(cospfareanssatranslatorrole.yfilter)) leaf_name_data.push_back(cospfareanssatranslatorrole.get_name_leafdata());
    if (cospfareanssatranslatorstate.is_set || is_set(cospfareanssatranslatorstate.yfilter)) leaf_name_data.push_back(cospfareanssatranslatorstate.get_name_leafdata());
    if (cospfareanssatranslatorevents.is_set || is_set(cospfareanssatranslatorevents.yfilter)) leaf_name_data.push_back(cospfareanssatranslatorevents.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaTable::OspfAreaEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaTable::OspfAreaEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfAreaTable::OspfAreaEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfAreaId")
    {
        ospfareaid = value;
        ospfareaid.value_namespace = name_space;
        ospfareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAuthType")
    {
        ospfauthtype = value;
        ospfauthtype.value_namespace = name_space;
        ospfauthtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfImportAsExtern")
    {
        ospfimportasextern = value;
        ospfimportasextern.value_namespace = name_space;
        ospfimportasextern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfSpfRuns")
    {
        ospfspfruns = value;
        ospfspfruns.value_namespace = name_space;
        ospfspfruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaBdrRtrCount")
    {
        ospfareabdrrtrcount = value;
        ospfareabdrrtrcount.value_namespace = name_space;
        ospfareabdrrtrcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsBdrRtrCount")
    {
        ospfasbdrrtrcount = value;
        ospfasbdrrtrcount.value_namespace = name_space;
        ospfasbdrrtrcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaLsaCount")
    {
        ospfarealsacount = value;
        ospfarealsacount.value_namespace = name_space;
        ospfarealsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaLsaCksumSum")
    {
        ospfarealsacksumsum = value;
        ospfarealsacksumsum.value_namespace = name_space;
        ospfarealsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaSummary")
    {
        ospfareasummary = value;
        ospfareasummary.value_namespace = name_space;
        ospfareasummary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaStatus")
    {
        ospfareastatus = value;
        ospfareastatus.value_namespace = name_space;
        ospfareastatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaNssaTranslatorRole")
    {
        ospfareanssatranslatorrole = value;
        ospfareanssatranslatorrole.value_namespace = name_space;
        ospfareanssatranslatorrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaNssaTranslatorState")
    {
        ospfareanssatranslatorstate = value;
        ospfareanssatranslatorstate.value_namespace = name_space;
        ospfareanssatranslatorstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaNssaTranslatorStabilityInterval")
    {
        ospfareanssatranslatorstabilityinterval = value;
        ospfareanssatranslatorstabilityinterval.value_namespace = name_space;
        ospfareanssatranslatorstabilityinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaNssaTranslatorEvents")
    {
        ospfareanssatranslatorevents = value;
        ospfareanssatranslatorevents.value_namespace = name_space;
        ospfareanssatranslatorevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfOpaqueAreaLsaCount")
    {
        cospfopaquearealsacount = value;
        cospfopaquearealsacount.value_namespace = name_space;
        cospfopaquearealsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfOpaqueAreaLsaCksumSum")
    {
        cospfopaquearealsacksumsum = value;
        cospfopaquearealsacksumsum.value_namespace = name_space;
        cospfopaquearealsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfAreaNssaTranslatorRole")
    {
        cospfareanssatranslatorrole = value;
        cospfareanssatranslatorrole.value_namespace = name_space;
        cospfareanssatranslatorrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfAreaNssaTranslatorState")
    {
        cospfareanssatranslatorstate = value;
        cospfareanssatranslatorstate.value_namespace = name_space;
        cospfareanssatranslatorstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfAreaNssaTranslatorEvents")
    {
        cospfareanssatranslatorevents = value;
        cospfareanssatranslatorevents.value_namespace = name_space;
        cospfareanssatranslatorevents.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfAreaTable::OspfAreaEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfAreaId")
    {
        ospfareaid.yfilter = yfilter;
    }
    if(value_path == "ospfAuthType")
    {
        ospfauthtype.yfilter = yfilter;
    }
    if(value_path == "ospfImportAsExtern")
    {
        ospfimportasextern.yfilter = yfilter;
    }
    if(value_path == "ospfSpfRuns")
    {
        ospfspfruns.yfilter = yfilter;
    }
    if(value_path == "ospfAreaBdrRtrCount")
    {
        ospfareabdrrtrcount.yfilter = yfilter;
    }
    if(value_path == "ospfAsBdrRtrCount")
    {
        ospfasbdrrtrcount.yfilter = yfilter;
    }
    if(value_path == "ospfAreaLsaCount")
    {
        ospfarealsacount.yfilter = yfilter;
    }
    if(value_path == "ospfAreaLsaCksumSum")
    {
        ospfarealsacksumsum.yfilter = yfilter;
    }
    if(value_path == "ospfAreaSummary")
    {
        ospfareasummary.yfilter = yfilter;
    }
    if(value_path == "ospfAreaStatus")
    {
        ospfareastatus.yfilter = yfilter;
    }
    if(value_path == "ospfAreaNssaTranslatorRole")
    {
        ospfareanssatranslatorrole.yfilter = yfilter;
    }
    if(value_path == "ospfAreaNssaTranslatorState")
    {
        ospfareanssatranslatorstate.yfilter = yfilter;
    }
    if(value_path == "ospfAreaNssaTranslatorStabilityInterval")
    {
        ospfareanssatranslatorstabilityinterval.yfilter = yfilter;
    }
    if(value_path == "ospfAreaNssaTranslatorEvents")
    {
        ospfareanssatranslatorevents.yfilter = yfilter;
    }
    if(value_path == "cospfOpaqueAreaLsaCount")
    {
        cospfopaquearealsacount.yfilter = yfilter;
    }
    if(value_path == "cospfOpaqueAreaLsaCksumSum")
    {
        cospfopaquearealsacksumsum.yfilter = yfilter;
    }
    if(value_path == "cospfAreaNssaTranslatorRole")
    {
        cospfareanssatranslatorrole.yfilter = yfilter;
    }
    if(value_path == "cospfAreaNssaTranslatorState")
    {
        cospfareanssatranslatorstate.yfilter = yfilter;
    }
    if(value_path == "cospfAreaNssaTranslatorEvents")
    {
        cospfareanssatranslatorevents.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfAreaTable::OspfAreaEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaId" || name == "ospfAuthType" || name == "ospfImportAsExtern" || name == "ospfSpfRuns" || name == "ospfAreaBdrRtrCount" || name == "ospfAsBdrRtrCount" || name == "ospfAreaLsaCount" || name == "ospfAreaLsaCksumSum" || name == "ospfAreaSummary" || name == "ospfAreaStatus" || name == "ospfAreaNssaTranslatorRole" || name == "ospfAreaNssaTranslatorState" || name == "ospfAreaNssaTranslatorStabilityInterval" || name == "ospfAreaNssaTranslatorEvents" || name == "cospfOpaqueAreaLsaCount" || name == "cospfOpaqueAreaLsaCksumSum" || name == "cospfAreaNssaTranslatorRole" || name == "cospfAreaNssaTranslatorState" || name == "cospfAreaNssaTranslatorEvents")
        return true;
    return false;
}

OSPFMIB::OspfStubAreaTable::OspfStubAreaTable()
    :
    ospfstubareaentry(this, {"ospfstubareaid", "ospfstubtos"})
{

    yang_name = "ospfStubAreaTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfStubAreaTable::~OspfStubAreaTable()
{
}

bool OSPFMIB::OspfStubAreaTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfstubareaentry.len(); index++)
    {
        if(ospfstubareaentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfStubAreaTable::has_operation() const
{
    for (std::size_t index=0; index<ospfstubareaentry.len(); index++)
    {
        if(ospfstubareaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfStubAreaTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfStubAreaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfStubAreaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfStubAreaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfStubAreaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfStubAreaEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry>();
        c->parent = this;
        ospfstubareaentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfStubAreaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfstubareaentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfStubAreaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfStubAreaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfStubAreaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfStubAreaEntry")
        return true;
    return false;
}

OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::OspfStubAreaEntry()
    :
    ospfstubareaid{YType::str, "ospfStubAreaId"},
    ospfstubtos{YType::int32, "ospfStubTOS"},
    ospfstubmetric{YType::int32, "ospfStubMetric"},
    ospfstubstatus{YType::enumeration, "ospfStubStatus"},
    ospfstubmetrictype{YType::enumeration, "ospfStubMetricType"}
{

    yang_name = "ospfStubAreaEntry"; yang_parent_name = "ospfStubAreaTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::~OspfStubAreaEntry()
{
}

bool OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfstubareaid.is_set
	|| ospfstubtos.is_set
	|| ospfstubmetric.is_set
	|| ospfstubstatus.is_set
	|| ospfstubmetrictype.is_set;
}

bool OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfstubareaid.yfilter)
	|| ydk::is_set(ospfstubtos.yfilter)
	|| ydk::is_set(ospfstubmetric.yfilter)
	|| ydk::is_set(ospfstubstatus.yfilter)
	|| ydk::is_set(ospfstubmetrictype.yfilter);
}

std::string OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfStubAreaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfStubAreaEntry";
    ADD_KEY_TOKEN(ospfstubareaid, "ospfStubAreaId");
    ADD_KEY_TOKEN(ospfstubtos, "ospfStubTOS");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfstubareaid.is_set || is_set(ospfstubareaid.yfilter)) leaf_name_data.push_back(ospfstubareaid.get_name_leafdata());
    if (ospfstubtos.is_set || is_set(ospfstubtos.yfilter)) leaf_name_data.push_back(ospfstubtos.get_name_leafdata());
    if (ospfstubmetric.is_set || is_set(ospfstubmetric.yfilter)) leaf_name_data.push_back(ospfstubmetric.get_name_leafdata());
    if (ospfstubstatus.is_set || is_set(ospfstubstatus.yfilter)) leaf_name_data.push_back(ospfstubstatus.get_name_leafdata());
    if (ospfstubmetrictype.is_set || is_set(ospfstubmetrictype.yfilter)) leaf_name_data.push_back(ospfstubmetrictype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfStubAreaId")
    {
        ospfstubareaid = value;
        ospfstubareaid.value_namespace = name_space;
        ospfstubareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfStubTOS")
    {
        ospfstubtos = value;
        ospfstubtos.value_namespace = name_space;
        ospfstubtos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfStubMetric")
    {
        ospfstubmetric = value;
        ospfstubmetric.value_namespace = name_space;
        ospfstubmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfStubStatus")
    {
        ospfstubstatus = value;
        ospfstubstatus.value_namespace = name_space;
        ospfstubstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfStubMetricType")
    {
        ospfstubmetrictype = value;
        ospfstubmetrictype.value_namespace = name_space;
        ospfstubmetrictype.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfStubAreaId")
    {
        ospfstubareaid.yfilter = yfilter;
    }
    if(value_path == "ospfStubTOS")
    {
        ospfstubtos.yfilter = yfilter;
    }
    if(value_path == "ospfStubMetric")
    {
        ospfstubmetric.yfilter = yfilter;
    }
    if(value_path == "ospfStubStatus")
    {
        ospfstubstatus.yfilter = yfilter;
    }
    if(value_path == "ospfStubMetricType")
    {
        ospfstubmetrictype.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfStubAreaId" || name == "ospfStubTOS" || name == "ospfStubMetric" || name == "ospfStubStatus" || name == "ospfStubMetricType")
        return true;
    return false;
}

OSPFMIB::OspfLsdbTable::OspfLsdbTable()
    :
    ospflsdbentry(this, {"ospflsdbareaid", "ospflsdbtype", "ospflsdblsid", "ospflsdbrouterid"})
{

    yang_name = "ospfLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfLsdbTable::~OspfLsdbTable()
{
}

bool OSPFMIB::OspfLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospflsdbentry.len(); index++)
    {
        if(ospflsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<ospflsdbentry.len(); index++)
    {
        if(ospflsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfLsdbTable::OspfLsdbEntry>();
        c->parent = this;
        ospflsdbentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospflsdbentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLsdbEntry")
        return true;
    return false;
}

OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbEntry()
    :
    ospflsdbareaid{YType::str, "ospfLsdbAreaId"},
    ospflsdbtype{YType::enumeration, "ospfLsdbType"},
    ospflsdblsid{YType::str, "ospfLsdbLsid"},
    ospflsdbrouterid{YType::str, "ospfLsdbRouterId"},
    ospflsdbsequence{YType::int32, "ospfLsdbSequence"},
    ospflsdbage{YType::int32, "ospfLsdbAge"},
    ospflsdbchecksum{YType::int32, "ospfLsdbChecksum"},
    ospflsdbadvertisement{YType::str, "ospfLsdbAdvertisement"}
{

    yang_name = "ospfLsdbEntry"; yang_parent_name = "ospfLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfLsdbTable::OspfLsdbEntry::~OspfLsdbEntry()
{
}

bool OSPFMIB::OspfLsdbTable::OspfLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospflsdbareaid.is_set
	|| ospflsdbtype.is_set
	|| ospflsdblsid.is_set
	|| ospflsdbrouterid.is_set
	|| ospflsdbsequence.is_set
	|| ospflsdbage.is_set
	|| ospflsdbchecksum.is_set
	|| ospflsdbadvertisement.is_set;
}

bool OSPFMIB::OspfLsdbTable::OspfLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospflsdbareaid.yfilter)
	|| ydk::is_set(ospflsdbtype.yfilter)
	|| ydk::is_set(ospflsdblsid.yfilter)
	|| ydk::is_set(ospflsdbrouterid.yfilter)
	|| ydk::is_set(ospflsdbsequence.yfilter)
	|| ydk::is_set(ospflsdbage.yfilter)
	|| ydk::is_set(ospflsdbchecksum.yfilter)
	|| ydk::is_set(ospflsdbadvertisement.yfilter);
}

std::string OSPFMIB::OspfLsdbTable::OspfLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfLsdbTable::OspfLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLsdbEntry";
    ADD_KEY_TOKEN(ospflsdbareaid, "ospfLsdbAreaId");
    ADD_KEY_TOKEN(ospflsdbtype, "ospfLsdbType");
    ADD_KEY_TOKEN(ospflsdblsid, "ospfLsdbLsid");
    ADD_KEY_TOKEN(ospflsdbrouterid, "ospfLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfLsdbTable::OspfLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospflsdbareaid.is_set || is_set(ospflsdbareaid.yfilter)) leaf_name_data.push_back(ospflsdbareaid.get_name_leafdata());
    if (ospflsdbtype.is_set || is_set(ospflsdbtype.yfilter)) leaf_name_data.push_back(ospflsdbtype.get_name_leafdata());
    if (ospflsdblsid.is_set || is_set(ospflsdblsid.yfilter)) leaf_name_data.push_back(ospflsdblsid.get_name_leafdata());
    if (ospflsdbrouterid.is_set || is_set(ospflsdbrouterid.yfilter)) leaf_name_data.push_back(ospflsdbrouterid.get_name_leafdata());
    if (ospflsdbsequence.is_set || is_set(ospflsdbsequence.yfilter)) leaf_name_data.push_back(ospflsdbsequence.get_name_leafdata());
    if (ospflsdbage.is_set || is_set(ospflsdbage.yfilter)) leaf_name_data.push_back(ospflsdbage.get_name_leafdata());
    if (ospflsdbchecksum.is_set || is_set(ospflsdbchecksum.yfilter)) leaf_name_data.push_back(ospflsdbchecksum.get_name_leafdata());
    if (ospflsdbadvertisement.is_set || is_set(ospflsdbadvertisement.yfilter)) leaf_name_data.push_back(ospflsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfLsdbTable::OspfLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfLsdbTable::OspfLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfLsdbTable::OspfLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfLsdbAreaId")
    {
        ospflsdbareaid = value;
        ospflsdbareaid.value_namespace = name_space;
        ospflsdbareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbType")
    {
        ospflsdbtype = value;
        ospflsdbtype.value_namespace = name_space;
        ospflsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbLsid")
    {
        ospflsdblsid = value;
        ospflsdblsid.value_namespace = name_space;
        ospflsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbRouterId")
    {
        ospflsdbrouterid = value;
        ospflsdbrouterid.value_namespace = name_space;
        ospflsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbSequence")
    {
        ospflsdbsequence = value;
        ospflsdbsequence.value_namespace = name_space;
        ospflsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbAge")
    {
        ospflsdbage = value;
        ospflsdbage.value_namespace = name_space;
        ospflsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbChecksum")
    {
        ospflsdbchecksum = value;
        ospflsdbchecksum.value_namespace = name_space;
        ospflsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLsdbAdvertisement")
    {
        ospflsdbadvertisement = value;
        ospflsdbadvertisement.value_namespace = name_space;
        ospflsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfLsdbTable::OspfLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfLsdbAreaId")
    {
        ospflsdbareaid.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbType")
    {
        ospflsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbLsid")
    {
        ospflsdblsid.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbRouterId")
    {
        ospflsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbSequence")
    {
        ospflsdbsequence.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbAge")
    {
        ospflsdbage.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbChecksum")
    {
        ospflsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "ospfLsdbAdvertisement")
    {
        ospflsdbadvertisement.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfLsdbTable::OspfLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLsdbAreaId" || name == "ospfLsdbType" || name == "ospfLsdbLsid" || name == "ospfLsdbRouterId" || name == "ospfLsdbSequence" || name == "ospfLsdbAge" || name == "ospfLsdbChecksum" || name == "ospfLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::OspfAreaRangeTable::OspfAreaRangeTable()
    :
    ospfarearangeentry(this, {"ospfarearangeareaid", "ospfarearangenet"})
{

    yang_name = "ospfAreaRangeTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaRangeTable::~OspfAreaRangeTable()
{
}

bool OSPFMIB::OspfAreaRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfarearangeentry.len(); index++)
    {
        if(ospfarearangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfAreaRangeTable::has_operation() const
{
    for (std::size_t index=0; index<ospfarearangeentry.len(); index++)
    {
        if(ospfarearangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfAreaRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaRangeEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry>();
        c->parent = this;
        ospfarearangeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfarearangeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfAreaRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfAreaRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfAreaRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaRangeEntry")
        return true;
    return false;
}

OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::OspfAreaRangeEntry()
    :
    ospfarearangeareaid{YType::str, "ospfAreaRangeAreaId"},
    ospfarearangenet{YType::str, "ospfAreaRangeNet"},
    ospfarearangemask{YType::str, "ospfAreaRangeMask"},
    ospfarearangestatus{YType::enumeration, "ospfAreaRangeStatus"},
    ospfarearangeeffect{YType::enumeration, "ospfAreaRangeEffect"}
{

    yang_name = "ospfAreaRangeEntry"; yang_parent_name = "ospfAreaRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::~OspfAreaRangeEntry()
{
}

bool OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfarearangeareaid.is_set
	|| ospfarearangenet.is_set
	|| ospfarearangemask.is_set
	|| ospfarearangestatus.is_set
	|| ospfarearangeeffect.is_set;
}

bool OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfarearangeareaid.yfilter)
	|| ydk::is_set(ospfarearangenet.yfilter)
	|| ydk::is_set(ospfarearangemask.yfilter)
	|| ydk::is_set(ospfarearangestatus.yfilter)
	|| ydk::is_set(ospfarearangeeffect.yfilter);
}

std::string OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaRangeEntry";
    ADD_KEY_TOKEN(ospfarearangeareaid, "ospfAreaRangeAreaId");
    ADD_KEY_TOKEN(ospfarearangenet, "ospfAreaRangeNet");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfarearangeareaid.is_set || is_set(ospfarearangeareaid.yfilter)) leaf_name_data.push_back(ospfarearangeareaid.get_name_leafdata());
    if (ospfarearangenet.is_set || is_set(ospfarearangenet.yfilter)) leaf_name_data.push_back(ospfarearangenet.get_name_leafdata());
    if (ospfarearangemask.is_set || is_set(ospfarearangemask.yfilter)) leaf_name_data.push_back(ospfarearangemask.get_name_leafdata());
    if (ospfarearangestatus.is_set || is_set(ospfarearangestatus.yfilter)) leaf_name_data.push_back(ospfarearangestatus.get_name_leafdata());
    if (ospfarearangeeffect.is_set || is_set(ospfarearangeeffect.yfilter)) leaf_name_data.push_back(ospfarearangeeffect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfAreaRangeAreaId")
    {
        ospfarearangeareaid = value;
        ospfarearangeareaid.value_namespace = name_space;
        ospfarearangeareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaRangeNet")
    {
        ospfarearangenet = value;
        ospfarearangenet.value_namespace = name_space;
        ospfarearangenet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaRangeMask")
    {
        ospfarearangemask = value;
        ospfarearangemask.value_namespace = name_space;
        ospfarearangemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaRangeStatus")
    {
        ospfarearangestatus = value;
        ospfarearangestatus.value_namespace = name_space;
        ospfarearangestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaRangeEffect")
    {
        ospfarearangeeffect = value;
        ospfarearangeeffect.value_namespace = name_space;
        ospfarearangeeffect.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfAreaRangeAreaId")
    {
        ospfarearangeareaid.yfilter = yfilter;
    }
    if(value_path == "ospfAreaRangeNet")
    {
        ospfarearangenet.yfilter = yfilter;
    }
    if(value_path == "ospfAreaRangeMask")
    {
        ospfarearangemask.yfilter = yfilter;
    }
    if(value_path == "ospfAreaRangeStatus")
    {
        ospfarearangestatus.yfilter = yfilter;
    }
    if(value_path == "ospfAreaRangeEffect")
    {
        ospfarearangeeffect.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaRangeAreaId" || name == "ospfAreaRangeNet" || name == "ospfAreaRangeMask" || name == "ospfAreaRangeStatus" || name == "ospfAreaRangeEffect")
        return true;
    return false;
}

OSPFMIB::OspfHostTable::OspfHostTable()
    :
    ospfhostentry(this, {"ospfhostipaddress", "ospfhosttos"})
{

    yang_name = "ospfHostTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfHostTable::~OspfHostTable()
{
}

bool OSPFMIB::OspfHostTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfhostentry.len(); index++)
    {
        if(ospfhostentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfHostTable::has_operation() const
{
    for (std::size_t index=0; index<ospfhostentry.len(); index++)
    {
        if(ospfhostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfHostTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfHostTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfHostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfHostTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfHostTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfHostEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfHostTable::OspfHostEntry>();
        c->parent = this;
        ospfhostentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfHostTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfhostentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfHostTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfHostTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfHostTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfHostEntry")
        return true;
    return false;
}

OSPFMIB::OspfHostTable::OspfHostEntry::OspfHostEntry()
    :
    ospfhostipaddress{YType::str, "ospfHostIpAddress"},
    ospfhosttos{YType::int32, "ospfHostTOS"},
    ospfhostmetric{YType::int32, "ospfHostMetric"},
    ospfhoststatus{YType::enumeration, "ospfHostStatus"},
    ospfhostareaid{YType::str, "ospfHostAreaID"},
    ospfhostcfgareaid{YType::str, "ospfHostCfgAreaID"}
{

    yang_name = "ospfHostEntry"; yang_parent_name = "ospfHostTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfHostTable::OspfHostEntry::~OspfHostEntry()
{
}

bool OSPFMIB::OspfHostTable::OspfHostEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfhostipaddress.is_set
	|| ospfhosttos.is_set
	|| ospfhostmetric.is_set
	|| ospfhoststatus.is_set
	|| ospfhostareaid.is_set
	|| ospfhostcfgareaid.is_set;
}

bool OSPFMIB::OspfHostTable::OspfHostEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfhostipaddress.yfilter)
	|| ydk::is_set(ospfhosttos.yfilter)
	|| ydk::is_set(ospfhostmetric.yfilter)
	|| ydk::is_set(ospfhoststatus.yfilter)
	|| ydk::is_set(ospfhostareaid.yfilter)
	|| ydk::is_set(ospfhostcfgareaid.yfilter);
}

std::string OSPFMIB::OspfHostTable::OspfHostEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfHostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfHostTable::OspfHostEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfHostEntry";
    ADD_KEY_TOKEN(ospfhostipaddress, "ospfHostIpAddress");
    ADD_KEY_TOKEN(ospfhosttos, "ospfHostTOS");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfHostTable::OspfHostEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfhostipaddress.is_set || is_set(ospfhostipaddress.yfilter)) leaf_name_data.push_back(ospfhostipaddress.get_name_leafdata());
    if (ospfhosttos.is_set || is_set(ospfhosttos.yfilter)) leaf_name_data.push_back(ospfhosttos.get_name_leafdata());
    if (ospfhostmetric.is_set || is_set(ospfhostmetric.yfilter)) leaf_name_data.push_back(ospfhostmetric.get_name_leafdata());
    if (ospfhoststatus.is_set || is_set(ospfhoststatus.yfilter)) leaf_name_data.push_back(ospfhoststatus.get_name_leafdata());
    if (ospfhostareaid.is_set || is_set(ospfhostareaid.yfilter)) leaf_name_data.push_back(ospfhostareaid.get_name_leafdata());
    if (ospfhostcfgareaid.is_set || is_set(ospfhostcfgareaid.yfilter)) leaf_name_data.push_back(ospfhostcfgareaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfHostTable::OspfHostEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfHostTable::OspfHostEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfHostTable::OspfHostEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfHostIpAddress")
    {
        ospfhostipaddress = value;
        ospfhostipaddress.value_namespace = name_space;
        ospfhostipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfHostTOS")
    {
        ospfhosttos = value;
        ospfhosttos.value_namespace = name_space;
        ospfhosttos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfHostMetric")
    {
        ospfhostmetric = value;
        ospfhostmetric.value_namespace = name_space;
        ospfhostmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfHostStatus")
    {
        ospfhoststatus = value;
        ospfhoststatus.value_namespace = name_space;
        ospfhoststatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfHostAreaID")
    {
        ospfhostareaid = value;
        ospfhostareaid.value_namespace = name_space;
        ospfhostareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfHostCfgAreaID")
    {
        ospfhostcfgareaid = value;
        ospfhostcfgareaid.value_namespace = name_space;
        ospfhostcfgareaid.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfHostTable::OspfHostEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfHostIpAddress")
    {
        ospfhostipaddress.yfilter = yfilter;
    }
    if(value_path == "ospfHostTOS")
    {
        ospfhosttos.yfilter = yfilter;
    }
    if(value_path == "ospfHostMetric")
    {
        ospfhostmetric.yfilter = yfilter;
    }
    if(value_path == "ospfHostStatus")
    {
        ospfhoststatus.yfilter = yfilter;
    }
    if(value_path == "ospfHostAreaID")
    {
        ospfhostareaid.yfilter = yfilter;
    }
    if(value_path == "ospfHostCfgAreaID")
    {
        ospfhostcfgareaid.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfHostTable::OspfHostEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfHostIpAddress" || name == "ospfHostTOS" || name == "ospfHostMetric" || name == "ospfHostStatus" || name == "ospfHostAreaID" || name == "ospfHostCfgAreaID")
        return true;
    return false;
}

OSPFMIB::OspfIfTable::OspfIfTable()
    :
    ospfifentry(this, {"ospfifipaddress", "ospfaddresslessif"})
{

    yang_name = "ospfIfTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfIfTable::~OspfIfTable()
{
}

bool OSPFMIB::OspfIfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfifentry.len(); index++)
    {
        if(ospfifentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfIfTable::has_operation() const
{
    for (std::size_t index=0; index<ospfifentry.len(); index++)
    {
        if(ospfifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfIfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfIfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfIfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfIfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfIfEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfIfTable::OspfIfEntry>();
        c->parent = this;
        ospfifentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfIfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfifentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfIfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfIfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfIfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfEntry")
        return true;
    return false;
}

OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfEntry()
    :
    ospfifipaddress{YType::str, "ospfIfIpAddress"},
    ospfaddresslessif{YType::int32, "ospfAddressLessIf"},
    ospfifareaid{YType::str, "ospfIfAreaId"},
    ospfiftype{YType::enumeration, "ospfIfType"},
    ospfifadminstat{YType::enumeration, "ospfIfAdminStat"},
    ospfifrtrpriority{YType::int32, "ospfIfRtrPriority"},
    ospfiftransitdelay{YType::int32, "ospfIfTransitDelay"},
    ospfifretransinterval{YType::int32, "ospfIfRetransInterval"},
    ospfifhellointerval{YType::int32, "ospfIfHelloInterval"},
    ospfifrtrdeadinterval{YType::int32, "ospfIfRtrDeadInterval"},
    ospfifpollinterval{YType::int32, "ospfIfPollInterval"},
    ospfifstate{YType::enumeration, "ospfIfState"},
    ospfifdesignatedrouter{YType::str, "ospfIfDesignatedRouter"},
    ospfifbackupdesignatedrouter{YType::str, "ospfIfBackupDesignatedRouter"},
    ospfifevents{YType::uint32, "ospfIfEvents"},
    ospfifauthkey{YType::str, "ospfIfAuthKey"},
    ospfifstatus{YType::enumeration, "ospfIfStatus"},
    ospfifmulticastforwarding{YType::enumeration, "ospfIfMulticastForwarding"},
    ospfifdemand{YType::boolean, "ospfIfDemand"},
    ospfifauthtype{YType::enumeration, "ospfIfAuthType"},
    ospfiflsacount{YType::uint32, "ospfIfLsaCount"},
    ospfiflsacksumsum{YType::uint32, "ospfIfLsaCksumSum"},
    ospfifdesignatedrouterid{YType::str, "ospfIfDesignatedRouterId"},
    ospfifbackupdesignatedrouterid{YType::str, "ospfIfBackupDesignatedRouterId"},
    cospfiflsacount{YType::uint32, "CISCO-OSPF-MIB:cospfIfLsaCount"},
    cospfiflsacksumsum{YType::uint32, "CISCO-OSPF-MIB:cospfIfLsaCksumSum"}
{

    yang_name = "ospfIfEntry"; yang_parent_name = "ospfIfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfIfTable::OspfIfEntry::~OspfIfEntry()
{
}

bool OSPFMIB::OspfIfTable::OspfIfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfifipaddress.is_set
	|| ospfaddresslessif.is_set
	|| ospfifareaid.is_set
	|| ospfiftype.is_set
	|| ospfifadminstat.is_set
	|| ospfifrtrpriority.is_set
	|| ospfiftransitdelay.is_set
	|| ospfifretransinterval.is_set
	|| ospfifhellointerval.is_set
	|| ospfifrtrdeadinterval.is_set
	|| ospfifpollinterval.is_set
	|| ospfifstate.is_set
	|| ospfifdesignatedrouter.is_set
	|| ospfifbackupdesignatedrouter.is_set
	|| ospfifevents.is_set
	|| ospfifauthkey.is_set
	|| ospfifstatus.is_set
	|| ospfifmulticastforwarding.is_set
	|| ospfifdemand.is_set
	|| ospfifauthtype.is_set
	|| ospfiflsacount.is_set
	|| ospfiflsacksumsum.is_set
	|| ospfifdesignatedrouterid.is_set
	|| ospfifbackupdesignatedrouterid.is_set
	|| cospfiflsacount.is_set
	|| cospfiflsacksumsum.is_set;
}

bool OSPFMIB::OspfIfTable::OspfIfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfifipaddress.yfilter)
	|| ydk::is_set(ospfaddresslessif.yfilter)
	|| ydk::is_set(ospfifareaid.yfilter)
	|| ydk::is_set(ospfiftype.yfilter)
	|| ydk::is_set(ospfifadminstat.yfilter)
	|| ydk::is_set(ospfifrtrpriority.yfilter)
	|| ydk::is_set(ospfiftransitdelay.yfilter)
	|| ydk::is_set(ospfifretransinterval.yfilter)
	|| ydk::is_set(ospfifhellointerval.yfilter)
	|| ydk::is_set(ospfifrtrdeadinterval.yfilter)
	|| ydk::is_set(ospfifpollinterval.yfilter)
	|| ydk::is_set(ospfifstate.yfilter)
	|| ydk::is_set(ospfifdesignatedrouter.yfilter)
	|| ydk::is_set(ospfifbackupdesignatedrouter.yfilter)
	|| ydk::is_set(ospfifevents.yfilter)
	|| ydk::is_set(ospfifauthkey.yfilter)
	|| ydk::is_set(ospfifstatus.yfilter)
	|| ydk::is_set(ospfifmulticastforwarding.yfilter)
	|| ydk::is_set(ospfifdemand.yfilter)
	|| ydk::is_set(ospfifauthtype.yfilter)
	|| ydk::is_set(ospfiflsacount.yfilter)
	|| ydk::is_set(ospfiflsacksumsum.yfilter)
	|| ydk::is_set(ospfifdesignatedrouterid.yfilter)
	|| ydk::is_set(ospfifbackupdesignatedrouterid.yfilter)
	|| ydk::is_set(cospfiflsacount.yfilter)
	|| ydk::is_set(cospfiflsacksumsum.yfilter);
}

std::string OSPFMIB::OspfIfTable::OspfIfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfIfTable::OspfIfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfEntry";
    ADD_KEY_TOKEN(ospfifipaddress, "ospfIfIpAddress");
    ADD_KEY_TOKEN(ospfaddresslessif, "ospfAddressLessIf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfIfTable::OspfIfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfifipaddress.is_set || is_set(ospfifipaddress.yfilter)) leaf_name_data.push_back(ospfifipaddress.get_name_leafdata());
    if (ospfaddresslessif.is_set || is_set(ospfaddresslessif.yfilter)) leaf_name_data.push_back(ospfaddresslessif.get_name_leafdata());
    if (ospfifareaid.is_set || is_set(ospfifareaid.yfilter)) leaf_name_data.push_back(ospfifareaid.get_name_leafdata());
    if (ospfiftype.is_set || is_set(ospfiftype.yfilter)) leaf_name_data.push_back(ospfiftype.get_name_leafdata());
    if (ospfifadminstat.is_set || is_set(ospfifadminstat.yfilter)) leaf_name_data.push_back(ospfifadminstat.get_name_leafdata());
    if (ospfifrtrpriority.is_set || is_set(ospfifrtrpriority.yfilter)) leaf_name_data.push_back(ospfifrtrpriority.get_name_leafdata());
    if (ospfiftransitdelay.is_set || is_set(ospfiftransitdelay.yfilter)) leaf_name_data.push_back(ospfiftransitdelay.get_name_leafdata());
    if (ospfifretransinterval.is_set || is_set(ospfifretransinterval.yfilter)) leaf_name_data.push_back(ospfifretransinterval.get_name_leafdata());
    if (ospfifhellointerval.is_set || is_set(ospfifhellointerval.yfilter)) leaf_name_data.push_back(ospfifhellointerval.get_name_leafdata());
    if (ospfifrtrdeadinterval.is_set || is_set(ospfifrtrdeadinterval.yfilter)) leaf_name_data.push_back(ospfifrtrdeadinterval.get_name_leafdata());
    if (ospfifpollinterval.is_set || is_set(ospfifpollinterval.yfilter)) leaf_name_data.push_back(ospfifpollinterval.get_name_leafdata());
    if (ospfifstate.is_set || is_set(ospfifstate.yfilter)) leaf_name_data.push_back(ospfifstate.get_name_leafdata());
    if (ospfifdesignatedrouter.is_set || is_set(ospfifdesignatedrouter.yfilter)) leaf_name_data.push_back(ospfifdesignatedrouter.get_name_leafdata());
    if (ospfifbackupdesignatedrouter.is_set || is_set(ospfifbackupdesignatedrouter.yfilter)) leaf_name_data.push_back(ospfifbackupdesignatedrouter.get_name_leafdata());
    if (ospfifevents.is_set || is_set(ospfifevents.yfilter)) leaf_name_data.push_back(ospfifevents.get_name_leafdata());
    if (ospfifauthkey.is_set || is_set(ospfifauthkey.yfilter)) leaf_name_data.push_back(ospfifauthkey.get_name_leafdata());
    if (ospfifstatus.is_set || is_set(ospfifstatus.yfilter)) leaf_name_data.push_back(ospfifstatus.get_name_leafdata());
    if (ospfifmulticastforwarding.is_set || is_set(ospfifmulticastforwarding.yfilter)) leaf_name_data.push_back(ospfifmulticastforwarding.get_name_leafdata());
    if (ospfifdemand.is_set || is_set(ospfifdemand.yfilter)) leaf_name_data.push_back(ospfifdemand.get_name_leafdata());
    if (ospfifauthtype.is_set || is_set(ospfifauthtype.yfilter)) leaf_name_data.push_back(ospfifauthtype.get_name_leafdata());
    if (ospfiflsacount.is_set || is_set(ospfiflsacount.yfilter)) leaf_name_data.push_back(ospfiflsacount.get_name_leafdata());
    if (ospfiflsacksumsum.is_set || is_set(ospfiflsacksumsum.yfilter)) leaf_name_data.push_back(ospfiflsacksumsum.get_name_leafdata());
    if (ospfifdesignatedrouterid.is_set || is_set(ospfifdesignatedrouterid.yfilter)) leaf_name_data.push_back(ospfifdesignatedrouterid.get_name_leafdata());
    if (ospfifbackupdesignatedrouterid.is_set || is_set(ospfifbackupdesignatedrouterid.yfilter)) leaf_name_data.push_back(ospfifbackupdesignatedrouterid.get_name_leafdata());
    if (cospfiflsacount.is_set || is_set(cospfiflsacount.yfilter)) leaf_name_data.push_back(cospfiflsacount.get_name_leafdata());
    if (cospfiflsacksumsum.is_set || is_set(cospfiflsacksumsum.yfilter)) leaf_name_data.push_back(cospfiflsacksumsum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfIfTable::OspfIfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfIfTable::OspfIfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfIfTable::OspfIfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfIfIpAddress")
    {
        ospfifipaddress = value;
        ospfifipaddress.value_namespace = name_space;
        ospfifipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAddressLessIf")
    {
        ospfaddresslessif = value;
        ospfaddresslessif.value_namespace = name_space;
        ospfaddresslessif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfAreaId")
    {
        ospfifareaid = value;
        ospfifareaid.value_namespace = name_space;
        ospfifareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfType")
    {
        ospfiftype = value;
        ospfiftype.value_namespace = name_space;
        ospfiftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfAdminStat")
    {
        ospfifadminstat = value;
        ospfifadminstat.value_namespace = name_space;
        ospfifadminstat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfRtrPriority")
    {
        ospfifrtrpriority = value;
        ospfifrtrpriority.value_namespace = name_space;
        ospfifrtrpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfTransitDelay")
    {
        ospfiftransitdelay = value;
        ospfiftransitdelay.value_namespace = name_space;
        ospfiftransitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfRetransInterval")
    {
        ospfifretransinterval = value;
        ospfifretransinterval.value_namespace = name_space;
        ospfifretransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfHelloInterval")
    {
        ospfifhellointerval = value;
        ospfifhellointerval.value_namespace = name_space;
        ospfifhellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfRtrDeadInterval")
    {
        ospfifrtrdeadinterval = value;
        ospfifrtrdeadinterval.value_namespace = name_space;
        ospfifrtrdeadinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfPollInterval")
    {
        ospfifpollinterval = value;
        ospfifpollinterval.value_namespace = name_space;
        ospfifpollinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfState")
    {
        ospfifstate = value;
        ospfifstate.value_namespace = name_space;
        ospfifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfDesignatedRouter")
    {
        ospfifdesignatedrouter = value;
        ospfifdesignatedrouter.value_namespace = name_space;
        ospfifdesignatedrouter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfBackupDesignatedRouter")
    {
        ospfifbackupdesignatedrouter = value;
        ospfifbackupdesignatedrouter.value_namespace = name_space;
        ospfifbackupdesignatedrouter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfEvents")
    {
        ospfifevents = value;
        ospfifevents.value_namespace = name_space;
        ospfifevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfAuthKey")
    {
        ospfifauthkey = value;
        ospfifauthkey.value_namespace = name_space;
        ospfifauthkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfStatus")
    {
        ospfifstatus = value;
        ospfifstatus.value_namespace = name_space;
        ospfifstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfMulticastForwarding")
    {
        ospfifmulticastforwarding = value;
        ospfifmulticastforwarding.value_namespace = name_space;
        ospfifmulticastforwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfDemand")
    {
        ospfifdemand = value;
        ospfifdemand.value_namespace = name_space;
        ospfifdemand.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfAuthType")
    {
        ospfifauthtype = value;
        ospfifauthtype.value_namespace = name_space;
        ospfifauthtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfLsaCount")
    {
        ospfiflsacount = value;
        ospfiflsacount.value_namespace = name_space;
        ospfiflsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfLsaCksumSum")
    {
        ospfiflsacksumsum = value;
        ospfiflsacksumsum.value_namespace = name_space;
        ospfiflsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfDesignatedRouterId")
    {
        ospfifdesignatedrouterid = value;
        ospfifdesignatedrouterid.value_namespace = name_space;
        ospfifdesignatedrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfBackupDesignatedRouterId")
    {
        ospfifbackupdesignatedrouterid = value;
        ospfifbackupdesignatedrouterid.value_namespace = name_space;
        ospfifbackupdesignatedrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfIfLsaCount")
    {
        cospfiflsacount = value;
        cospfiflsacount.value_namespace = name_space;
        cospfiflsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfIfLsaCksumSum")
    {
        cospfiflsacksumsum = value;
        cospfiflsacksumsum.value_namespace = name_space;
        cospfiflsacksumsum.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfIfTable::OspfIfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfIfIpAddress")
    {
        ospfifipaddress.yfilter = yfilter;
    }
    if(value_path == "ospfAddressLessIf")
    {
        ospfaddresslessif.yfilter = yfilter;
    }
    if(value_path == "ospfIfAreaId")
    {
        ospfifareaid.yfilter = yfilter;
    }
    if(value_path == "ospfIfType")
    {
        ospfiftype.yfilter = yfilter;
    }
    if(value_path == "ospfIfAdminStat")
    {
        ospfifadminstat.yfilter = yfilter;
    }
    if(value_path == "ospfIfRtrPriority")
    {
        ospfifrtrpriority.yfilter = yfilter;
    }
    if(value_path == "ospfIfTransitDelay")
    {
        ospfiftransitdelay.yfilter = yfilter;
    }
    if(value_path == "ospfIfRetransInterval")
    {
        ospfifretransinterval.yfilter = yfilter;
    }
    if(value_path == "ospfIfHelloInterval")
    {
        ospfifhellointerval.yfilter = yfilter;
    }
    if(value_path == "ospfIfRtrDeadInterval")
    {
        ospfifrtrdeadinterval.yfilter = yfilter;
    }
    if(value_path == "ospfIfPollInterval")
    {
        ospfifpollinterval.yfilter = yfilter;
    }
    if(value_path == "ospfIfState")
    {
        ospfifstate.yfilter = yfilter;
    }
    if(value_path == "ospfIfDesignatedRouter")
    {
        ospfifdesignatedrouter.yfilter = yfilter;
    }
    if(value_path == "ospfIfBackupDesignatedRouter")
    {
        ospfifbackupdesignatedrouter.yfilter = yfilter;
    }
    if(value_path == "ospfIfEvents")
    {
        ospfifevents.yfilter = yfilter;
    }
    if(value_path == "ospfIfAuthKey")
    {
        ospfifauthkey.yfilter = yfilter;
    }
    if(value_path == "ospfIfStatus")
    {
        ospfifstatus.yfilter = yfilter;
    }
    if(value_path == "ospfIfMulticastForwarding")
    {
        ospfifmulticastforwarding.yfilter = yfilter;
    }
    if(value_path == "ospfIfDemand")
    {
        ospfifdemand.yfilter = yfilter;
    }
    if(value_path == "ospfIfAuthType")
    {
        ospfifauthtype.yfilter = yfilter;
    }
    if(value_path == "ospfIfLsaCount")
    {
        ospfiflsacount.yfilter = yfilter;
    }
    if(value_path == "ospfIfLsaCksumSum")
    {
        ospfiflsacksumsum.yfilter = yfilter;
    }
    if(value_path == "ospfIfDesignatedRouterId")
    {
        ospfifdesignatedrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfIfBackupDesignatedRouterId")
    {
        ospfifbackupdesignatedrouterid.yfilter = yfilter;
    }
    if(value_path == "cospfIfLsaCount")
    {
        cospfiflsacount.yfilter = yfilter;
    }
    if(value_path == "cospfIfLsaCksumSum")
    {
        cospfiflsacksumsum.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfIfTable::OspfIfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfIpAddress" || name == "ospfAddressLessIf" || name == "ospfIfAreaId" || name == "ospfIfType" || name == "ospfIfAdminStat" || name == "ospfIfRtrPriority" || name == "ospfIfTransitDelay" || name == "ospfIfRetransInterval" || name == "ospfIfHelloInterval" || name == "ospfIfRtrDeadInterval" || name == "ospfIfPollInterval" || name == "ospfIfState" || name == "ospfIfDesignatedRouter" || name == "ospfIfBackupDesignatedRouter" || name == "ospfIfEvents" || name == "ospfIfAuthKey" || name == "ospfIfStatus" || name == "ospfIfMulticastForwarding" || name == "ospfIfDemand" || name == "ospfIfAuthType" || name == "ospfIfLsaCount" || name == "ospfIfLsaCksumSum" || name == "ospfIfDesignatedRouterId" || name == "ospfIfBackupDesignatedRouterId" || name == "cospfIfLsaCount" || name == "cospfIfLsaCksumSum")
        return true;
    return false;
}

OSPFMIB::OspfIfMetricTable::OspfIfMetricTable()
    :
    ospfifmetricentry(this, {"ospfifmetricipaddress", "ospfifmetricaddresslessif", "ospfifmetrictos"})
{

    yang_name = "ospfIfMetricTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfIfMetricTable::~OspfIfMetricTable()
{
}

bool OSPFMIB::OspfIfMetricTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfifmetricentry.len(); index++)
    {
        if(ospfifmetricentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfIfMetricTable::has_operation() const
{
    for (std::size_t index=0; index<ospfifmetricentry.len(); index++)
    {
        if(ospfifmetricentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfIfMetricTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfIfMetricTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfMetricTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfIfMetricTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfIfMetricTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfIfMetricEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry>();
        c->parent = this;
        ospfifmetricentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfIfMetricTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfifmetricentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfIfMetricTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfIfMetricTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfIfMetricTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfMetricEntry")
        return true;
    return false;
}

OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::OspfIfMetricEntry()
    :
    ospfifmetricipaddress{YType::str, "ospfIfMetricIpAddress"},
    ospfifmetricaddresslessif{YType::int32, "ospfIfMetricAddressLessIf"},
    ospfifmetrictos{YType::int32, "ospfIfMetricTOS"},
    ospfifmetricvalue{YType::int32, "ospfIfMetricValue"},
    ospfifmetricstatus{YType::enumeration, "ospfIfMetricStatus"}
{

    yang_name = "ospfIfMetricEntry"; yang_parent_name = "ospfIfMetricTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::~OspfIfMetricEntry()
{
}

bool OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfifmetricipaddress.is_set
	|| ospfifmetricaddresslessif.is_set
	|| ospfifmetrictos.is_set
	|| ospfifmetricvalue.is_set
	|| ospfifmetricstatus.is_set;
}

bool OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfifmetricipaddress.yfilter)
	|| ydk::is_set(ospfifmetricaddresslessif.yfilter)
	|| ydk::is_set(ospfifmetrictos.yfilter)
	|| ydk::is_set(ospfifmetricvalue.yfilter)
	|| ydk::is_set(ospfifmetricstatus.yfilter);
}

std::string OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfIfMetricTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfMetricEntry";
    ADD_KEY_TOKEN(ospfifmetricipaddress, "ospfIfMetricIpAddress");
    ADD_KEY_TOKEN(ospfifmetricaddresslessif, "ospfIfMetricAddressLessIf");
    ADD_KEY_TOKEN(ospfifmetrictos, "ospfIfMetricTOS");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfifmetricipaddress.is_set || is_set(ospfifmetricipaddress.yfilter)) leaf_name_data.push_back(ospfifmetricipaddress.get_name_leafdata());
    if (ospfifmetricaddresslessif.is_set || is_set(ospfifmetricaddresslessif.yfilter)) leaf_name_data.push_back(ospfifmetricaddresslessif.get_name_leafdata());
    if (ospfifmetrictos.is_set || is_set(ospfifmetrictos.yfilter)) leaf_name_data.push_back(ospfifmetrictos.get_name_leafdata());
    if (ospfifmetricvalue.is_set || is_set(ospfifmetricvalue.yfilter)) leaf_name_data.push_back(ospfifmetricvalue.get_name_leafdata());
    if (ospfifmetricstatus.is_set || is_set(ospfifmetricstatus.yfilter)) leaf_name_data.push_back(ospfifmetricstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfIfMetricIpAddress")
    {
        ospfifmetricipaddress = value;
        ospfifmetricipaddress.value_namespace = name_space;
        ospfifmetricipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfMetricAddressLessIf")
    {
        ospfifmetricaddresslessif = value;
        ospfifmetricaddresslessif.value_namespace = name_space;
        ospfifmetricaddresslessif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfMetricTOS")
    {
        ospfifmetrictos = value;
        ospfifmetrictos.value_namespace = name_space;
        ospfifmetrictos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfMetricValue")
    {
        ospfifmetricvalue = value;
        ospfifmetricvalue.value_namespace = name_space;
        ospfifmetricvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfIfMetricStatus")
    {
        ospfifmetricstatus = value;
        ospfifmetricstatus.value_namespace = name_space;
        ospfifmetricstatus.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfIfMetricIpAddress")
    {
        ospfifmetricipaddress.yfilter = yfilter;
    }
    if(value_path == "ospfIfMetricAddressLessIf")
    {
        ospfifmetricaddresslessif.yfilter = yfilter;
    }
    if(value_path == "ospfIfMetricTOS")
    {
        ospfifmetrictos.yfilter = yfilter;
    }
    if(value_path == "ospfIfMetricValue")
    {
        ospfifmetricvalue.yfilter = yfilter;
    }
    if(value_path == "ospfIfMetricStatus")
    {
        ospfifmetricstatus.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfMetricIpAddress" || name == "ospfIfMetricAddressLessIf" || name == "ospfIfMetricTOS" || name == "ospfIfMetricValue" || name == "ospfIfMetricStatus")
        return true;
    return false;
}

OSPFMIB::OspfVirtIfTable::OspfVirtIfTable()
    :
    ospfvirtifentry(this, {"ospfvirtifareaid", "ospfvirtifneighbor"})
{

    yang_name = "ospfVirtIfTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfVirtIfTable::~OspfVirtIfTable()
{
}

bool OSPFMIB::OspfVirtIfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfvirtifentry.len(); index++)
    {
        if(ospfvirtifentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfVirtIfTable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtifentry.len(); index++)
    {
        if(ospfvirtifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfVirtIfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfVirtIfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfVirtIfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfVirtIfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtIfEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry>();
        c->parent = this;
        ospfvirtifentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfVirtIfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfvirtifentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfVirtIfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfVirtIfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfVirtIfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtIfEntry")
        return true;
    return false;
}

OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::OspfVirtIfEntry()
    :
    ospfvirtifareaid{YType::str, "ospfVirtIfAreaId"},
    ospfvirtifneighbor{YType::str, "ospfVirtIfNeighbor"},
    ospfvirtiftransitdelay{YType::int32, "ospfVirtIfTransitDelay"},
    ospfvirtifretransinterval{YType::int32, "ospfVirtIfRetransInterval"},
    ospfvirtifhellointerval{YType::int32, "ospfVirtIfHelloInterval"},
    ospfvirtifrtrdeadinterval{YType::int32, "ospfVirtIfRtrDeadInterval"},
    ospfvirtifstate{YType::enumeration, "ospfVirtIfState"},
    ospfvirtifevents{YType::uint32, "ospfVirtIfEvents"},
    ospfvirtifauthkey{YType::str, "ospfVirtIfAuthKey"},
    ospfvirtifstatus{YType::enumeration, "ospfVirtIfStatus"},
    ospfvirtifauthtype{YType::enumeration, "ospfVirtIfAuthType"},
    ospfvirtiflsacount{YType::uint32, "ospfVirtIfLsaCount"},
    ospfvirtiflsacksumsum{YType::uint32, "ospfVirtIfLsaCksumSum"},
    cospfvirtiflsacount{YType::uint32, "CISCO-OSPF-MIB:cospfVirtIfLsaCount"},
    cospfvirtiflsacksumsum{YType::uint32, "CISCO-OSPF-MIB:cospfVirtIfLsaCksumSum"}
{

    yang_name = "ospfVirtIfEntry"; yang_parent_name = "ospfVirtIfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::~OspfVirtIfEntry()
{
}

bool OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfvirtifareaid.is_set
	|| ospfvirtifneighbor.is_set
	|| ospfvirtiftransitdelay.is_set
	|| ospfvirtifretransinterval.is_set
	|| ospfvirtifhellointerval.is_set
	|| ospfvirtifrtrdeadinterval.is_set
	|| ospfvirtifstate.is_set
	|| ospfvirtifevents.is_set
	|| ospfvirtifauthkey.is_set
	|| ospfvirtifstatus.is_set
	|| ospfvirtifauthtype.is_set
	|| ospfvirtiflsacount.is_set
	|| ospfvirtiflsacksumsum.is_set
	|| cospfvirtiflsacount.is_set
	|| cospfvirtiflsacksumsum.is_set;
}

bool OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfvirtifareaid.yfilter)
	|| ydk::is_set(ospfvirtifneighbor.yfilter)
	|| ydk::is_set(ospfvirtiftransitdelay.yfilter)
	|| ydk::is_set(ospfvirtifretransinterval.yfilter)
	|| ydk::is_set(ospfvirtifhellointerval.yfilter)
	|| ydk::is_set(ospfvirtifrtrdeadinterval.yfilter)
	|| ydk::is_set(ospfvirtifstate.yfilter)
	|| ydk::is_set(ospfvirtifevents.yfilter)
	|| ydk::is_set(ospfvirtifauthkey.yfilter)
	|| ydk::is_set(ospfvirtifstatus.yfilter)
	|| ydk::is_set(ospfvirtifauthtype.yfilter)
	|| ydk::is_set(ospfvirtiflsacount.yfilter)
	|| ydk::is_set(ospfvirtiflsacksumsum.yfilter)
	|| ydk::is_set(cospfvirtiflsacount.yfilter)
	|| ydk::is_set(cospfvirtiflsacksumsum.yfilter);
}

std::string OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtIfEntry";
    ADD_KEY_TOKEN(ospfvirtifareaid, "ospfVirtIfAreaId");
    ADD_KEY_TOKEN(ospfvirtifneighbor, "ospfVirtIfNeighbor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfvirtifareaid.is_set || is_set(ospfvirtifareaid.yfilter)) leaf_name_data.push_back(ospfvirtifareaid.get_name_leafdata());
    if (ospfvirtifneighbor.is_set || is_set(ospfvirtifneighbor.yfilter)) leaf_name_data.push_back(ospfvirtifneighbor.get_name_leafdata());
    if (ospfvirtiftransitdelay.is_set || is_set(ospfvirtiftransitdelay.yfilter)) leaf_name_data.push_back(ospfvirtiftransitdelay.get_name_leafdata());
    if (ospfvirtifretransinterval.is_set || is_set(ospfvirtifretransinterval.yfilter)) leaf_name_data.push_back(ospfvirtifretransinterval.get_name_leafdata());
    if (ospfvirtifhellointerval.is_set || is_set(ospfvirtifhellointerval.yfilter)) leaf_name_data.push_back(ospfvirtifhellointerval.get_name_leafdata());
    if (ospfvirtifrtrdeadinterval.is_set || is_set(ospfvirtifrtrdeadinterval.yfilter)) leaf_name_data.push_back(ospfvirtifrtrdeadinterval.get_name_leafdata());
    if (ospfvirtifstate.is_set || is_set(ospfvirtifstate.yfilter)) leaf_name_data.push_back(ospfvirtifstate.get_name_leafdata());
    if (ospfvirtifevents.is_set || is_set(ospfvirtifevents.yfilter)) leaf_name_data.push_back(ospfvirtifevents.get_name_leafdata());
    if (ospfvirtifauthkey.is_set || is_set(ospfvirtifauthkey.yfilter)) leaf_name_data.push_back(ospfvirtifauthkey.get_name_leafdata());
    if (ospfvirtifstatus.is_set || is_set(ospfvirtifstatus.yfilter)) leaf_name_data.push_back(ospfvirtifstatus.get_name_leafdata());
    if (ospfvirtifauthtype.is_set || is_set(ospfvirtifauthtype.yfilter)) leaf_name_data.push_back(ospfvirtifauthtype.get_name_leafdata());
    if (ospfvirtiflsacount.is_set || is_set(ospfvirtiflsacount.yfilter)) leaf_name_data.push_back(ospfvirtiflsacount.get_name_leafdata());
    if (ospfvirtiflsacksumsum.is_set || is_set(ospfvirtiflsacksumsum.yfilter)) leaf_name_data.push_back(ospfvirtiflsacksumsum.get_name_leafdata());
    if (cospfvirtiflsacount.is_set || is_set(cospfvirtiflsacount.yfilter)) leaf_name_data.push_back(cospfvirtiflsacount.get_name_leafdata());
    if (cospfvirtiflsacksumsum.is_set || is_set(cospfvirtiflsacksumsum.yfilter)) leaf_name_data.push_back(cospfvirtiflsacksumsum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfVirtIfAreaId")
    {
        ospfvirtifareaid = value;
        ospfvirtifareaid.value_namespace = name_space;
        ospfvirtifareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfNeighbor")
    {
        ospfvirtifneighbor = value;
        ospfvirtifneighbor.value_namespace = name_space;
        ospfvirtifneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfTransitDelay")
    {
        ospfvirtiftransitdelay = value;
        ospfvirtiftransitdelay.value_namespace = name_space;
        ospfvirtiftransitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfRetransInterval")
    {
        ospfvirtifretransinterval = value;
        ospfvirtifretransinterval.value_namespace = name_space;
        ospfvirtifretransinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfHelloInterval")
    {
        ospfvirtifhellointerval = value;
        ospfvirtifhellointerval.value_namespace = name_space;
        ospfvirtifhellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfRtrDeadInterval")
    {
        ospfvirtifrtrdeadinterval = value;
        ospfvirtifrtrdeadinterval.value_namespace = name_space;
        ospfvirtifrtrdeadinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfState")
    {
        ospfvirtifstate = value;
        ospfvirtifstate.value_namespace = name_space;
        ospfvirtifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfEvents")
    {
        ospfvirtifevents = value;
        ospfvirtifevents.value_namespace = name_space;
        ospfvirtifevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfAuthKey")
    {
        ospfvirtifauthkey = value;
        ospfvirtifauthkey.value_namespace = name_space;
        ospfvirtifauthkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfStatus")
    {
        ospfvirtifstatus = value;
        ospfvirtifstatus.value_namespace = name_space;
        ospfvirtifstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfAuthType")
    {
        ospfvirtifauthtype = value;
        ospfvirtifauthtype.value_namespace = name_space;
        ospfvirtifauthtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfLsaCount")
    {
        ospfvirtiflsacount = value;
        ospfvirtiflsacount.value_namespace = name_space;
        ospfvirtiflsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtIfLsaCksumSum")
    {
        ospfvirtiflsacksumsum = value;
        ospfvirtiflsacksumsum.value_namespace = name_space;
        ospfvirtiflsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfVirtIfLsaCount")
    {
        cospfvirtiflsacount = value;
        cospfvirtiflsacount.value_namespace = name_space;
        cospfvirtiflsacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-OSPF-MIB:cospfVirtIfLsaCksumSum")
    {
        cospfvirtiflsacksumsum = value;
        cospfvirtiflsacksumsum.value_namespace = name_space;
        cospfvirtiflsacksumsum.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfVirtIfAreaId")
    {
        ospfvirtifareaid.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfNeighbor")
    {
        ospfvirtifneighbor.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfTransitDelay")
    {
        ospfvirtiftransitdelay.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfRetransInterval")
    {
        ospfvirtifretransinterval.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfHelloInterval")
    {
        ospfvirtifhellointerval.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfRtrDeadInterval")
    {
        ospfvirtifrtrdeadinterval.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfState")
    {
        ospfvirtifstate.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfEvents")
    {
        ospfvirtifevents.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfAuthKey")
    {
        ospfvirtifauthkey.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfStatus")
    {
        ospfvirtifstatus.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfAuthType")
    {
        ospfvirtifauthtype.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfLsaCount")
    {
        ospfvirtiflsacount.yfilter = yfilter;
    }
    if(value_path == "ospfVirtIfLsaCksumSum")
    {
        ospfvirtiflsacksumsum.yfilter = yfilter;
    }
    if(value_path == "cospfVirtIfLsaCount")
    {
        cospfvirtiflsacount.yfilter = yfilter;
    }
    if(value_path == "cospfVirtIfLsaCksumSum")
    {
        cospfvirtiflsacksumsum.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtIfAreaId" || name == "ospfVirtIfNeighbor" || name == "ospfVirtIfTransitDelay" || name == "ospfVirtIfRetransInterval" || name == "ospfVirtIfHelloInterval" || name == "ospfVirtIfRtrDeadInterval" || name == "ospfVirtIfState" || name == "ospfVirtIfEvents" || name == "ospfVirtIfAuthKey" || name == "ospfVirtIfStatus" || name == "ospfVirtIfAuthType" || name == "ospfVirtIfLsaCount" || name == "ospfVirtIfLsaCksumSum" || name == "cospfVirtIfLsaCount" || name == "cospfVirtIfLsaCksumSum")
        return true;
    return false;
}

OSPFMIB::OspfNbrTable::OspfNbrTable()
    :
    ospfnbrentry(this, {"ospfnbripaddr", "ospfnbraddresslessindex"})
{

    yang_name = "ospfNbrTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfNbrTable::~OspfNbrTable()
{
}

bool OSPFMIB::OspfNbrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfnbrentry.len(); index++)
    {
        if(ospfnbrentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfNbrTable::has_operation() const
{
    for (std::size_t index=0; index<ospfnbrentry.len(); index++)
    {
        if(ospfnbrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfNbrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfNbrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfNbrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfNbrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfNbrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfNbrEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfNbrTable::OspfNbrEntry>();
        c->parent = this;
        ospfnbrentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfNbrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfnbrentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfNbrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfNbrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfNbrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfNbrEntry")
        return true;
    return false;
}

OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrEntry()
    :
    ospfnbripaddr{YType::str, "ospfNbrIpAddr"},
    ospfnbraddresslessindex{YType::int32, "ospfNbrAddressLessIndex"},
    ospfnbrrtrid{YType::str, "ospfNbrRtrId"},
    ospfnbroptions{YType::int32, "ospfNbrOptions"},
    ospfnbrpriority{YType::int32, "ospfNbrPriority"},
    ospfnbrstate{YType::enumeration, "ospfNbrState"},
    ospfnbrevents{YType::uint32, "ospfNbrEvents"},
    ospfnbrlsretransqlen{YType::uint32, "ospfNbrLsRetransQLen"},
    ospfnbmanbrstatus{YType::enumeration, "ospfNbmaNbrStatus"},
    ospfnbmanbrpermanence{YType::enumeration, "ospfNbmaNbrPermanence"},
    ospfnbrhellosuppressed{YType::boolean, "ospfNbrHelloSuppressed"},
    ospfnbrrestarthelperstatus{YType::enumeration, "ospfNbrRestartHelperStatus"},
    ospfnbrrestarthelperage{YType::uint32, "ospfNbrRestartHelperAge"},
    ospfnbrrestarthelperexitreason{YType::enumeration, "ospfNbrRestartHelperExitReason"}
{

    yang_name = "ospfNbrEntry"; yang_parent_name = "ospfNbrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfNbrTable::OspfNbrEntry::~OspfNbrEntry()
{
}

bool OSPFMIB::OspfNbrTable::OspfNbrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfnbripaddr.is_set
	|| ospfnbraddresslessindex.is_set
	|| ospfnbrrtrid.is_set
	|| ospfnbroptions.is_set
	|| ospfnbrpriority.is_set
	|| ospfnbrstate.is_set
	|| ospfnbrevents.is_set
	|| ospfnbrlsretransqlen.is_set
	|| ospfnbmanbrstatus.is_set
	|| ospfnbmanbrpermanence.is_set
	|| ospfnbrhellosuppressed.is_set
	|| ospfnbrrestarthelperstatus.is_set
	|| ospfnbrrestarthelperage.is_set
	|| ospfnbrrestarthelperexitreason.is_set;
}

bool OSPFMIB::OspfNbrTable::OspfNbrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfnbripaddr.yfilter)
	|| ydk::is_set(ospfnbraddresslessindex.yfilter)
	|| ydk::is_set(ospfnbrrtrid.yfilter)
	|| ydk::is_set(ospfnbroptions.yfilter)
	|| ydk::is_set(ospfnbrpriority.yfilter)
	|| ydk::is_set(ospfnbrstate.yfilter)
	|| ydk::is_set(ospfnbrevents.yfilter)
	|| ydk::is_set(ospfnbrlsretransqlen.yfilter)
	|| ydk::is_set(ospfnbmanbrstatus.yfilter)
	|| ydk::is_set(ospfnbmanbrpermanence.yfilter)
	|| ydk::is_set(ospfnbrhellosuppressed.yfilter)
	|| ydk::is_set(ospfnbrrestarthelperstatus.yfilter)
	|| ydk::is_set(ospfnbrrestarthelperage.yfilter)
	|| ydk::is_set(ospfnbrrestarthelperexitreason.yfilter);
}

std::string OSPFMIB::OspfNbrTable::OspfNbrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfNbrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfNbrTable::OspfNbrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfNbrEntry";
    ADD_KEY_TOKEN(ospfnbripaddr, "ospfNbrIpAddr");
    ADD_KEY_TOKEN(ospfnbraddresslessindex, "ospfNbrAddressLessIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfNbrTable::OspfNbrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfnbripaddr.is_set || is_set(ospfnbripaddr.yfilter)) leaf_name_data.push_back(ospfnbripaddr.get_name_leafdata());
    if (ospfnbraddresslessindex.is_set || is_set(ospfnbraddresslessindex.yfilter)) leaf_name_data.push_back(ospfnbraddresslessindex.get_name_leafdata());
    if (ospfnbrrtrid.is_set || is_set(ospfnbrrtrid.yfilter)) leaf_name_data.push_back(ospfnbrrtrid.get_name_leafdata());
    if (ospfnbroptions.is_set || is_set(ospfnbroptions.yfilter)) leaf_name_data.push_back(ospfnbroptions.get_name_leafdata());
    if (ospfnbrpriority.is_set || is_set(ospfnbrpriority.yfilter)) leaf_name_data.push_back(ospfnbrpriority.get_name_leafdata());
    if (ospfnbrstate.is_set || is_set(ospfnbrstate.yfilter)) leaf_name_data.push_back(ospfnbrstate.get_name_leafdata());
    if (ospfnbrevents.is_set || is_set(ospfnbrevents.yfilter)) leaf_name_data.push_back(ospfnbrevents.get_name_leafdata());
    if (ospfnbrlsretransqlen.is_set || is_set(ospfnbrlsretransqlen.yfilter)) leaf_name_data.push_back(ospfnbrlsretransqlen.get_name_leafdata());
    if (ospfnbmanbrstatus.is_set || is_set(ospfnbmanbrstatus.yfilter)) leaf_name_data.push_back(ospfnbmanbrstatus.get_name_leafdata());
    if (ospfnbmanbrpermanence.is_set || is_set(ospfnbmanbrpermanence.yfilter)) leaf_name_data.push_back(ospfnbmanbrpermanence.get_name_leafdata());
    if (ospfnbrhellosuppressed.is_set || is_set(ospfnbrhellosuppressed.yfilter)) leaf_name_data.push_back(ospfnbrhellosuppressed.get_name_leafdata());
    if (ospfnbrrestarthelperstatus.is_set || is_set(ospfnbrrestarthelperstatus.yfilter)) leaf_name_data.push_back(ospfnbrrestarthelperstatus.get_name_leafdata());
    if (ospfnbrrestarthelperage.is_set || is_set(ospfnbrrestarthelperage.yfilter)) leaf_name_data.push_back(ospfnbrrestarthelperage.get_name_leafdata());
    if (ospfnbrrestarthelperexitreason.is_set || is_set(ospfnbrrestarthelperexitreason.yfilter)) leaf_name_data.push_back(ospfnbrrestarthelperexitreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfNbrTable::OspfNbrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfNbrTable::OspfNbrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfNbrTable::OspfNbrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfNbrIpAddr")
    {
        ospfnbripaddr = value;
        ospfnbripaddr.value_namespace = name_space;
        ospfnbripaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrAddressLessIndex")
    {
        ospfnbraddresslessindex = value;
        ospfnbraddresslessindex.value_namespace = name_space;
        ospfnbraddresslessindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrRtrId")
    {
        ospfnbrrtrid = value;
        ospfnbrrtrid.value_namespace = name_space;
        ospfnbrrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrOptions")
    {
        ospfnbroptions = value;
        ospfnbroptions.value_namespace = name_space;
        ospfnbroptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrPriority")
    {
        ospfnbrpriority = value;
        ospfnbrpriority.value_namespace = name_space;
        ospfnbrpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrState")
    {
        ospfnbrstate = value;
        ospfnbrstate.value_namespace = name_space;
        ospfnbrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrEvents")
    {
        ospfnbrevents = value;
        ospfnbrevents.value_namespace = name_space;
        ospfnbrevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrLsRetransQLen")
    {
        ospfnbrlsretransqlen = value;
        ospfnbrlsretransqlen.value_namespace = name_space;
        ospfnbrlsretransqlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbmaNbrStatus")
    {
        ospfnbmanbrstatus = value;
        ospfnbmanbrstatus.value_namespace = name_space;
        ospfnbmanbrstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbmaNbrPermanence")
    {
        ospfnbmanbrpermanence = value;
        ospfnbmanbrpermanence.value_namespace = name_space;
        ospfnbmanbrpermanence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrHelloSuppressed")
    {
        ospfnbrhellosuppressed = value;
        ospfnbrhellosuppressed.value_namespace = name_space;
        ospfnbrhellosuppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrRestartHelperStatus")
    {
        ospfnbrrestarthelperstatus = value;
        ospfnbrrestarthelperstatus.value_namespace = name_space;
        ospfnbrrestarthelperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrRestartHelperAge")
    {
        ospfnbrrestarthelperage = value;
        ospfnbrrestarthelperage.value_namespace = name_space;
        ospfnbrrestarthelperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfNbrRestartHelperExitReason")
    {
        ospfnbrrestarthelperexitreason = value;
        ospfnbrrestarthelperexitreason.value_namespace = name_space;
        ospfnbrrestarthelperexitreason.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfNbrTable::OspfNbrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfNbrIpAddr")
    {
        ospfnbripaddr.yfilter = yfilter;
    }
    if(value_path == "ospfNbrAddressLessIndex")
    {
        ospfnbraddresslessindex.yfilter = yfilter;
    }
    if(value_path == "ospfNbrRtrId")
    {
        ospfnbrrtrid.yfilter = yfilter;
    }
    if(value_path == "ospfNbrOptions")
    {
        ospfnbroptions.yfilter = yfilter;
    }
    if(value_path == "ospfNbrPriority")
    {
        ospfnbrpriority.yfilter = yfilter;
    }
    if(value_path == "ospfNbrState")
    {
        ospfnbrstate.yfilter = yfilter;
    }
    if(value_path == "ospfNbrEvents")
    {
        ospfnbrevents.yfilter = yfilter;
    }
    if(value_path == "ospfNbrLsRetransQLen")
    {
        ospfnbrlsretransqlen.yfilter = yfilter;
    }
    if(value_path == "ospfNbmaNbrStatus")
    {
        ospfnbmanbrstatus.yfilter = yfilter;
    }
    if(value_path == "ospfNbmaNbrPermanence")
    {
        ospfnbmanbrpermanence.yfilter = yfilter;
    }
    if(value_path == "ospfNbrHelloSuppressed")
    {
        ospfnbrhellosuppressed.yfilter = yfilter;
    }
    if(value_path == "ospfNbrRestartHelperStatus")
    {
        ospfnbrrestarthelperstatus.yfilter = yfilter;
    }
    if(value_path == "ospfNbrRestartHelperAge")
    {
        ospfnbrrestarthelperage.yfilter = yfilter;
    }
    if(value_path == "ospfNbrRestartHelperExitReason")
    {
        ospfnbrrestarthelperexitreason.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfNbrTable::OspfNbrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfNbrIpAddr" || name == "ospfNbrAddressLessIndex" || name == "ospfNbrRtrId" || name == "ospfNbrOptions" || name == "ospfNbrPriority" || name == "ospfNbrState" || name == "ospfNbrEvents" || name == "ospfNbrLsRetransQLen" || name == "ospfNbmaNbrStatus" || name == "ospfNbmaNbrPermanence" || name == "ospfNbrHelloSuppressed" || name == "ospfNbrRestartHelperStatus" || name == "ospfNbrRestartHelperAge" || name == "ospfNbrRestartHelperExitReason")
        return true;
    return false;
}

OSPFMIB::OspfVirtNbrTable::OspfVirtNbrTable()
    :
    ospfvirtnbrentry(this, {"ospfvirtnbrarea", "ospfvirtnbrrtrid"})
{

    yang_name = "ospfVirtNbrTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfVirtNbrTable::~OspfVirtNbrTable()
{
}

bool OSPFMIB::OspfVirtNbrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfvirtnbrentry.len(); index++)
    {
        if(ospfvirtnbrentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfVirtNbrTable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtnbrentry.len(); index++)
    {
        if(ospfvirtnbrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfVirtNbrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfVirtNbrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtNbrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfVirtNbrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfVirtNbrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtNbrEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry>();
        c->parent = this;
        ospfvirtnbrentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfVirtNbrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfvirtnbrentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfVirtNbrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfVirtNbrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfVirtNbrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtNbrEntry")
        return true;
    return false;
}

OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrEntry()
    :
    ospfvirtnbrarea{YType::str, "ospfVirtNbrArea"},
    ospfvirtnbrrtrid{YType::str, "ospfVirtNbrRtrId"},
    ospfvirtnbripaddr{YType::str, "ospfVirtNbrIpAddr"},
    ospfvirtnbroptions{YType::int32, "ospfVirtNbrOptions"},
    ospfvirtnbrstate{YType::enumeration, "ospfVirtNbrState"},
    ospfvirtnbrevents{YType::uint32, "ospfVirtNbrEvents"},
    ospfvirtnbrlsretransqlen{YType::uint32, "ospfVirtNbrLsRetransQLen"},
    ospfvirtnbrhellosuppressed{YType::boolean, "ospfVirtNbrHelloSuppressed"},
    ospfvirtnbrrestarthelperstatus{YType::enumeration, "ospfVirtNbrRestartHelperStatus"},
    ospfvirtnbrrestarthelperage{YType::uint32, "ospfVirtNbrRestartHelperAge"},
    ospfvirtnbrrestarthelperexitreason{YType::enumeration, "ospfVirtNbrRestartHelperExitReason"}
{

    yang_name = "ospfVirtNbrEntry"; yang_parent_name = "ospfVirtNbrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::~OspfVirtNbrEntry()
{
}

bool OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfvirtnbrarea.is_set
	|| ospfvirtnbrrtrid.is_set
	|| ospfvirtnbripaddr.is_set
	|| ospfvirtnbroptions.is_set
	|| ospfvirtnbrstate.is_set
	|| ospfvirtnbrevents.is_set
	|| ospfvirtnbrlsretransqlen.is_set
	|| ospfvirtnbrhellosuppressed.is_set
	|| ospfvirtnbrrestarthelperstatus.is_set
	|| ospfvirtnbrrestarthelperage.is_set
	|| ospfvirtnbrrestarthelperexitreason.is_set;
}

bool OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfvirtnbrarea.yfilter)
	|| ydk::is_set(ospfvirtnbrrtrid.yfilter)
	|| ydk::is_set(ospfvirtnbripaddr.yfilter)
	|| ydk::is_set(ospfvirtnbroptions.yfilter)
	|| ydk::is_set(ospfvirtnbrstate.yfilter)
	|| ydk::is_set(ospfvirtnbrevents.yfilter)
	|| ydk::is_set(ospfvirtnbrlsretransqlen.yfilter)
	|| ydk::is_set(ospfvirtnbrhellosuppressed.yfilter)
	|| ydk::is_set(ospfvirtnbrrestarthelperstatus.yfilter)
	|| ydk::is_set(ospfvirtnbrrestarthelperage.yfilter)
	|| ydk::is_set(ospfvirtnbrrestarthelperexitreason.yfilter);
}

std::string OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtNbrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtNbrEntry";
    ADD_KEY_TOKEN(ospfvirtnbrarea, "ospfVirtNbrArea");
    ADD_KEY_TOKEN(ospfvirtnbrrtrid, "ospfVirtNbrRtrId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfvirtnbrarea.is_set || is_set(ospfvirtnbrarea.yfilter)) leaf_name_data.push_back(ospfvirtnbrarea.get_name_leafdata());
    if (ospfvirtnbrrtrid.is_set || is_set(ospfvirtnbrrtrid.yfilter)) leaf_name_data.push_back(ospfvirtnbrrtrid.get_name_leafdata());
    if (ospfvirtnbripaddr.is_set || is_set(ospfvirtnbripaddr.yfilter)) leaf_name_data.push_back(ospfvirtnbripaddr.get_name_leafdata());
    if (ospfvirtnbroptions.is_set || is_set(ospfvirtnbroptions.yfilter)) leaf_name_data.push_back(ospfvirtnbroptions.get_name_leafdata());
    if (ospfvirtnbrstate.is_set || is_set(ospfvirtnbrstate.yfilter)) leaf_name_data.push_back(ospfvirtnbrstate.get_name_leafdata());
    if (ospfvirtnbrevents.is_set || is_set(ospfvirtnbrevents.yfilter)) leaf_name_data.push_back(ospfvirtnbrevents.get_name_leafdata());
    if (ospfvirtnbrlsretransqlen.is_set || is_set(ospfvirtnbrlsretransqlen.yfilter)) leaf_name_data.push_back(ospfvirtnbrlsretransqlen.get_name_leafdata());
    if (ospfvirtnbrhellosuppressed.is_set || is_set(ospfvirtnbrhellosuppressed.yfilter)) leaf_name_data.push_back(ospfvirtnbrhellosuppressed.get_name_leafdata());
    if (ospfvirtnbrrestarthelperstatus.is_set || is_set(ospfvirtnbrrestarthelperstatus.yfilter)) leaf_name_data.push_back(ospfvirtnbrrestarthelperstatus.get_name_leafdata());
    if (ospfvirtnbrrestarthelperage.is_set || is_set(ospfvirtnbrrestarthelperage.yfilter)) leaf_name_data.push_back(ospfvirtnbrrestarthelperage.get_name_leafdata());
    if (ospfvirtnbrrestarthelperexitreason.is_set || is_set(ospfvirtnbrrestarthelperexitreason.yfilter)) leaf_name_data.push_back(ospfvirtnbrrestarthelperexitreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfVirtNbrArea")
    {
        ospfvirtnbrarea = value;
        ospfvirtnbrarea.value_namespace = name_space;
        ospfvirtnbrarea.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrRtrId")
    {
        ospfvirtnbrrtrid = value;
        ospfvirtnbrrtrid.value_namespace = name_space;
        ospfvirtnbrrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrIpAddr")
    {
        ospfvirtnbripaddr = value;
        ospfvirtnbripaddr.value_namespace = name_space;
        ospfvirtnbripaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrOptions")
    {
        ospfvirtnbroptions = value;
        ospfvirtnbroptions.value_namespace = name_space;
        ospfvirtnbroptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrState")
    {
        ospfvirtnbrstate = value;
        ospfvirtnbrstate.value_namespace = name_space;
        ospfvirtnbrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrEvents")
    {
        ospfvirtnbrevents = value;
        ospfvirtnbrevents.value_namespace = name_space;
        ospfvirtnbrevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrLsRetransQLen")
    {
        ospfvirtnbrlsretransqlen = value;
        ospfvirtnbrlsretransqlen.value_namespace = name_space;
        ospfvirtnbrlsretransqlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrHelloSuppressed")
    {
        ospfvirtnbrhellosuppressed = value;
        ospfvirtnbrhellosuppressed.value_namespace = name_space;
        ospfvirtnbrhellosuppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrRestartHelperStatus")
    {
        ospfvirtnbrrestarthelperstatus = value;
        ospfvirtnbrrestarthelperstatus.value_namespace = name_space;
        ospfvirtnbrrestarthelperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrRestartHelperAge")
    {
        ospfvirtnbrrestarthelperage = value;
        ospfvirtnbrrestarthelperage.value_namespace = name_space;
        ospfvirtnbrrestarthelperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtNbrRestartHelperExitReason")
    {
        ospfvirtnbrrestarthelperexitreason = value;
        ospfvirtnbrrestarthelperexitreason.value_namespace = name_space;
        ospfvirtnbrrestarthelperexitreason.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfVirtNbrArea")
    {
        ospfvirtnbrarea.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrRtrId")
    {
        ospfvirtnbrrtrid.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrIpAddr")
    {
        ospfvirtnbripaddr.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrOptions")
    {
        ospfvirtnbroptions.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrState")
    {
        ospfvirtnbrstate.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrEvents")
    {
        ospfvirtnbrevents.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrLsRetransQLen")
    {
        ospfvirtnbrlsretransqlen.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrHelloSuppressed")
    {
        ospfvirtnbrhellosuppressed.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrRestartHelperStatus")
    {
        ospfvirtnbrrestarthelperstatus.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrRestartHelperAge")
    {
        ospfvirtnbrrestarthelperage.yfilter = yfilter;
    }
    if(value_path == "ospfVirtNbrRestartHelperExitReason")
    {
        ospfvirtnbrrestarthelperexitreason.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtNbrArea" || name == "ospfVirtNbrRtrId" || name == "ospfVirtNbrIpAddr" || name == "ospfVirtNbrOptions" || name == "ospfVirtNbrState" || name == "ospfVirtNbrEvents" || name == "ospfVirtNbrLsRetransQLen" || name == "ospfVirtNbrHelloSuppressed" || name == "ospfVirtNbrRestartHelperStatus" || name == "ospfVirtNbrRestartHelperAge" || name == "ospfVirtNbrRestartHelperExitReason")
        return true;
    return false;
}

OSPFMIB::OspfExtLsdbTable::OspfExtLsdbTable()
    :
    ospfextlsdbentry(this, {"ospfextlsdbtype", "ospfextlsdblsid", "ospfextlsdbrouterid"})
{

    yang_name = "ospfExtLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfExtLsdbTable::~OspfExtLsdbTable()
{
}

bool OSPFMIB::OspfExtLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfextlsdbentry.len(); index++)
    {
        if(ospfextlsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfExtLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<ospfextlsdbentry.len(); index++)
    {
        if(ospfextlsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfExtLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfExtLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfExtLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfExtLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfExtLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfExtLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry>();
        c->parent = this;
        ospfextlsdbentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfExtLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfextlsdbentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfExtLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfExtLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfExtLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfExtLsdbEntry")
        return true;
    return false;
}

OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::OspfExtLsdbEntry()
    :
    ospfextlsdbtype{YType::enumeration, "ospfExtLsdbType"},
    ospfextlsdblsid{YType::str, "ospfExtLsdbLsid"},
    ospfextlsdbrouterid{YType::str, "ospfExtLsdbRouterId"},
    ospfextlsdbsequence{YType::int32, "ospfExtLsdbSequence"},
    ospfextlsdbage{YType::int32, "ospfExtLsdbAge"},
    ospfextlsdbchecksum{YType::int32, "ospfExtLsdbChecksum"},
    ospfextlsdbadvertisement{YType::str, "ospfExtLsdbAdvertisement"}
{

    yang_name = "ospfExtLsdbEntry"; yang_parent_name = "ospfExtLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::~OspfExtLsdbEntry()
{
}

bool OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfextlsdbtype.is_set
	|| ospfextlsdblsid.is_set
	|| ospfextlsdbrouterid.is_set
	|| ospfextlsdbsequence.is_set
	|| ospfextlsdbage.is_set
	|| ospfextlsdbchecksum.is_set
	|| ospfextlsdbadvertisement.is_set;
}

bool OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfextlsdbtype.yfilter)
	|| ydk::is_set(ospfextlsdblsid.yfilter)
	|| ydk::is_set(ospfextlsdbrouterid.yfilter)
	|| ydk::is_set(ospfextlsdbsequence.yfilter)
	|| ydk::is_set(ospfextlsdbage.yfilter)
	|| ydk::is_set(ospfextlsdbchecksum.yfilter)
	|| ydk::is_set(ospfextlsdbadvertisement.yfilter);
}

std::string OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfExtLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfExtLsdbEntry";
    ADD_KEY_TOKEN(ospfextlsdbtype, "ospfExtLsdbType");
    ADD_KEY_TOKEN(ospfextlsdblsid, "ospfExtLsdbLsid");
    ADD_KEY_TOKEN(ospfextlsdbrouterid, "ospfExtLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfextlsdbtype.is_set || is_set(ospfextlsdbtype.yfilter)) leaf_name_data.push_back(ospfextlsdbtype.get_name_leafdata());
    if (ospfextlsdblsid.is_set || is_set(ospfextlsdblsid.yfilter)) leaf_name_data.push_back(ospfextlsdblsid.get_name_leafdata());
    if (ospfextlsdbrouterid.is_set || is_set(ospfextlsdbrouterid.yfilter)) leaf_name_data.push_back(ospfextlsdbrouterid.get_name_leafdata());
    if (ospfextlsdbsequence.is_set || is_set(ospfextlsdbsequence.yfilter)) leaf_name_data.push_back(ospfextlsdbsequence.get_name_leafdata());
    if (ospfextlsdbage.is_set || is_set(ospfextlsdbage.yfilter)) leaf_name_data.push_back(ospfextlsdbage.get_name_leafdata());
    if (ospfextlsdbchecksum.is_set || is_set(ospfextlsdbchecksum.yfilter)) leaf_name_data.push_back(ospfextlsdbchecksum.get_name_leafdata());
    if (ospfextlsdbadvertisement.is_set || is_set(ospfextlsdbadvertisement.yfilter)) leaf_name_data.push_back(ospfextlsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfExtLsdbType")
    {
        ospfextlsdbtype = value;
        ospfextlsdbtype.value_namespace = name_space;
        ospfextlsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbLsid")
    {
        ospfextlsdblsid = value;
        ospfextlsdblsid.value_namespace = name_space;
        ospfextlsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbRouterId")
    {
        ospfextlsdbrouterid = value;
        ospfextlsdbrouterid.value_namespace = name_space;
        ospfextlsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbSequence")
    {
        ospfextlsdbsequence = value;
        ospfextlsdbsequence.value_namespace = name_space;
        ospfextlsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbAge")
    {
        ospfextlsdbage = value;
        ospfextlsdbage.value_namespace = name_space;
        ospfextlsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbChecksum")
    {
        ospfextlsdbchecksum = value;
        ospfextlsdbchecksum.value_namespace = name_space;
        ospfextlsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfExtLsdbAdvertisement")
    {
        ospfextlsdbadvertisement = value;
        ospfextlsdbadvertisement.value_namespace = name_space;
        ospfextlsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfExtLsdbType")
    {
        ospfextlsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbLsid")
    {
        ospfextlsdblsid.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbRouterId")
    {
        ospfextlsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbSequence")
    {
        ospfextlsdbsequence.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbAge")
    {
        ospfextlsdbage.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbChecksum")
    {
        ospfextlsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "ospfExtLsdbAdvertisement")
    {
        ospfextlsdbadvertisement.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfExtLsdbType" || name == "ospfExtLsdbLsid" || name == "ospfExtLsdbRouterId" || name == "ospfExtLsdbSequence" || name == "ospfExtLsdbAge" || name == "ospfExtLsdbChecksum" || name == "ospfExtLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateTable()
    :
    ospfareaaggregateentry(this, {"ospfareaaggregateareaid", "ospfareaaggregatelsdbtype", "ospfareaaggregatenet", "ospfareaaggregatemask"})
{

    yang_name = "ospfAreaAggregateTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaAggregateTable::~OspfAreaAggregateTable()
{
}

bool OSPFMIB::OspfAreaAggregateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfareaaggregateentry.len(); index++)
    {
        if(ospfareaaggregateentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfAreaAggregateTable::has_operation() const
{
    for (std::size_t index=0; index<ospfareaaggregateentry.len(); index++)
    {
        if(ospfareaaggregateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfAreaAggregateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaAggregateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaAggregateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaAggregateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaAggregateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaAggregateEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry>();
        c->parent = this;
        ospfareaaggregateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaAggregateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfareaaggregateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfAreaAggregateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfAreaAggregateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfAreaAggregateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaAggregateEntry")
        return true;
    return false;
}

OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateEntry()
    :
    ospfareaaggregateareaid{YType::str, "ospfAreaAggregateAreaID"},
    ospfareaaggregatelsdbtype{YType::enumeration, "ospfAreaAggregateLsdbType"},
    ospfareaaggregatenet{YType::str, "ospfAreaAggregateNet"},
    ospfareaaggregatemask{YType::str, "ospfAreaAggregateMask"},
    ospfareaaggregatestatus{YType::enumeration, "ospfAreaAggregateStatus"},
    ospfareaaggregateeffect{YType::enumeration, "ospfAreaAggregateEffect"},
    ospfareaaggregateextroutetag{YType::uint32, "ospfAreaAggregateExtRouteTag"}
{

    yang_name = "ospfAreaAggregateEntry"; yang_parent_name = "ospfAreaAggregateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::~OspfAreaAggregateEntry()
{
}

bool OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfareaaggregateareaid.is_set
	|| ospfareaaggregatelsdbtype.is_set
	|| ospfareaaggregatenet.is_set
	|| ospfareaaggregatemask.is_set
	|| ospfareaaggregatestatus.is_set
	|| ospfareaaggregateeffect.is_set
	|| ospfareaaggregateextroutetag.is_set;
}

bool OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfareaaggregateareaid.yfilter)
	|| ydk::is_set(ospfareaaggregatelsdbtype.yfilter)
	|| ydk::is_set(ospfareaaggregatenet.yfilter)
	|| ydk::is_set(ospfareaaggregatemask.yfilter)
	|| ydk::is_set(ospfareaaggregatestatus.yfilter)
	|| ydk::is_set(ospfareaaggregateeffect.yfilter)
	|| ydk::is_set(ospfareaaggregateextroutetag.yfilter);
}

std::string OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaAggregateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaAggregateEntry";
    ADD_KEY_TOKEN(ospfareaaggregateareaid, "ospfAreaAggregateAreaID");
    ADD_KEY_TOKEN(ospfareaaggregatelsdbtype, "ospfAreaAggregateLsdbType");
    ADD_KEY_TOKEN(ospfareaaggregatenet, "ospfAreaAggregateNet");
    ADD_KEY_TOKEN(ospfareaaggregatemask, "ospfAreaAggregateMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfareaaggregateareaid.is_set || is_set(ospfareaaggregateareaid.yfilter)) leaf_name_data.push_back(ospfareaaggregateareaid.get_name_leafdata());
    if (ospfareaaggregatelsdbtype.is_set || is_set(ospfareaaggregatelsdbtype.yfilter)) leaf_name_data.push_back(ospfareaaggregatelsdbtype.get_name_leafdata());
    if (ospfareaaggregatenet.is_set || is_set(ospfareaaggregatenet.yfilter)) leaf_name_data.push_back(ospfareaaggregatenet.get_name_leafdata());
    if (ospfareaaggregatemask.is_set || is_set(ospfareaaggregatemask.yfilter)) leaf_name_data.push_back(ospfareaaggregatemask.get_name_leafdata());
    if (ospfareaaggregatestatus.is_set || is_set(ospfareaaggregatestatus.yfilter)) leaf_name_data.push_back(ospfareaaggregatestatus.get_name_leafdata());
    if (ospfareaaggregateeffect.is_set || is_set(ospfareaaggregateeffect.yfilter)) leaf_name_data.push_back(ospfareaaggregateeffect.get_name_leafdata());
    if (ospfareaaggregateextroutetag.is_set || is_set(ospfareaaggregateextroutetag.yfilter)) leaf_name_data.push_back(ospfareaaggregateextroutetag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfAreaAggregateAreaID")
    {
        ospfareaaggregateareaid = value;
        ospfareaaggregateareaid.value_namespace = name_space;
        ospfareaaggregateareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaAggregateLsdbType")
    {
        ospfareaaggregatelsdbtype = value;
        ospfareaaggregatelsdbtype.value_namespace = name_space;
        ospfareaaggregatelsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaAggregateNet")
    {
        ospfareaaggregatenet = value;
        ospfareaaggregatenet.value_namespace = name_space;
        ospfareaaggregatenet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaAggregateMask")
    {
        ospfareaaggregatemask = value;
        ospfareaaggregatemask.value_namespace = name_space;
        ospfareaaggregatemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaAggregateStatus")
    {
        ospfareaaggregatestatus = value;
        ospfareaaggregatestatus.value_namespace = name_space;
        ospfareaaggregatestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaAggregateEffect")
    {
        ospfareaaggregateeffect = value;
        ospfareaaggregateeffect.value_namespace = name_space;
        ospfareaaggregateeffect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaAggregateExtRouteTag")
    {
        ospfareaaggregateextroutetag = value;
        ospfareaaggregateextroutetag.value_namespace = name_space;
        ospfareaaggregateextroutetag.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfAreaAggregateAreaID")
    {
        ospfareaaggregateareaid.yfilter = yfilter;
    }
    if(value_path == "ospfAreaAggregateLsdbType")
    {
        ospfareaaggregatelsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfAreaAggregateNet")
    {
        ospfareaaggregatenet.yfilter = yfilter;
    }
    if(value_path == "ospfAreaAggregateMask")
    {
        ospfareaaggregatemask.yfilter = yfilter;
    }
    if(value_path == "ospfAreaAggregateStatus")
    {
        ospfareaaggregatestatus.yfilter = yfilter;
    }
    if(value_path == "ospfAreaAggregateEffect")
    {
        ospfareaaggregateeffect.yfilter = yfilter;
    }
    if(value_path == "ospfAreaAggregateExtRouteTag")
    {
        ospfareaaggregateextroutetag.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaAggregateAreaID" || name == "ospfAreaAggregateLsdbType" || name == "ospfAreaAggregateNet" || name == "ospfAreaAggregateMask" || name == "ospfAreaAggregateStatus" || name == "ospfAreaAggregateEffect" || name == "ospfAreaAggregateExtRouteTag")
        return true;
    return false;
}

OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbTable()
    :
    ospflocallsdbentry(this, {"ospflocallsdbipaddress", "ospflocallsdbaddresslessif", "ospflocallsdbtype", "ospflocallsdblsid", "ospflocallsdbrouterid"})
{

    yang_name = "ospfLocalLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfLocalLsdbTable::~OspfLocalLsdbTable()
{
}

bool OSPFMIB::OspfLocalLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospflocallsdbentry.len(); index++)
    {
        if(ospflocallsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfLocalLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<ospflocallsdbentry.len(); index++)
    {
        if(ospflocallsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfLocalLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfLocalLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLocalLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfLocalLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfLocalLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfLocalLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry>();
        c->parent = this;
        ospflocallsdbentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfLocalLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospflocallsdbentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfLocalLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfLocalLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfLocalLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLocalLsdbEntry")
        return true;
    return false;
}

OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::OspfLocalLsdbEntry()
    :
    ospflocallsdbipaddress{YType::str, "ospfLocalLsdbIpAddress"},
    ospflocallsdbaddresslessif{YType::int32, "ospfLocalLsdbAddressLessIf"},
    ospflocallsdbtype{YType::enumeration, "ospfLocalLsdbType"},
    ospflocallsdblsid{YType::str, "ospfLocalLsdbLsid"},
    ospflocallsdbrouterid{YType::str, "ospfLocalLsdbRouterId"},
    ospflocallsdbsequence{YType::int32, "ospfLocalLsdbSequence"},
    ospflocallsdbage{YType::int32, "ospfLocalLsdbAge"},
    ospflocallsdbchecksum{YType::int32, "ospfLocalLsdbChecksum"},
    ospflocallsdbadvertisement{YType::str, "ospfLocalLsdbAdvertisement"}
{

    yang_name = "ospfLocalLsdbEntry"; yang_parent_name = "ospfLocalLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::~OspfLocalLsdbEntry()
{
}

bool OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospflocallsdbipaddress.is_set
	|| ospflocallsdbaddresslessif.is_set
	|| ospflocallsdbtype.is_set
	|| ospflocallsdblsid.is_set
	|| ospflocallsdbrouterid.is_set
	|| ospflocallsdbsequence.is_set
	|| ospflocallsdbage.is_set
	|| ospflocallsdbchecksum.is_set
	|| ospflocallsdbadvertisement.is_set;
}

bool OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospflocallsdbipaddress.yfilter)
	|| ydk::is_set(ospflocallsdbaddresslessif.yfilter)
	|| ydk::is_set(ospflocallsdbtype.yfilter)
	|| ydk::is_set(ospflocallsdblsid.yfilter)
	|| ydk::is_set(ospflocallsdbrouterid.yfilter)
	|| ydk::is_set(ospflocallsdbsequence.yfilter)
	|| ydk::is_set(ospflocallsdbage.yfilter)
	|| ydk::is_set(ospflocallsdbchecksum.yfilter)
	|| ydk::is_set(ospflocallsdbadvertisement.yfilter);
}

std::string OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfLocalLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLocalLsdbEntry";
    ADD_KEY_TOKEN(ospflocallsdbipaddress, "ospfLocalLsdbIpAddress");
    ADD_KEY_TOKEN(ospflocallsdbaddresslessif, "ospfLocalLsdbAddressLessIf");
    ADD_KEY_TOKEN(ospflocallsdbtype, "ospfLocalLsdbType");
    ADD_KEY_TOKEN(ospflocallsdblsid, "ospfLocalLsdbLsid");
    ADD_KEY_TOKEN(ospflocallsdbrouterid, "ospfLocalLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospflocallsdbipaddress.is_set || is_set(ospflocallsdbipaddress.yfilter)) leaf_name_data.push_back(ospflocallsdbipaddress.get_name_leafdata());
    if (ospflocallsdbaddresslessif.is_set || is_set(ospflocallsdbaddresslessif.yfilter)) leaf_name_data.push_back(ospflocallsdbaddresslessif.get_name_leafdata());
    if (ospflocallsdbtype.is_set || is_set(ospflocallsdbtype.yfilter)) leaf_name_data.push_back(ospflocallsdbtype.get_name_leafdata());
    if (ospflocallsdblsid.is_set || is_set(ospflocallsdblsid.yfilter)) leaf_name_data.push_back(ospflocallsdblsid.get_name_leafdata());
    if (ospflocallsdbrouterid.is_set || is_set(ospflocallsdbrouterid.yfilter)) leaf_name_data.push_back(ospflocallsdbrouterid.get_name_leafdata());
    if (ospflocallsdbsequence.is_set || is_set(ospflocallsdbsequence.yfilter)) leaf_name_data.push_back(ospflocallsdbsequence.get_name_leafdata());
    if (ospflocallsdbage.is_set || is_set(ospflocallsdbage.yfilter)) leaf_name_data.push_back(ospflocallsdbage.get_name_leafdata());
    if (ospflocallsdbchecksum.is_set || is_set(ospflocallsdbchecksum.yfilter)) leaf_name_data.push_back(ospflocallsdbchecksum.get_name_leafdata());
    if (ospflocallsdbadvertisement.is_set || is_set(ospflocallsdbadvertisement.yfilter)) leaf_name_data.push_back(ospflocallsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfLocalLsdbIpAddress")
    {
        ospflocallsdbipaddress = value;
        ospflocallsdbipaddress.value_namespace = name_space;
        ospflocallsdbipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbAddressLessIf")
    {
        ospflocallsdbaddresslessif = value;
        ospflocallsdbaddresslessif.value_namespace = name_space;
        ospflocallsdbaddresslessif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbType")
    {
        ospflocallsdbtype = value;
        ospflocallsdbtype.value_namespace = name_space;
        ospflocallsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbLsid")
    {
        ospflocallsdblsid = value;
        ospflocallsdblsid.value_namespace = name_space;
        ospflocallsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbRouterId")
    {
        ospflocallsdbrouterid = value;
        ospflocallsdbrouterid.value_namespace = name_space;
        ospflocallsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbSequence")
    {
        ospflocallsdbsequence = value;
        ospflocallsdbsequence.value_namespace = name_space;
        ospflocallsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbAge")
    {
        ospflocallsdbage = value;
        ospflocallsdbage.value_namespace = name_space;
        ospflocallsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbChecksum")
    {
        ospflocallsdbchecksum = value;
        ospflocallsdbchecksum.value_namespace = name_space;
        ospflocallsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfLocalLsdbAdvertisement")
    {
        ospflocallsdbadvertisement = value;
        ospflocallsdbadvertisement.value_namespace = name_space;
        ospflocallsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfLocalLsdbIpAddress")
    {
        ospflocallsdbipaddress.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbAddressLessIf")
    {
        ospflocallsdbaddresslessif.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbType")
    {
        ospflocallsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbLsid")
    {
        ospflocallsdblsid.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbRouterId")
    {
        ospflocallsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbSequence")
    {
        ospflocallsdbsequence.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbAge")
    {
        ospflocallsdbage.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbChecksum")
    {
        ospflocallsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "ospfLocalLsdbAdvertisement")
    {
        ospflocallsdbadvertisement.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLocalLsdbIpAddress" || name == "ospfLocalLsdbAddressLessIf" || name == "ospfLocalLsdbType" || name == "ospfLocalLsdbLsid" || name == "ospfLocalLsdbRouterId" || name == "ospfLocalLsdbSequence" || name == "ospfLocalLsdbAge" || name == "ospfLocalLsdbChecksum" || name == "ospfLocalLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbTable()
    :
    ospfvirtlocallsdbentry(this, {"ospfvirtlocallsdbtransitarea", "ospfvirtlocallsdbneighbor", "ospfvirtlocallsdbtype", "ospfvirtlocallsdblsid", "ospfvirtlocallsdbrouterid"})
{

    yang_name = "ospfVirtLocalLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfVirtLocalLsdbTable::~OspfVirtLocalLsdbTable()
{
}

bool OSPFMIB::OspfVirtLocalLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfvirtlocallsdbentry.len(); index++)
    {
        if(ospfvirtlocallsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfVirtLocalLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtlocallsdbentry.len(); index++)
    {
        if(ospfvirtlocallsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfVirtLocalLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfVirtLocalLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtLocalLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfVirtLocalLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfVirtLocalLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtLocalLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry>();
        c->parent = this;
        ospfvirtlocallsdbentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfVirtLocalLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfvirtlocallsdbentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfVirtLocalLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfVirtLocalLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfVirtLocalLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtLocalLsdbEntry")
        return true;
    return false;
}

OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::OspfVirtLocalLsdbEntry()
    :
    ospfvirtlocallsdbtransitarea{YType::str, "ospfVirtLocalLsdbTransitArea"},
    ospfvirtlocallsdbneighbor{YType::str, "ospfVirtLocalLsdbNeighbor"},
    ospfvirtlocallsdbtype{YType::enumeration, "ospfVirtLocalLsdbType"},
    ospfvirtlocallsdblsid{YType::str, "ospfVirtLocalLsdbLsid"},
    ospfvirtlocallsdbrouterid{YType::str, "ospfVirtLocalLsdbRouterId"},
    ospfvirtlocallsdbsequence{YType::int32, "ospfVirtLocalLsdbSequence"},
    ospfvirtlocallsdbage{YType::int32, "ospfVirtLocalLsdbAge"},
    ospfvirtlocallsdbchecksum{YType::int32, "ospfVirtLocalLsdbChecksum"},
    ospfvirtlocallsdbadvertisement{YType::str, "ospfVirtLocalLsdbAdvertisement"}
{

    yang_name = "ospfVirtLocalLsdbEntry"; yang_parent_name = "ospfVirtLocalLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::~OspfVirtLocalLsdbEntry()
{
}

bool OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfvirtlocallsdbtransitarea.is_set
	|| ospfvirtlocallsdbneighbor.is_set
	|| ospfvirtlocallsdbtype.is_set
	|| ospfvirtlocallsdblsid.is_set
	|| ospfvirtlocallsdbrouterid.is_set
	|| ospfvirtlocallsdbsequence.is_set
	|| ospfvirtlocallsdbage.is_set
	|| ospfvirtlocallsdbchecksum.is_set
	|| ospfvirtlocallsdbadvertisement.is_set;
}

bool OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfvirtlocallsdbtransitarea.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbneighbor.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbtype.yfilter)
	|| ydk::is_set(ospfvirtlocallsdblsid.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbrouterid.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbsequence.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbage.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbchecksum.yfilter)
	|| ydk::is_set(ospfvirtlocallsdbadvertisement.yfilter);
}

std::string OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtLocalLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtLocalLsdbEntry";
    ADD_KEY_TOKEN(ospfvirtlocallsdbtransitarea, "ospfVirtLocalLsdbTransitArea");
    ADD_KEY_TOKEN(ospfvirtlocallsdbneighbor, "ospfVirtLocalLsdbNeighbor");
    ADD_KEY_TOKEN(ospfvirtlocallsdbtype, "ospfVirtLocalLsdbType");
    ADD_KEY_TOKEN(ospfvirtlocallsdblsid, "ospfVirtLocalLsdbLsid");
    ADD_KEY_TOKEN(ospfvirtlocallsdbrouterid, "ospfVirtLocalLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfvirtlocallsdbtransitarea.is_set || is_set(ospfvirtlocallsdbtransitarea.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbtransitarea.get_name_leafdata());
    if (ospfvirtlocallsdbneighbor.is_set || is_set(ospfvirtlocallsdbneighbor.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbneighbor.get_name_leafdata());
    if (ospfvirtlocallsdbtype.is_set || is_set(ospfvirtlocallsdbtype.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbtype.get_name_leafdata());
    if (ospfvirtlocallsdblsid.is_set || is_set(ospfvirtlocallsdblsid.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdblsid.get_name_leafdata());
    if (ospfvirtlocallsdbrouterid.is_set || is_set(ospfvirtlocallsdbrouterid.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbrouterid.get_name_leafdata());
    if (ospfvirtlocallsdbsequence.is_set || is_set(ospfvirtlocallsdbsequence.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbsequence.get_name_leafdata());
    if (ospfvirtlocallsdbage.is_set || is_set(ospfvirtlocallsdbage.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbage.get_name_leafdata());
    if (ospfvirtlocallsdbchecksum.is_set || is_set(ospfvirtlocallsdbchecksum.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbchecksum.get_name_leafdata());
    if (ospfvirtlocallsdbadvertisement.is_set || is_set(ospfvirtlocallsdbadvertisement.yfilter)) leaf_name_data.push_back(ospfvirtlocallsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfVirtLocalLsdbTransitArea")
    {
        ospfvirtlocallsdbtransitarea = value;
        ospfvirtlocallsdbtransitarea.value_namespace = name_space;
        ospfvirtlocallsdbtransitarea.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbNeighbor")
    {
        ospfvirtlocallsdbneighbor = value;
        ospfvirtlocallsdbneighbor.value_namespace = name_space;
        ospfvirtlocallsdbneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbType")
    {
        ospfvirtlocallsdbtype = value;
        ospfvirtlocallsdbtype.value_namespace = name_space;
        ospfvirtlocallsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbLsid")
    {
        ospfvirtlocallsdblsid = value;
        ospfvirtlocallsdblsid.value_namespace = name_space;
        ospfvirtlocallsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbRouterId")
    {
        ospfvirtlocallsdbrouterid = value;
        ospfvirtlocallsdbrouterid.value_namespace = name_space;
        ospfvirtlocallsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbSequence")
    {
        ospfvirtlocallsdbsequence = value;
        ospfvirtlocallsdbsequence.value_namespace = name_space;
        ospfvirtlocallsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbAge")
    {
        ospfvirtlocallsdbage = value;
        ospfvirtlocallsdbage.value_namespace = name_space;
        ospfvirtlocallsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbChecksum")
    {
        ospfvirtlocallsdbchecksum = value;
        ospfvirtlocallsdbchecksum.value_namespace = name_space;
        ospfvirtlocallsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfVirtLocalLsdbAdvertisement")
    {
        ospfvirtlocallsdbadvertisement = value;
        ospfvirtlocallsdbadvertisement.value_namespace = name_space;
        ospfvirtlocallsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfVirtLocalLsdbTransitArea")
    {
        ospfvirtlocallsdbtransitarea.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbNeighbor")
    {
        ospfvirtlocallsdbneighbor.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbType")
    {
        ospfvirtlocallsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbLsid")
    {
        ospfvirtlocallsdblsid.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbRouterId")
    {
        ospfvirtlocallsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbSequence")
    {
        ospfvirtlocallsdbsequence.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbAge")
    {
        ospfvirtlocallsdbage.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbChecksum")
    {
        ospfvirtlocallsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "ospfVirtLocalLsdbAdvertisement")
    {
        ospfvirtlocallsdbadvertisement.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtLocalLsdbTransitArea" || name == "ospfVirtLocalLsdbNeighbor" || name == "ospfVirtLocalLsdbType" || name == "ospfVirtLocalLsdbLsid" || name == "ospfVirtLocalLsdbRouterId" || name == "ospfVirtLocalLsdbSequence" || name == "ospfVirtLocalLsdbAge" || name == "ospfVirtLocalLsdbChecksum" || name == "ospfVirtLocalLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::OspfAsLsdbTable::OspfAsLsdbTable()
    :
    ospfaslsdbentry(this, {"ospfaslsdbtype", "ospfaslsdblsid", "ospfaslsdbrouterid"})
{

    yang_name = "ospfAsLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAsLsdbTable::~OspfAsLsdbTable()
{
}

bool OSPFMIB::OspfAsLsdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfaslsdbentry.len(); index++)
    {
        if(ospfaslsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfAsLsdbTable::has_operation() const
{
    for (std::size_t index=0; index<ospfaslsdbentry.len(); index++)
    {
        if(ospfaslsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfAsLsdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAsLsdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAsLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAsLsdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAsLsdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAsLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry>();
        c->parent = this;
        ospfaslsdbentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAsLsdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfaslsdbentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfAsLsdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfAsLsdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfAsLsdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAsLsdbEntry")
        return true;
    return false;
}

OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::OspfAsLsdbEntry()
    :
    ospfaslsdbtype{YType::enumeration, "ospfAsLsdbType"},
    ospfaslsdblsid{YType::str, "ospfAsLsdbLsid"},
    ospfaslsdbrouterid{YType::str, "ospfAsLsdbRouterId"},
    ospfaslsdbsequence{YType::int32, "ospfAsLsdbSequence"},
    ospfaslsdbage{YType::int32, "ospfAsLsdbAge"},
    ospfaslsdbchecksum{YType::int32, "ospfAsLsdbChecksum"},
    ospfaslsdbadvertisement{YType::str, "ospfAsLsdbAdvertisement"}
{

    yang_name = "ospfAsLsdbEntry"; yang_parent_name = "ospfAsLsdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::~OspfAsLsdbEntry()
{
}

bool OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfaslsdbtype.is_set
	|| ospfaslsdblsid.is_set
	|| ospfaslsdbrouterid.is_set
	|| ospfaslsdbsequence.is_set
	|| ospfaslsdbage.is_set
	|| ospfaslsdbchecksum.is_set
	|| ospfaslsdbadvertisement.is_set;
}

bool OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfaslsdbtype.yfilter)
	|| ydk::is_set(ospfaslsdblsid.yfilter)
	|| ydk::is_set(ospfaslsdbrouterid.yfilter)
	|| ydk::is_set(ospfaslsdbsequence.yfilter)
	|| ydk::is_set(ospfaslsdbage.yfilter)
	|| ydk::is_set(ospfaslsdbchecksum.yfilter)
	|| ydk::is_set(ospfaslsdbadvertisement.yfilter);
}

std::string OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAsLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAsLsdbEntry";
    ADD_KEY_TOKEN(ospfaslsdbtype, "ospfAsLsdbType");
    ADD_KEY_TOKEN(ospfaslsdblsid, "ospfAsLsdbLsid");
    ADD_KEY_TOKEN(ospfaslsdbrouterid, "ospfAsLsdbRouterId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfaslsdbtype.is_set || is_set(ospfaslsdbtype.yfilter)) leaf_name_data.push_back(ospfaslsdbtype.get_name_leafdata());
    if (ospfaslsdblsid.is_set || is_set(ospfaslsdblsid.yfilter)) leaf_name_data.push_back(ospfaslsdblsid.get_name_leafdata());
    if (ospfaslsdbrouterid.is_set || is_set(ospfaslsdbrouterid.yfilter)) leaf_name_data.push_back(ospfaslsdbrouterid.get_name_leafdata());
    if (ospfaslsdbsequence.is_set || is_set(ospfaslsdbsequence.yfilter)) leaf_name_data.push_back(ospfaslsdbsequence.get_name_leafdata());
    if (ospfaslsdbage.is_set || is_set(ospfaslsdbage.yfilter)) leaf_name_data.push_back(ospfaslsdbage.get_name_leafdata());
    if (ospfaslsdbchecksum.is_set || is_set(ospfaslsdbchecksum.yfilter)) leaf_name_data.push_back(ospfaslsdbchecksum.get_name_leafdata());
    if (ospfaslsdbadvertisement.is_set || is_set(ospfaslsdbadvertisement.yfilter)) leaf_name_data.push_back(ospfaslsdbadvertisement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfAsLsdbType")
    {
        ospfaslsdbtype = value;
        ospfaslsdbtype.value_namespace = name_space;
        ospfaslsdbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsdbLsid")
    {
        ospfaslsdblsid = value;
        ospfaslsdblsid.value_namespace = name_space;
        ospfaslsdblsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsdbRouterId")
    {
        ospfaslsdbrouterid = value;
        ospfaslsdbrouterid.value_namespace = name_space;
        ospfaslsdbrouterid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsdbSequence")
    {
        ospfaslsdbsequence = value;
        ospfaslsdbsequence.value_namespace = name_space;
        ospfaslsdbsequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsdbAge")
    {
        ospfaslsdbage = value;
        ospfaslsdbage.value_namespace = name_space;
        ospfaslsdbage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsdbChecksum")
    {
        ospfaslsdbchecksum = value;
        ospfaslsdbchecksum.value_namespace = name_space;
        ospfaslsdbchecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAsLsdbAdvertisement")
    {
        ospfaslsdbadvertisement = value;
        ospfaslsdbadvertisement.value_namespace = name_space;
        ospfaslsdbadvertisement.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfAsLsdbType")
    {
        ospfaslsdbtype.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsdbLsid")
    {
        ospfaslsdblsid.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsdbRouterId")
    {
        ospfaslsdbrouterid.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsdbSequence")
    {
        ospfaslsdbsequence.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsdbAge")
    {
        ospfaslsdbage.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsdbChecksum")
    {
        ospfaslsdbchecksum.yfilter = yfilter;
    }
    if(value_path == "ospfAsLsdbAdvertisement")
    {
        ospfaslsdbadvertisement.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAsLsdbType" || name == "ospfAsLsdbLsid" || name == "ospfAsLsdbRouterId" || name == "ospfAsLsdbSequence" || name == "ospfAsLsdbAge" || name == "ospfAsLsdbChecksum" || name == "ospfAsLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountTable()
    :
    ospfarealsacountentry(this, {"ospfarealsacountareaid", "ospfarealsacountlsatype"})
{

    yang_name = "ospfAreaLsaCountTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaLsaCountTable::~OspfAreaLsaCountTable()
{
}

bool OSPFMIB::OspfAreaLsaCountTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfarealsacountentry.len(); index++)
    {
        if(ospfarealsacountentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::OspfAreaLsaCountTable::has_operation() const
{
    for (std::size_t index=0; index<ospfarealsacountentry.len(); index++)
    {
        if(ospfarealsacountentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::OspfAreaLsaCountTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaLsaCountTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaLsaCountTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaLsaCountTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaLsaCountTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaLsaCountEntry")
    {
        auto c = std::make_shared<OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry>();
        c->parent = this;
        ospfarealsacountentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaLsaCountTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfarealsacountentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::OspfAreaLsaCountTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::OspfAreaLsaCountTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::OspfAreaLsaCountTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaLsaCountEntry")
        return true;
    return false;
}

OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountEntry()
    :
    ospfarealsacountareaid{YType::str, "ospfAreaLsaCountAreaId"},
    ospfarealsacountlsatype{YType::enumeration, "ospfAreaLsaCountLsaType"},
    ospfarealsacountnumber{YType::uint32, "ospfAreaLsaCountNumber"}
{

    yang_name = "ospfAreaLsaCountEntry"; yang_parent_name = "ospfAreaLsaCountTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::~OspfAreaLsaCountEntry()
{
}

bool OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::has_data() const
{
    if (is_presence_container) return true;
    return ospfarealsacountareaid.is_set
	|| ospfarealsacountlsatype.is_set
	|| ospfarealsacountnumber.is_set;
}

bool OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfarealsacountareaid.yfilter)
	|| ydk::is_set(ospfarealsacountlsatype.yfilter)
	|| ydk::is_set(ospfarealsacountnumber.yfilter);
}

std::string OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaLsaCountTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaLsaCountEntry";
    ADD_KEY_TOKEN(ospfarealsacountareaid, "ospfAreaLsaCountAreaId");
    ADD_KEY_TOKEN(ospfarealsacountlsatype, "ospfAreaLsaCountLsaType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfarealsacountareaid.is_set || is_set(ospfarealsacountareaid.yfilter)) leaf_name_data.push_back(ospfarealsacountareaid.get_name_leafdata());
    if (ospfarealsacountlsatype.is_set || is_set(ospfarealsacountlsatype.yfilter)) leaf_name_data.push_back(ospfarealsacountlsatype.get_name_leafdata());
    if (ospfarealsacountnumber.is_set || is_set(ospfarealsacountnumber.yfilter)) leaf_name_data.push_back(ospfarealsacountnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospfAreaLsaCountAreaId")
    {
        ospfarealsacountareaid = value;
        ospfarealsacountareaid.value_namespace = name_space;
        ospfarealsacountareaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaLsaCountLsaType")
    {
        ospfarealsacountlsatype = value;
        ospfarealsacountlsatype.value_namespace = name_space;
        ospfarealsacountlsatype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfAreaLsaCountNumber")
    {
        ospfarealsacountnumber = value;
        ospfarealsacountnumber.value_namespace = name_space;
        ospfarealsacountnumber.value_namespace_prefix = name_space_prefix;
    }
}

void OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospfAreaLsaCountAreaId")
    {
        ospfarealsacountareaid.yfilter = yfilter;
    }
    if(value_path == "ospfAreaLsaCountLsaType")
    {
        ospfarealsacountlsatype.yfilter = yfilter;
    }
    if(value_path == "ospfAreaLsaCountNumber")
    {
        ospfarealsacountnumber.yfilter = yfilter;
    }
}

bool OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaLsaCountAreaId" || name == "ospfAreaLsaCountLsaType" || name == "ospfAreaLsaCountNumber")
        return true;
    return false;
}

const Enum::YLeaf Status::enabled {1, "enabled"};
const Enum::YLeaf Status::disabled {2, "disabled"};

const Enum::YLeaf OspfAuthenticationType::none {0, "none"};
const Enum::YLeaf OspfAuthenticationType::simplePassword {1, "simplePassword"};
const Enum::YLeaf OspfAuthenticationType::md5 {2, "md5"};

const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfVersionNumber::version2 {2, "version2"};

const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartSupport::none {1, "none"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartSupport::plannedOnly {2, "plannedOnly"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartSupport::plannedAndUnplanned {3, "plannedAndUnplanned"};

const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartStatus::notRestarting {1, "notRestarting"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartStatus::plannedRestart {2, "plannedRestart"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartStatus::unplannedRestart {3, "unplannedRestart"};

const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartExitReason::none {1, "none"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartExitReason::inProgress {2, "inProgress"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartExitReason::completed {3, "completed"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartExitReason::timedOut {4, "timedOut"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfRestartExitReason::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfStubRouterAdvertisement::doNotAdvertise {1, "doNotAdvertise"};
const Enum::YLeaf OSPFMIB::OspfGeneralGroup::OspfStubRouterAdvertisement::advertise {2, "advertise"};

const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfImportAsExtern::importExternal {1, "importExternal"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfImportAsExtern::importNoExternal {2, "importNoExternal"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfImportAsExtern::importNssa {3, "importNssa"};

const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaSummary::noAreaSummary {1, "noAreaSummary"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaSummary::sendAreaSummary {2, "sendAreaSummary"};

const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorRole::always {1, "always"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorRole::candidate {2, "candidate"};

const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorState::enabled {1, "enabled"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorState::elected {2, "elected"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorState::disabled {3, "disabled"};

const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorRole::always {1, "always"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorRole::candidate {2, "candidate"};

const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorState::enabled {1, "enabled"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorState::elected {2, "elected"};
const Enum::YLeaf OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorState::disabled {3, "disabled"};

const Enum::YLeaf OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::OspfStubMetricType::ospfMetric {1, "ospfMetric"};
const Enum::YLeaf OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::OspfStubMetricType::comparableCost {2, "comparableCost"};
const Enum::YLeaf OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::OspfStubMetricType::nonComparable {3, "nonComparable"};

const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::routerLink {1, "routerLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::networkLink {2, "networkLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::summaryLink {3, "summaryLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::asSummaryLink {4, "asSummaryLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::asExternalLink {5, "asExternalLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::multicastLink {6, "multicastLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::nssaExternalLink {7, "nssaExternalLink"};
const Enum::YLeaf OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType::areaOpaqueLink {10, "areaOpaqueLink"};

const Enum::YLeaf OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::OspfAreaRangeEffect::advertiseMatching {1, "advertiseMatching"};
const Enum::YLeaf OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::OspfAreaRangeEffect::doNotAdvertiseMatching {2, "doNotAdvertiseMatching"};

const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfType::broadcast {1, "broadcast"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfType::nbma {2, "nbma"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfType::pointToPoint {3, "pointToPoint"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfType::pointToMultipoint {5, "pointToMultipoint"};

const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::down {1, "down"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::loopback {2, "loopback"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::waiting {3, "waiting"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::pointToPoint {4, "pointToPoint"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::designatedRouter {5, "designatedRouter"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::backupDesignatedRouter {6, "backupDesignatedRouter"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState::otherDesignatedRouter {7, "otherDesignatedRouter"};

const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfMulticastForwarding::blocked {1, "blocked"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfMulticastForwarding::multicast {2, "multicast"};
const Enum::YLeaf OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfMulticastForwarding::unicast {3, "unicast"};

const Enum::YLeaf OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::OspfVirtIfState::down {1, "down"};
const Enum::YLeaf OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::OspfVirtIfState::pointToPoint {4, "pointToPoint"};

const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::down {1, "down"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::attempt {2, "attempt"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::init {3, "init"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::twoWay {4, "twoWay"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::exchange {6, "exchange"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::loading {7, "loading"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState::full {8, "full"};

const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbmaNbrPermanence::dynamic {1, "dynamic"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbmaNbrPermanence::permanent {2, "permanent"};

const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperStatus::notHelping {1, "notHelping"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperStatus::helping {2, "helping"};

const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperExitReason::none {1, "none"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperExitReason::inProgress {2, "inProgress"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperExitReason::completed {3, "completed"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperExitReason::timedOut {4, "timedOut"};
const Enum::YLeaf OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperExitReason::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::down {1, "down"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::attempt {2, "attempt"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::init {3, "init"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::twoWay {4, "twoWay"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::exchange {6, "exchange"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::loading {7, "loading"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState::full {8, "full"};

const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperStatus::notHelping {1, "notHelping"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperStatus::helping {2, "helping"};

const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperExitReason::none {1, "none"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperExitReason::inProgress {2, "inProgress"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperExitReason::completed {3, "completed"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperExitReason::timedOut {4, "timedOut"};
const Enum::YLeaf OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperExitReason::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::OspfExtLsdbType::asExternalLink {5, "asExternalLink"};

const Enum::YLeaf OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateLsdbType::summaryLink {3, "summaryLink"};
const Enum::YLeaf OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateLsdbType::nssaExternalLink {7, "nssaExternalLink"};

const Enum::YLeaf OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateEffect::advertiseMatching {1, "advertiseMatching"};
const Enum::YLeaf OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateEffect::doNotAdvertiseMatching {2, "doNotAdvertiseMatching"};

const Enum::YLeaf OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::OspfLocalLsdbType::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::OspfVirtLocalLsdbType::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::OspfAsLsdbType::asExternalLink {5, "asExternalLink"};
const Enum::YLeaf OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::OspfAsLsdbType::asOpaqueLink {11, "asOpaqueLink"};

const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::routerLink {1, "routerLink"};
const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::networkLink {2, "networkLink"};
const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::summaryLink {3, "summaryLink"};
const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::asSummaryLink {4, "asSummaryLink"};
const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::multicastLink {6, "multicastLink"};
const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::nssaExternalLink {7, "nssaExternalLink"};
const Enum::YLeaf OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType::areaOpaqueLink {10, "areaOpaqueLink"};


}
}

