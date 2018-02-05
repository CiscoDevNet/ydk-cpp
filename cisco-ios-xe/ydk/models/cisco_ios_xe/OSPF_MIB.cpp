
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
    ospfgeneralgroup(std::make_shared<OSPFMIB::Ospfgeneralgroup>())
	,ospfareatable(std::make_shared<OSPFMIB::Ospfareatable>())
	,ospfstubareatable(std::make_shared<OSPFMIB::Ospfstubareatable>())
	,ospflsdbtable(std::make_shared<OSPFMIB::Ospflsdbtable>())
	,ospfarearangetable(std::make_shared<OSPFMIB::Ospfarearangetable>())
	,ospfhosttable(std::make_shared<OSPFMIB::Ospfhosttable>())
	,ospfiftable(std::make_shared<OSPFMIB::Ospfiftable>())
	,ospfifmetrictable(std::make_shared<OSPFMIB::Ospfifmetrictable>())
	,ospfvirtiftable(std::make_shared<OSPFMIB::Ospfvirtiftable>())
	,ospfnbrtable(std::make_shared<OSPFMIB::Ospfnbrtable>())
	,ospfvirtnbrtable(std::make_shared<OSPFMIB::Ospfvirtnbrtable>())
	,ospfextlsdbtable(std::make_shared<OSPFMIB::Ospfextlsdbtable>())
	,ospfareaaggregatetable(std::make_shared<OSPFMIB::Ospfareaaggregatetable>())
	,ospflocallsdbtable(std::make_shared<OSPFMIB::Ospflocallsdbtable>())
	,ospfvirtlocallsdbtable(std::make_shared<OSPFMIB::Ospfvirtlocallsdbtable>())
	,ospfaslsdbtable(std::make_shared<OSPFMIB::Ospfaslsdbtable>())
	,ospfarealsacounttable(std::make_shared<OSPFMIB::Ospfarealsacounttable>())
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
            ospfgeneralgroup = std::make_shared<OSPFMIB::Ospfgeneralgroup>();
        }
        return ospfgeneralgroup;
    }

    if(child_yang_name == "ospfAreaTable")
    {
        if(ospfareatable == nullptr)
        {
            ospfareatable = std::make_shared<OSPFMIB::Ospfareatable>();
        }
        return ospfareatable;
    }

    if(child_yang_name == "ospfStubAreaTable")
    {
        if(ospfstubareatable == nullptr)
        {
            ospfstubareatable = std::make_shared<OSPFMIB::Ospfstubareatable>();
        }
        return ospfstubareatable;
    }

    if(child_yang_name == "ospfLsdbTable")
    {
        if(ospflsdbtable == nullptr)
        {
            ospflsdbtable = std::make_shared<OSPFMIB::Ospflsdbtable>();
        }
        return ospflsdbtable;
    }

    if(child_yang_name == "ospfAreaRangeTable")
    {
        if(ospfarearangetable == nullptr)
        {
            ospfarearangetable = std::make_shared<OSPFMIB::Ospfarearangetable>();
        }
        return ospfarearangetable;
    }

    if(child_yang_name == "ospfHostTable")
    {
        if(ospfhosttable == nullptr)
        {
            ospfhosttable = std::make_shared<OSPFMIB::Ospfhosttable>();
        }
        return ospfhosttable;
    }

    if(child_yang_name == "ospfIfTable")
    {
        if(ospfiftable == nullptr)
        {
            ospfiftable = std::make_shared<OSPFMIB::Ospfiftable>();
        }
        return ospfiftable;
    }

    if(child_yang_name == "ospfIfMetricTable")
    {
        if(ospfifmetrictable == nullptr)
        {
            ospfifmetrictable = std::make_shared<OSPFMIB::Ospfifmetrictable>();
        }
        return ospfifmetrictable;
    }

    if(child_yang_name == "ospfVirtIfTable")
    {
        if(ospfvirtiftable == nullptr)
        {
            ospfvirtiftable = std::make_shared<OSPFMIB::Ospfvirtiftable>();
        }
        return ospfvirtiftable;
    }

    if(child_yang_name == "ospfNbrTable")
    {
        if(ospfnbrtable == nullptr)
        {
            ospfnbrtable = std::make_shared<OSPFMIB::Ospfnbrtable>();
        }
        return ospfnbrtable;
    }

    if(child_yang_name == "ospfVirtNbrTable")
    {
        if(ospfvirtnbrtable == nullptr)
        {
            ospfvirtnbrtable = std::make_shared<OSPFMIB::Ospfvirtnbrtable>();
        }
        return ospfvirtnbrtable;
    }

    if(child_yang_name == "ospfExtLsdbTable")
    {
        if(ospfextlsdbtable == nullptr)
        {
            ospfextlsdbtable = std::make_shared<OSPFMIB::Ospfextlsdbtable>();
        }
        return ospfextlsdbtable;
    }

    if(child_yang_name == "ospfAreaAggregateTable")
    {
        if(ospfareaaggregatetable == nullptr)
        {
            ospfareaaggregatetable = std::make_shared<OSPFMIB::Ospfareaaggregatetable>();
        }
        return ospfareaaggregatetable;
    }

    if(child_yang_name == "ospfLocalLsdbTable")
    {
        if(ospflocallsdbtable == nullptr)
        {
            ospflocallsdbtable = std::make_shared<OSPFMIB::Ospflocallsdbtable>();
        }
        return ospflocallsdbtable;
    }

    if(child_yang_name == "ospfVirtLocalLsdbTable")
    {
        if(ospfvirtlocallsdbtable == nullptr)
        {
            ospfvirtlocallsdbtable = std::make_shared<OSPFMIB::Ospfvirtlocallsdbtable>();
        }
        return ospfvirtlocallsdbtable;
    }

    if(child_yang_name == "ospfAsLsdbTable")
    {
        if(ospfaslsdbtable == nullptr)
        {
            ospfaslsdbtable = std::make_shared<OSPFMIB::Ospfaslsdbtable>();
        }
        return ospfaslsdbtable;
    }

    if(child_yang_name == "ospfAreaLsaCountTable")
    {
        if(ospfarealsacounttable == nullptr)
        {
            ospfarealsacounttable = std::make_shared<OSPFMIB::Ospfarealsacounttable>();
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

OSPFMIB::Ospfgeneralgroup::Ospfgeneralgroup()
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

OSPFMIB::Ospfgeneralgroup::~Ospfgeneralgroup()
{
}

bool OSPFMIB::Ospfgeneralgroup::has_data() const
{
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

bool OSPFMIB::Ospfgeneralgroup::has_operation() const
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

std::string OSPFMIB::Ospfgeneralgroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfgeneralgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfGeneralGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfgeneralgroup::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfgeneralgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfgeneralgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfgeneralgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfgeneralgroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfgeneralgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfRouterId" || name == "ospfAdminStat" || name == "ospfVersionNumber" || name == "ospfAreaBdrRtrStatus" || name == "ospfASBdrRtrStatus" || name == "ospfExternLsaCount" || name == "ospfExternLsaCksumSum" || name == "ospfTOSSupport" || name == "ospfOriginateNewLsas" || name == "ospfRxNewLsas" || name == "ospfExtLsdbLimit" || name == "ospfMulticastExtensions" || name == "ospfExitOverflowInterval" || name == "ospfDemandExtensions" || name == "ospfRFC1583Compatibility" || name == "ospfOpaqueLsaSupport" || name == "ospfReferenceBandwidth" || name == "ospfRestartSupport" || name == "ospfRestartInterval" || name == "ospfRestartStrictLsaChecking" || name == "ospfRestartStatus" || name == "ospfRestartAge" || name == "ospfRestartExitReason" || name == "ospfAsLsaCount" || name == "ospfAsLsaCksumSum" || name == "ospfStubRouterSupport" || name == "ospfStubRouterAdvertisement" || name == "ospfDiscontinuityTime")
        return true;
    return false;
}

OSPFMIB::Ospfareatable::Ospfareatable()
{

    yang_name = "ospfAreaTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfareatable::~Ospfareatable()
{
}

bool OSPFMIB::Ospfareatable::has_data() const
{
    for (std::size_t index=0; index<ospfareaentry.size(); index++)
    {
        if(ospfareaentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfareatable::has_operation() const
{
    for (std::size_t index=0; index<ospfareaentry.size(); index++)
    {
        if(ospfareaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfareatable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfareatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfareatable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfareatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfareatable::Ospfareaentry>();
        c->parent = this;
        ospfareaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfareatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfareaentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfareatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfareatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfareatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaEntry")
        return true;
    return false;
}

OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareaentry()
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

OSPFMIB::Ospfareatable::Ospfareaentry::~Ospfareaentry()
{
}

bool OSPFMIB::Ospfareatable::Ospfareaentry::has_data() const
{
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

bool OSPFMIB::Ospfareatable::Ospfareaentry::has_operation() const
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

std::string OSPFMIB::Ospfareatable::Ospfareaentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfareatable::Ospfareaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaEntry" <<"[ospfAreaId='" <<ospfareaid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfareatable::Ospfareaentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfareatable::Ospfareaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfareatable::Ospfareaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfareatable::Ospfareaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfareatable::Ospfareaentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfareatable::Ospfareaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaId" || name == "ospfAuthType" || name == "ospfImportAsExtern" || name == "ospfSpfRuns" || name == "ospfAreaBdrRtrCount" || name == "ospfAsBdrRtrCount" || name == "ospfAreaLsaCount" || name == "ospfAreaLsaCksumSum" || name == "ospfAreaSummary" || name == "ospfAreaStatus" || name == "ospfAreaNssaTranslatorRole" || name == "ospfAreaNssaTranslatorState" || name == "ospfAreaNssaTranslatorStabilityInterval" || name == "ospfAreaNssaTranslatorEvents" || name == "cospfOpaqueAreaLsaCount" || name == "cospfOpaqueAreaLsaCksumSum" || name == "cospfAreaNssaTranslatorRole" || name == "cospfAreaNssaTranslatorState" || name == "cospfAreaNssaTranslatorEvents")
        return true;
    return false;
}

OSPFMIB::Ospfstubareatable::Ospfstubareatable()
{

    yang_name = "ospfStubAreaTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfstubareatable::~Ospfstubareatable()
{
}

bool OSPFMIB::Ospfstubareatable::has_data() const
{
    for (std::size_t index=0; index<ospfstubareaentry.size(); index++)
    {
        if(ospfstubareaentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfstubareatable::has_operation() const
{
    for (std::size_t index=0; index<ospfstubareaentry.size(); index++)
    {
        if(ospfstubareaentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfstubareatable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfstubareatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfStubAreaTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfstubareatable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfstubareatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfStubAreaEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfstubareatable::Ospfstubareaentry>();
        c->parent = this;
        ospfstubareaentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfstubareatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfstubareaentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfstubareatable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfstubareatable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfstubareatable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfStubAreaEntry")
        return true;
    return false;
}

OSPFMIB::Ospfstubareatable::Ospfstubareaentry::Ospfstubareaentry()
    :
    ospfstubareaid{YType::str, "ospfStubAreaId"},
    ospfstubtos{YType::int32, "ospfStubTOS"},
    ospfstubmetric{YType::int32, "ospfStubMetric"},
    ospfstubstatus{YType::enumeration, "ospfStubStatus"},
    ospfstubmetrictype{YType::enumeration, "ospfStubMetricType"}
{

    yang_name = "ospfStubAreaEntry"; yang_parent_name = "ospfStubAreaTable"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfstubareatable::Ospfstubareaentry::~Ospfstubareaentry()
{
}

bool OSPFMIB::Ospfstubareatable::Ospfstubareaentry::has_data() const
{
    return ospfstubareaid.is_set
	|| ospfstubtos.is_set
	|| ospfstubmetric.is_set
	|| ospfstubstatus.is_set
	|| ospfstubmetrictype.is_set;
}

bool OSPFMIB::Ospfstubareatable::Ospfstubareaentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfstubareaid.yfilter)
	|| ydk::is_set(ospfstubtos.yfilter)
	|| ydk::is_set(ospfstubmetric.yfilter)
	|| ydk::is_set(ospfstubstatus.yfilter)
	|| ydk::is_set(ospfstubmetrictype.yfilter);
}

std::string OSPFMIB::Ospfstubareatable::Ospfstubareaentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfStubAreaTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfstubareatable::Ospfstubareaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfStubAreaEntry" <<"[ospfStubAreaId='" <<ospfstubareaid <<"']" <<"[ospfStubTOS='" <<ospfstubtos <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfstubareatable::Ospfstubareaentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfstubareaid.is_set || is_set(ospfstubareaid.yfilter)) leaf_name_data.push_back(ospfstubareaid.get_name_leafdata());
    if (ospfstubtos.is_set || is_set(ospfstubtos.yfilter)) leaf_name_data.push_back(ospfstubtos.get_name_leafdata());
    if (ospfstubmetric.is_set || is_set(ospfstubmetric.yfilter)) leaf_name_data.push_back(ospfstubmetric.get_name_leafdata());
    if (ospfstubstatus.is_set || is_set(ospfstubstatus.yfilter)) leaf_name_data.push_back(ospfstubstatus.get_name_leafdata());
    if (ospfstubmetrictype.is_set || is_set(ospfstubmetrictype.yfilter)) leaf_name_data.push_back(ospfstubmetrictype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfstubareatable::Ospfstubareaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfstubareatable::Ospfstubareaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfstubareatable::Ospfstubareaentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfstubareatable::Ospfstubareaentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfstubareatable::Ospfstubareaentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfStubAreaId" || name == "ospfStubTOS" || name == "ospfStubMetric" || name == "ospfStubStatus" || name == "ospfStubMetricType")
        return true;
    return false;
}

OSPFMIB::Ospflsdbtable::Ospflsdbtable()
{

    yang_name = "ospfLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospflsdbtable::~Ospflsdbtable()
{
}

bool OSPFMIB::Ospflsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospflsdbentry.size(); index++)
    {
        if(ospflsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospflsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospflsdbentry.size(); index++)
    {
        if(ospflsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospflsdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospflsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospflsdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospflsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospflsdbtable::Ospflsdbentry>();
        c->parent = this;
        ospflsdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospflsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospflsdbentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospflsdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospflsdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospflsdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLsdbEntry")
        return true;
    return false;
}

OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbentry()
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

OSPFMIB::Ospflsdbtable::Ospflsdbentry::~Ospflsdbentry()
{
}

bool OSPFMIB::Ospflsdbtable::Ospflsdbentry::has_data() const
{
    return ospflsdbareaid.is_set
	|| ospflsdbtype.is_set
	|| ospflsdblsid.is_set
	|| ospflsdbrouterid.is_set
	|| ospflsdbsequence.is_set
	|| ospflsdbage.is_set
	|| ospflsdbchecksum.is_set
	|| ospflsdbadvertisement.is_set;
}

bool OSPFMIB::Ospflsdbtable::Ospflsdbentry::has_operation() const
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

std::string OSPFMIB::Ospflsdbtable::Ospflsdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospflsdbtable::Ospflsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLsdbEntry" <<"[ospfLsdbAreaId='" <<ospflsdbareaid <<"']" <<"[ospfLsdbType='" <<ospflsdbtype <<"']" <<"[ospfLsdbLsid='" <<ospflsdblsid <<"']" <<"[ospfLsdbRouterId='" <<ospflsdbrouterid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospflsdbtable::Ospflsdbentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospflsdbtable::Ospflsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospflsdbtable::Ospflsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospflsdbtable::Ospflsdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospflsdbtable::Ospflsdbentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospflsdbtable::Ospflsdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLsdbAreaId" || name == "ospfLsdbType" || name == "ospfLsdbLsid" || name == "ospfLsdbRouterId" || name == "ospfLsdbSequence" || name == "ospfLsdbAge" || name == "ospfLsdbChecksum" || name == "ospfLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::Ospfarearangetable::Ospfarearangetable()
{

    yang_name = "ospfAreaRangeTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfarearangetable::~Ospfarearangetable()
{
}

bool OSPFMIB::Ospfarearangetable::has_data() const
{
    for (std::size_t index=0; index<ospfarearangeentry.size(); index++)
    {
        if(ospfarearangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfarearangetable::has_operation() const
{
    for (std::size_t index=0; index<ospfarearangeentry.size(); index++)
    {
        if(ospfarearangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfarearangetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfarearangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfarearangetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfarearangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaRangeEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfarearangetable::Ospfarearangeentry>();
        c->parent = this;
        ospfarearangeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfarearangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfarearangeentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfarearangetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfarearangetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfarearangetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaRangeEntry")
        return true;
    return false;
}

OSPFMIB::Ospfarearangetable::Ospfarearangeentry::Ospfarearangeentry()
    :
    ospfarearangeareaid{YType::str, "ospfAreaRangeAreaId"},
    ospfarearangenet{YType::str, "ospfAreaRangeNet"},
    ospfarearangemask{YType::str, "ospfAreaRangeMask"},
    ospfarearangestatus{YType::enumeration, "ospfAreaRangeStatus"},
    ospfarearangeeffect{YType::enumeration, "ospfAreaRangeEffect"}
{

    yang_name = "ospfAreaRangeEntry"; yang_parent_name = "ospfAreaRangeTable"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfarearangetable::Ospfarearangeentry::~Ospfarearangeentry()
{
}

bool OSPFMIB::Ospfarearangetable::Ospfarearangeentry::has_data() const
{
    return ospfarearangeareaid.is_set
	|| ospfarearangenet.is_set
	|| ospfarearangemask.is_set
	|| ospfarearangestatus.is_set
	|| ospfarearangeeffect.is_set;
}

bool OSPFMIB::Ospfarearangetable::Ospfarearangeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfarearangeareaid.yfilter)
	|| ydk::is_set(ospfarearangenet.yfilter)
	|| ydk::is_set(ospfarearangemask.yfilter)
	|| ydk::is_set(ospfarearangestatus.yfilter)
	|| ydk::is_set(ospfarearangeeffect.yfilter);
}

std::string OSPFMIB::Ospfarearangetable::Ospfarearangeentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfarearangetable::Ospfarearangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaRangeEntry" <<"[ospfAreaRangeAreaId='" <<ospfarearangeareaid <<"']" <<"[ospfAreaRangeNet='" <<ospfarearangenet <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfarearangetable::Ospfarearangeentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfarearangeareaid.is_set || is_set(ospfarearangeareaid.yfilter)) leaf_name_data.push_back(ospfarearangeareaid.get_name_leafdata());
    if (ospfarearangenet.is_set || is_set(ospfarearangenet.yfilter)) leaf_name_data.push_back(ospfarearangenet.get_name_leafdata());
    if (ospfarearangemask.is_set || is_set(ospfarearangemask.yfilter)) leaf_name_data.push_back(ospfarearangemask.get_name_leafdata());
    if (ospfarearangestatus.is_set || is_set(ospfarearangestatus.yfilter)) leaf_name_data.push_back(ospfarearangestatus.get_name_leafdata());
    if (ospfarearangeeffect.is_set || is_set(ospfarearangeeffect.yfilter)) leaf_name_data.push_back(ospfarearangeeffect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfarearangetable::Ospfarearangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfarearangetable::Ospfarearangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfarearangetable::Ospfarearangeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfarearangetable::Ospfarearangeentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfarearangetable::Ospfarearangeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaRangeAreaId" || name == "ospfAreaRangeNet" || name == "ospfAreaRangeMask" || name == "ospfAreaRangeStatus" || name == "ospfAreaRangeEffect")
        return true;
    return false;
}

OSPFMIB::Ospfhosttable::Ospfhosttable()
{

    yang_name = "ospfHostTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfhosttable::~Ospfhosttable()
{
}

bool OSPFMIB::Ospfhosttable::has_data() const
{
    for (std::size_t index=0; index<ospfhostentry.size(); index++)
    {
        if(ospfhostentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfhosttable::has_operation() const
{
    for (std::size_t index=0; index<ospfhostentry.size(); index++)
    {
        if(ospfhostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfhosttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfhosttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfHostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfhosttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfhosttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfHostEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfhosttable::Ospfhostentry>();
        c->parent = this;
        ospfhostentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfhosttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfhostentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfhosttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfhosttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfhosttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfHostEntry")
        return true;
    return false;
}

OSPFMIB::Ospfhosttable::Ospfhostentry::Ospfhostentry()
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

OSPFMIB::Ospfhosttable::Ospfhostentry::~Ospfhostentry()
{
}

bool OSPFMIB::Ospfhosttable::Ospfhostentry::has_data() const
{
    return ospfhostipaddress.is_set
	|| ospfhosttos.is_set
	|| ospfhostmetric.is_set
	|| ospfhoststatus.is_set
	|| ospfhostareaid.is_set
	|| ospfhostcfgareaid.is_set;
}

bool OSPFMIB::Ospfhosttable::Ospfhostentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfhostipaddress.yfilter)
	|| ydk::is_set(ospfhosttos.yfilter)
	|| ydk::is_set(ospfhostmetric.yfilter)
	|| ydk::is_set(ospfhoststatus.yfilter)
	|| ydk::is_set(ospfhostareaid.yfilter)
	|| ydk::is_set(ospfhostcfgareaid.yfilter);
}

std::string OSPFMIB::Ospfhosttable::Ospfhostentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfHostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfhosttable::Ospfhostentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfHostEntry" <<"[ospfHostIpAddress='" <<ospfhostipaddress <<"']" <<"[ospfHostTOS='" <<ospfhosttos <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfhosttable::Ospfhostentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfhosttable::Ospfhostentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfhosttable::Ospfhostentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfhosttable::Ospfhostentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfhosttable::Ospfhostentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfhosttable::Ospfhostentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfHostIpAddress" || name == "ospfHostTOS" || name == "ospfHostMetric" || name == "ospfHostStatus" || name == "ospfHostAreaID" || name == "ospfHostCfgAreaID")
        return true;
    return false;
}

OSPFMIB::Ospfiftable::Ospfiftable()
{

    yang_name = "ospfIfTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfiftable::~Ospfiftable()
{
}

bool OSPFMIB::Ospfiftable::has_data() const
{
    for (std::size_t index=0; index<ospfifentry.size(); index++)
    {
        if(ospfifentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfiftable::has_operation() const
{
    for (std::size_t index=0; index<ospfifentry.size(); index++)
    {
        if(ospfifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfiftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfiftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfIfEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfiftable::Ospfifentry>();
        c->parent = this;
        ospfifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfifentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfEntry")
        return true;
    return false;
}

OSPFMIB::Ospfiftable::Ospfifentry::Ospfifentry()
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

OSPFMIB::Ospfiftable::Ospfifentry::~Ospfifentry()
{
}

bool OSPFMIB::Ospfiftable::Ospfifentry::has_data() const
{
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

bool OSPFMIB::Ospfiftable::Ospfifentry::has_operation() const
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

std::string OSPFMIB::Ospfiftable::Ospfifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfiftable::Ospfifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfEntry" <<"[ospfIfIpAddress='" <<ospfifipaddress <<"']" <<"[ospfAddressLessIf='" <<ospfaddresslessif <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfiftable::Ospfifentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfiftable::Ospfifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfiftable::Ospfifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfiftable::Ospfifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfiftable::Ospfifentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfiftable::Ospfifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfIpAddress" || name == "ospfAddressLessIf" || name == "ospfIfAreaId" || name == "ospfIfType" || name == "ospfIfAdminStat" || name == "ospfIfRtrPriority" || name == "ospfIfTransitDelay" || name == "ospfIfRetransInterval" || name == "ospfIfHelloInterval" || name == "ospfIfRtrDeadInterval" || name == "ospfIfPollInterval" || name == "ospfIfState" || name == "ospfIfDesignatedRouter" || name == "ospfIfBackupDesignatedRouter" || name == "ospfIfEvents" || name == "ospfIfAuthKey" || name == "ospfIfStatus" || name == "ospfIfMulticastForwarding" || name == "ospfIfDemand" || name == "ospfIfAuthType" || name == "ospfIfLsaCount" || name == "ospfIfLsaCksumSum" || name == "ospfIfDesignatedRouterId" || name == "ospfIfBackupDesignatedRouterId" || name == "cospfIfLsaCount" || name == "cospfIfLsaCksumSum")
        return true;
    return false;
}

OSPFMIB::Ospfifmetrictable::Ospfifmetrictable()
{

    yang_name = "ospfIfMetricTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfifmetrictable::~Ospfifmetrictable()
{
}

bool OSPFMIB::Ospfifmetrictable::has_data() const
{
    for (std::size_t index=0; index<ospfifmetricentry.size(); index++)
    {
        if(ospfifmetricentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfifmetrictable::has_operation() const
{
    for (std::size_t index=0; index<ospfifmetricentry.size(); index++)
    {
        if(ospfifmetricentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfifmetrictable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfifmetrictable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfMetricTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfifmetrictable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfifmetrictable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfIfMetricEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfifmetrictable::Ospfifmetricentry>();
        c->parent = this;
        ospfifmetricentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfifmetrictable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfifmetricentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfifmetrictable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfifmetrictable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfifmetrictable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfMetricEntry")
        return true;
    return false;
}

OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::Ospfifmetricentry()
    :
    ospfifmetricipaddress{YType::str, "ospfIfMetricIpAddress"},
    ospfifmetricaddresslessif{YType::int32, "ospfIfMetricAddressLessIf"},
    ospfifmetrictos{YType::int32, "ospfIfMetricTOS"},
    ospfifmetricvalue{YType::int32, "ospfIfMetricValue"},
    ospfifmetricstatus{YType::enumeration, "ospfIfMetricStatus"}
{

    yang_name = "ospfIfMetricEntry"; yang_parent_name = "ospfIfMetricTable"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::~Ospfifmetricentry()
{
}

bool OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::has_data() const
{
    return ospfifmetricipaddress.is_set
	|| ospfifmetricaddresslessif.is_set
	|| ospfifmetrictos.is_set
	|| ospfifmetricvalue.is_set
	|| ospfifmetricstatus.is_set;
}

bool OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfifmetricipaddress.yfilter)
	|| ydk::is_set(ospfifmetricaddresslessif.yfilter)
	|| ydk::is_set(ospfifmetrictos.yfilter)
	|| ydk::is_set(ospfifmetricvalue.yfilter)
	|| ydk::is_set(ospfifmetricstatus.yfilter);
}

std::string OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfIfMetricTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfMetricEntry" <<"[ospfIfMetricIpAddress='" <<ospfifmetricipaddress <<"']" <<"[ospfIfMetricAddressLessIf='" <<ospfifmetricaddresslessif <<"']" <<"[ospfIfMetricTOS='" <<ospfifmetrictos <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfifmetricipaddress.is_set || is_set(ospfifmetricipaddress.yfilter)) leaf_name_data.push_back(ospfifmetricipaddress.get_name_leafdata());
    if (ospfifmetricaddresslessif.is_set || is_set(ospfifmetricaddresslessif.yfilter)) leaf_name_data.push_back(ospfifmetricaddresslessif.get_name_leafdata());
    if (ospfifmetrictos.is_set || is_set(ospfifmetrictos.yfilter)) leaf_name_data.push_back(ospfifmetrictos.get_name_leafdata());
    if (ospfifmetricvalue.is_set || is_set(ospfifmetricvalue.yfilter)) leaf_name_data.push_back(ospfifmetricvalue.get_name_leafdata());
    if (ospfifmetricstatus.is_set || is_set(ospfifmetricstatus.yfilter)) leaf_name_data.push_back(ospfifmetricstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfifmetrictable::Ospfifmetricentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfIfMetricIpAddress" || name == "ospfIfMetricAddressLessIf" || name == "ospfIfMetricTOS" || name == "ospfIfMetricValue" || name == "ospfIfMetricStatus")
        return true;
    return false;
}

OSPFMIB::Ospfvirtiftable::Ospfvirtiftable()
{

    yang_name = "ospfVirtIfTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfvirtiftable::~Ospfvirtiftable()
{
}

bool OSPFMIB::Ospfvirtiftable::has_data() const
{
    for (std::size_t index=0; index<ospfvirtifentry.size(); index++)
    {
        if(ospfvirtifentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfvirtiftable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtifentry.size(); index++)
    {
        if(ospfvirtifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfvirtiftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfvirtiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfvirtiftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfvirtiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtIfEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfvirtiftable::Ospfvirtifentry>();
        c->parent = this;
        ospfvirtifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfvirtiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfvirtifentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfvirtiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfvirtiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfvirtiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtIfEntry")
        return true;
    return false;
}

OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::Ospfvirtifentry()
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

OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::~Ospfvirtifentry()
{
}

bool OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::has_data() const
{
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

bool OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::has_operation() const
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

std::string OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtIfEntry" <<"[ospfVirtIfAreaId='" <<ospfvirtifareaid <<"']" <<"[ospfVirtIfNeighbor='" <<ospfvirtifneighbor <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtIfAreaId" || name == "ospfVirtIfNeighbor" || name == "ospfVirtIfTransitDelay" || name == "ospfVirtIfRetransInterval" || name == "ospfVirtIfHelloInterval" || name == "ospfVirtIfRtrDeadInterval" || name == "ospfVirtIfState" || name == "ospfVirtIfEvents" || name == "ospfVirtIfAuthKey" || name == "ospfVirtIfStatus" || name == "ospfVirtIfAuthType" || name == "ospfVirtIfLsaCount" || name == "ospfVirtIfLsaCksumSum" || name == "cospfVirtIfLsaCount" || name == "cospfVirtIfLsaCksumSum")
        return true;
    return false;
}

OSPFMIB::Ospfnbrtable::Ospfnbrtable()
{

    yang_name = "ospfNbrTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfnbrtable::~Ospfnbrtable()
{
}

bool OSPFMIB::Ospfnbrtable::has_data() const
{
    for (std::size_t index=0; index<ospfnbrentry.size(); index++)
    {
        if(ospfnbrentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfnbrtable::has_operation() const
{
    for (std::size_t index=0; index<ospfnbrentry.size(); index++)
    {
        if(ospfnbrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfnbrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfnbrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfNbrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfnbrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfnbrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfNbrEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfnbrtable::Ospfnbrentry>();
        c->parent = this;
        ospfnbrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfnbrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfnbrentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfnbrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfnbrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfnbrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfNbrEntry")
        return true;
    return false;
}

OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrentry()
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

OSPFMIB::Ospfnbrtable::Ospfnbrentry::~Ospfnbrentry()
{
}

bool OSPFMIB::Ospfnbrtable::Ospfnbrentry::has_data() const
{
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

bool OSPFMIB::Ospfnbrtable::Ospfnbrentry::has_operation() const
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

std::string OSPFMIB::Ospfnbrtable::Ospfnbrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfNbrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfnbrtable::Ospfnbrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfNbrEntry" <<"[ospfNbrIpAddr='" <<ospfnbripaddr <<"']" <<"[ospfNbrAddressLessIndex='" <<ospfnbraddresslessindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfnbrtable::Ospfnbrentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfnbrtable::Ospfnbrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfnbrtable::Ospfnbrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfnbrtable::Ospfnbrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfnbrtable::Ospfnbrentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfnbrtable::Ospfnbrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfNbrIpAddr" || name == "ospfNbrAddressLessIndex" || name == "ospfNbrRtrId" || name == "ospfNbrOptions" || name == "ospfNbrPriority" || name == "ospfNbrState" || name == "ospfNbrEvents" || name == "ospfNbrLsRetransQLen" || name == "ospfNbmaNbrStatus" || name == "ospfNbmaNbrPermanence" || name == "ospfNbrHelloSuppressed" || name == "ospfNbrRestartHelperStatus" || name == "ospfNbrRestartHelperAge" || name == "ospfNbrRestartHelperExitReason")
        return true;
    return false;
}

OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrtable()
{

    yang_name = "ospfVirtNbrTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfvirtnbrtable::~Ospfvirtnbrtable()
{
}

bool OSPFMIB::Ospfvirtnbrtable::has_data() const
{
    for (std::size_t index=0; index<ospfvirtnbrentry.size(); index++)
    {
        if(ospfvirtnbrentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfvirtnbrtable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtnbrentry.size(); index++)
    {
        if(ospfvirtnbrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfvirtnbrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfvirtnbrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtNbrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfvirtnbrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfvirtnbrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtNbrEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry>();
        c->parent = this;
        ospfvirtnbrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfvirtnbrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfvirtnbrentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfvirtnbrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfvirtnbrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfvirtnbrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtNbrEntry")
        return true;
    return false;
}

OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrentry()
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

OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::~Ospfvirtnbrentry()
{
}

bool OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::has_data() const
{
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

bool OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::has_operation() const
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

std::string OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtNbrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtNbrEntry" <<"[ospfVirtNbrArea='" <<ospfvirtnbrarea <<"']" <<"[ospfVirtNbrRtrId='" <<ospfvirtnbrrtrid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtNbrArea" || name == "ospfVirtNbrRtrId" || name == "ospfVirtNbrIpAddr" || name == "ospfVirtNbrOptions" || name == "ospfVirtNbrState" || name == "ospfVirtNbrEvents" || name == "ospfVirtNbrLsRetransQLen" || name == "ospfVirtNbrHelloSuppressed" || name == "ospfVirtNbrRestartHelperStatus" || name == "ospfVirtNbrRestartHelperAge" || name == "ospfVirtNbrRestartHelperExitReason")
        return true;
    return false;
}

OSPFMIB::Ospfextlsdbtable::Ospfextlsdbtable()
{

    yang_name = "ospfExtLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfextlsdbtable::~Ospfextlsdbtable()
{
}

bool OSPFMIB::Ospfextlsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospfextlsdbentry.size(); index++)
    {
        if(ospfextlsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfextlsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospfextlsdbentry.size(); index++)
    {
        if(ospfextlsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfextlsdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfextlsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfExtLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfextlsdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfextlsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfExtLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry>();
        c->parent = this;
        ospfextlsdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfextlsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfextlsdbentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfextlsdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfextlsdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfextlsdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfExtLsdbEntry")
        return true;
    return false;
}

OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::Ospfextlsdbentry()
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

OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::~Ospfextlsdbentry()
{
}

bool OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::has_data() const
{
    return ospfextlsdbtype.is_set
	|| ospfextlsdblsid.is_set
	|| ospfextlsdbrouterid.is_set
	|| ospfextlsdbsequence.is_set
	|| ospfextlsdbage.is_set
	|| ospfextlsdbchecksum.is_set
	|| ospfextlsdbadvertisement.is_set;
}

bool OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::has_operation() const
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

std::string OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfExtLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfExtLsdbEntry" <<"[ospfExtLsdbType='" <<ospfextlsdbtype <<"']" <<"[ospfExtLsdbLsid='" <<ospfextlsdblsid <<"']" <<"[ospfExtLsdbRouterId='" <<ospfextlsdbrouterid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfExtLsdbType" || name == "ospfExtLsdbLsid" || name == "ospfExtLsdbRouterId" || name == "ospfExtLsdbSequence" || name == "ospfExtLsdbAge" || name == "ospfExtLsdbChecksum" || name == "ospfExtLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregatetable()
{

    yang_name = "ospfAreaAggregateTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfareaaggregatetable::~Ospfareaaggregatetable()
{
}

bool OSPFMIB::Ospfareaaggregatetable::has_data() const
{
    for (std::size_t index=0; index<ospfareaaggregateentry.size(); index++)
    {
        if(ospfareaaggregateentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfareaaggregatetable::has_operation() const
{
    for (std::size_t index=0; index<ospfareaaggregateentry.size(); index++)
    {
        if(ospfareaaggregateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfareaaggregatetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfareaaggregatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaAggregateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfareaaggregatetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfareaaggregatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaAggregateEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry>();
        c->parent = this;
        ospfareaaggregateentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfareaaggregatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfareaaggregateentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfareaaggregatetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfareaaggregatetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfareaaggregatetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaAggregateEntry")
        return true;
    return false;
}

OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregateentry()
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

OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::~Ospfareaaggregateentry()
{
}

bool OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::has_data() const
{
    return ospfareaaggregateareaid.is_set
	|| ospfareaaggregatelsdbtype.is_set
	|| ospfareaaggregatenet.is_set
	|| ospfareaaggregatemask.is_set
	|| ospfareaaggregatestatus.is_set
	|| ospfareaaggregateeffect.is_set
	|| ospfareaaggregateextroutetag.is_set;
}

bool OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::has_operation() const
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

std::string OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaAggregateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaAggregateEntry" <<"[ospfAreaAggregateAreaID='" <<ospfareaaggregateareaid <<"']" <<"[ospfAreaAggregateLsdbType='" <<ospfareaaggregatelsdbtype <<"']" <<"[ospfAreaAggregateNet='" <<ospfareaaggregatenet <<"']" <<"[ospfAreaAggregateMask='" <<ospfareaaggregatemask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaAggregateAreaID" || name == "ospfAreaAggregateLsdbType" || name == "ospfAreaAggregateNet" || name == "ospfAreaAggregateMask" || name == "ospfAreaAggregateStatus" || name == "ospfAreaAggregateEffect" || name == "ospfAreaAggregateExtRouteTag")
        return true;
    return false;
}

OSPFMIB::Ospflocallsdbtable::Ospflocallsdbtable()
{

    yang_name = "ospfLocalLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospflocallsdbtable::~Ospflocallsdbtable()
{
}

bool OSPFMIB::Ospflocallsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospflocallsdbentry.size(); index++)
    {
        if(ospflocallsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospflocallsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospflocallsdbentry.size(); index++)
    {
        if(ospflocallsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospflocallsdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospflocallsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLocalLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospflocallsdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospflocallsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfLocalLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry>();
        c->parent = this;
        ospflocallsdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospflocallsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospflocallsdbentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospflocallsdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospflocallsdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospflocallsdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLocalLsdbEntry")
        return true;
    return false;
}

OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::Ospflocallsdbentry()
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

OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::~Ospflocallsdbentry()
{
}

bool OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::has_data() const
{
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

bool OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::has_operation() const
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

std::string OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfLocalLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLocalLsdbEntry" <<"[ospfLocalLsdbIpAddress='" <<ospflocallsdbipaddress <<"']" <<"[ospfLocalLsdbAddressLessIf='" <<ospflocallsdbaddresslessif <<"']" <<"[ospfLocalLsdbType='" <<ospflocallsdbtype <<"']" <<"[ospfLocalLsdbLsid='" <<ospflocallsdblsid <<"']" <<"[ospfLocalLsdbRouterId='" <<ospflocallsdbrouterid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfLocalLsdbIpAddress" || name == "ospfLocalLsdbAddressLessIf" || name == "ospfLocalLsdbType" || name == "ospfLocalLsdbLsid" || name == "ospfLocalLsdbRouterId" || name == "ospfLocalLsdbSequence" || name == "ospfLocalLsdbAge" || name == "ospfLocalLsdbChecksum" || name == "ospfLocalLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbtable()
{

    yang_name = "ospfVirtLocalLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfvirtlocallsdbtable::~Ospfvirtlocallsdbtable()
{
}

bool OSPFMIB::Ospfvirtlocallsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospfvirtlocallsdbentry.size(); index++)
    {
        if(ospfvirtlocallsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfvirtlocallsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtlocallsdbentry.size(); index++)
    {
        if(ospfvirtlocallsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfvirtlocallsdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfvirtlocallsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtLocalLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfvirtlocallsdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfvirtlocallsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtLocalLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry>();
        c->parent = this;
        ospfvirtlocallsdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfvirtlocallsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfvirtlocallsdbentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfvirtlocallsdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfvirtlocallsdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfvirtlocallsdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtLocalLsdbEntry")
        return true;
    return false;
}

OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::Ospfvirtlocallsdbentry()
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

OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::~Ospfvirtlocallsdbentry()
{
}

bool OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::has_data() const
{
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

bool OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::has_operation() const
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

std::string OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtLocalLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtLocalLsdbEntry" <<"[ospfVirtLocalLsdbTransitArea='" <<ospfvirtlocallsdbtransitarea <<"']" <<"[ospfVirtLocalLsdbNeighbor='" <<ospfvirtlocallsdbneighbor <<"']" <<"[ospfVirtLocalLsdbType='" <<ospfvirtlocallsdbtype <<"']" <<"[ospfVirtLocalLsdbLsid='" <<ospfvirtlocallsdblsid <<"']" <<"[ospfVirtLocalLsdbRouterId='" <<ospfvirtlocallsdbrouterid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfVirtLocalLsdbTransitArea" || name == "ospfVirtLocalLsdbNeighbor" || name == "ospfVirtLocalLsdbType" || name == "ospfVirtLocalLsdbLsid" || name == "ospfVirtLocalLsdbRouterId" || name == "ospfVirtLocalLsdbSequence" || name == "ospfVirtLocalLsdbAge" || name == "ospfVirtLocalLsdbChecksum" || name == "ospfVirtLocalLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::Ospfaslsdbtable::Ospfaslsdbtable()
{

    yang_name = "ospfAsLsdbTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfaslsdbtable::~Ospfaslsdbtable()
{
}

bool OSPFMIB::Ospfaslsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospfaslsdbentry.size(); index++)
    {
        if(ospfaslsdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfaslsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospfaslsdbentry.size(); index++)
    {
        if(ospfaslsdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfaslsdbtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfaslsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAsLsdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfaslsdbtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfaslsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAsLsdbEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry>();
        c->parent = this;
        ospfaslsdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfaslsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfaslsdbentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfaslsdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfaslsdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfaslsdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAsLsdbEntry")
        return true;
    return false;
}

OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::Ospfaslsdbentry()
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

OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::~Ospfaslsdbentry()
{
}

bool OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::has_data() const
{
    return ospfaslsdbtype.is_set
	|| ospfaslsdblsid.is_set
	|| ospfaslsdbrouterid.is_set
	|| ospfaslsdbsequence.is_set
	|| ospfaslsdbage.is_set
	|| ospfaslsdbchecksum.is_set
	|| ospfaslsdbadvertisement.is_set;
}

bool OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::has_operation() const
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

std::string OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAsLsdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAsLsdbEntry" <<"[ospfAsLsdbType='" <<ospfaslsdbtype <<"']" <<"[ospfAsLsdbLsid='" <<ospfaslsdblsid <<"']" <<"[ospfAsLsdbRouterId='" <<ospfaslsdbrouterid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAsLsdbType" || name == "ospfAsLsdbLsid" || name == "ospfAsLsdbRouterId" || name == "ospfAsLsdbSequence" || name == "ospfAsLsdbAge" || name == "ospfAsLsdbChecksum" || name == "ospfAsLsdbAdvertisement")
        return true;
    return false;
}

OSPFMIB::Ospfarealsacounttable::Ospfarealsacounttable()
{

    yang_name = "ospfAreaLsaCountTable"; yang_parent_name = "OSPF-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfarealsacounttable::~Ospfarealsacounttable()
{
}

bool OSPFMIB::Ospfarealsacounttable::has_data() const
{
    for (std::size_t index=0; index<ospfarealsacountentry.size(); index++)
    {
        if(ospfarealsacountentry[index]->has_data())
            return true;
    }
    return false;
}

bool OSPFMIB::Ospfarealsacounttable::has_operation() const
{
    for (std::size_t index=0; index<ospfarealsacountentry.size(); index++)
    {
        if(ospfarealsacountentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OSPFMIB::Ospfarealsacounttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfarealsacounttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaLsaCountTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfarealsacounttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfarealsacounttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaLsaCountEntry")
    {
        auto c = std::make_shared<OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry>();
        c->parent = this;
        ospfarealsacountentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfarealsacounttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ospfarealsacountentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OSPFMIB::Ospfarealsacounttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OSPFMIB::Ospfarealsacounttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OSPFMIB::Ospfarealsacounttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfAreaLsaCountEntry")
        return true;
    return false;
}

OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountentry()
    :
    ospfarealsacountareaid{YType::str, "ospfAreaLsaCountAreaId"},
    ospfarealsacountlsatype{YType::enumeration, "ospfAreaLsaCountLsaType"},
    ospfarealsacountnumber{YType::uint32, "ospfAreaLsaCountNumber"}
{

    yang_name = "ospfAreaLsaCountEntry"; yang_parent_name = "ospfAreaLsaCountTable"; is_top_level_class = false; has_list_ancestor = false;
}

OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::~Ospfarealsacountentry()
{
}

bool OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::has_data() const
{
    return ospfarealsacountareaid.is_set
	|| ospfarealsacountlsatype.is_set
	|| ospfarealsacountnumber.is_set;
}

bool OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospfarealsacountareaid.yfilter)
	|| ydk::is_set(ospfarealsacountlsatype.yfilter)
	|| ydk::is_set(ospfarealsacountnumber.yfilter);
}

std::string OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaLsaCountTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaLsaCountEntry" <<"[ospfAreaLsaCountAreaId='" <<ospfarealsacountareaid <<"']" <<"[ospfAreaLsaCountLsaType='" <<ospfarealsacountlsatype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfarealsacountareaid.is_set || is_set(ospfarealsacountareaid.yfilter)) leaf_name_data.push_back(ospfarealsacountareaid.get_name_leafdata());
    if (ospfarealsacountlsatype.is_set || is_set(ospfarealsacountlsatype.yfilter)) leaf_name_data.push_back(ospfarealsacountlsatype.get_name_leafdata());
    if (ospfarealsacountnumber.is_set || is_set(ospfarealsacountnumber.yfilter)) leaf_name_data.push_back(ospfarealsacountnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::has_leaf_or_child_of_name(const std::string & name) const
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

const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfversionnumber::version2 {2, "version2"};

const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartsupport::none {1, "none"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartsupport::plannedOnly {2, "plannedOnly"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartsupport::plannedAndUnplanned {3, "plannedAndUnplanned"};

const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartstatus::notRestarting {1, "notRestarting"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartstatus::plannedRestart {2, "plannedRestart"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartstatus::unplannedRestart {3, "unplannedRestart"};

const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartexitreason::none {1, "none"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartexitreason::inProgress {2, "inProgress"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartexitreason::completed {3, "completed"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartexitreason::timedOut {4, "timedOut"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfrestartexitreason::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfstubrouteradvertisement::doNotAdvertise {1, "doNotAdvertise"};
const Enum::YLeaf OSPFMIB::Ospfgeneralgroup::Ospfstubrouteradvertisement::advertise {2, "advertise"};

const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfimportasextern::importExternal {1, "importExternal"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfimportasextern::importNoExternal {2, "importNoExternal"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfimportasextern::importNssa {3, "importNssa"};

const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareasummary::noAreaSummary {1, "noAreaSummary"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareasummary::sendAreaSummary {2, "sendAreaSummary"};

const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorrole::always {1, "always"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorrole::candidate {2, "candidate"};

const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorstate::enabled {1, "enabled"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorstate::elected {2, "elected"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorstate::disabled {3, "disabled"};

const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorrole::always {1, "always"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorrole::candidate {2, "candidate"};

const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorstate::enabled {1, "enabled"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorstate::elected {2, "elected"};
const Enum::YLeaf OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorstate::disabled {3, "disabled"};

const Enum::YLeaf OSPFMIB::Ospfstubareatable::Ospfstubareaentry::Ospfstubmetrictype::ospfMetric {1, "ospfMetric"};
const Enum::YLeaf OSPFMIB::Ospfstubareatable::Ospfstubareaentry::Ospfstubmetrictype::comparableCost {2, "comparableCost"};
const Enum::YLeaf OSPFMIB::Ospfstubareatable::Ospfstubareaentry::Ospfstubmetrictype::nonComparable {3, "nonComparable"};

const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::routerLink {1, "routerLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::networkLink {2, "networkLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::summaryLink {3, "summaryLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::asSummaryLink {4, "asSummaryLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::asExternalLink {5, "asExternalLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::multicastLink {6, "multicastLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::nssaExternalLink {7, "nssaExternalLink"};
const Enum::YLeaf OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype::areaOpaqueLink {10, "areaOpaqueLink"};

const Enum::YLeaf OSPFMIB::Ospfarearangetable::Ospfarearangeentry::Ospfarearangeeffect::advertiseMatching {1, "advertiseMatching"};
const Enum::YLeaf OSPFMIB::Ospfarearangetable::Ospfarearangeentry::Ospfarearangeeffect::doNotAdvertiseMatching {2, "doNotAdvertiseMatching"};

const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfiftype::broadcast {1, "broadcast"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfiftype::nbma {2, "nbma"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfiftype::pointToPoint {3, "pointToPoint"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfiftype::pointToMultipoint {5, "pointToMultipoint"};

const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::down {1, "down"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::loopback {2, "loopback"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::waiting {3, "waiting"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::pointToPoint {4, "pointToPoint"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::designatedRouter {5, "designatedRouter"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::backupDesignatedRouter {6, "backupDesignatedRouter"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate::otherDesignatedRouter {7, "otherDesignatedRouter"};

const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifmulticastforwarding::blocked {1, "blocked"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifmulticastforwarding::multicast {2, "multicast"};
const Enum::YLeaf OSPFMIB::Ospfiftable::Ospfifentry::Ospfifmulticastforwarding::unicast {3, "unicast"};

const Enum::YLeaf OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::Ospfvirtifstate::down {1, "down"};
const Enum::YLeaf OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::Ospfvirtifstate::pointToPoint {4, "pointToPoint"};

const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::down {1, "down"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::attempt {2, "attempt"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::init {3, "init"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::twoWay {4, "twoWay"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::exchange {6, "exchange"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::loading {7, "loading"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate::full {8, "full"};

const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbmanbrpermanence::dynamic {1, "dynamic"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbmanbrpermanence::permanent {2, "permanent"};

const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperstatus::notHelping {1, "notHelping"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperstatus::helping {2, "helping"};

const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason::none {1, "none"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason::inProgress {2, "inProgress"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason::completed {3, "completed"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason::timedOut {4, "timedOut"};
const Enum::YLeaf OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::down {1, "down"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::attempt {2, "attempt"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::init {3, "init"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::twoWay {4, "twoWay"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::exchange {6, "exchange"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::loading {7, "loading"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate::full {8, "full"};

const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperstatus::notHelping {1, "notHelping"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperstatus::helping {2, "helping"};

const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason::none {1, "none"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason::inProgress {2, "inProgress"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason::completed {3, "completed"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason::timedOut {4, "timedOut"};
const Enum::YLeaf OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::Ospfextlsdbtype::asExternalLink {5, "asExternalLink"};

const Enum::YLeaf OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregatelsdbtype::summaryLink {3, "summaryLink"};
const Enum::YLeaf OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregatelsdbtype::nssaExternalLink {7, "nssaExternalLink"};

const Enum::YLeaf OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregateeffect::advertiseMatching {1, "advertiseMatching"};
const Enum::YLeaf OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregateeffect::doNotAdvertiseMatching {2, "doNotAdvertiseMatching"};

const Enum::YLeaf OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::Ospflocallsdbtype::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::Ospfvirtlocallsdbtype::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::Ospfaslsdbtype::asExternalLink {5, "asExternalLink"};
const Enum::YLeaf OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::Ospfaslsdbtype::asOpaqueLink {11, "asOpaqueLink"};

const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::routerLink {1, "routerLink"};
const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::networkLink {2, "networkLink"};
const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::summaryLink {3, "summaryLink"};
const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::asSummaryLink {4, "asSummaryLink"};
const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::multicastLink {6, "multicastLink"};
const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::nssaExternalLink {7, "nssaExternalLink"};
const Enum::YLeaf OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype::areaOpaqueLink {10, "areaOpaqueLink"};


}
}

