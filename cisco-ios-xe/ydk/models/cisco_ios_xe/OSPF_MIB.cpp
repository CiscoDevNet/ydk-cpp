
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "OSPF_MIB.hpp"

namespace ydk {
namespace OSPF_MIB {

OspfMib::OspfMib()
    :
    ospfareaaggregatetable_(std::make_shared<OspfMib::Ospfareaaggregatetable>())
	,ospfarealsacounttable_(std::make_shared<OspfMib::Ospfarealsacounttable>())
	,ospfarearangetable_(std::make_shared<OspfMib::Ospfarearangetable>())
	,ospfareatable_(std::make_shared<OspfMib::Ospfareatable>())
	,ospfaslsdbtable_(std::make_shared<OspfMib::Ospfaslsdbtable>())
	,ospfextlsdbtable_(std::make_shared<OspfMib::Ospfextlsdbtable>())
	,ospfgeneralgroup_(std::make_shared<OspfMib::Ospfgeneralgroup>())
	,ospfhosttable_(std::make_shared<OspfMib::Ospfhosttable>())
	,ospfifmetrictable_(std::make_shared<OspfMib::Ospfifmetrictable>())
	,ospfiftable_(std::make_shared<OspfMib::Ospfiftable>())
	,ospflocallsdbtable_(std::make_shared<OspfMib::Ospflocallsdbtable>())
	,ospflsdbtable_(std::make_shared<OspfMib::Ospflsdbtable>())
	,ospfnbrtable_(std::make_shared<OspfMib::Ospfnbrtable>())
	,ospfstubareatable_(std::make_shared<OspfMib::Ospfstubareatable>())
	,ospfvirtiftable_(std::make_shared<OspfMib::Ospfvirtiftable>())
	,ospfvirtlocallsdbtable_(std::make_shared<OspfMib::Ospfvirtlocallsdbtable>())
	,ospfvirtnbrtable_(std::make_shared<OspfMib::Ospfvirtnbrtable>())
{
    ospfareaaggregatetable_->parent = this;

    ospfarealsacounttable_->parent = this;

    ospfarearangetable_->parent = this;

    ospfareatable_->parent = this;

    ospfaslsdbtable_->parent = this;

    ospfextlsdbtable_->parent = this;

    ospfgeneralgroup_->parent = this;

    ospfhosttable_->parent = this;

    ospfifmetrictable_->parent = this;

    ospfiftable_->parent = this;

    ospflocallsdbtable_->parent = this;

    ospflsdbtable_->parent = this;

    ospfnbrtable_->parent = this;

    ospfstubareatable_->parent = this;

    ospfvirtiftable_->parent = this;

    ospfvirtlocallsdbtable_->parent = this;

    ospfvirtnbrtable_->parent = this;

    yang_name = "OSPF-MIB"; yang_parent_name = "OSPF-MIB";
}

OspfMib::~OspfMib()
{
}

bool OspfMib::has_data() const
{
    return (ospfareaaggregatetable_ !=  nullptr && ospfareaaggregatetable_->has_data())
	|| (ospfarealsacounttable_ !=  nullptr && ospfarealsacounttable_->has_data())
	|| (ospfarearangetable_ !=  nullptr && ospfarearangetable_->has_data())
	|| (ospfareatable_ !=  nullptr && ospfareatable_->has_data())
	|| (ospfaslsdbtable_ !=  nullptr && ospfaslsdbtable_->has_data())
	|| (ospfextlsdbtable_ !=  nullptr && ospfextlsdbtable_->has_data())
	|| (ospfgeneralgroup_ !=  nullptr && ospfgeneralgroup_->has_data())
	|| (ospfhosttable_ !=  nullptr && ospfhosttable_->has_data())
	|| (ospfifmetrictable_ !=  nullptr && ospfifmetrictable_->has_data())
	|| (ospfiftable_ !=  nullptr && ospfiftable_->has_data())
	|| (ospflocallsdbtable_ !=  nullptr && ospflocallsdbtable_->has_data())
	|| (ospflsdbtable_ !=  nullptr && ospflsdbtable_->has_data())
	|| (ospfnbrtable_ !=  nullptr && ospfnbrtable_->has_data())
	|| (ospfstubareatable_ !=  nullptr && ospfstubareatable_->has_data())
	|| (ospfvirtiftable_ !=  nullptr && ospfvirtiftable_->has_data())
	|| (ospfvirtlocallsdbtable_ !=  nullptr && ospfvirtlocallsdbtable_->has_data())
	|| (ospfvirtnbrtable_ !=  nullptr && ospfvirtnbrtable_->has_data());
}

bool OspfMib::has_operation() const
{
    return is_set(operation)
	|| (ospfareaaggregatetable_ !=  nullptr && ospfareaaggregatetable_->has_operation())
	|| (ospfarealsacounttable_ !=  nullptr && ospfarealsacounttable_->has_operation())
	|| (ospfarearangetable_ !=  nullptr && ospfarearangetable_->has_operation())
	|| (ospfareatable_ !=  nullptr && ospfareatable_->has_operation())
	|| (ospfaslsdbtable_ !=  nullptr && ospfaslsdbtable_->has_operation())
	|| (ospfextlsdbtable_ !=  nullptr && ospfextlsdbtable_->has_operation())
	|| (ospfgeneralgroup_ !=  nullptr && ospfgeneralgroup_->has_operation())
	|| (ospfhosttable_ !=  nullptr && ospfhosttable_->has_operation())
	|| (ospfifmetrictable_ !=  nullptr && ospfifmetrictable_->has_operation())
	|| (ospfiftable_ !=  nullptr && ospfiftable_->has_operation())
	|| (ospflocallsdbtable_ !=  nullptr && ospflocallsdbtable_->has_operation())
	|| (ospflsdbtable_ !=  nullptr && ospflsdbtable_->has_operation())
	|| (ospfnbrtable_ !=  nullptr && ospfnbrtable_->has_operation())
	|| (ospfstubareatable_ !=  nullptr && ospfstubareatable_->has_operation())
	|| (ospfvirtiftable_ !=  nullptr && ospfvirtiftable_->has_operation())
	|| (ospfvirtlocallsdbtable_ !=  nullptr && ospfvirtlocallsdbtable_->has_operation())
	|| (ospfvirtnbrtable_ !=  nullptr && ospfvirtnbrtable_->has_operation());
}

std::string OspfMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OSPF-MIB:OSPF-MIB";

    return path_buffer.str();

}

const EntityPath OspfMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> OspfMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaAggregateTable")
    {
        if(ospfareaaggregatetable_ == nullptr)
        {
            ospfareaaggregatetable_ = std::make_shared<OspfMib::Ospfareaaggregatetable>();
        }
        return ospfareaaggregatetable_;
    }

    if(child_yang_name == "ospfAreaLsaCountTable")
    {
        if(ospfarealsacounttable_ == nullptr)
        {
            ospfarealsacounttable_ = std::make_shared<OspfMib::Ospfarealsacounttable>();
        }
        return ospfarealsacounttable_;
    }

    if(child_yang_name == "ospfAreaRangeTable")
    {
        if(ospfarearangetable_ == nullptr)
        {
            ospfarearangetable_ = std::make_shared<OspfMib::Ospfarearangetable>();
        }
        return ospfarearangetable_;
    }

    if(child_yang_name == "ospfAreaTable")
    {
        if(ospfareatable_ == nullptr)
        {
            ospfareatable_ = std::make_shared<OspfMib::Ospfareatable>();
        }
        return ospfareatable_;
    }

    if(child_yang_name == "ospfAsLsdbTable")
    {
        if(ospfaslsdbtable_ == nullptr)
        {
            ospfaslsdbtable_ = std::make_shared<OspfMib::Ospfaslsdbtable>();
        }
        return ospfaslsdbtable_;
    }

    if(child_yang_name == "ospfExtLsdbTable")
    {
        if(ospfextlsdbtable_ == nullptr)
        {
            ospfextlsdbtable_ = std::make_shared<OspfMib::Ospfextlsdbtable>();
        }
        return ospfextlsdbtable_;
    }

    if(child_yang_name == "ospfGeneralGroup")
    {
        if(ospfgeneralgroup_ == nullptr)
        {
            ospfgeneralgroup_ = std::make_shared<OspfMib::Ospfgeneralgroup>();
        }
        return ospfgeneralgroup_;
    }

    if(child_yang_name == "ospfHostTable")
    {
        if(ospfhosttable_ == nullptr)
        {
            ospfhosttable_ = std::make_shared<OspfMib::Ospfhosttable>();
        }
        return ospfhosttable_;
    }

    if(child_yang_name == "ospfIfMetricTable")
    {
        if(ospfifmetrictable_ == nullptr)
        {
            ospfifmetrictable_ = std::make_shared<OspfMib::Ospfifmetrictable>();
        }
        return ospfifmetrictable_;
    }

    if(child_yang_name == "ospfIfTable")
    {
        if(ospfiftable_ == nullptr)
        {
            ospfiftable_ = std::make_shared<OspfMib::Ospfiftable>();
        }
        return ospfiftable_;
    }

    if(child_yang_name == "ospfLocalLsdbTable")
    {
        if(ospflocallsdbtable_ == nullptr)
        {
            ospflocallsdbtable_ = std::make_shared<OspfMib::Ospflocallsdbtable>();
        }
        return ospflocallsdbtable_;
    }

    if(child_yang_name == "ospfLsdbTable")
    {
        if(ospflsdbtable_ == nullptr)
        {
            ospflsdbtable_ = std::make_shared<OspfMib::Ospflsdbtable>();
        }
        return ospflsdbtable_;
    }

    if(child_yang_name == "ospfNbrTable")
    {
        if(ospfnbrtable_ == nullptr)
        {
            ospfnbrtable_ = std::make_shared<OspfMib::Ospfnbrtable>();
        }
        return ospfnbrtable_;
    }

    if(child_yang_name == "ospfStubAreaTable")
    {
        if(ospfstubareatable_ == nullptr)
        {
            ospfstubareatable_ = std::make_shared<OspfMib::Ospfstubareatable>();
        }
        return ospfstubareatable_;
    }

    if(child_yang_name == "ospfVirtIfTable")
    {
        if(ospfvirtiftable_ == nullptr)
        {
            ospfvirtiftable_ = std::make_shared<OspfMib::Ospfvirtiftable>();
        }
        return ospfvirtiftable_;
    }

    if(child_yang_name == "ospfVirtLocalLsdbTable")
    {
        if(ospfvirtlocallsdbtable_ == nullptr)
        {
            ospfvirtlocallsdbtable_ = std::make_shared<OspfMib::Ospfvirtlocallsdbtable>();
        }
        return ospfvirtlocallsdbtable_;
    }

    if(child_yang_name == "ospfVirtNbrTable")
    {
        if(ospfvirtnbrtable_ == nullptr)
        {
            ospfvirtnbrtable_ = std::make_shared<OspfMib::Ospfvirtnbrtable>();
        }
        return ospfvirtnbrtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfareaaggregatetable_ != nullptr)
    {
        children["ospfAreaAggregateTable"] = ospfareaaggregatetable_;
    }

    if(ospfarealsacounttable_ != nullptr)
    {
        children["ospfAreaLsaCountTable"] = ospfarealsacounttable_;
    }

    if(ospfarearangetable_ != nullptr)
    {
        children["ospfAreaRangeTable"] = ospfarearangetable_;
    }

    if(ospfareatable_ != nullptr)
    {
        children["ospfAreaTable"] = ospfareatable_;
    }

    if(ospfaslsdbtable_ != nullptr)
    {
        children["ospfAsLsdbTable"] = ospfaslsdbtable_;
    }

    if(ospfextlsdbtable_ != nullptr)
    {
        children["ospfExtLsdbTable"] = ospfextlsdbtable_;
    }

    if(ospfgeneralgroup_ != nullptr)
    {
        children["ospfGeneralGroup"] = ospfgeneralgroup_;
    }

    if(ospfhosttable_ != nullptr)
    {
        children["ospfHostTable"] = ospfhosttable_;
    }

    if(ospfifmetrictable_ != nullptr)
    {
        children["ospfIfMetricTable"] = ospfifmetrictable_;
    }

    if(ospfiftable_ != nullptr)
    {
        children["ospfIfTable"] = ospfiftable_;
    }

    if(ospflocallsdbtable_ != nullptr)
    {
        children["ospfLocalLsdbTable"] = ospflocallsdbtable_;
    }

    if(ospflsdbtable_ != nullptr)
    {
        children["ospfLsdbTable"] = ospflsdbtable_;
    }

    if(ospfnbrtable_ != nullptr)
    {
        children["ospfNbrTable"] = ospfnbrtable_;
    }

    if(ospfstubareatable_ != nullptr)
    {
        children["ospfStubAreaTable"] = ospfstubareatable_;
    }

    if(ospfvirtiftable_ != nullptr)
    {
        children["ospfVirtIfTable"] = ospfvirtiftable_;
    }

    if(ospfvirtlocallsdbtable_ != nullptr)
    {
        children["ospfVirtLocalLsdbTable"] = ospfvirtlocallsdbtable_;
    }

    if(ospfvirtnbrtable_ != nullptr)
    {
        children["ospfVirtNbrTable"] = ospfvirtnbrtable_;
    }

    return children;
}

void OspfMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> OspfMib::clone_ptr() const
{
    return std::make_shared<OspfMib>();
}

std::string OspfMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string OspfMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function OspfMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

OspfMib::Ospfgeneralgroup::Ospfgeneralgroup()
    :
    ospfadminstat{YType::enumeration, "ospfAdminStat"},
    ospfareabdrrtrstatus{YType::boolean, "ospfAreaBdrRtrStatus"},
    ospfasbdrrtrstatus{YType::boolean, "ospfASBdrRtrStatus"},
    ospfaslsacksumsum{YType::uint32, "ospfAsLsaCksumSum"},
    ospfaslsacount{YType::uint32, "ospfAsLsaCount"},
    ospfdemandextensions{YType::boolean, "ospfDemandExtensions"},
    ospfdiscontinuitytime{YType::uint32, "ospfDiscontinuityTime"},
    ospfexitoverflowinterval{YType::int32, "ospfExitOverflowInterval"},
    ospfexternlsacksumsum{YType::int32, "ospfExternLsaCksumSum"},
    ospfexternlsacount{YType::uint32, "ospfExternLsaCount"},
    ospfextlsdblimit{YType::int32, "ospfExtLsdbLimit"},
    ospfmulticastextensions{YType::int32, "ospfMulticastExtensions"},
    ospfopaquelsasupport{YType::boolean, "ospfOpaqueLsaSupport"},
    ospforiginatenewlsas{YType::uint32, "ospfOriginateNewLsas"},
    ospfreferencebandwidth{YType::uint32, "ospfReferenceBandwidth"},
    ospfrestartage{YType::uint32, "ospfRestartAge"},
    ospfrestartexitreason{YType::enumeration, "ospfRestartExitReason"},
    ospfrestartinterval{YType::int32, "ospfRestartInterval"},
    ospfrestartstatus{YType::enumeration, "ospfRestartStatus"},
    ospfrestartstrictlsachecking{YType::boolean, "ospfRestartStrictLsaChecking"},
    ospfrestartsupport{YType::enumeration, "ospfRestartSupport"},
    ospfrfc1583compatibility{YType::boolean, "ospfRFC1583Compatibility"},
    ospfrouterid{YType::str, "ospfRouterId"},
    ospfrxnewlsas{YType::uint32, "ospfRxNewLsas"},
    ospfstubrouteradvertisement{YType::enumeration, "ospfStubRouterAdvertisement"},
    ospfstubroutersupport{YType::boolean, "ospfStubRouterSupport"},
    ospftossupport{YType::boolean, "ospfTOSSupport"},
    ospfversionnumber{YType::enumeration, "ospfVersionNumber"}
{
    yang_name = "ospfGeneralGroup"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfgeneralgroup::~Ospfgeneralgroup()
{
}

bool OspfMib::Ospfgeneralgroup::has_data() const
{
    return ospfadminstat.is_set
	|| ospfareabdrrtrstatus.is_set
	|| ospfasbdrrtrstatus.is_set
	|| ospfaslsacksumsum.is_set
	|| ospfaslsacount.is_set
	|| ospfdemandextensions.is_set
	|| ospfdiscontinuitytime.is_set
	|| ospfexitoverflowinterval.is_set
	|| ospfexternlsacksumsum.is_set
	|| ospfexternlsacount.is_set
	|| ospfextlsdblimit.is_set
	|| ospfmulticastextensions.is_set
	|| ospfopaquelsasupport.is_set
	|| ospforiginatenewlsas.is_set
	|| ospfreferencebandwidth.is_set
	|| ospfrestartage.is_set
	|| ospfrestartexitreason.is_set
	|| ospfrestartinterval.is_set
	|| ospfrestartstatus.is_set
	|| ospfrestartstrictlsachecking.is_set
	|| ospfrestartsupport.is_set
	|| ospfrfc1583compatibility.is_set
	|| ospfrouterid.is_set
	|| ospfrxnewlsas.is_set
	|| ospfstubrouteradvertisement.is_set
	|| ospfstubroutersupport.is_set
	|| ospftossupport.is_set
	|| ospfversionnumber.is_set;
}

bool OspfMib::Ospfgeneralgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfadminstat.operation)
	|| is_set(ospfareabdrrtrstatus.operation)
	|| is_set(ospfasbdrrtrstatus.operation)
	|| is_set(ospfaslsacksumsum.operation)
	|| is_set(ospfaslsacount.operation)
	|| is_set(ospfdemandextensions.operation)
	|| is_set(ospfdiscontinuitytime.operation)
	|| is_set(ospfexitoverflowinterval.operation)
	|| is_set(ospfexternlsacksumsum.operation)
	|| is_set(ospfexternlsacount.operation)
	|| is_set(ospfextlsdblimit.operation)
	|| is_set(ospfmulticastextensions.operation)
	|| is_set(ospfopaquelsasupport.operation)
	|| is_set(ospforiginatenewlsas.operation)
	|| is_set(ospfreferencebandwidth.operation)
	|| is_set(ospfrestartage.operation)
	|| is_set(ospfrestartexitreason.operation)
	|| is_set(ospfrestartinterval.operation)
	|| is_set(ospfrestartstatus.operation)
	|| is_set(ospfrestartstrictlsachecking.operation)
	|| is_set(ospfrestartsupport.operation)
	|| is_set(ospfrfc1583compatibility.operation)
	|| is_set(ospfrouterid.operation)
	|| is_set(ospfrxnewlsas.operation)
	|| is_set(ospfstubrouteradvertisement.operation)
	|| is_set(ospfstubroutersupport.operation)
	|| is_set(ospftossupport.operation)
	|| is_set(ospfversionnumber.operation);
}

std::string OspfMib::Ospfgeneralgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfGeneralGroup";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfgeneralgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfadminstat.is_set || is_set(ospfadminstat.operation)) leaf_name_data.push_back(ospfadminstat.get_name_leafdata());
    if (ospfareabdrrtrstatus.is_set || is_set(ospfareabdrrtrstatus.operation)) leaf_name_data.push_back(ospfareabdrrtrstatus.get_name_leafdata());
    if (ospfasbdrrtrstatus.is_set || is_set(ospfasbdrrtrstatus.operation)) leaf_name_data.push_back(ospfasbdrrtrstatus.get_name_leafdata());
    if (ospfaslsacksumsum.is_set || is_set(ospfaslsacksumsum.operation)) leaf_name_data.push_back(ospfaslsacksumsum.get_name_leafdata());
    if (ospfaslsacount.is_set || is_set(ospfaslsacount.operation)) leaf_name_data.push_back(ospfaslsacount.get_name_leafdata());
    if (ospfdemandextensions.is_set || is_set(ospfdemandextensions.operation)) leaf_name_data.push_back(ospfdemandextensions.get_name_leafdata());
    if (ospfdiscontinuitytime.is_set || is_set(ospfdiscontinuitytime.operation)) leaf_name_data.push_back(ospfdiscontinuitytime.get_name_leafdata());
    if (ospfexitoverflowinterval.is_set || is_set(ospfexitoverflowinterval.operation)) leaf_name_data.push_back(ospfexitoverflowinterval.get_name_leafdata());
    if (ospfexternlsacksumsum.is_set || is_set(ospfexternlsacksumsum.operation)) leaf_name_data.push_back(ospfexternlsacksumsum.get_name_leafdata());
    if (ospfexternlsacount.is_set || is_set(ospfexternlsacount.operation)) leaf_name_data.push_back(ospfexternlsacount.get_name_leafdata());
    if (ospfextlsdblimit.is_set || is_set(ospfextlsdblimit.operation)) leaf_name_data.push_back(ospfextlsdblimit.get_name_leafdata());
    if (ospfmulticastextensions.is_set || is_set(ospfmulticastextensions.operation)) leaf_name_data.push_back(ospfmulticastextensions.get_name_leafdata());
    if (ospfopaquelsasupport.is_set || is_set(ospfopaquelsasupport.operation)) leaf_name_data.push_back(ospfopaquelsasupport.get_name_leafdata());
    if (ospforiginatenewlsas.is_set || is_set(ospforiginatenewlsas.operation)) leaf_name_data.push_back(ospforiginatenewlsas.get_name_leafdata());
    if (ospfreferencebandwidth.is_set || is_set(ospfreferencebandwidth.operation)) leaf_name_data.push_back(ospfreferencebandwidth.get_name_leafdata());
    if (ospfrestartage.is_set || is_set(ospfrestartage.operation)) leaf_name_data.push_back(ospfrestartage.get_name_leafdata());
    if (ospfrestartexitreason.is_set || is_set(ospfrestartexitreason.operation)) leaf_name_data.push_back(ospfrestartexitreason.get_name_leafdata());
    if (ospfrestartinterval.is_set || is_set(ospfrestartinterval.operation)) leaf_name_data.push_back(ospfrestartinterval.get_name_leafdata());
    if (ospfrestartstatus.is_set || is_set(ospfrestartstatus.operation)) leaf_name_data.push_back(ospfrestartstatus.get_name_leafdata());
    if (ospfrestartstrictlsachecking.is_set || is_set(ospfrestartstrictlsachecking.operation)) leaf_name_data.push_back(ospfrestartstrictlsachecking.get_name_leafdata());
    if (ospfrestartsupport.is_set || is_set(ospfrestartsupport.operation)) leaf_name_data.push_back(ospfrestartsupport.get_name_leafdata());
    if (ospfrfc1583compatibility.is_set || is_set(ospfrfc1583compatibility.operation)) leaf_name_data.push_back(ospfrfc1583compatibility.get_name_leafdata());
    if (ospfrouterid.is_set || is_set(ospfrouterid.operation)) leaf_name_data.push_back(ospfrouterid.get_name_leafdata());
    if (ospfrxnewlsas.is_set || is_set(ospfrxnewlsas.operation)) leaf_name_data.push_back(ospfrxnewlsas.get_name_leafdata());
    if (ospfstubrouteradvertisement.is_set || is_set(ospfstubrouteradvertisement.operation)) leaf_name_data.push_back(ospfstubrouteradvertisement.get_name_leafdata());
    if (ospfstubroutersupport.is_set || is_set(ospfstubroutersupport.operation)) leaf_name_data.push_back(ospfstubroutersupport.get_name_leafdata());
    if (ospftossupport.is_set || is_set(ospftossupport.operation)) leaf_name_data.push_back(ospftossupport.get_name_leafdata());
    if (ospfversionnumber.is_set || is_set(ospfversionnumber.operation)) leaf_name_data.push_back(ospfversionnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfgeneralgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfgeneralgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfgeneralgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfAdminStat")
    {
        ospfadminstat = value;
    }
    if(value_path == "ospfAreaBdrRtrStatus")
    {
        ospfareabdrrtrstatus = value;
    }
    if(value_path == "ospfASBdrRtrStatus")
    {
        ospfasbdrrtrstatus = value;
    }
    if(value_path == "ospfAsLsaCksumSum")
    {
        ospfaslsacksumsum = value;
    }
    if(value_path == "ospfAsLsaCount")
    {
        ospfaslsacount = value;
    }
    if(value_path == "ospfDemandExtensions")
    {
        ospfdemandextensions = value;
    }
    if(value_path == "ospfDiscontinuityTime")
    {
        ospfdiscontinuitytime = value;
    }
    if(value_path == "ospfExitOverflowInterval")
    {
        ospfexitoverflowinterval = value;
    }
    if(value_path == "ospfExternLsaCksumSum")
    {
        ospfexternlsacksumsum = value;
    }
    if(value_path == "ospfExternLsaCount")
    {
        ospfexternlsacount = value;
    }
    if(value_path == "ospfExtLsdbLimit")
    {
        ospfextlsdblimit = value;
    }
    if(value_path == "ospfMulticastExtensions")
    {
        ospfmulticastextensions = value;
    }
    if(value_path == "ospfOpaqueLsaSupport")
    {
        ospfopaquelsasupport = value;
    }
    if(value_path == "ospfOriginateNewLsas")
    {
        ospforiginatenewlsas = value;
    }
    if(value_path == "ospfReferenceBandwidth")
    {
        ospfreferencebandwidth = value;
    }
    if(value_path == "ospfRestartAge")
    {
        ospfrestartage = value;
    }
    if(value_path == "ospfRestartExitReason")
    {
        ospfrestartexitreason = value;
    }
    if(value_path == "ospfRestartInterval")
    {
        ospfrestartinterval = value;
    }
    if(value_path == "ospfRestartStatus")
    {
        ospfrestartstatus = value;
    }
    if(value_path == "ospfRestartStrictLsaChecking")
    {
        ospfrestartstrictlsachecking = value;
    }
    if(value_path == "ospfRestartSupport")
    {
        ospfrestartsupport = value;
    }
    if(value_path == "ospfRFC1583Compatibility")
    {
        ospfrfc1583compatibility = value;
    }
    if(value_path == "ospfRouterId")
    {
        ospfrouterid = value;
    }
    if(value_path == "ospfRxNewLsas")
    {
        ospfrxnewlsas = value;
    }
    if(value_path == "ospfStubRouterAdvertisement")
    {
        ospfstubrouteradvertisement = value;
    }
    if(value_path == "ospfStubRouterSupport")
    {
        ospfstubroutersupport = value;
    }
    if(value_path == "ospfTOSSupport")
    {
        ospftossupport = value;
    }
    if(value_path == "ospfVersionNumber")
    {
        ospfversionnumber = value;
    }
}

OspfMib::Ospfareatable::Ospfareatable()
{
    yang_name = "ospfAreaTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfareatable::~Ospfareatable()
{
}

bool OspfMib::Ospfareatable::has_data() const
{
    for (std::size_t index=0; index<ospfareaentry_.size(); index++)
    {
        if(ospfareaentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfareatable::has_operation() const
{
    for (std::size_t index=0; index<ospfareaentry_.size(); index++)
    {
        if(ospfareaentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfareatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfareatable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfareatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaEntry")
    {
        for(auto const & c : ospfareaentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfareatable::Ospfareaentry>();
        c->parent = this;
        ospfareaentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfareatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfareaentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfareatable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfareatable::Ospfareaentry::Ospfareaentry()
    :
    ospfareaid{YType::str, "ospfAreaId"},
    cospfareanssatranslatorevents{YType::uint32, "CISCO-OSPF-MIB:cospfAreaNssaTranslatorEvents"},
    cospfareanssatranslatorrole{YType::enumeration, "CISCO-OSPF-MIB:cospfAreaNssaTranslatorRole"},
    cospfareanssatranslatorstate{YType::enumeration, "CISCO-OSPF-MIB:cospfAreaNssaTranslatorState"},
    cospfopaquearealsacksumsum{YType::uint32, "CISCO-OSPF-MIB:cospfOpaqueAreaLsaCksumSum"},
    cospfopaquearealsacount{YType::uint32, "CISCO-OSPF-MIB:cospfOpaqueAreaLsaCount"},
    ospfareabdrrtrcount{YType::uint32, "ospfAreaBdrRtrCount"},
    ospfarealsacksumsum{YType::int32, "ospfAreaLsaCksumSum"},
    ospfarealsacount{YType::uint32, "ospfAreaLsaCount"},
    ospfareanssatranslatorevents{YType::uint32, "ospfAreaNssaTranslatorEvents"},
    ospfareanssatranslatorrole{YType::enumeration, "ospfAreaNssaTranslatorRole"},
    ospfareanssatranslatorstabilityinterval{YType::int32, "ospfAreaNssaTranslatorStabilityInterval"},
    ospfareanssatranslatorstate{YType::enumeration, "ospfAreaNssaTranslatorState"},
    ospfareastatus{YType::enumeration, "ospfAreaStatus"},
    ospfareasummary{YType::enumeration, "ospfAreaSummary"},
    ospfasbdrrtrcount{YType::uint32, "ospfAsBdrRtrCount"},
    ospfauthtype{YType::enumeration, "ospfAuthType"},
    ospfimportasextern{YType::enumeration, "ospfImportAsExtern"},
    ospfspfruns{YType::uint32, "ospfSpfRuns"}
{
    yang_name = "ospfAreaEntry"; yang_parent_name = "ospfAreaTable";
}

OspfMib::Ospfareatable::Ospfareaentry::~Ospfareaentry()
{
}

bool OspfMib::Ospfareatable::Ospfareaentry::has_data() const
{
    return ospfareaid.is_set
	|| cospfareanssatranslatorevents.is_set
	|| cospfareanssatranslatorrole.is_set
	|| cospfareanssatranslatorstate.is_set
	|| cospfopaquearealsacksumsum.is_set
	|| cospfopaquearealsacount.is_set
	|| ospfareabdrrtrcount.is_set
	|| ospfarealsacksumsum.is_set
	|| ospfarealsacount.is_set
	|| ospfareanssatranslatorevents.is_set
	|| ospfareanssatranslatorrole.is_set
	|| ospfareanssatranslatorstabilityinterval.is_set
	|| ospfareanssatranslatorstate.is_set
	|| ospfareastatus.is_set
	|| ospfareasummary.is_set
	|| ospfasbdrrtrcount.is_set
	|| ospfauthtype.is_set
	|| ospfimportasextern.is_set
	|| ospfspfruns.is_set;
}

bool OspfMib::Ospfareatable::Ospfareaentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfareaid.operation)
	|| is_set(cospfareanssatranslatorevents.operation)
	|| is_set(cospfareanssatranslatorrole.operation)
	|| is_set(cospfareanssatranslatorstate.operation)
	|| is_set(cospfopaquearealsacksumsum.operation)
	|| is_set(cospfopaquearealsacount.operation)
	|| is_set(ospfareabdrrtrcount.operation)
	|| is_set(ospfarealsacksumsum.operation)
	|| is_set(ospfarealsacount.operation)
	|| is_set(ospfareanssatranslatorevents.operation)
	|| is_set(ospfareanssatranslatorrole.operation)
	|| is_set(ospfareanssatranslatorstabilityinterval.operation)
	|| is_set(ospfareanssatranslatorstate.operation)
	|| is_set(ospfareastatus.operation)
	|| is_set(ospfareasummary.operation)
	|| is_set(ospfasbdrrtrcount.operation)
	|| is_set(ospfauthtype.operation)
	|| is_set(ospfimportasextern.operation)
	|| is_set(ospfspfruns.operation);
}

std::string OspfMib::Ospfareatable::Ospfareaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaEntry" <<"[ospfAreaId='" <<ospfareaid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfareatable::Ospfareaentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfareaid.is_set || is_set(ospfareaid.operation)) leaf_name_data.push_back(ospfareaid.get_name_leafdata());
    if (cospfareanssatranslatorevents.is_set || is_set(cospfareanssatranslatorevents.operation)) leaf_name_data.push_back(cospfareanssatranslatorevents.get_name_leafdata());
    if (cospfareanssatranslatorrole.is_set || is_set(cospfareanssatranslatorrole.operation)) leaf_name_data.push_back(cospfareanssatranslatorrole.get_name_leafdata());
    if (cospfareanssatranslatorstate.is_set || is_set(cospfareanssatranslatorstate.operation)) leaf_name_data.push_back(cospfareanssatranslatorstate.get_name_leafdata());
    if (cospfopaquearealsacksumsum.is_set || is_set(cospfopaquearealsacksumsum.operation)) leaf_name_data.push_back(cospfopaquearealsacksumsum.get_name_leafdata());
    if (cospfopaquearealsacount.is_set || is_set(cospfopaquearealsacount.operation)) leaf_name_data.push_back(cospfopaquearealsacount.get_name_leafdata());
    if (ospfareabdrrtrcount.is_set || is_set(ospfareabdrrtrcount.operation)) leaf_name_data.push_back(ospfareabdrrtrcount.get_name_leafdata());
    if (ospfarealsacksumsum.is_set || is_set(ospfarealsacksumsum.operation)) leaf_name_data.push_back(ospfarealsacksumsum.get_name_leafdata());
    if (ospfarealsacount.is_set || is_set(ospfarealsacount.operation)) leaf_name_data.push_back(ospfarealsacount.get_name_leafdata());
    if (ospfareanssatranslatorevents.is_set || is_set(ospfareanssatranslatorevents.operation)) leaf_name_data.push_back(ospfareanssatranslatorevents.get_name_leafdata());
    if (ospfareanssatranslatorrole.is_set || is_set(ospfareanssatranslatorrole.operation)) leaf_name_data.push_back(ospfareanssatranslatorrole.get_name_leafdata());
    if (ospfareanssatranslatorstabilityinterval.is_set || is_set(ospfareanssatranslatorstabilityinterval.operation)) leaf_name_data.push_back(ospfareanssatranslatorstabilityinterval.get_name_leafdata());
    if (ospfareanssatranslatorstate.is_set || is_set(ospfareanssatranslatorstate.operation)) leaf_name_data.push_back(ospfareanssatranslatorstate.get_name_leafdata());
    if (ospfareastatus.is_set || is_set(ospfareastatus.operation)) leaf_name_data.push_back(ospfareastatus.get_name_leafdata());
    if (ospfareasummary.is_set || is_set(ospfareasummary.operation)) leaf_name_data.push_back(ospfareasummary.get_name_leafdata());
    if (ospfasbdrrtrcount.is_set || is_set(ospfasbdrrtrcount.operation)) leaf_name_data.push_back(ospfasbdrrtrcount.get_name_leafdata());
    if (ospfauthtype.is_set || is_set(ospfauthtype.operation)) leaf_name_data.push_back(ospfauthtype.get_name_leafdata());
    if (ospfimportasextern.is_set || is_set(ospfimportasextern.operation)) leaf_name_data.push_back(ospfimportasextern.get_name_leafdata());
    if (ospfspfruns.is_set || is_set(ospfspfruns.operation)) leaf_name_data.push_back(ospfspfruns.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfareatable::Ospfareaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfareatable::Ospfareaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfareatable::Ospfareaentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfAreaId")
    {
        ospfareaid = value;
    }
    if(value_path == "cospfAreaNssaTranslatorEvents")
    {
        cospfareanssatranslatorevents = value;
    }
    if(value_path == "cospfAreaNssaTranslatorRole")
    {
        cospfareanssatranslatorrole = value;
    }
    if(value_path == "cospfAreaNssaTranslatorState")
    {
        cospfareanssatranslatorstate = value;
    }
    if(value_path == "cospfOpaqueAreaLsaCksumSum")
    {
        cospfopaquearealsacksumsum = value;
    }
    if(value_path == "cospfOpaqueAreaLsaCount")
    {
        cospfopaquearealsacount = value;
    }
    if(value_path == "ospfAreaBdrRtrCount")
    {
        ospfareabdrrtrcount = value;
    }
    if(value_path == "ospfAreaLsaCksumSum")
    {
        ospfarealsacksumsum = value;
    }
    if(value_path == "ospfAreaLsaCount")
    {
        ospfarealsacount = value;
    }
    if(value_path == "ospfAreaNssaTranslatorEvents")
    {
        ospfareanssatranslatorevents = value;
    }
    if(value_path == "ospfAreaNssaTranslatorRole")
    {
        ospfareanssatranslatorrole = value;
    }
    if(value_path == "ospfAreaNssaTranslatorStabilityInterval")
    {
        ospfareanssatranslatorstabilityinterval = value;
    }
    if(value_path == "ospfAreaNssaTranslatorState")
    {
        ospfareanssatranslatorstate = value;
    }
    if(value_path == "ospfAreaStatus")
    {
        ospfareastatus = value;
    }
    if(value_path == "ospfAreaSummary")
    {
        ospfareasummary = value;
    }
    if(value_path == "ospfAsBdrRtrCount")
    {
        ospfasbdrrtrcount = value;
    }
    if(value_path == "ospfAuthType")
    {
        ospfauthtype = value;
    }
    if(value_path == "ospfImportAsExtern")
    {
        ospfimportasextern = value;
    }
    if(value_path == "ospfSpfRuns")
    {
        ospfspfruns = value;
    }
}

OspfMib::Ospfstubareatable::Ospfstubareatable()
{
    yang_name = "ospfStubAreaTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfstubareatable::~Ospfstubareatable()
{
}

bool OspfMib::Ospfstubareatable::has_data() const
{
    for (std::size_t index=0; index<ospfstubareaentry_.size(); index++)
    {
        if(ospfstubareaentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfstubareatable::has_operation() const
{
    for (std::size_t index=0; index<ospfstubareaentry_.size(); index++)
    {
        if(ospfstubareaentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfstubareatable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfStubAreaTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfstubareatable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfstubareatable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfStubAreaEntry")
    {
        for(auto const & c : ospfstubareaentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfstubareatable::Ospfstubareaentry>();
        c->parent = this;
        ospfstubareaentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfstubareatable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfstubareaentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfstubareatable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfstubareatable::Ospfstubareaentry::Ospfstubareaentry()
    :
    ospfstubareaid{YType::str, "ospfStubAreaId"},
    ospfstubtos{YType::int32, "ospfStubTOS"},
    ospfstubmetric{YType::int32, "ospfStubMetric"},
    ospfstubmetrictype{YType::enumeration, "ospfStubMetricType"},
    ospfstubstatus{YType::enumeration, "ospfStubStatus"}
{
    yang_name = "ospfStubAreaEntry"; yang_parent_name = "ospfStubAreaTable";
}

OspfMib::Ospfstubareatable::Ospfstubareaentry::~Ospfstubareaentry()
{
}

bool OspfMib::Ospfstubareatable::Ospfstubareaentry::has_data() const
{
    return ospfstubareaid.is_set
	|| ospfstubtos.is_set
	|| ospfstubmetric.is_set
	|| ospfstubmetrictype.is_set
	|| ospfstubstatus.is_set;
}

bool OspfMib::Ospfstubareatable::Ospfstubareaentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfstubareaid.operation)
	|| is_set(ospfstubtos.operation)
	|| is_set(ospfstubmetric.operation)
	|| is_set(ospfstubmetrictype.operation)
	|| is_set(ospfstubstatus.operation);
}

std::string OspfMib::Ospfstubareatable::Ospfstubareaentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfStubAreaEntry" <<"[ospfStubAreaId='" <<ospfstubareaid <<"']" <<"[ospfStubTOS='" <<ospfstubtos <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfstubareatable::Ospfstubareaentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfStubAreaTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfstubareaid.is_set || is_set(ospfstubareaid.operation)) leaf_name_data.push_back(ospfstubareaid.get_name_leafdata());
    if (ospfstubtos.is_set || is_set(ospfstubtos.operation)) leaf_name_data.push_back(ospfstubtos.get_name_leafdata());
    if (ospfstubmetric.is_set || is_set(ospfstubmetric.operation)) leaf_name_data.push_back(ospfstubmetric.get_name_leafdata());
    if (ospfstubmetrictype.is_set || is_set(ospfstubmetrictype.operation)) leaf_name_data.push_back(ospfstubmetrictype.get_name_leafdata());
    if (ospfstubstatus.is_set || is_set(ospfstubstatus.operation)) leaf_name_data.push_back(ospfstubstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfstubareatable::Ospfstubareaentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfstubareatable::Ospfstubareaentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfstubareatable::Ospfstubareaentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfStubAreaId")
    {
        ospfstubareaid = value;
    }
    if(value_path == "ospfStubTOS")
    {
        ospfstubtos = value;
    }
    if(value_path == "ospfStubMetric")
    {
        ospfstubmetric = value;
    }
    if(value_path == "ospfStubMetricType")
    {
        ospfstubmetrictype = value;
    }
    if(value_path == "ospfStubStatus")
    {
        ospfstubstatus = value;
    }
}

OspfMib::Ospflsdbtable::Ospflsdbtable()
{
    yang_name = "ospfLsdbTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospflsdbtable::~Ospflsdbtable()
{
}

bool OspfMib::Ospflsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospflsdbentry_.size(); index++)
    {
        if(ospflsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospflsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospflsdbentry_.size(); index++)
    {
        if(ospflsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospflsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLsdbTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospflsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospflsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfLsdbEntry")
    {
        for(auto const & c : ospflsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospflsdbtable::Ospflsdbentry>();
        c->parent = this;
        ospflsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospflsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospflsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospflsdbtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospflsdbtable::Ospflsdbentry::Ospflsdbentry()
    :
    ospflsdbareaid{YType::str, "ospfLsdbAreaId"},
    ospflsdbtype{YType::enumeration, "ospfLsdbType"},
    ospflsdblsid{YType::str, "ospfLsdbLsid"},
    ospflsdbrouterid{YType::str, "ospfLsdbRouterId"},
    ospflsdbadvertisement{YType::str, "ospfLsdbAdvertisement"},
    ospflsdbage{YType::int32, "ospfLsdbAge"},
    ospflsdbchecksum{YType::int32, "ospfLsdbChecksum"},
    ospflsdbsequence{YType::int32, "ospfLsdbSequence"}
{
    yang_name = "ospfLsdbEntry"; yang_parent_name = "ospfLsdbTable";
}

OspfMib::Ospflsdbtable::Ospflsdbentry::~Ospflsdbentry()
{
}

bool OspfMib::Ospflsdbtable::Ospflsdbentry::has_data() const
{
    return ospflsdbareaid.is_set
	|| ospflsdbtype.is_set
	|| ospflsdblsid.is_set
	|| ospflsdbrouterid.is_set
	|| ospflsdbadvertisement.is_set
	|| ospflsdbage.is_set
	|| ospflsdbchecksum.is_set
	|| ospflsdbsequence.is_set;
}

bool OspfMib::Ospflsdbtable::Ospflsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospflsdbareaid.operation)
	|| is_set(ospflsdbtype.operation)
	|| is_set(ospflsdblsid.operation)
	|| is_set(ospflsdbrouterid.operation)
	|| is_set(ospflsdbadvertisement.operation)
	|| is_set(ospflsdbage.operation)
	|| is_set(ospflsdbchecksum.operation)
	|| is_set(ospflsdbsequence.operation);
}

std::string OspfMib::Ospflsdbtable::Ospflsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLsdbEntry" <<"[ospfLsdbAreaId='" <<ospflsdbareaid <<"']" <<"[ospfLsdbType='" <<ospflsdbtype <<"']" <<"[ospfLsdbLsid='" <<ospflsdblsid <<"']" <<"[ospfLsdbRouterId='" <<ospflsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospflsdbtable::Ospflsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospflsdbareaid.is_set || is_set(ospflsdbareaid.operation)) leaf_name_data.push_back(ospflsdbareaid.get_name_leafdata());
    if (ospflsdbtype.is_set || is_set(ospflsdbtype.operation)) leaf_name_data.push_back(ospflsdbtype.get_name_leafdata());
    if (ospflsdblsid.is_set || is_set(ospflsdblsid.operation)) leaf_name_data.push_back(ospflsdblsid.get_name_leafdata());
    if (ospflsdbrouterid.is_set || is_set(ospflsdbrouterid.operation)) leaf_name_data.push_back(ospflsdbrouterid.get_name_leafdata());
    if (ospflsdbadvertisement.is_set || is_set(ospflsdbadvertisement.operation)) leaf_name_data.push_back(ospflsdbadvertisement.get_name_leafdata());
    if (ospflsdbage.is_set || is_set(ospflsdbage.operation)) leaf_name_data.push_back(ospflsdbage.get_name_leafdata());
    if (ospflsdbchecksum.is_set || is_set(ospflsdbchecksum.operation)) leaf_name_data.push_back(ospflsdbchecksum.get_name_leafdata());
    if (ospflsdbsequence.is_set || is_set(ospflsdbsequence.operation)) leaf_name_data.push_back(ospflsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospflsdbtable::Ospflsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospflsdbtable::Ospflsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospflsdbtable::Ospflsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfLsdbAreaId")
    {
        ospflsdbareaid = value;
    }
    if(value_path == "ospfLsdbType")
    {
        ospflsdbtype = value;
    }
    if(value_path == "ospfLsdbLsid")
    {
        ospflsdblsid = value;
    }
    if(value_path == "ospfLsdbRouterId")
    {
        ospflsdbrouterid = value;
    }
    if(value_path == "ospfLsdbAdvertisement")
    {
        ospflsdbadvertisement = value;
    }
    if(value_path == "ospfLsdbAge")
    {
        ospflsdbage = value;
    }
    if(value_path == "ospfLsdbChecksum")
    {
        ospflsdbchecksum = value;
    }
    if(value_path == "ospfLsdbSequence")
    {
        ospflsdbsequence = value;
    }
}

OspfMib::Ospfarearangetable::Ospfarearangetable()
{
    yang_name = "ospfAreaRangeTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfarearangetable::~Ospfarearangetable()
{
}

bool OspfMib::Ospfarearangetable::has_data() const
{
    for (std::size_t index=0; index<ospfarearangeentry_.size(); index++)
    {
        if(ospfarearangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfarearangetable::has_operation() const
{
    for (std::size_t index=0; index<ospfarearangeentry_.size(); index++)
    {
        if(ospfarearangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfarearangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaRangeTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfarearangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfarearangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaRangeEntry")
    {
        for(auto const & c : ospfarearangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfarearangetable::Ospfarearangeentry>();
        c->parent = this;
        ospfarearangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfarearangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfarearangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfarearangetable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfarearangetable::Ospfarearangeentry::Ospfarearangeentry()
    :
    ospfarearangeareaid{YType::str, "ospfAreaRangeAreaId"},
    ospfarearangenet{YType::str, "ospfAreaRangeNet"},
    ospfarearangeeffect{YType::enumeration, "ospfAreaRangeEffect"},
    ospfarearangemask{YType::str, "ospfAreaRangeMask"},
    ospfarearangestatus{YType::enumeration, "ospfAreaRangeStatus"}
{
    yang_name = "ospfAreaRangeEntry"; yang_parent_name = "ospfAreaRangeTable";
}

OspfMib::Ospfarearangetable::Ospfarearangeentry::~Ospfarearangeentry()
{
}

bool OspfMib::Ospfarearangetable::Ospfarearangeentry::has_data() const
{
    return ospfarearangeareaid.is_set
	|| ospfarearangenet.is_set
	|| ospfarearangeeffect.is_set
	|| ospfarearangemask.is_set
	|| ospfarearangestatus.is_set;
}

bool OspfMib::Ospfarearangetable::Ospfarearangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfarearangeareaid.operation)
	|| is_set(ospfarearangenet.operation)
	|| is_set(ospfarearangeeffect.operation)
	|| is_set(ospfarearangemask.operation)
	|| is_set(ospfarearangestatus.operation);
}

std::string OspfMib::Ospfarearangetable::Ospfarearangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaRangeEntry" <<"[ospfAreaRangeAreaId='" <<ospfarearangeareaid <<"']" <<"[ospfAreaRangeNet='" <<ospfarearangenet <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfarearangetable::Ospfarearangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfarearangeareaid.is_set || is_set(ospfarearangeareaid.operation)) leaf_name_data.push_back(ospfarearangeareaid.get_name_leafdata());
    if (ospfarearangenet.is_set || is_set(ospfarearangenet.operation)) leaf_name_data.push_back(ospfarearangenet.get_name_leafdata());
    if (ospfarearangeeffect.is_set || is_set(ospfarearangeeffect.operation)) leaf_name_data.push_back(ospfarearangeeffect.get_name_leafdata());
    if (ospfarearangemask.is_set || is_set(ospfarearangemask.operation)) leaf_name_data.push_back(ospfarearangemask.get_name_leafdata());
    if (ospfarearangestatus.is_set || is_set(ospfarearangestatus.operation)) leaf_name_data.push_back(ospfarearangestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfarearangetable::Ospfarearangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfarearangetable::Ospfarearangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfarearangetable::Ospfarearangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfAreaRangeAreaId")
    {
        ospfarearangeareaid = value;
    }
    if(value_path == "ospfAreaRangeNet")
    {
        ospfarearangenet = value;
    }
    if(value_path == "ospfAreaRangeEffect")
    {
        ospfarearangeeffect = value;
    }
    if(value_path == "ospfAreaRangeMask")
    {
        ospfarearangemask = value;
    }
    if(value_path == "ospfAreaRangeStatus")
    {
        ospfarearangestatus = value;
    }
}

OspfMib::Ospfhosttable::Ospfhosttable()
{
    yang_name = "ospfHostTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfhosttable::~Ospfhosttable()
{
}

bool OspfMib::Ospfhosttable::has_data() const
{
    for (std::size_t index=0; index<ospfhostentry_.size(); index++)
    {
        if(ospfhostentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfhosttable::has_operation() const
{
    for (std::size_t index=0; index<ospfhostentry_.size(); index++)
    {
        if(ospfhostentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfhosttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfHostTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfhosttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfhosttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfHostEntry")
    {
        for(auto const & c : ospfhostentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfhosttable::Ospfhostentry>();
        c->parent = this;
        ospfhostentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfhosttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfhostentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfhosttable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfhosttable::Ospfhostentry::Ospfhostentry()
    :
    ospfhostipaddress{YType::str, "ospfHostIpAddress"},
    ospfhosttos{YType::int32, "ospfHostTOS"},
    ospfhostareaid{YType::str, "ospfHostAreaID"},
    ospfhostcfgareaid{YType::str, "ospfHostCfgAreaID"},
    ospfhostmetric{YType::int32, "ospfHostMetric"},
    ospfhoststatus{YType::enumeration, "ospfHostStatus"}
{
    yang_name = "ospfHostEntry"; yang_parent_name = "ospfHostTable";
}

OspfMib::Ospfhosttable::Ospfhostentry::~Ospfhostentry()
{
}

bool OspfMib::Ospfhosttable::Ospfhostentry::has_data() const
{
    return ospfhostipaddress.is_set
	|| ospfhosttos.is_set
	|| ospfhostareaid.is_set
	|| ospfhostcfgareaid.is_set
	|| ospfhostmetric.is_set
	|| ospfhoststatus.is_set;
}

bool OspfMib::Ospfhosttable::Ospfhostentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfhostipaddress.operation)
	|| is_set(ospfhosttos.operation)
	|| is_set(ospfhostareaid.operation)
	|| is_set(ospfhostcfgareaid.operation)
	|| is_set(ospfhostmetric.operation)
	|| is_set(ospfhoststatus.operation);
}

std::string OspfMib::Ospfhosttable::Ospfhostentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfHostEntry" <<"[ospfHostIpAddress='" <<ospfhostipaddress <<"']" <<"[ospfHostTOS='" <<ospfhosttos <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfhosttable::Ospfhostentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfHostTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfhostipaddress.is_set || is_set(ospfhostipaddress.operation)) leaf_name_data.push_back(ospfhostipaddress.get_name_leafdata());
    if (ospfhosttos.is_set || is_set(ospfhosttos.operation)) leaf_name_data.push_back(ospfhosttos.get_name_leafdata());
    if (ospfhostareaid.is_set || is_set(ospfhostareaid.operation)) leaf_name_data.push_back(ospfhostareaid.get_name_leafdata());
    if (ospfhostcfgareaid.is_set || is_set(ospfhostcfgareaid.operation)) leaf_name_data.push_back(ospfhostcfgareaid.get_name_leafdata());
    if (ospfhostmetric.is_set || is_set(ospfhostmetric.operation)) leaf_name_data.push_back(ospfhostmetric.get_name_leafdata());
    if (ospfhoststatus.is_set || is_set(ospfhoststatus.operation)) leaf_name_data.push_back(ospfhoststatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfhosttable::Ospfhostentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfhosttable::Ospfhostentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfhosttable::Ospfhostentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfHostIpAddress")
    {
        ospfhostipaddress = value;
    }
    if(value_path == "ospfHostTOS")
    {
        ospfhosttos = value;
    }
    if(value_path == "ospfHostAreaID")
    {
        ospfhostareaid = value;
    }
    if(value_path == "ospfHostCfgAreaID")
    {
        ospfhostcfgareaid = value;
    }
    if(value_path == "ospfHostMetric")
    {
        ospfhostmetric = value;
    }
    if(value_path == "ospfHostStatus")
    {
        ospfhoststatus = value;
    }
}

OspfMib::Ospfiftable::Ospfiftable()
{
    yang_name = "ospfIfTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfiftable::~Ospfiftable()
{
}

bool OspfMib::Ospfiftable::has_data() const
{
    for (std::size_t index=0; index<ospfifentry_.size(); index++)
    {
        if(ospfifentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfiftable::has_operation() const
{
    for (std::size_t index=0; index<ospfifentry_.size(); index++)
    {
        if(ospfifentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfiftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfIfEntry")
    {
        for(auto const & c : ospfifentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfiftable::Ospfifentry>();
        c->parent = this;
        ospfifentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfifentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfiftable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfiftable::Ospfifentry::Ospfifentry()
    :
    ospfifipaddress{YType::str, "ospfIfIpAddress"},
    ospfaddresslessif{YType::int32, "ospfAddressLessIf"},
    cospfiflsacksumsum{YType::uint32, "CISCO-OSPF-MIB:cospfIfLsaCksumSum"},
    cospfiflsacount{YType::uint32, "CISCO-OSPF-MIB:cospfIfLsaCount"},
    ospfifadminstat{YType::enumeration, "ospfIfAdminStat"},
    ospfifareaid{YType::str, "ospfIfAreaId"},
    ospfifauthkey{YType::str, "ospfIfAuthKey"},
    ospfifauthtype{YType::enumeration, "ospfIfAuthType"},
    ospfifbackupdesignatedrouter{YType::str, "ospfIfBackupDesignatedRouter"},
    ospfifbackupdesignatedrouterid{YType::str, "ospfIfBackupDesignatedRouterId"},
    ospfifdemand{YType::boolean, "ospfIfDemand"},
    ospfifdesignatedrouter{YType::str, "ospfIfDesignatedRouter"},
    ospfifdesignatedrouterid{YType::str, "ospfIfDesignatedRouterId"},
    ospfifevents{YType::uint32, "ospfIfEvents"},
    ospfifhellointerval{YType::int32, "ospfIfHelloInterval"},
    ospfiflsacksumsum{YType::uint32, "ospfIfLsaCksumSum"},
    ospfiflsacount{YType::uint32, "ospfIfLsaCount"},
    ospfifmulticastforwarding{YType::enumeration, "ospfIfMulticastForwarding"},
    ospfifpollinterval{YType::int32, "ospfIfPollInterval"},
    ospfifretransinterval{YType::int32, "ospfIfRetransInterval"},
    ospfifrtrdeadinterval{YType::int32, "ospfIfRtrDeadInterval"},
    ospfifrtrpriority{YType::int32, "ospfIfRtrPriority"},
    ospfifstate{YType::enumeration, "ospfIfState"},
    ospfifstatus{YType::enumeration, "ospfIfStatus"},
    ospfiftransitdelay{YType::int32, "ospfIfTransitDelay"},
    ospfiftype{YType::enumeration, "ospfIfType"}
{
    yang_name = "ospfIfEntry"; yang_parent_name = "ospfIfTable";
}

OspfMib::Ospfiftable::Ospfifentry::~Ospfifentry()
{
}

bool OspfMib::Ospfiftable::Ospfifentry::has_data() const
{
    return ospfifipaddress.is_set
	|| ospfaddresslessif.is_set
	|| cospfiflsacksumsum.is_set
	|| cospfiflsacount.is_set
	|| ospfifadminstat.is_set
	|| ospfifareaid.is_set
	|| ospfifauthkey.is_set
	|| ospfifauthtype.is_set
	|| ospfifbackupdesignatedrouter.is_set
	|| ospfifbackupdesignatedrouterid.is_set
	|| ospfifdemand.is_set
	|| ospfifdesignatedrouter.is_set
	|| ospfifdesignatedrouterid.is_set
	|| ospfifevents.is_set
	|| ospfifhellointerval.is_set
	|| ospfiflsacksumsum.is_set
	|| ospfiflsacount.is_set
	|| ospfifmulticastforwarding.is_set
	|| ospfifpollinterval.is_set
	|| ospfifretransinterval.is_set
	|| ospfifrtrdeadinterval.is_set
	|| ospfifrtrpriority.is_set
	|| ospfifstate.is_set
	|| ospfifstatus.is_set
	|| ospfiftransitdelay.is_set
	|| ospfiftype.is_set;
}

bool OspfMib::Ospfiftable::Ospfifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfifipaddress.operation)
	|| is_set(ospfaddresslessif.operation)
	|| is_set(cospfiflsacksumsum.operation)
	|| is_set(cospfiflsacount.operation)
	|| is_set(ospfifadminstat.operation)
	|| is_set(ospfifareaid.operation)
	|| is_set(ospfifauthkey.operation)
	|| is_set(ospfifauthtype.operation)
	|| is_set(ospfifbackupdesignatedrouter.operation)
	|| is_set(ospfifbackupdesignatedrouterid.operation)
	|| is_set(ospfifdemand.operation)
	|| is_set(ospfifdesignatedrouter.operation)
	|| is_set(ospfifdesignatedrouterid.operation)
	|| is_set(ospfifevents.operation)
	|| is_set(ospfifhellointerval.operation)
	|| is_set(ospfiflsacksumsum.operation)
	|| is_set(ospfiflsacount.operation)
	|| is_set(ospfifmulticastforwarding.operation)
	|| is_set(ospfifpollinterval.operation)
	|| is_set(ospfifretransinterval.operation)
	|| is_set(ospfifrtrdeadinterval.operation)
	|| is_set(ospfifrtrpriority.operation)
	|| is_set(ospfifstate.operation)
	|| is_set(ospfifstatus.operation)
	|| is_set(ospfiftransitdelay.operation)
	|| is_set(ospfiftype.operation);
}

std::string OspfMib::Ospfiftable::Ospfifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfEntry" <<"[ospfIfIpAddress='" <<ospfifipaddress <<"']" <<"[ospfAddressLessIf='" <<ospfaddresslessif <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfiftable::Ospfifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfifipaddress.is_set || is_set(ospfifipaddress.operation)) leaf_name_data.push_back(ospfifipaddress.get_name_leafdata());
    if (ospfaddresslessif.is_set || is_set(ospfaddresslessif.operation)) leaf_name_data.push_back(ospfaddresslessif.get_name_leafdata());
    if (cospfiflsacksumsum.is_set || is_set(cospfiflsacksumsum.operation)) leaf_name_data.push_back(cospfiflsacksumsum.get_name_leafdata());
    if (cospfiflsacount.is_set || is_set(cospfiflsacount.operation)) leaf_name_data.push_back(cospfiflsacount.get_name_leafdata());
    if (ospfifadminstat.is_set || is_set(ospfifadminstat.operation)) leaf_name_data.push_back(ospfifadminstat.get_name_leafdata());
    if (ospfifareaid.is_set || is_set(ospfifareaid.operation)) leaf_name_data.push_back(ospfifareaid.get_name_leafdata());
    if (ospfifauthkey.is_set || is_set(ospfifauthkey.operation)) leaf_name_data.push_back(ospfifauthkey.get_name_leafdata());
    if (ospfifauthtype.is_set || is_set(ospfifauthtype.operation)) leaf_name_data.push_back(ospfifauthtype.get_name_leafdata());
    if (ospfifbackupdesignatedrouter.is_set || is_set(ospfifbackupdesignatedrouter.operation)) leaf_name_data.push_back(ospfifbackupdesignatedrouter.get_name_leafdata());
    if (ospfifbackupdesignatedrouterid.is_set || is_set(ospfifbackupdesignatedrouterid.operation)) leaf_name_data.push_back(ospfifbackupdesignatedrouterid.get_name_leafdata());
    if (ospfifdemand.is_set || is_set(ospfifdemand.operation)) leaf_name_data.push_back(ospfifdemand.get_name_leafdata());
    if (ospfifdesignatedrouter.is_set || is_set(ospfifdesignatedrouter.operation)) leaf_name_data.push_back(ospfifdesignatedrouter.get_name_leafdata());
    if (ospfifdesignatedrouterid.is_set || is_set(ospfifdesignatedrouterid.operation)) leaf_name_data.push_back(ospfifdesignatedrouterid.get_name_leafdata());
    if (ospfifevents.is_set || is_set(ospfifevents.operation)) leaf_name_data.push_back(ospfifevents.get_name_leafdata());
    if (ospfifhellointerval.is_set || is_set(ospfifhellointerval.operation)) leaf_name_data.push_back(ospfifhellointerval.get_name_leafdata());
    if (ospfiflsacksumsum.is_set || is_set(ospfiflsacksumsum.operation)) leaf_name_data.push_back(ospfiflsacksumsum.get_name_leafdata());
    if (ospfiflsacount.is_set || is_set(ospfiflsacount.operation)) leaf_name_data.push_back(ospfiflsacount.get_name_leafdata());
    if (ospfifmulticastforwarding.is_set || is_set(ospfifmulticastforwarding.operation)) leaf_name_data.push_back(ospfifmulticastforwarding.get_name_leafdata());
    if (ospfifpollinterval.is_set || is_set(ospfifpollinterval.operation)) leaf_name_data.push_back(ospfifpollinterval.get_name_leafdata());
    if (ospfifretransinterval.is_set || is_set(ospfifretransinterval.operation)) leaf_name_data.push_back(ospfifretransinterval.get_name_leafdata());
    if (ospfifrtrdeadinterval.is_set || is_set(ospfifrtrdeadinterval.operation)) leaf_name_data.push_back(ospfifrtrdeadinterval.get_name_leafdata());
    if (ospfifrtrpriority.is_set || is_set(ospfifrtrpriority.operation)) leaf_name_data.push_back(ospfifrtrpriority.get_name_leafdata());
    if (ospfifstate.is_set || is_set(ospfifstate.operation)) leaf_name_data.push_back(ospfifstate.get_name_leafdata());
    if (ospfifstatus.is_set || is_set(ospfifstatus.operation)) leaf_name_data.push_back(ospfifstatus.get_name_leafdata());
    if (ospfiftransitdelay.is_set || is_set(ospfiftransitdelay.operation)) leaf_name_data.push_back(ospfiftransitdelay.get_name_leafdata());
    if (ospfiftype.is_set || is_set(ospfiftype.operation)) leaf_name_data.push_back(ospfiftype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfiftable::Ospfifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfiftable::Ospfifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfiftable::Ospfifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfIfIpAddress")
    {
        ospfifipaddress = value;
    }
    if(value_path == "ospfAddressLessIf")
    {
        ospfaddresslessif = value;
    }
    if(value_path == "cospfIfLsaCksumSum")
    {
        cospfiflsacksumsum = value;
    }
    if(value_path == "cospfIfLsaCount")
    {
        cospfiflsacount = value;
    }
    if(value_path == "ospfIfAdminStat")
    {
        ospfifadminstat = value;
    }
    if(value_path == "ospfIfAreaId")
    {
        ospfifareaid = value;
    }
    if(value_path == "ospfIfAuthKey")
    {
        ospfifauthkey = value;
    }
    if(value_path == "ospfIfAuthType")
    {
        ospfifauthtype = value;
    }
    if(value_path == "ospfIfBackupDesignatedRouter")
    {
        ospfifbackupdesignatedrouter = value;
    }
    if(value_path == "ospfIfBackupDesignatedRouterId")
    {
        ospfifbackupdesignatedrouterid = value;
    }
    if(value_path == "ospfIfDemand")
    {
        ospfifdemand = value;
    }
    if(value_path == "ospfIfDesignatedRouter")
    {
        ospfifdesignatedrouter = value;
    }
    if(value_path == "ospfIfDesignatedRouterId")
    {
        ospfifdesignatedrouterid = value;
    }
    if(value_path == "ospfIfEvents")
    {
        ospfifevents = value;
    }
    if(value_path == "ospfIfHelloInterval")
    {
        ospfifhellointerval = value;
    }
    if(value_path == "ospfIfLsaCksumSum")
    {
        ospfiflsacksumsum = value;
    }
    if(value_path == "ospfIfLsaCount")
    {
        ospfiflsacount = value;
    }
    if(value_path == "ospfIfMulticastForwarding")
    {
        ospfifmulticastforwarding = value;
    }
    if(value_path == "ospfIfPollInterval")
    {
        ospfifpollinterval = value;
    }
    if(value_path == "ospfIfRetransInterval")
    {
        ospfifretransinterval = value;
    }
    if(value_path == "ospfIfRtrDeadInterval")
    {
        ospfifrtrdeadinterval = value;
    }
    if(value_path == "ospfIfRtrPriority")
    {
        ospfifrtrpriority = value;
    }
    if(value_path == "ospfIfState")
    {
        ospfifstate = value;
    }
    if(value_path == "ospfIfStatus")
    {
        ospfifstatus = value;
    }
    if(value_path == "ospfIfTransitDelay")
    {
        ospfiftransitdelay = value;
    }
    if(value_path == "ospfIfType")
    {
        ospfiftype = value;
    }
}

OspfMib::Ospfifmetrictable::Ospfifmetrictable()
{
    yang_name = "ospfIfMetricTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfifmetrictable::~Ospfifmetrictable()
{
}

bool OspfMib::Ospfifmetrictable::has_data() const
{
    for (std::size_t index=0; index<ospfifmetricentry_.size(); index++)
    {
        if(ospfifmetricentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfifmetrictable::has_operation() const
{
    for (std::size_t index=0; index<ospfifmetricentry_.size(); index++)
    {
        if(ospfifmetricentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfifmetrictable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfMetricTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfifmetrictable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfifmetrictable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfIfMetricEntry")
    {
        for(auto const & c : ospfifmetricentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfifmetrictable::Ospfifmetricentry>();
        c->parent = this;
        ospfifmetricentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfifmetrictable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfifmetricentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfifmetrictable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfifmetrictable::Ospfifmetricentry::Ospfifmetricentry()
    :
    ospfifmetricipaddress{YType::str, "ospfIfMetricIpAddress"},
    ospfifmetricaddresslessif{YType::int32, "ospfIfMetricAddressLessIf"},
    ospfifmetrictos{YType::int32, "ospfIfMetricTOS"},
    ospfifmetricstatus{YType::enumeration, "ospfIfMetricStatus"},
    ospfifmetricvalue{YType::int32, "ospfIfMetricValue"}
{
    yang_name = "ospfIfMetricEntry"; yang_parent_name = "ospfIfMetricTable";
}

OspfMib::Ospfifmetrictable::Ospfifmetricentry::~Ospfifmetricentry()
{
}

bool OspfMib::Ospfifmetrictable::Ospfifmetricentry::has_data() const
{
    return ospfifmetricipaddress.is_set
	|| ospfifmetricaddresslessif.is_set
	|| ospfifmetrictos.is_set
	|| ospfifmetricstatus.is_set
	|| ospfifmetricvalue.is_set;
}

bool OspfMib::Ospfifmetrictable::Ospfifmetricentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfifmetricipaddress.operation)
	|| is_set(ospfifmetricaddresslessif.operation)
	|| is_set(ospfifmetrictos.operation)
	|| is_set(ospfifmetricstatus.operation)
	|| is_set(ospfifmetricvalue.operation);
}

std::string OspfMib::Ospfifmetrictable::Ospfifmetricentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfIfMetricEntry" <<"[ospfIfMetricIpAddress='" <<ospfifmetricipaddress <<"']" <<"[ospfIfMetricAddressLessIf='" <<ospfifmetricaddresslessif <<"']" <<"[ospfIfMetricTOS='" <<ospfifmetrictos <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfifmetrictable::Ospfifmetricentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfIfMetricTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfifmetricipaddress.is_set || is_set(ospfifmetricipaddress.operation)) leaf_name_data.push_back(ospfifmetricipaddress.get_name_leafdata());
    if (ospfifmetricaddresslessif.is_set || is_set(ospfifmetricaddresslessif.operation)) leaf_name_data.push_back(ospfifmetricaddresslessif.get_name_leafdata());
    if (ospfifmetrictos.is_set || is_set(ospfifmetrictos.operation)) leaf_name_data.push_back(ospfifmetrictos.get_name_leafdata());
    if (ospfifmetricstatus.is_set || is_set(ospfifmetricstatus.operation)) leaf_name_data.push_back(ospfifmetricstatus.get_name_leafdata());
    if (ospfifmetricvalue.is_set || is_set(ospfifmetricvalue.operation)) leaf_name_data.push_back(ospfifmetricvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfifmetrictable::Ospfifmetricentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfifmetrictable::Ospfifmetricentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfifmetrictable::Ospfifmetricentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfIfMetricIpAddress")
    {
        ospfifmetricipaddress = value;
    }
    if(value_path == "ospfIfMetricAddressLessIf")
    {
        ospfifmetricaddresslessif = value;
    }
    if(value_path == "ospfIfMetricTOS")
    {
        ospfifmetrictos = value;
    }
    if(value_path == "ospfIfMetricStatus")
    {
        ospfifmetricstatus = value;
    }
    if(value_path == "ospfIfMetricValue")
    {
        ospfifmetricvalue = value;
    }
}

OspfMib::Ospfvirtiftable::Ospfvirtiftable()
{
    yang_name = "ospfVirtIfTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfvirtiftable::~Ospfvirtiftable()
{
}

bool OspfMib::Ospfvirtiftable::has_data() const
{
    for (std::size_t index=0; index<ospfvirtifentry_.size(); index++)
    {
        if(ospfvirtifentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfvirtiftable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtifentry_.size(); index++)
    {
        if(ospfvirtifentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfvirtiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtIfTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfvirtiftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfvirtiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtIfEntry")
    {
        for(auto const & c : ospfvirtifentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfvirtiftable::Ospfvirtifentry>();
        c->parent = this;
        ospfvirtifentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfvirtiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfvirtifentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfvirtiftable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfvirtiftable::Ospfvirtifentry::Ospfvirtifentry()
    :
    ospfvirtifareaid{YType::str, "ospfVirtIfAreaId"},
    ospfvirtifneighbor{YType::str, "ospfVirtIfNeighbor"},
    cospfvirtiflsacksumsum{YType::uint32, "CISCO-OSPF-MIB:cospfVirtIfLsaCksumSum"},
    cospfvirtiflsacount{YType::uint32, "CISCO-OSPF-MIB:cospfVirtIfLsaCount"},
    ospfvirtifauthkey{YType::str, "ospfVirtIfAuthKey"},
    ospfvirtifauthtype{YType::enumeration, "ospfVirtIfAuthType"},
    ospfvirtifevents{YType::uint32, "ospfVirtIfEvents"},
    ospfvirtifhellointerval{YType::int32, "ospfVirtIfHelloInterval"},
    ospfvirtiflsacksumsum{YType::uint32, "ospfVirtIfLsaCksumSum"},
    ospfvirtiflsacount{YType::uint32, "ospfVirtIfLsaCount"},
    ospfvirtifretransinterval{YType::int32, "ospfVirtIfRetransInterval"},
    ospfvirtifrtrdeadinterval{YType::int32, "ospfVirtIfRtrDeadInterval"},
    ospfvirtifstate{YType::enumeration, "ospfVirtIfState"},
    ospfvirtifstatus{YType::enumeration, "ospfVirtIfStatus"},
    ospfvirtiftransitdelay{YType::int32, "ospfVirtIfTransitDelay"}
{
    yang_name = "ospfVirtIfEntry"; yang_parent_name = "ospfVirtIfTable";
}

OspfMib::Ospfvirtiftable::Ospfvirtifentry::~Ospfvirtifentry()
{
}

bool OspfMib::Ospfvirtiftable::Ospfvirtifentry::has_data() const
{
    return ospfvirtifareaid.is_set
	|| ospfvirtifneighbor.is_set
	|| cospfvirtiflsacksumsum.is_set
	|| cospfvirtiflsacount.is_set
	|| ospfvirtifauthkey.is_set
	|| ospfvirtifauthtype.is_set
	|| ospfvirtifevents.is_set
	|| ospfvirtifhellointerval.is_set
	|| ospfvirtiflsacksumsum.is_set
	|| ospfvirtiflsacount.is_set
	|| ospfvirtifretransinterval.is_set
	|| ospfvirtifrtrdeadinterval.is_set
	|| ospfvirtifstate.is_set
	|| ospfvirtifstatus.is_set
	|| ospfvirtiftransitdelay.is_set;
}

bool OspfMib::Ospfvirtiftable::Ospfvirtifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfvirtifareaid.operation)
	|| is_set(ospfvirtifneighbor.operation)
	|| is_set(cospfvirtiflsacksumsum.operation)
	|| is_set(cospfvirtiflsacount.operation)
	|| is_set(ospfvirtifauthkey.operation)
	|| is_set(ospfvirtifauthtype.operation)
	|| is_set(ospfvirtifevents.operation)
	|| is_set(ospfvirtifhellointerval.operation)
	|| is_set(ospfvirtiflsacksumsum.operation)
	|| is_set(ospfvirtiflsacount.operation)
	|| is_set(ospfvirtifretransinterval.operation)
	|| is_set(ospfvirtifrtrdeadinterval.operation)
	|| is_set(ospfvirtifstate.operation)
	|| is_set(ospfvirtifstatus.operation)
	|| is_set(ospfvirtiftransitdelay.operation);
}

std::string OspfMib::Ospfvirtiftable::Ospfvirtifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtIfEntry" <<"[ospfVirtIfAreaId='" <<ospfvirtifareaid <<"']" <<"[ospfVirtIfNeighbor='" <<ospfvirtifneighbor <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfvirtiftable::Ospfvirtifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfvirtifareaid.is_set || is_set(ospfvirtifareaid.operation)) leaf_name_data.push_back(ospfvirtifareaid.get_name_leafdata());
    if (ospfvirtifneighbor.is_set || is_set(ospfvirtifneighbor.operation)) leaf_name_data.push_back(ospfvirtifneighbor.get_name_leafdata());
    if (cospfvirtiflsacksumsum.is_set || is_set(cospfvirtiflsacksumsum.operation)) leaf_name_data.push_back(cospfvirtiflsacksumsum.get_name_leafdata());
    if (cospfvirtiflsacount.is_set || is_set(cospfvirtiflsacount.operation)) leaf_name_data.push_back(cospfvirtiflsacount.get_name_leafdata());
    if (ospfvirtifauthkey.is_set || is_set(ospfvirtifauthkey.operation)) leaf_name_data.push_back(ospfvirtifauthkey.get_name_leafdata());
    if (ospfvirtifauthtype.is_set || is_set(ospfvirtifauthtype.operation)) leaf_name_data.push_back(ospfvirtifauthtype.get_name_leafdata());
    if (ospfvirtifevents.is_set || is_set(ospfvirtifevents.operation)) leaf_name_data.push_back(ospfvirtifevents.get_name_leafdata());
    if (ospfvirtifhellointerval.is_set || is_set(ospfvirtifhellointerval.operation)) leaf_name_data.push_back(ospfvirtifhellointerval.get_name_leafdata());
    if (ospfvirtiflsacksumsum.is_set || is_set(ospfvirtiflsacksumsum.operation)) leaf_name_data.push_back(ospfvirtiflsacksumsum.get_name_leafdata());
    if (ospfvirtiflsacount.is_set || is_set(ospfvirtiflsacount.operation)) leaf_name_data.push_back(ospfvirtiflsacount.get_name_leafdata());
    if (ospfvirtifretransinterval.is_set || is_set(ospfvirtifretransinterval.operation)) leaf_name_data.push_back(ospfvirtifretransinterval.get_name_leafdata());
    if (ospfvirtifrtrdeadinterval.is_set || is_set(ospfvirtifrtrdeadinterval.operation)) leaf_name_data.push_back(ospfvirtifrtrdeadinterval.get_name_leafdata());
    if (ospfvirtifstate.is_set || is_set(ospfvirtifstate.operation)) leaf_name_data.push_back(ospfvirtifstate.get_name_leafdata());
    if (ospfvirtifstatus.is_set || is_set(ospfvirtifstatus.operation)) leaf_name_data.push_back(ospfvirtifstatus.get_name_leafdata());
    if (ospfvirtiftransitdelay.is_set || is_set(ospfvirtiftransitdelay.operation)) leaf_name_data.push_back(ospfvirtiftransitdelay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfvirtiftable::Ospfvirtifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfvirtiftable::Ospfvirtifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfvirtiftable::Ospfvirtifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfVirtIfAreaId")
    {
        ospfvirtifareaid = value;
    }
    if(value_path == "ospfVirtIfNeighbor")
    {
        ospfvirtifneighbor = value;
    }
    if(value_path == "cospfVirtIfLsaCksumSum")
    {
        cospfvirtiflsacksumsum = value;
    }
    if(value_path == "cospfVirtIfLsaCount")
    {
        cospfvirtiflsacount = value;
    }
    if(value_path == "ospfVirtIfAuthKey")
    {
        ospfvirtifauthkey = value;
    }
    if(value_path == "ospfVirtIfAuthType")
    {
        ospfvirtifauthtype = value;
    }
    if(value_path == "ospfVirtIfEvents")
    {
        ospfvirtifevents = value;
    }
    if(value_path == "ospfVirtIfHelloInterval")
    {
        ospfvirtifhellointerval = value;
    }
    if(value_path == "ospfVirtIfLsaCksumSum")
    {
        ospfvirtiflsacksumsum = value;
    }
    if(value_path == "ospfVirtIfLsaCount")
    {
        ospfvirtiflsacount = value;
    }
    if(value_path == "ospfVirtIfRetransInterval")
    {
        ospfvirtifretransinterval = value;
    }
    if(value_path == "ospfVirtIfRtrDeadInterval")
    {
        ospfvirtifrtrdeadinterval = value;
    }
    if(value_path == "ospfVirtIfState")
    {
        ospfvirtifstate = value;
    }
    if(value_path == "ospfVirtIfStatus")
    {
        ospfvirtifstatus = value;
    }
    if(value_path == "ospfVirtIfTransitDelay")
    {
        ospfvirtiftransitdelay = value;
    }
}

OspfMib::Ospfnbrtable::Ospfnbrtable()
{
    yang_name = "ospfNbrTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfnbrtable::~Ospfnbrtable()
{
}

bool OspfMib::Ospfnbrtable::has_data() const
{
    for (std::size_t index=0; index<ospfnbrentry_.size(); index++)
    {
        if(ospfnbrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfnbrtable::has_operation() const
{
    for (std::size_t index=0; index<ospfnbrentry_.size(); index++)
    {
        if(ospfnbrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfnbrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfNbrTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfnbrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfnbrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfNbrEntry")
    {
        for(auto const & c : ospfnbrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfnbrtable::Ospfnbrentry>();
        c->parent = this;
        ospfnbrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfnbrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfnbrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfnbrtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfnbrtable::Ospfnbrentry::Ospfnbrentry()
    :
    ospfnbripaddr{YType::str, "ospfNbrIpAddr"},
    ospfnbraddresslessindex{YType::int32, "ospfNbrAddressLessIndex"},
    ospfnbmanbrpermanence{YType::enumeration, "ospfNbmaNbrPermanence"},
    ospfnbmanbrstatus{YType::enumeration, "ospfNbmaNbrStatus"},
    ospfnbrevents{YType::uint32, "ospfNbrEvents"},
    ospfnbrhellosuppressed{YType::boolean, "ospfNbrHelloSuppressed"},
    ospfnbrlsretransqlen{YType::uint32, "ospfNbrLsRetransQLen"},
    ospfnbroptions{YType::int32, "ospfNbrOptions"},
    ospfnbrpriority{YType::int32, "ospfNbrPriority"},
    ospfnbrrestarthelperage{YType::uint32, "ospfNbrRestartHelperAge"},
    ospfnbrrestarthelperexitreason{YType::enumeration, "ospfNbrRestartHelperExitReason"},
    ospfnbrrestarthelperstatus{YType::enumeration, "ospfNbrRestartHelperStatus"},
    ospfnbrrtrid{YType::str, "ospfNbrRtrId"},
    ospfnbrstate{YType::enumeration, "ospfNbrState"}
{
    yang_name = "ospfNbrEntry"; yang_parent_name = "ospfNbrTable";
}

OspfMib::Ospfnbrtable::Ospfnbrentry::~Ospfnbrentry()
{
}

bool OspfMib::Ospfnbrtable::Ospfnbrentry::has_data() const
{
    return ospfnbripaddr.is_set
	|| ospfnbraddresslessindex.is_set
	|| ospfnbmanbrpermanence.is_set
	|| ospfnbmanbrstatus.is_set
	|| ospfnbrevents.is_set
	|| ospfnbrhellosuppressed.is_set
	|| ospfnbrlsretransqlen.is_set
	|| ospfnbroptions.is_set
	|| ospfnbrpriority.is_set
	|| ospfnbrrestarthelperage.is_set
	|| ospfnbrrestarthelperexitreason.is_set
	|| ospfnbrrestarthelperstatus.is_set
	|| ospfnbrrtrid.is_set
	|| ospfnbrstate.is_set;
}

bool OspfMib::Ospfnbrtable::Ospfnbrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfnbripaddr.operation)
	|| is_set(ospfnbraddresslessindex.operation)
	|| is_set(ospfnbmanbrpermanence.operation)
	|| is_set(ospfnbmanbrstatus.operation)
	|| is_set(ospfnbrevents.operation)
	|| is_set(ospfnbrhellosuppressed.operation)
	|| is_set(ospfnbrlsretransqlen.operation)
	|| is_set(ospfnbroptions.operation)
	|| is_set(ospfnbrpriority.operation)
	|| is_set(ospfnbrrestarthelperage.operation)
	|| is_set(ospfnbrrestarthelperexitreason.operation)
	|| is_set(ospfnbrrestarthelperstatus.operation)
	|| is_set(ospfnbrrtrid.operation)
	|| is_set(ospfnbrstate.operation);
}

std::string OspfMib::Ospfnbrtable::Ospfnbrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfNbrEntry" <<"[ospfNbrIpAddr='" <<ospfnbripaddr <<"']" <<"[ospfNbrAddressLessIndex='" <<ospfnbraddresslessindex <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfnbrtable::Ospfnbrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfNbrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfnbripaddr.is_set || is_set(ospfnbripaddr.operation)) leaf_name_data.push_back(ospfnbripaddr.get_name_leafdata());
    if (ospfnbraddresslessindex.is_set || is_set(ospfnbraddresslessindex.operation)) leaf_name_data.push_back(ospfnbraddresslessindex.get_name_leafdata());
    if (ospfnbmanbrpermanence.is_set || is_set(ospfnbmanbrpermanence.operation)) leaf_name_data.push_back(ospfnbmanbrpermanence.get_name_leafdata());
    if (ospfnbmanbrstatus.is_set || is_set(ospfnbmanbrstatus.operation)) leaf_name_data.push_back(ospfnbmanbrstatus.get_name_leafdata());
    if (ospfnbrevents.is_set || is_set(ospfnbrevents.operation)) leaf_name_data.push_back(ospfnbrevents.get_name_leafdata());
    if (ospfnbrhellosuppressed.is_set || is_set(ospfnbrhellosuppressed.operation)) leaf_name_data.push_back(ospfnbrhellosuppressed.get_name_leafdata());
    if (ospfnbrlsretransqlen.is_set || is_set(ospfnbrlsretransqlen.operation)) leaf_name_data.push_back(ospfnbrlsretransqlen.get_name_leafdata());
    if (ospfnbroptions.is_set || is_set(ospfnbroptions.operation)) leaf_name_data.push_back(ospfnbroptions.get_name_leafdata());
    if (ospfnbrpriority.is_set || is_set(ospfnbrpriority.operation)) leaf_name_data.push_back(ospfnbrpriority.get_name_leafdata());
    if (ospfnbrrestarthelperage.is_set || is_set(ospfnbrrestarthelperage.operation)) leaf_name_data.push_back(ospfnbrrestarthelperage.get_name_leafdata());
    if (ospfnbrrestarthelperexitreason.is_set || is_set(ospfnbrrestarthelperexitreason.operation)) leaf_name_data.push_back(ospfnbrrestarthelperexitreason.get_name_leafdata());
    if (ospfnbrrestarthelperstatus.is_set || is_set(ospfnbrrestarthelperstatus.operation)) leaf_name_data.push_back(ospfnbrrestarthelperstatus.get_name_leafdata());
    if (ospfnbrrtrid.is_set || is_set(ospfnbrrtrid.operation)) leaf_name_data.push_back(ospfnbrrtrid.get_name_leafdata());
    if (ospfnbrstate.is_set || is_set(ospfnbrstate.operation)) leaf_name_data.push_back(ospfnbrstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfnbrtable::Ospfnbrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfnbrtable::Ospfnbrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfnbrtable::Ospfnbrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfNbrIpAddr")
    {
        ospfnbripaddr = value;
    }
    if(value_path == "ospfNbrAddressLessIndex")
    {
        ospfnbraddresslessindex = value;
    }
    if(value_path == "ospfNbmaNbrPermanence")
    {
        ospfnbmanbrpermanence = value;
    }
    if(value_path == "ospfNbmaNbrStatus")
    {
        ospfnbmanbrstatus = value;
    }
    if(value_path == "ospfNbrEvents")
    {
        ospfnbrevents = value;
    }
    if(value_path == "ospfNbrHelloSuppressed")
    {
        ospfnbrhellosuppressed = value;
    }
    if(value_path == "ospfNbrLsRetransQLen")
    {
        ospfnbrlsretransqlen = value;
    }
    if(value_path == "ospfNbrOptions")
    {
        ospfnbroptions = value;
    }
    if(value_path == "ospfNbrPriority")
    {
        ospfnbrpriority = value;
    }
    if(value_path == "ospfNbrRestartHelperAge")
    {
        ospfnbrrestarthelperage = value;
    }
    if(value_path == "ospfNbrRestartHelperExitReason")
    {
        ospfnbrrestarthelperexitreason = value;
    }
    if(value_path == "ospfNbrRestartHelperStatus")
    {
        ospfnbrrestarthelperstatus = value;
    }
    if(value_path == "ospfNbrRtrId")
    {
        ospfnbrrtrid = value;
    }
    if(value_path == "ospfNbrState")
    {
        ospfnbrstate = value;
    }
}

OspfMib::Ospfvirtnbrtable::Ospfvirtnbrtable()
{
    yang_name = "ospfVirtNbrTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfvirtnbrtable::~Ospfvirtnbrtable()
{
}

bool OspfMib::Ospfvirtnbrtable::has_data() const
{
    for (std::size_t index=0; index<ospfvirtnbrentry_.size(); index++)
    {
        if(ospfvirtnbrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfvirtnbrtable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtnbrentry_.size(); index++)
    {
        if(ospfvirtnbrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfvirtnbrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtNbrTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfvirtnbrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfvirtnbrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtNbrEntry")
    {
        for(auto const & c : ospfvirtnbrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry>();
        c->parent = this;
        ospfvirtnbrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfvirtnbrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfvirtnbrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfvirtnbrtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrentry()
    :
    ospfvirtnbrarea{YType::str, "ospfVirtNbrArea"},
    ospfvirtnbrrtrid{YType::str, "ospfVirtNbrRtrId"},
    ospfvirtnbrevents{YType::uint32, "ospfVirtNbrEvents"},
    ospfvirtnbrhellosuppressed{YType::boolean, "ospfVirtNbrHelloSuppressed"},
    ospfvirtnbripaddr{YType::str, "ospfVirtNbrIpAddr"},
    ospfvirtnbrlsretransqlen{YType::uint32, "ospfVirtNbrLsRetransQLen"},
    ospfvirtnbroptions{YType::int32, "ospfVirtNbrOptions"},
    ospfvirtnbrrestarthelperage{YType::uint32, "ospfVirtNbrRestartHelperAge"},
    ospfvirtnbrrestarthelperexitreason{YType::enumeration, "ospfVirtNbrRestartHelperExitReason"},
    ospfvirtnbrrestarthelperstatus{YType::enumeration, "ospfVirtNbrRestartHelperStatus"},
    ospfvirtnbrstate{YType::enumeration, "ospfVirtNbrState"}
{
    yang_name = "ospfVirtNbrEntry"; yang_parent_name = "ospfVirtNbrTable";
}

OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::~Ospfvirtnbrentry()
{
}

bool OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::has_data() const
{
    return ospfvirtnbrarea.is_set
	|| ospfvirtnbrrtrid.is_set
	|| ospfvirtnbrevents.is_set
	|| ospfvirtnbrhellosuppressed.is_set
	|| ospfvirtnbripaddr.is_set
	|| ospfvirtnbrlsretransqlen.is_set
	|| ospfvirtnbroptions.is_set
	|| ospfvirtnbrrestarthelperage.is_set
	|| ospfvirtnbrrestarthelperexitreason.is_set
	|| ospfvirtnbrrestarthelperstatus.is_set
	|| ospfvirtnbrstate.is_set;
}

bool OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfvirtnbrarea.operation)
	|| is_set(ospfvirtnbrrtrid.operation)
	|| is_set(ospfvirtnbrevents.operation)
	|| is_set(ospfvirtnbrhellosuppressed.operation)
	|| is_set(ospfvirtnbripaddr.operation)
	|| is_set(ospfvirtnbrlsretransqlen.operation)
	|| is_set(ospfvirtnbroptions.operation)
	|| is_set(ospfvirtnbrrestarthelperage.operation)
	|| is_set(ospfvirtnbrrestarthelperexitreason.operation)
	|| is_set(ospfvirtnbrrestarthelperstatus.operation)
	|| is_set(ospfvirtnbrstate.operation);
}

std::string OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtNbrEntry" <<"[ospfVirtNbrArea='" <<ospfvirtnbrarea <<"']" <<"[ospfVirtNbrRtrId='" <<ospfvirtnbrrtrid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtNbrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfvirtnbrarea.is_set || is_set(ospfvirtnbrarea.operation)) leaf_name_data.push_back(ospfvirtnbrarea.get_name_leafdata());
    if (ospfvirtnbrrtrid.is_set || is_set(ospfvirtnbrrtrid.operation)) leaf_name_data.push_back(ospfvirtnbrrtrid.get_name_leafdata());
    if (ospfvirtnbrevents.is_set || is_set(ospfvirtnbrevents.operation)) leaf_name_data.push_back(ospfvirtnbrevents.get_name_leafdata());
    if (ospfvirtnbrhellosuppressed.is_set || is_set(ospfvirtnbrhellosuppressed.operation)) leaf_name_data.push_back(ospfvirtnbrhellosuppressed.get_name_leafdata());
    if (ospfvirtnbripaddr.is_set || is_set(ospfvirtnbripaddr.operation)) leaf_name_data.push_back(ospfvirtnbripaddr.get_name_leafdata());
    if (ospfvirtnbrlsretransqlen.is_set || is_set(ospfvirtnbrlsretransqlen.operation)) leaf_name_data.push_back(ospfvirtnbrlsretransqlen.get_name_leafdata());
    if (ospfvirtnbroptions.is_set || is_set(ospfvirtnbroptions.operation)) leaf_name_data.push_back(ospfvirtnbroptions.get_name_leafdata());
    if (ospfvirtnbrrestarthelperage.is_set || is_set(ospfvirtnbrrestarthelperage.operation)) leaf_name_data.push_back(ospfvirtnbrrestarthelperage.get_name_leafdata());
    if (ospfvirtnbrrestarthelperexitreason.is_set || is_set(ospfvirtnbrrestarthelperexitreason.operation)) leaf_name_data.push_back(ospfvirtnbrrestarthelperexitreason.get_name_leafdata());
    if (ospfvirtnbrrestarthelperstatus.is_set || is_set(ospfvirtnbrrestarthelperstatus.operation)) leaf_name_data.push_back(ospfvirtnbrrestarthelperstatus.get_name_leafdata());
    if (ospfvirtnbrstate.is_set || is_set(ospfvirtnbrstate.operation)) leaf_name_data.push_back(ospfvirtnbrstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfVirtNbrArea")
    {
        ospfvirtnbrarea = value;
    }
    if(value_path == "ospfVirtNbrRtrId")
    {
        ospfvirtnbrrtrid = value;
    }
    if(value_path == "ospfVirtNbrEvents")
    {
        ospfvirtnbrevents = value;
    }
    if(value_path == "ospfVirtNbrHelloSuppressed")
    {
        ospfvirtnbrhellosuppressed = value;
    }
    if(value_path == "ospfVirtNbrIpAddr")
    {
        ospfvirtnbripaddr = value;
    }
    if(value_path == "ospfVirtNbrLsRetransQLen")
    {
        ospfvirtnbrlsretransqlen = value;
    }
    if(value_path == "ospfVirtNbrOptions")
    {
        ospfvirtnbroptions = value;
    }
    if(value_path == "ospfVirtNbrRestartHelperAge")
    {
        ospfvirtnbrrestarthelperage = value;
    }
    if(value_path == "ospfVirtNbrRestartHelperExitReason")
    {
        ospfvirtnbrrestarthelperexitreason = value;
    }
    if(value_path == "ospfVirtNbrRestartHelperStatus")
    {
        ospfvirtnbrrestarthelperstatus = value;
    }
    if(value_path == "ospfVirtNbrState")
    {
        ospfvirtnbrstate = value;
    }
}

OspfMib::Ospfextlsdbtable::Ospfextlsdbtable()
{
    yang_name = "ospfExtLsdbTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfextlsdbtable::~Ospfextlsdbtable()
{
}

bool OspfMib::Ospfextlsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospfextlsdbentry_.size(); index++)
    {
        if(ospfextlsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfextlsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospfextlsdbentry_.size(); index++)
    {
        if(ospfextlsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfextlsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfExtLsdbTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfextlsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfextlsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfExtLsdbEntry")
    {
        for(auto const & c : ospfextlsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfextlsdbtable::Ospfextlsdbentry>();
        c->parent = this;
        ospfextlsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfextlsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfextlsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfextlsdbtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::Ospfextlsdbentry()
    :
    ospfextlsdbtype{YType::enumeration, "ospfExtLsdbType"},
    ospfextlsdblsid{YType::str, "ospfExtLsdbLsid"},
    ospfextlsdbrouterid{YType::str, "ospfExtLsdbRouterId"},
    ospfextlsdbadvertisement{YType::str, "ospfExtLsdbAdvertisement"},
    ospfextlsdbage{YType::int32, "ospfExtLsdbAge"},
    ospfextlsdbchecksum{YType::int32, "ospfExtLsdbChecksum"},
    ospfextlsdbsequence{YType::int32, "ospfExtLsdbSequence"}
{
    yang_name = "ospfExtLsdbEntry"; yang_parent_name = "ospfExtLsdbTable";
}

OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::~Ospfextlsdbentry()
{
}

bool OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::has_data() const
{
    return ospfextlsdbtype.is_set
	|| ospfextlsdblsid.is_set
	|| ospfextlsdbrouterid.is_set
	|| ospfextlsdbadvertisement.is_set
	|| ospfextlsdbage.is_set
	|| ospfextlsdbchecksum.is_set
	|| ospfextlsdbsequence.is_set;
}

bool OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfextlsdbtype.operation)
	|| is_set(ospfextlsdblsid.operation)
	|| is_set(ospfextlsdbrouterid.operation)
	|| is_set(ospfextlsdbadvertisement.operation)
	|| is_set(ospfextlsdbage.operation)
	|| is_set(ospfextlsdbchecksum.operation)
	|| is_set(ospfextlsdbsequence.operation);
}

std::string OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfExtLsdbEntry" <<"[ospfExtLsdbType='" <<ospfextlsdbtype <<"']" <<"[ospfExtLsdbLsid='" <<ospfextlsdblsid <<"']" <<"[ospfExtLsdbRouterId='" <<ospfextlsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfExtLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfextlsdbtype.is_set || is_set(ospfextlsdbtype.operation)) leaf_name_data.push_back(ospfextlsdbtype.get_name_leafdata());
    if (ospfextlsdblsid.is_set || is_set(ospfextlsdblsid.operation)) leaf_name_data.push_back(ospfextlsdblsid.get_name_leafdata());
    if (ospfextlsdbrouterid.is_set || is_set(ospfextlsdbrouterid.operation)) leaf_name_data.push_back(ospfextlsdbrouterid.get_name_leafdata());
    if (ospfextlsdbadvertisement.is_set || is_set(ospfextlsdbadvertisement.operation)) leaf_name_data.push_back(ospfextlsdbadvertisement.get_name_leafdata());
    if (ospfextlsdbage.is_set || is_set(ospfextlsdbage.operation)) leaf_name_data.push_back(ospfextlsdbage.get_name_leafdata());
    if (ospfextlsdbchecksum.is_set || is_set(ospfextlsdbchecksum.operation)) leaf_name_data.push_back(ospfextlsdbchecksum.get_name_leafdata());
    if (ospfextlsdbsequence.is_set || is_set(ospfextlsdbsequence.operation)) leaf_name_data.push_back(ospfextlsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfExtLsdbType")
    {
        ospfextlsdbtype = value;
    }
    if(value_path == "ospfExtLsdbLsid")
    {
        ospfextlsdblsid = value;
    }
    if(value_path == "ospfExtLsdbRouterId")
    {
        ospfextlsdbrouterid = value;
    }
    if(value_path == "ospfExtLsdbAdvertisement")
    {
        ospfextlsdbadvertisement = value;
    }
    if(value_path == "ospfExtLsdbAge")
    {
        ospfextlsdbage = value;
    }
    if(value_path == "ospfExtLsdbChecksum")
    {
        ospfextlsdbchecksum = value;
    }
    if(value_path == "ospfExtLsdbSequence")
    {
        ospfextlsdbsequence = value;
    }
}

OspfMib::Ospfareaaggregatetable::Ospfareaaggregatetable()
{
    yang_name = "ospfAreaAggregateTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfareaaggregatetable::~Ospfareaaggregatetable()
{
}

bool OspfMib::Ospfareaaggregatetable::has_data() const
{
    for (std::size_t index=0; index<ospfareaaggregateentry_.size(); index++)
    {
        if(ospfareaaggregateentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfareaaggregatetable::has_operation() const
{
    for (std::size_t index=0; index<ospfareaaggregateentry_.size(); index++)
    {
        if(ospfareaaggregateentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfareaaggregatetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaAggregateTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfareaaggregatetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfareaaggregatetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaAggregateEntry")
    {
        for(auto const & c : ospfareaaggregateentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry>();
        c->parent = this;
        ospfareaaggregateentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfareaaggregatetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfareaaggregateentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfareaaggregatetable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregateentry()
    :
    ospfareaaggregateareaid{YType::str, "ospfAreaAggregateAreaID"},
    ospfareaaggregatelsdbtype{YType::enumeration, "ospfAreaAggregateLsdbType"},
    ospfareaaggregatenet{YType::str, "ospfAreaAggregateNet"},
    ospfareaaggregatemask{YType::str, "ospfAreaAggregateMask"},
    ospfareaaggregateeffect{YType::enumeration, "ospfAreaAggregateEffect"},
    ospfareaaggregateextroutetag{YType::uint32, "ospfAreaAggregateExtRouteTag"},
    ospfareaaggregatestatus{YType::enumeration, "ospfAreaAggregateStatus"}
{
    yang_name = "ospfAreaAggregateEntry"; yang_parent_name = "ospfAreaAggregateTable";
}

OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::~Ospfareaaggregateentry()
{
}

bool OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::has_data() const
{
    return ospfareaaggregateareaid.is_set
	|| ospfareaaggregatelsdbtype.is_set
	|| ospfareaaggregatenet.is_set
	|| ospfareaaggregatemask.is_set
	|| ospfareaaggregateeffect.is_set
	|| ospfareaaggregateextroutetag.is_set
	|| ospfareaaggregatestatus.is_set;
}

bool OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfareaaggregateareaid.operation)
	|| is_set(ospfareaaggregatelsdbtype.operation)
	|| is_set(ospfareaaggregatenet.operation)
	|| is_set(ospfareaaggregatemask.operation)
	|| is_set(ospfareaaggregateeffect.operation)
	|| is_set(ospfareaaggregateextroutetag.operation)
	|| is_set(ospfareaaggregatestatus.operation);
}

std::string OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaAggregateEntry" <<"[ospfAreaAggregateAreaID='" <<ospfareaaggregateareaid <<"']" <<"[ospfAreaAggregateLsdbType='" <<ospfareaaggregatelsdbtype <<"']" <<"[ospfAreaAggregateNet='" <<ospfareaaggregatenet <<"']" <<"[ospfAreaAggregateMask='" <<ospfareaaggregatemask <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaAggregateTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfareaaggregateareaid.is_set || is_set(ospfareaaggregateareaid.operation)) leaf_name_data.push_back(ospfareaaggregateareaid.get_name_leafdata());
    if (ospfareaaggregatelsdbtype.is_set || is_set(ospfareaaggregatelsdbtype.operation)) leaf_name_data.push_back(ospfareaaggregatelsdbtype.get_name_leafdata());
    if (ospfareaaggregatenet.is_set || is_set(ospfareaaggregatenet.operation)) leaf_name_data.push_back(ospfareaaggregatenet.get_name_leafdata());
    if (ospfareaaggregatemask.is_set || is_set(ospfareaaggregatemask.operation)) leaf_name_data.push_back(ospfareaaggregatemask.get_name_leafdata());
    if (ospfareaaggregateeffect.is_set || is_set(ospfareaaggregateeffect.operation)) leaf_name_data.push_back(ospfareaaggregateeffect.get_name_leafdata());
    if (ospfareaaggregateextroutetag.is_set || is_set(ospfareaaggregateextroutetag.operation)) leaf_name_data.push_back(ospfareaaggregateextroutetag.get_name_leafdata());
    if (ospfareaaggregatestatus.is_set || is_set(ospfareaaggregatestatus.operation)) leaf_name_data.push_back(ospfareaaggregatestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfAreaAggregateAreaID")
    {
        ospfareaaggregateareaid = value;
    }
    if(value_path == "ospfAreaAggregateLsdbType")
    {
        ospfareaaggregatelsdbtype = value;
    }
    if(value_path == "ospfAreaAggregateNet")
    {
        ospfareaaggregatenet = value;
    }
    if(value_path == "ospfAreaAggregateMask")
    {
        ospfareaaggregatemask = value;
    }
    if(value_path == "ospfAreaAggregateEffect")
    {
        ospfareaaggregateeffect = value;
    }
    if(value_path == "ospfAreaAggregateExtRouteTag")
    {
        ospfareaaggregateextroutetag = value;
    }
    if(value_path == "ospfAreaAggregateStatus")
    {
        ospfareaaggregatestatus = value;
    }
}

OspfMib::Ospflocallsdbtable::Ospflocallsdbtable()
{
    yang_name = "ospfLocalLsdbTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospflocallsdbtable::~Ospflocallsdbtable()
{
}

bool OspfMib::Ospflocallsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospflocallsdbentry_.size(); index++)
    {
        if(ospflocallsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospflocallsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospflocallsdbentry_.size(); index++)
    {
        if(ospflocallsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospflocallsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLocalLsdbTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospflocallsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospflocallsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfLocalLsdbEntry")
    {
        for(auto const & c : ospflocallsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospflocallsdbtable::Ospflocallsdbentry>();
        c->parent = this;
        ospflocallsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospflocallsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospflocallsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospflocallsdbtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::Ospflocallsdbentry()
    :
    ospflocallsdbipaddress{YType::str, "ospfLocalLsdbIpAddress"},
    ospflocallsdbaddresslessif{YType::int32, "ospfLocalLsdbAddressLessIf"},
    ospflocallsdbtype{YType::enumeration, "ospfLocalLsdbType"},
    ospflocallsdblsid{YType::str, "ospfLocalLsdbLsid"},
    ospflocallsdbrouterid{YType::str, "ospfLocalLsdbRouterId"},
    ospflocallsdbadvertisement{YType::str, "ospfLocalLsdbAdvertisement"},
    ospflocallsdbage{YType::int32, "ospfLocalLsdbAge"},
    ospflocallsdbchecksum{YType::int32, "ospfLocalLsdbChecksum"},
    ospflocallsdbsequence{YType::int32, "ospfLocalLsdbSequence"}
{
    yang_name = "ospfLocalLsdbEntry"; yang_parent_name = "ospfLocalLsdbTable";
}

OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::~Ospflocallsdbentry()
{
}

bool OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::has_data() const
{
    return ospflocallsdbipaddress.is_set
	|| ospflocallsdbaddresslessif.is_set
	|| ospflocallsdbtype.is_set
	|| ospflocallsdblsid.is_set
	|| ospflocallsdbrouterid.is_set
	|| ospflocallsdbadvertisement.is_set
	|| ospflocallsdbage.is_set
	|| ospflocallsdbchecksum.is_set
	|| ospflocallsdbsequence.is_set;
}

bool OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospflocallsdbipaddress.operation)
	|| is_set(ospflocallsdbaddresslessif.operation)
	|| is_set(ospflocallsdbtype.operation)
	|| is_set(ospflocallsdblsid.operation)
	|| is_set(ospflocallsdbrouterid.operation)
	|| is_set(ospflocallsdbadvertisement.operation)
	|| is_set(ospflocallsdbage.operation)
	|| is_set(ospflocallsdbchecksum.operation)
	|| is_set(ospflocallsdbsequence.operation);
}

std::string OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfLocalLsdbEntry" <<"[ospfLocalLsdbIpAddress='" <<ospflocallsdbipaddress <<"']" <<"[ospfLocalLsdbAddressLessIf='" <<ospflocallsdbaddresslessif <<"']" <<"[ospfLocalLsdbType='" <<ospflocallsdbtype <<"']" <<"[ospfLocalLsdbLsid='" <<ospflocallsdblsid <<"']" <<"[ospfLocalLsdbRouterId='" <<ospflocallsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfLocalLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospflocallsdbipaddress.is_set || is_set(ospflocallsdbipaddress.operation)) leaf_name_data.push_back(ospflocallsdbipaddress.get_name_leafdata());
    if (ospflocallsdbaddresslessif.is_set || is_set(ospflocallsdbaddresslessif.operation)) leaf_name_data.push_back(ospflocallsdbaddresslessif.get_name_leafdata());
    if (ospflocallsdbtype.is_set || is_set(ospflocallsdbtype.operation)) leaf_name_data.push_back(ospflocallsdbtype.get_name_leafdata());
    if (ospflocallsdblsid.is_set || is_set(ospflocallsdblsid.operation)) leaf_name_data.push_back(ospflocallsdblsid.get_name_leafdata());
    if (ospflocallsdbrouterid.is_set || is_set(ospflocallsdbrouterid.operation)) leaf_name_data.push_back(ospflocallsdbrouterid.get_name_leafdata());
    if (ospflocallsdbadvertisement.is_set || is_set(ospflocallsdbadvertisement.operation)) leaf_name_data.push_back(ospflocallsdbadvertisement.get_name_leafdata());
    if (ospflocallsdbage.is_set || is_set(ospflocallsdbage.operation)) leaf_name_data.push_back(ospflocallsdbage.get_name_leafdata());
    if (ospflocallsdbchecksum.is_set || is_set(ospflocallsdbchecksum.operation)) leaf_name_data.push_back(ospflocallsdbchecksum.get_name_leafdata());
    if (ospflocallsdbsequence.is_set || is_set(ospflocallsdbsequence.operation)) leaf_name_data.push_back(ospflocallsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfLocalLsdbIpAddress")
    {
        ospflocallsdbipaddress = value;
    }
    if(value_path == "ospfLocalLsdbAddressLessIf")
    {
        ospflocallsdbaddresslessif = value;
    }
    if(value_path == "ospfLocalLsdbType")
    {
        ospflocallsdbtype = value;
    }
    if(value_path == "ospfLocalLsdbLsid")
    {
        ospflocallsdblsid = value;
    }
    if(value_path == "ospfLocalLsdbRouterId")
    {
        ospflocallsdbrouterid = value;
    }
    if(value_path == "ospfLocalLsdbAdvertisement")
    {
        ospflocallsdbadvertisement = value;
    }
    if(value_path == "ospfLocalLsdbAge")
    {
        ospflocallsdbage = value;
    }
    if(value_path == "ospfLocalLsdbChecksum")
    {
        ospflocallsdbchecksum = value;
    }
    if(value_path == "ospfLocalLsdbSequence")
    {
        ospflocallsdbsequence = value;
    }
}

OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbtable()
{
    yang_name = "ospfVirtLocalLsdbTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfvirtlocallsdbtable::~Ospfvirtlocallsdbtable()
{
}

bool OspfMib::Ospfvirtlocallsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospfvirtlocallsdbentry_.size(); index++)
    {
        if(ospfvirtlocallsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfvirtlocallsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospfvirtlocallsdbentry_.size(); index++)
    {
        if(ospfvirtlocallsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfvirtlocallsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtLocalLsdbTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfvirtlocallsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfvirtlocallsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfVirtLocalLsdbEntry")
    {
        for(auto const & c : ospfvirtlocallsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry>();
        c->parent = this;
        ospfvirtlocallsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfvirtlocallsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfvirtlocallsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfvirtlocallsdbtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::Ospfvirtlocallsdbentry()
    :
    ospfvirtlocallsdbtransitarea{YType::str, "ospfVirtLocalLsdbTransitArea"},
    ospfvirtlocallsdbneighbor{YType::str, "ospfVirtLocalLsdbNeighbor"},
    ospfvirtlocallsdbtype{YType::enumeration, "ospfVirtLocalLsdbType"},
    ospfvirtlocallsdblsid{YType::str, "ospfVirtLocalLsdbLsid"},
    ospfvirtlocallsdbrouterid{YType::str, "ospfVirtLocalLsdbRouterId"},
    ospfvirtlocallsdbadvertisement{YType::str, "ospfVirtLocalLsdbAdvertisement"},
    ospfvirtlocallsdbage{YType::int32, "ospfVirtLocalLsdbAge"},
    ospfvirtlocallsdbchecksum{YType::int32, "ospfVirtLocalLsdbChecksum"},
    ospfvirtlocallsdbsequence{YType::int32, "ospfVirtLocalLsdbSequence"}
{
    yang_name = "ospfVirtLocalLsdbEntry"; yang_parent_name = "ospfVirtLocalLsdbTable";
}

OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::~Ospfvirtlocallsdbentry()
{
}

bool OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::has_data() const
{
    return ospfvirtlocallsdbtransitarea.is_set
	|| ospfvirtlocallsdbneighbor.is_set
	|| ospfvirtlocallsdbtype.is_set
	|| ospfvirtlocallsdblsid.is_set
	|| ospfvirtlocallsdbrouterid.is_set
	|| ospfvirtlocallsdbadvertisement.is_set
	|| ospfvirtlocallsdbage.is_set
	|| ospfvirtlocallsdbchecksum.is_set
	|| ospfvirtlocallsdbsequence.is_set;
}

bool OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfvirtlocallsdbtransitarea.operation)
	|| is_set(ospfvirtlocallsdbneighbor.operation)
	|| is_set(ospfvirtlocallsdbtype.operation)
	|| is_set(ospfvirtlocallsdblsid.operation)
	|| is_set(ospfvirtlocallsdbrouterid.operation)
	|| is_set(ospfvirtlocallsdbadvertisement.operation)
	|| is_set(ospfvirtlocallsdbage.operation)
	|| is_set(ospfvirtlocallsdbchecksum.operation)
	|| is_set(ospfvirtlocallsdbsequence.operation);
}

std::string OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfVirtLocalLsdbEntry" <<"[ospfVirtLocalLsdbTransitArea='" <<ospfvirtlocallsdbtransitarea <<"']" <<"[ospfVirtLocalLsdbNeighbor='" <<ospfvirtlocallsdbneighbor <<"']" <<"[ospfVirtLocalLsdbType='" <<ospfvirtlocallsdbtype <<"']" <<"[ospfVirtLocalLsdbLsid='" <<ospfvirtlocallsdblsid <<"']" <<"[ospfVirtLocalLsdbRouterId='" <<ospfvirtlocallsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfVirtLocalLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfvirtlocallsdbtransitarea.is_set || is_set(ospfvirtlocallsdbtransitarea.operation)) leaf_name_data.push_back(ospfvirtlocallsdbtransitarea.get_name_leafdata());
    if (ospfvirtlocallsdbneighbor.is_set || is_set(ospfvirtlocallsdbneighbor.operation)) leaf_name_data.push_back(ospfvirtlocallsdbneighbor.get_name_leafdata());
    if (ospfvirtlocallsdbtype.is_set || is_set(ospfvirtlocallsdbtype.operation)) leaf_name_data.push_back(ospfvirtlocallsdbtype.get_name_leafdata());
    if (ospfvirtlocallsdblsid.is_set || is_set(ospfvirtlocallsdblsid.operation)) leaf_name_data.push_back(ospfvirtlocallsdblsid.get_name_leafdata());
    if (ospfvirtlocallsdbrouterid.is_set || is_set(ospfvirtlocallsdbrouterid.operation)) leaf_name_data.push_back(ospfvirtlocallsdbrouterid.get_name_leafdata());
    if (ospfvirtlocallsdbadvertisement.is_set || is_set(ospfvirtlocallsdbadvertisement.operation)) leaf_name_data.push_back(ospfvirtlocallsdbadvertisement.get_name_leafdata());
    if (ospfvirtlocallsdbage.is_set || is_set(ospfvirtlocallsdbage.operation)) leaf_name_data.push_back(ospfvirtlocallsdbage.get_name_leafdata());
    if (ospfvirtlocallsdbchecksum.is_set || is_set(ospfvirtlocallsdbchecksum.operation)) leaf_name_data.push_back(ospfvirtlocallsdbchecksum.get_name_leafdata());
    if (ospfvirtlocallsdbsequence.is_set || is_set(ospfvirtlocallsdbsequence.operation)) leaf_name_data.push_back(ospfvirtlocallsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfVirtLocalLsdbTransitArea")
    {
        ospfvirtlocallsdbtransitarea = value;
    }
    if(value_path == "ospfVirtLocalLsdbNeighbor")
    {
        ospfvirtlocallsdbneighbor = value;
    }
    if(value_path == "ospfVirtLocalLsdbType")
    {
        ospfvirtlocallsdbtype = value;
    }
    if(value_path == "ospfVirtLocalLsdbLsid")
    {
        ospfvirtlocallsdblsid = value;
    }
    if(value_path == "ospfVirtLocalLsdbRouterId")
    {
        ospfvirtlocallsdbrouterid = value;
    }
    if(value_path == "ospfVirtLocalLsdbAdvertisement")
    {
        ospfvirtlocallsdbadvertisement = value;
    }
    if(value_path == "ospfVirtLocalLsdbAge")
    {
        ospfvirtlocallsdbage = value;
    }
    if(value_path == "ospfVirtLocalLsdbChecksum")
    {
        ospfvirtlocallsdbchecksum = value;
    }
    if(value_path == "ospfVirtLocalLsdbSequence")
    {
        ospfvirtlocallsdbsequence = value;
    }
}

OspfMib::Ospfaslsdbtable::Ospfaslsdbtable()
{
    yang_name = "ospfAsLsdbTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfaslsdbtable::~Ospfaslsdbtable()
{
}

bool OspfMib::Ospfaslsdbtable::has_data() const
{
    for (std::size_t index=0; index<ospfaslsdbentry_.size(); index++)
    {
        if(ospfaslsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfaslsdbtable::has_operation() const
{
    for (std::size_t index=0; index<ospfaslsdbentry_.size(); index++)
    {
        if(ospfaslsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfaslsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAsLsdbTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfaslsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfaslsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAsLsdbEntry")
    {
        for(auto const & c : ospfaslsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfaslsdbtable::Ospfaslsdbentry>();
        c->parent = this;
        ospfaslsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfaslsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfaslsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfaslsdbtable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::Ospfaslsdbentry()
    :
    ospfaslsdbtype{YType::enumeration, "ospfAsLsdbType"},
    ospfaslsdblsid{YType::str, "ospfAsLsdbLsid"},
    ospfaslsdbrouterid{YType::str, "ospfAsLsdbRouterId"},
    ospfaslsdbadvertisement{YType::str, "ospfAsLsdbAdvertisement"},
    ospfaslsdbage{YType::int32, "ospfAsLsdbAge"},
    ospfaslsdbchecksum{YType::int32, "ospfAsLsdbChecksum"},
    ospfaslsdbsequence{YType::int32, "ospfAsLsdbSequence"}
{
    yang_name = "ospfAsLsdbEntry"; yang_parent_name = "ospfAsLsdbTable";
}

OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::~Ospfaslsdbentry()
{
}

bool OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::has_data() const
{
    return ospfaslsdbtype.is_set
	|| ospfaslsdblsid.is_set
	|| ospfaslsdbrouterid.is_set
	|| ospfaslsdbadvertisement.is_set
	|| ospfaslsdbage.is_set
	|| ospfaslsdbchecksum.is_set
	|| ospfaslsdbsequence.is_set;
}

bool OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfaslsdbtype.operation)
	|| is_set(ospfaslsdblsid.operation)
	|| is_set(ospfaslsdbrouterid.operation)
	|| is_set(ospfaslsdbadvertisement.operation)
	|| is_set(ospfaslsdbage.operation)
	|| is_set(ospfaslsdbchecksum.operation)
	|| is_set(ospfaslsdbsequence.operation);
}

std::string OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAsLsdbEntry" <<"[ospfAsLsdbType='" <<ospfaslsdbtype <<"']" <<"[ospfAsLsdbLsid='" <<ospfaslsdblsid <<"']" <<"[ospfAsLsdbRouterId='" <<ospfaslsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfAsLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfaslsdbtype.is_set || is_set(ospfaslsdbtype.operation)) leaf_name_data.push_back(ospfaslsdbtype.get_name_leafdata());
    if (ospfaslsdblsid.is_set || is_set(ospfaslsdblsid.operation)) leaf_name_data.push_back(ospfaslsdblsid.get_name_leafdata());
    if (ospfaslsdbrouterid.is_set || is_set(ospfaslsdbrouterid.operation)) leaf_name_data.push_back(ospfaslsdbrouterid.get_name_leafdata());
    if (ospfaslsdbadvertisement.is_set || is_set(ospfaslsdbadvertisement.operation)) leaf_name_data.push_back(ospfaslsdbadvertisement.get_name_leafdata());
    if (ospfaslsdbage.is_set || is_set(ospfaslsdbage.operation)) leaf_name_data.push_back(ospfaslsdbage.get_name_leafdata());
    if (ospfaslsdbchecksum.is_set || is_set(ospfaslsdbchecksum.operation)) leaf_name_data.push_back(ospfaslsdbchecksum.get_name_leafdata());
    if (ospfaslsdbsequence.is_set || is_set(ospfaslsdbsequence.operation)) leaf_name_data.push_back(ospfaslsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfAsLsdbType")
    {
        ospfaslsdbtype = value;
    }
    if(value_path == "ospfAsLsdbLsid")
    {
        ospfaslsdblsid = value;
    }
    if(value_path == "ospfAsLsdbRouterId")
    {
        ospfaslsdbrouterid = value;
    }
    if(value_path == "ospfAsLsdbAdvertisement")
    {
        ospfaslsdbadvertisement = value;
    }
    if(value_path == "ospfAsLsdbAge")
    {
        ospfaslsdbage = value;
    }
    if(value_path == "ospfAsLsdbChecksum")
    {
        ospfaslsdbchecksum = value;
    }
    if(value_path == "ospfAsLsdbSequence")
    {
        ospfaslsdbsequence = value;
    }
}

OspfMib::Ospfarealsacounttable::Ospfarealsacounttable()
{
    yang_name = "ospfAreaLsaCountTable"; yang_parent_name = "OSPF-MIB";
}

OspfMib::Ospfarealsacounttable::~Ospfarealsacounttable()
{
}

bool OspfMib::Ospfarealsacounttable::has_data() const
{
    for (std::size_t index=0; index<ospfarealsacountentry_.size(); index++)
    {
        if(ospfarealsacountentry_[index]->has_data())
            return true;
    }
    return false;
}

bool OspfMib::Ospfarealsacounttable::has_operation() const
{
    for (std::size_t index=0; index<ospfarealsacountentry_.size(); index++)
    {
        if(ospfarealsacountentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string OspfMib::Ospfarealsacounttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaLsaCountTable";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfarealsacounttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfarealsacounttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfAreaLsaCountEntry")
    {
        for(auto const & c : ospfarealsacountentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<OspfMib::Ospfarealsacounttable::Ospfarealsacountentry>();
        c->parent = this;
        ospfarealsacountentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfarealsacounttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospfarealsacountentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void OspfMib::Ospfarealsacounttable::set_value(const std::string & value_path, std::string value)
{
}

OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountentry()
    :
    ospfarealsacountareaid{YType::str, "ospfAreaLsaCountAreaId"},
    ospfarealsacountlsatype{YType::enumeration, "ospfAreaLsaCountLsaType"},
    ospfarealsacountnumber{YType::uint32, "ospfAreaLsaCountNumber"}
{
    yang_name = "ospfAreaLsaCountEntry"; yang_parent_name = "ospfAreaLsaCountTable";
}

OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::~Ospfarealsacountentry()
{
}

bool OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::has_data() const
{
    return ospfarealsacountareaid.is_set
	|| ospfarealsacountlsatype.is_set
	|| ospfarealsacountnumber.is_set;
}

bool OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfarealsacountareaid.operation)
	|| is_set(ospfarealsacountlsatype.operation)
	|| is_set(ospfarealsacountnumber.operation);
}

std::string OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfAreaLsaCountEntry" <<"[ospfAreaLsaCountAreaId='" <<ospfarealsacountareaid <<"']" <<"[ospfAreaLsaCountLsaType='" <<ospfarealsacountlsatype <<"']";

    return path_buffer.str();

}

const EntityPath OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "OSPF-MIB:OSPF-MIB/ospfAreaLsaCountTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfarealsacountareaid.is_set || is_set(ospfarealsacountareaid.operation)) leaf_name_data.push_back(ospfarealsacountareaid.get_name_leafdata());
    if (ospfarealsacountlsatype.is_set || is_set(ospfarealsacountlsatype.operation)) leaf_name_data.push_back(ospfarealsacountlsatype.get_name_leafdata());
    if (ospfarealsacountnumber.is_set || is_set(ospfarealsacountnumber.operation)) leaf_name_data.push_back(ospfarealsacountnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfAreaLsaCountAreaId")
    {
        ospfarealsacountareaid = value;
    }
    if(value_path == "ospfAreaLsaCountLsaType")
    {
        ospfarealsacountlsatype = value;
    }
    if(value_path == "ospfAreaLsaCountNumber")
    {
        ospfarealsacountnumber = value;
    }
}

const Enum::YLeaf StatusEnum::enabled {1, "enabled"};
const Enum::YLeaf StatusEnum::disabled {2, "disabled"};

const Enum::YLeaf OspfauthenticationtypeEnum::none {0, "none"};
const Enum::YLeaf OspfauthenticationtypeEnum::simplePassword {1, "simplePassword"};
const Enum::YLeaf OspfauthenticationtypeEnum::md5 {2, "md5"};

const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfversionnumberEnum::version2 {2, "version2"};

const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartsupportEnum::none {1, "none"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartsupportEnum::plannedOnly {2, "plannedOnly"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartsupportEnum::plannedAndUnplanned {3, "plannedAndUnplanned"};

const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartstatusEnum::notRestarting {1, "notRestarting"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartstatusEnum::plannedRestart {2, "plannedRestart"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartstatusEnum::unplannedRestart {3, "unplannedRestart"};

const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartexitreasonEnum::none {1, "none"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartexitreasonEnum::inProgress {2, "inProgress"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartexitreasonEnum::completed {3, "completed"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartexitreasonEnum::timedOut {4, "timedOut"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfrestartexitreasonEnum::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfstubrouteradvertisementEnum::doNotAdvertise {1, "doNotAdvertise"};
const Enum::YLeaf OspfMib::Ospfgeneralgroup::OspfstubrouteradvertisementEnum::advertise {2, "advertise"};

const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfimportasexternEnum::importExternal {1, "importExternal"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfimportasexternEnum::importNoExternal {2, "importNoExternal"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfimportasexternEnum::importNssa {3, "importNssa"};

const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareasummaryEnum::noAreaSummary {1, "noAreaSummary"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareasummaryEnum::sendAreaSummary {2, "sendAreaSummary"};

const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorroleEnum::always {1, "always"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorroleEnum::candidate {2, "candidate"};

const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorstateEnum::enabled {1, "enabled"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorstateEnum::elected {2, "elected"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::OspfareanssatranslatorstateEnum::disabled {3, "disabled"};

const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorroleEnum::always {1, "always"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorroleEnum::candidate {2, "candidate"};

const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorstateEnum::enabled {1, "enabled"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorstateEnum::elected {2, "elected"};
const Enum::YLeaf OspfMib::Ospfareatable::Ospfareaentry::CospfareanssatranslatorstateEnum::disabled {3, "disabled"};

const Enum::YLeaf OspfMib::Ospfstubareatable::Ospfstubareaentry::OspfstubmetrictypeEnum::ospfMetric {1, "ospfMetric"};
const Enum::YLeaf OspfMib::Ospfstubareatable::Ospfstubareaentry::OspfstubmetrictypeEnum::comparableCost {2, "comparableCost"};
const Enum::YLeaf OspfMib::Ospfstubareatable::Ospfstubareaentry::OspfstubmetrictypeEnum::nonComparable {3, "nonComparable"};

const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::routerLink {1, "routerLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::networkLink {2, "networkLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::summaryLink {3, "summaryLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::asSummaryLink {4, "asSummaryLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::asExternalLink {5, "asExternalLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::multicastLink {6, "multicastLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::nssaExternalLink {7, "nssaExternalLink"};
const Enum::YLeaf OspfMib::Ospflsdbtable::Ospflsdbentry::OspflsdbtypeEnum::areaOpaqueLink {10, "areaOpaqueLink"};

const Enum::YLeaf OspfMib::Ospfarearangetable::Ospfarearangeentry::OspfarearangeeffectEnum::advertiseMatching {1, "advertiseMatching"};
const Enum::YLeaf OspfMib::Ospfarearangetable::Ospfarearangeentry::OspfarearangeeffectEnum::doNotAdvertiseMatching {2, "doNotAdvertiseMatching"};

const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfiftypeEnum::broadcast {1, "broadcast"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfiftypeEnum::nbma {2, "nbma"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfiftypeEnum::pointToPoint {3, "pointToPoint"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfiftypeEnum::pointToMultipoint {5, "pointToMultipoint"};

const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::down {1, "down"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::loopback {2, "loopback"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::waiting {3, "waiting"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::pointToPoint {4, "pointToPoint"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::designatedRouter {5, "designatedRouter"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::backupDesignatedRouter {6, "backupDesignatedRouter"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifstateEnum::otherDesignatedRouter {7, "otherDesignatedRouter"};

const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifmulticastforwardingEnum::blocked {1, "blocked"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifmulticastforwardingEnum::multicast {2, "multicast"};
const Enum::YLeaf OspfMib::Ospfiftable::Ospfifentry::OspfifmulticastforwardingEnum::unicast {3, "unicast"};

const Enum::YLeaf OspfMib::Ospfvirtiftable::Ospfvirtifentry::OspfvirtifstateEnum::down {1, "down"};
const Enum::YLeaf OspfMib::Ospfvirtiftable::Ospfvirtifentry::OspfvirtifstateEnum::pointToPoint {4, "pointToPoint"};

const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::down {1, "down"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::attempt {2, "attempt"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::init {3, "init"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::twoWay {4, "twoWay"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::exchange {6, "exchange"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::loading {7, "loading"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrstateEnum::full {8, "full"};

const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbmanbrpermanenceEnum::dynamic {1, "dynamic"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbmanbrpermanenceEnum::permanent {2, "permanent"};

const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperstatusEnum::notHelping {1, "notHelping"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperstatusEnum::helping {2, "helping"};

const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperexitreasonEnum::none {1, "none"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperexitreasonEnum::inProgress {2, "inProgress"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperexitreasonEnum::completed {3, "completed"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperexitreasonEnum::timedOut {4, "timedOut"};
const Enum::YLeaf OspfMib::Ospfnbrtable::Ospfnbrentry::OspfnbrrestarthelperexitreasonEnum::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::down {1, "down"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::attempt {2, "attempt"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::init {3, "init"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::twoWay {4, "twoWay"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::exchange {6, "exchange"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::loading {7, "loading"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrstateEnum::full {8, "full"};

const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperstatusEnum::notHelping {1, "notHelping"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperstatusEnum::helping {2, "helping"};

const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperexitreasonEnum::none {1, "none"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperexitreasonEnum::inProgress {2, "inProgress"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperexitreasonEnum::completed {3, "completed"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperexitreasonEnum::timedOut {4, "timedOut"};
const Enum::YLeaf OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::OspfvirtnbrrestarthelperexitreasonEnum::topologyChanged {5, "topologyChanged"};

const Enum::YLeaf OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::OspfextlsdbtypeEnum::asExternalLink {5, "asExternalLink"};

const Enum::YLeaf OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::OspfareaaggregatelsdbtypeEnum::summaryLink {3, "summaryLink"};
const Enum::YLeaf OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::OspfareaaggregatelsdbtypeEnum::nssaExternalLink {7, "nssaExternalLink"};

const Enum::YLeaf OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::OspfareaaggregateeffectEnum::advertiseMatching {1, "advertiseMatching"};
const Enum::YLeaf OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::OspfareaaggregateeffectEnum::doNotAdvertiseMatching {2, "doNotAdvertiseMatching"};

const Enum::YLeaf OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::OspflocallsdbtypeEnum::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::OspfvirtlocallsdbtypeEnum::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::OspfaslsdbtypeEnum::asExternalLink {5, "asExternalLink"};
const Enum::YLeaf OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::OspfaslsdbtypeEnum::asOpaqueLink {11, "asOpaqueLink"};

const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::routerLink {1, "routerLink"};
const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::networkLink {2, "networkLink"};
const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::summaryLink {3, "summaryLink"};
const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::asSummaryLink {4, "asSummaryLink"};
const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::multicastLink {6, "multicastLink"};
const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::nssaExternalLink {7, "nssaExternalLink"};
const Enum::YLeaf OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::OspfarealsacountlsatypeEnum::areaOpaqueLink {10, "areaOpaqueLink"};


}
}

