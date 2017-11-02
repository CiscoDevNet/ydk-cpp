
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ATM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ATM_MIB {

ATMMIB::ATMMIB()
    :
    atmmibobjects(std::make_shared<ATMMIB::Atmmibobjects>())
	,atminterfaceconftable(std::make_shared<ATMMIB::Atminterfaceconftable>())
	,atminterfaceds3plcptable(std::make_shared<ATMMIB::Atminterfaceds3Plcptable>())
	,atminterfacetctable(std::make_shared<ATMMIB::Atminterfacetctable>())
	,atmtrafficdescrparamtable(std::make_shared<ATMMIB::Atmtrafficdescrparamtable>())
	,atmvpltable(std::make_shared<ATMMIB::Atmvpltable>())
	,atmvcltable(std::make_shared<ATMMIB::Atmvcltable>())
	,atmvpcrossconnecttable(std::make_shared<ATMMIB::Atmvpcrossconnecttable>())
	,atmvccrossconnecttable(std::make_shared<ATMMIB::Atmvccrossconnecttable>())
	,aal5vcctable(std::make_shared<ATMMIB::Aal5Vcctable>())
{
    atmmibobjects->parent = this;
    atminterfaceconftable->parent = this;
    atminterfaceds3plcptable->parent = this;
    atminterfacetctable->parent = this;
    atmtrafficdescrparamtable->parent = this;
    atmvpltable->parent = this;
    atmvcltable->parent = this;
    atmvpcrossconnecttable->parent = this;
    atmvccrossconnecttable->parent = this;
    aal5vcctable->parent = this;

    yang_name = "ATM-MIB"; yang_parent_name = "ATM-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

ATMMIB::~ATMMIB()
{
}

bool ATMMIB::has_data() const
{
    return (atmmibobjects !=  nullptr && atmmibobjects->has_data())
	|| (atminterfaceconftable !=  nullptr && atminterfaceconftable->has_data())
	|| (atminterfaceds3plcptable !=  nullptr && atminterfaceds3plcptable->has_data())
	|| (atminterfacetctable !=  nullptr && atminterfacetctable->has_data())
	|| (atmtrafficdescrparamtable !=  nullptr && atmtrafficdescrparamtable->has_data())
	|| (atmvpltable !=  nullptr && atmvpltable->has_data())
	|| (atmvcltable !=  nullptr && atmvcltable->has_data())
	|| (atmvpcrossconnecttable !=  nullptr && atmvpcrossconnecttable->has_data())
	|| (atmvccrossconnecttable !=  nullptr && atmvccrossconnecttable->has_data())
	|| (aal5vcctable !=  nullptr && aal5vcctable->has_data());
}

bool ATMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (atmmibobjects !=  nullptr && atmmibobjects->has_operation())
	|| (atminterfaceconftable !=  nullptr && atminterfaceconftable->has_operation())
	|| (atminterfaceds3plcptable !=  nullptr && atminterfaceds3plcptable->has_operation())
	|| (atminterfacetctable !=  nullptr && atminterfacetctable->has_operation())
	|| (atmtrafficdescrparamtable !=  nullptr && atmtrafficdescrparamtable->has_operation())
	|| (atmvpltable !=  nullptr && atmvpltable->has_operation())
	|| (atmvcltable !=  nullptr && atmvcltable->has_operation())
	|| (atmvpcrossconnecttable !=  nullptr && atmvpcrossconnecttable->has_operation())
	|| (atmvccrossconnecttable !=  nullptr && atmvccrossconnecttable->has_operation())
	|| (aal5vcctable !=  nullptr && aal5vcctable->has_operation());
}

std::string ATMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmMIBObjects")
    {
        if(atmmibobjects == nullptr)
        {
            atmmibobjects = std::make_shared<ATMMIB::Atmmibobjects>();
        }
        return atmmibobjects;
    }

    if(child_yang_name == "atmInterfaceConfTable")
    {
        if(atminterfaceconftable == nullptr)
        {
            atminterfaceconftable = std::make_shared<ATMMIB::Atminterfaceconftable>();
        }
        return atminterfaceconftable;
    }

    if(child_yang_name == "atmInterfaceDs3PlcpTable")
    {
        if(atminterfaceds3plcptable == nullptr)
        {
            atminterfaceds3plcptable = std::make_shared<ATMMIB::Atminterfaceds3Plcptable>();
        }
        return atminterfaceds3plcptable;
    }

    if(child_yang_name == "atmInterfaceTCTable")
    {
        if(atminterfacetctable == nullptr)
        {
            atminterfacetctable = std::make_shared<ATMMIB::Atminterfacetctable>();
        }
        return atminterfacetctable;
    }

    if(child_yang_name == "atmTrafficDescrParamTable")
    {
        if(atmtrafficdescrparamtable == nullptr)
        {
            atmtrafficdescrparamtable = std::make_shared<ATMMIB::Atmtrafficdescrparamtable>();
        }
        return atmtrafficdescrparamtable;
    }

    if(child_yang_name == "atmVplTable")
    {
        if(atmvpltable == nullptr)
        {
            atmvpltable = std::make_shared<ATMMIB::Atmvpltable>();
        }
        return atmvpltable;
    }

    if(child_yang_name == "atmVclTable")
    {
        if(atmvcltable == nullptr)
        {
            atmvcltable = std::make_shared<ATMMIB::Atmvcltable>();
        }
        return atmvcltable;
    }

    if(child_yang_name == "atmVpCrossConnectTable")
    {
        if(atmvpcrossconnecttable == nullptr)
        {
            atmvpcrossconnecttable = std::make_shared<ATMMIB::Atmvpcrossconnecttable>();
        }
        return atmvpcrossconnecttable;
    }

    if(child_yang_name == "atmVcCrossConnectTable")
    {
        if(atmvccrossconnecttable == nullptr)
        {
            atmvccrossconnecttable = std::make_shared<ATMMIB::Atmvccrossconnecttable>();
        }
        return atmvccrossconnecttable;
    }

    if(child_yang_name == "aal5VccTable")
    {
        if(aal5vcctable == nullptr)
        {
            aal5vcctable = std::make_shared<ATMMIB::Aal5Vcctable>();
        }
        return aal5vcctable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atmmibobjects != nullptr)
    {
        children["atmMIBObjects"] = atmmibobjects;
    }

    if(atminterfaceconftable != nullptr)
    {
        children["atmInterfaceConfTable"] = atminterfaceconftable;
    }

    if(atminterfaceds3plcptable != nullptr)
    {
        children["atmInterfaceDs3PlcpTable"] = atminterfaceds3plcptable;
    }

    if(atminterfacetctable != nullptr)
    {
        children["atmInterfaceTCTable"] = atminterfacetctable;
    }

    if(atmtrafficdescrparamtable != nullptr)
    {
        children["atmTrafficDescrParamTable"] = atmtrafficdescrparamtable;
    }

    if(atmvpltable != nullptr)
    {
        children["atmVplTable"] = atmvpltable;
    }

    if(atmvcltable != nullptr)
    {
        children["atmVclTable"] = atmvcltable;
    }

    if(atmvpcrossconnecttable != nullptr)
    {
        children["atmVpCrossConnectTable"] = atmvpcrossconnecttable;
    }

    if(atmvccrossconnecttable != nullptr)
    {
        children["atmVcCrossConnectTable"] = atmvccrossconnecttable;
    }

    if(aal5vcctable != nullptr)
    {
        children["aal5VccTable"] = aal5vcctable;
    }

    return children;
}

void ATMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ATMMIB::clone_ptr() const
{
    return std::make_shared<ATMMIB>();
}

std::string ATMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ATMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ATMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ATMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ATMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmMIBObjects" || name == "atmInterfaceConfTable" || name == "atmInterfaceDs3PlcpTable" || name == "atmInterfaceTCTable" || name == "atmTrafficDescrParamTable" || name == "atmVplTable" || name == "atmVclTable" || name == "atmVpCrossConnectTable" || name == "atmVcCrossConnectTable" || name == "aal5VccTable")
        return true;
    return false;
}

ATMMIB::Atmmibobjects::Atmmibobjects()
    :
    atmvpcrossconnectindexnext{YType::int32, "atmVpCrossConnectIndexNext"},
    atmvccrossconnectindexnext{YType::int32, "atmVcCrossConnectIndexNext"},
    atmtrafficdescrparamindexnext{YType::int32, "atmTrafficDescrParamIndexNext"}
{

    yang_name = "atmMIBObjects"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmmibobjects::~Atmmibobjects()
{
}

bool ATMMIB::Atmmibobjects::has_data() const
{
    return atmvpcrossconnectindexnext.is_set
	|| atmvccrossconnectindexnext.is_set
	|| atmtrafficdescrparamindexnext.is_set;
}

bool ATMMIB::Atmmibobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atmvpcrossconnectindexnext.yfilter)
	|| ydk::is_set(atmvccrossconnectindexnext.yfilter)
	|| ydk::is_set(atmtrafficdescrparamindexnext.yfilter);
}

std::string ATMMIB::Atmmibobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmmibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmmibobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmvpcrossconnectindexnext.is_set || is_set(atmvpcrossconnectindexnext.yfilter)) leaf_name_data.push_back(atmvpcrossconnectindexnext.get_name_leafdata());
    if (atmvccrossconnectindexnext.is_set || is_set(atmvccrossconnectindexnext.yfilter)) leaf_name_data.push_back(atmvccrossconnectindexnext.get_name_leafdata());
    if (atmtrafficdescrparamindexnext.is_set || is_set(atmtrafficdescrparamindexnext.yfilter)) leaf_name_data.push_back(atmtrafficdescrparamindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmmibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmmibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atmmibobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atmVpCrossConnectIndexNext")
    {
        atmvpcrossconnectindexnext = value;
        atmvpcrossconnectindexnext.value_namespace = name_space;
        atmvpcrossconnectindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectIndexNext")
    {
        atmvccrossconnectindexnext = value;
        atmvccrossconnectindexnext.value_namespace = name_space;
        atmvccrossconnectindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrParamIndexNext")
    {
        atmtrafficdescrparamindexnext = value;
        atmtrafficdescrparamindexnext.value_namespace = name_space;
        atmtrafficdescrparamindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atmmibobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atmVpCrossConnectIndexNext")
    {
        atmvpcrossconnectindexnext.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectIndexNext")
    {
        atmvccrossconnectindexnext.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrParamIndexNext")
    {
        atmtrafficdescrparamindexnext.yfilter = yfilter;
    }
}

bool ATMMIB::Atmmibobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVpCrossConnectIndexNext" || name == "atmVcCrossConnectIndexNext" || name == "atmTrafficDescrParamIndexNext")
        return true;
    return false;
}

ATMMIB::Atminterfaceconftable::Atminterfaceconftable()
{

    yang_name = "atmInterfaceConfTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atminterfaceconftable::~Atminterfaceconftable()
{
}

bool ATMMIB::Atminterfaceconftable::has_data() const
{
    for (std::size_t index=0; index<atminterfaceconfentry.size(); index++)
    {
        if(atminterfaceconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atminterfaceconftable::has_operation() const
{
    for (std::size_t index=0; index<atminterfaceconfentry.size(); index++)
    {
        if(atminterfaceconfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atminterfaceconftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atminterfaceconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceConfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atminterfaceconftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atminterfaceconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmInterfaceConfEntry")
    {
        for(auto const & c : atminterfaceconfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atminterfaceconftable::Atminterfaceconfentry>();
        c->parent = this;
        atminterfaceconfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atminterfaceconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atminterfaceconfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atminterfaceconftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atminterfaceconftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atminterfaceconftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmInterfaceConfEntry")
        return true;
    return false;
}

ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceconfentry()
    :
    ifindex{YType::str, "ifIndex"},
    atminterfacemaxvpcs{YType::int32, "atmInterfaceMaxVpcs"},
    atminterfacemaxvccs{YType::int32, "atmInterfaceMaxVccs"},
    atminterfaceconfvpcs{YType::int32, "atmInterfaceConfVpcs"},
    atminterfaceconfvccs{YType::int32, "atmInterfaceConfVccs"},
    atminterfacemaxactivevpibits{YType::int32, "atmInterfaceMaxActiveVpiBits"},
    atminterfacemaxactivevcibits{YType::int32, "atmInterfaceMaxActiveVciBits"},
    atminterfaceilmivpi{YType::int32, "atmInterfaceIlmiVpi"},
    atminterfaceilmivci{YType::int32, "atmInterfaceIlmiVci"},
    atminterfaceaddresstype{YType::enumeration, "atmInterfaceAddressType"},
    atminterfaceadminaddress{YType::str, "atmInterfaceAdminAddress"},
    atminterfacemyneighboripaddress{YType::str, "atmInterfaceMyNeighborIpAddress"},
    atminterfacemyneighborifname{YType::str, "atmInterfaceMyNeighborIfName"},
    atminterfacecurrentmaxvpibits{YType::int32, "atmInterfaceCurrentMaxVpiBits"},
    atminterfacecurrentmaxvcibits{YType::int32, "atmInterfaceCurrentMaxVciBits"},
    atminterfacesubscraddress{YType::str, "atmInterfaceSubscrAddress"},
    atmintfpvcfailures{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfPvcFailures"},
    atmintfcurrentlyfailingpvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfCurrentlyFailingPVcls"},
    atmintfpvcfailurestrapenable{YType::boolean, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfPvcFailuresTrapEnable"},
    atmintfpvcnotificationinterval{YType::int32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfPvcNotificationInterval"},
    atmpreviouslyfailedpvclinterval{YType::int32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmPreviouslyFailedPVclInterval"},
    catmintfcurrentlydowntouppvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurrentlyDownToUpPVcls"},
    catmintfoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfOAMFailedPVcls"},
    catmintfcurrentoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurrentOAMFailingPVcls"},
    catmintfsegccoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfSegCCOAMFailedPVcls"},
    catmintfcursegccoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurSegCCOAMFailingPVcls"},
    catmintfendccoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfEndCCOAMFailedPVcls"},
    catmintfcurendccoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurEndCCOAMFailingPVcls"},
    catmintfaisrdioamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAISRDIOAMFailedPVcls"},
    catmintfcuraisrdioamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAISRDIOAMFailingPVcls"},
    catmintfanyoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAnyOAMFailedPVcls"},
    catmintfcuranyoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAnyOAMFailingPVcls"},
    catmintftypeofoamfailure{YType::enumeration, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfTypeOfOAMFailure"},
    catmintfoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfOAMRcovedPVcls"},
    catmintfcurrentoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurrentOAMRcovingPVcls"},
    catmintfsegccoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfSegCCOAMRcovedPVcls"},
    catmintfcursegccoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurSegCCOAMRcovingPVcls"},
    catmintfendccoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfEndCCOAMRcovedPVcls"},
    catmintfcurendccoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurEndCCOAMRcovingPVcls"},
    catmintfaisrdioamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAISRDIOAMRcovedPVcls"},
    catmintfcuraisrdioamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAISRDIOAMRcovingPVcls"},
    catmintfanyoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAnyOAMRcovedPVcls"},
    catmintfcuranyoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAnyOAMRcovingPVcls"},
    catmintftypeofoamrecover{YType::enumeration, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfTypeOfOAMRecover"},
    atmintfcurrentlydowntouppvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:atmIntfCurrentlyDownToUpPVcls"},
    atmintfoamfailedpvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:atmIntfOAMFailedPVcls"},
    atmintfcurrentlyoamfailingpvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:atmIntfCurrentlyOAMFailingPVcls"}
{

    yang_name = "atmInterfaceConfEntry"; yang_parent_name = "atmInterfaceConfTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::~Atminterfaceconfentry()
{
}

bool ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::has_data() const
{
    return ifindex.is_set
	|| atminterfacemaxvpcs.is_set
	|| atminterfacemaxvccs.is_set
	|| atminterfaceconfvpcs.is_set
	|| atminterfaceconfvccs.is_set
	|| atminterfacemaxactivevpibits.is_set
	|| atminterfacemaxactivevcibits.is_set
	|| atminterfaceilmivpi.is_set
	|| atminterfaceilmivci.is_set
	|| atminterfaceaddresstype.is_set
	|| atminterfaceadminaddress.is_set
	|| atminterfacemyneighboripaddress.is_set
	|| atminterfacemyneighborifname.is_set
	|| atminterfacecurrentmaxvpibits.is_set
	|| atminterfacecurrentmaxvcibits.is_set
	|| atminterfacesubscraddress.is_set
	|| atmintfpvcfailures.is_set
	|| atmintfcurrentlyfailingpvcls.is_set
	|| atmintfpvcfailurestrapenable.is_set
	|| atmintfpvcnotificationinterval.is_set
	|| atmpreviouslyfailedpvclinterval.is_set
	|| catmintfcurrentlydowntouppvcls.is_set
	|| catmintfoamfailedpvcls.is_set
	|| catmintfcurrentoamfailingpvcls.is_set
	|| catmintfsegccoamfailedpvcls.is_set
	|| catmintfcursegccoamfailingpvcls.is_set
	|| catmintfendccoamfailedpvcls.is_set
	|| catmintfcurendccoamfailingpvcls.is_set
	|| catmintfaisrdioamfailedpvcls.is_set
	|| catmintfcuraisrdioamfailingpvcls.is_set
	|| catmintfanyoamfailedpvcls.is_set
	|| catmintfcuranyoamfailingpvcls.is_set
	|| catmintftypeofoamfailure.is_set
	|| catmintfoamrcovedpvcls.is_set
	|| catmintfcurrentoamrcovingpvcls.is_set
	|| catmintfsegccoamrcovedpvcls.is_set
	|| catmintfcursegccoamrcovingpvcls.is_set
	|| catmintfendccoamrcovedpvcls.is_set
	|| catmintfcurendccoamrcovingpvcls.is_set
	|| catmintfaisrdioamrcovedpvcls.is_set
	|| catmintfcuraisrdioamrcovingpvcls.is_set
	|| catmintfanyoamrcovedpvcls.is_set
	|| catmintfcuranyoamrcovingpvcls.is_set
	|| catmintftypeofoamrecover.is_set
	|| atmintfcurrentlydowntouppvcls.is_set
	|| atmintfoamfailedpvcls.is_set
	|| atmintfcurrentlyoamfailingpvcls.is_set;
}

bool ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atminterfacemaxvpcs.yfilter)
	|| ydk::is_set(atminterfacemaxvccs.yfilter)
	|| ydk::is_set(atminterfaceconfvpcs.yfilter)
	|| ydk::is_set(atminterfaceconfvccs.yfilter)
	|| ydk::is_set(atminterfacemaxactivevpibits.yfilter)
	|| ydk::is_set(atminterfacemaxactivevcibits.yfilter)
	|| ydk::is_set(atminterfaceilmivpi.yfilter)
	|| ydk::is_set(atminterfaceilmivci.yfilter)
	|| ydk::is_set(atminterfaceaddresstype.yfilter)
	|| ydk::is_set(atminterfaceadminaddress.yfilter)
	|| ydk::is_set(atminterfacemyneighboripaddress.yfilter)
	|| ydk::is_set(atminterfacemyneighborifname.yfilter)
	|| ydk::is_set(atminterfacecurrentmaxvpibits.yfilter)
	|| ydk::is_set(atminterfacecurrentmaxvcibits.yfilter)
	|| ydk::is_set(atminterfacesubscraddress.yfilter)
	|| ydk::is_set(atmintfpvcfailures.yfilter)
	|| ydk::is_set(atmintfcurrentlyfailingpvcls.yfilter)
	|| ydk::is_set(atmintfpvcfailurestrapenable.yfilter)
	|| ydk::is_set(atmintfpvcnotificationinterval.yfilter)
	|| ydk::is_set(atmpreviouslyfailedpvclinterval.yfilter)
	|| ydk::is_set(catmintfcurrentlydowntouppvcls.yfilter)
	|| ydk::is_set(catmintfoamfailedpvcls.yfilter)
	|| ydk::is_set(catmintfcurrentoamfailingpvcls.yfilter)
	|| ydk::is_set(catmintfsegccoamfailedpvcls.yfilter)
	|| ydk::is_set(catmintfcursegccoamfailingpvcls.yfilter)
	|| ydk::is_set(catmintfendccoamfailedpvcls.yfilter)
	|| ydk::is_set(catmintfcurendccoamfailingpvcls.yfilter)
	|| ydk::is_set(catmintfaisrdioamfailedpvcls.yfilter)
	|| ydk::is_set(catmintfcuraisrdioamfailingpvcls.yfilter)
	|| ydk::is_set(catmintfanyoamfailedpvcls.yfilter)
	|| ydk::is_set(catmintfcuranyoamfailingpvcls.yfilter)
	|| ydk::is_set(catmintftypeofoamfailure.yfilter)
	|| ydk::is_set(catmintfoamrcovedpvcls.yfilter)
	|| ydk::is_set(catmintfcurrentoamrcovingpvcls.yfilter)
	|| ydk::is_set(catmintfsegccoamrcovedpvcls.yfilter)
	|| ydk::is_set(catmintfcursegccoamrcovingpvcls.yfilter)
	|| ydk::is_set(catmintfendccoamrcovedpvcls.yfilter)
	|| ydk::is_set(catmintfcurendccoamrcovingpvcls.yfilter)
	|| ydk::is_set(catmintfaisrdioamrcovedpvcls.yfilter)
	|| ydk::is_set(catmintfcuraisrdioamrcovingpvcls.yfilter)
	|| ydk::is_set(catmintfanyoamrcovedpvcls.yfilter)
	|| ydk::is_set(catmintfcuranyoamrcovingpvcls.yfilter)
	|| ydk::is_set(catmintftypeofoamrecover.yfilter)
	|| ydk::is_set(atmintfcurrentlydowntouppvcls.yfilter)
	|| ydk::is_set(atmintfoamfailedpvcls.yfilter)
	|| ydk::is_set(atmintfcurrentlyoamfailingpvcls.yfilter);
}

std::string ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmInterfaceConfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceConfEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atminterfacemaxvpcs.is_set || is_set(atminterfacemaxvpcs.yfilter)) leaf_name_data.push_back(atminterfacemaxvpcs.get_name_leafdata());
    if (atminterfacemaxvccs.is_set || is_set(atminterfacemaxvccs.yfilter)) leaf_name_data.push_back(atminterfacemaxvccs.get_name_leafdata());
    if (atminterfaceconfvpcs.is_set || is_set(atminterfaceconfvpcs.yfilter)) leaf_name_data.push_back(atminterfaceconfvpcs.get_name_leafdata());
    if (atminterfaceconfvccs.is_set || is_set(atminterfaceconfvccs.yfilter)) leaf_name_data.push_back(atminterfaceconfvccs.get_name_leafdata());
    if (atminterfacemaxactivevpibits.is_set || is_set(atminterfacemaxactivevpibits.yfilter)) leaf_name_data.push_back(atminterfacemaxactivevpibits.get_name_leafdata());
    if (atminterfacemaxactivevcibits.is_set || is_set(atminterfacemaxactivevcibits.yfilter)) leaf_name_data.push_back(atminterfacemaxactivevcibits.get_name_leafdata());
    if (atminterfaceilmivpi.is_set || is_set(atminterfaceilmivpi.yfilter)) leaf_name_data.push_back(atminterfaceilmivpi.get_name_leafdata());
    if (atminterfaceilmivci.is_set || is_set(atminterfaceilmivci.yfilter)) leaf_name_data.push_back(atminterfaceilmivci.get_name_leafdata());
    if (atminterfaceaddresstype.is_set || is_set(atminterfaceaddresstype.yfilter)) leaf_name_data.push_back(atminterfaceaddresstype.get_name_leafdata());
    if (atminterfaceadminaddress.is_set || is_set(atminterfaceadminaddress.yfilter)) leaf_name_data.push_back(atminterfaceadminaddress.get_name_leafdata());
    if (atminterfacemyneighboripaddress.is_set || is_set(atminterfacemyneighboripaddress.yfilter)) leaf_name_data.push_back(atminterfacemyneighboripaddress.get_name_leafdata());
    if (atminterfacemyneighborifname.is_set || is_set(atminterfacemyneighborifname.yfilter)) leaf_name_data.push_back(atminterfacemyneighborifname.get_name_leafdata());
    if (atminterfacecurrentmaxvpibits.is_set || is_set(atminterfacecurrentmaxvpibits.yfilter)) leaf_name_data.push_back(atminterfacecurrentmaxvpibits.get_name_leafdata());
    if (atminterfacecurrentmaxvcibits.is_set || is_set(atminterfacecurrentmaxvcibits.yfilter)) leaf_name_data.push_back(atminterfacecurrentmaxvcibits.get_name_leafdata());
    if (atminterfacesubscraddress.is_set || is_set(atminterfacesubscraddress.yfilter)) leaf_name_data.push_back(atminterfacesubscraddress.get_name_leafdata());
    if (atmintfpvcfailures.is_set || is_set(atmintfpvcfailures.yfilter)) leaf_name_data.push_back(atmintfpvcfailures.get_name_leafdata());
    if (atmintfcurrentlyfailingpvcls.is_set || is_set(atmintfcurrentlyfailingpvcls.yfilter)) leaf_name_data.push_back(atmintfcurrentlyfailingpvcls.get_name_leafdata());
    if (atmintfpvcfailurestrapenable.is_set || is_set(atmintfpvcfailurestrapenable.yfilter)) leaf_name_data.push_back(atmintfpvcfailurestrapenable.get_name_leafdata());
    if (atmintfpvcnotificationinterval.is_set || is_set(atmintfpvcnotificationinterval.yfilter)) leaf_name_data.push_back(atmintfpvcnotificationinterval.get_name_leafdata());
    if (atmpreviouslyfailedpvclinterval.is_set || is_set(atmpreviouslyfailedpvclinterval.yfilter)) leaf_name_data.push_back(atmpreviouslyfailedpvclinterval.get_name_leafdata());
    if (catmintfcurrentlydowntouppvcls.is_set || is_set(catmintfcurrentlydowntouppvcls.yfilter)) leaf_name_data.push_back(catmintfcurrentlydowntouppvcls.get_name_leafdata());
    if (catmintfoamfailedpvcls.is_set || is_set(catmintfoamfailedpvcls.yfilter)) leaf_name_data.push_back(catmintfoamfailedpvcls.get_name_leafdata());
    if (catmintfcurrentoamfailingpvcls.is_set || is_set(catmintfcurrentoamfailingpvcls.yfilter)) leaf_name_data.push_back(catmintfcurrentoamfailingpvcls.get_name_leafdata());
    if (catmintfsegccoamfailedpvcls.is_set || is_set(catmintfsegccoamfailedpvcls.yfilter)) leaf_name_data.push_back(catmintfsegccoamfailedpvcls.get_name_leafdata());
    if (catmintfcursegccoamfailingpvcls.is_set || is_set(catmintfcursegccoamfailingpvcls.yfilter)) leaf_name_data.push_back(catmintfcursegccoamfailingpvcls.get_name_leafdata());
    if (catmintfendccoamfailedpvcls.is_set || is_set(catmintfendccoamfailedpvcls.yfilter)) leaf_name_data.push_back(catmintfendccoamfailedpvcls.get_name_leafdata());
    if (catmintfcurendccoamfailingpvcls.is_set || is_set(catmintfcurendccoamfailingpvcls.yfilter)) leaf_name_data.push_back(catmintfcurendccoamfailingpvcls.get_name_leafdata());
    if (catmintfaisrdioamfailedpvcls.is_set || is_set(catmintfaisrdioamfailedpvcls.yfilter)) leaf_name_data.push_back(catmintfaisrdioamfailedpvcls.get_name_leafdata());
    if (catmintfcuraisrdioamfailingpvcls.is_set || is_set(catmintfcuraisrdioamfailingpvcls.yfilter)) leaf_name_data.push_back(catmintfcuraisrdioamfailingpvcls.get_name_leafdata());
    if (catmintfanyoamfailedpvcls.is_set || is_set(catmintfanyoamfailedpvcls.yfilter)) leaf_name_data.push_back(catmintfanyoamfailedpvcls.get_name_leafdata());
    if (catmintfcuranyoamfailingpvcls.is_set || is_set(catmintfcuranyoamfailingpvcls.yfilter)) leaf_name_data.push_back(catmintfcuranyoamfailingpvcls.get_name_leafdata());
    if (catmintftypeofoamfailure.is_set || is_set(catmintftypeofoamfailure.yfilter)) leaf_name_data.push_back(catmintftypeofoamfailure.get_name_leafdata());
    if (catmintfoamrcovedpvcls.is_set || is_set(catmintfoamrcovedpvcls.yfilter)) leaf_name_data.push_back(catmintfoamrcovedpvcls.get_name_leafdata());
    if (catmintfcurrentoamrcovingpvcls.is_set || is_set(catmintfcurrentoamrcovingpvcls.yfilter)) leaf_name_data.push_back(catmintfcurrentoamrcovingpvcls.get_name_leafdata());
    if (catmintfsegccoamrcovedpvcls.is_set || is_set(catmintfsegccoamrcovedpvcls.yfilter)) leaf_name_data.push_back(catmintfsegccoamrcovedpvcls.get_name_leafdata());
    if (catmintfcursegccoamrcovingpvcls.is_set || is_set(catmintfcursegccoamrcovingpvcls.yfilter)) leaf_name_data.push_back(catmintfcursegccoamrcovingpvcls.get_name_leafdata());
    if (catmintfendccoamrcovedpvcls.is_set || is_set(catmintfendccoamrcovedpvcls.yfilter)) leaf_name_data.push_back(catmintfendccoamrcovedpvcls.get_name_leafdata());
    if (catmintfcurendccoamrcovingpvcls.is_set || is_set(catmintfcurendccoamrcovingpvcls.yfilter)) leaf_name_data.push_back(catmintfcurendccoamrcovingpvcls.get_name_leafdata());
    if (catmintfaisrdioamrcovedpvcls.is_set || is_set(catmintfaisrdioamrcovedpvcls.yfilter)) leaf_name_data.push_back(catmintfaisrdioamrcovedpvcls.get_name_leafdata());
    if (catmintfcuraisrdioamrcovingpvcls.is_set || is_set(catmintfcuraisrdioamrcovingpvcls.yfilter)) leaf_name_data.push_back(catmintfcuraisrdioamrcovingpvcls.get_name_leafdata());
    if (catmintfanyoamrcovedpvcls.is_set || is_set(catmintfanyoamrcovedpvcls.yfilter)) leaf_name_data.push_back(catmintfanyoamrcovedpvcls.get_name_leafdata());
    if (catmintfcuranyoamrcovingpvcls.is_set || is_set(catmintfcuranyoamrcovingpvcls.yfilter)) leaf_name_data.push_back(catmintfcuranyoamrcovingpvcls.get_name_leafdata());
    if (catmintftypeofoamrecover.is_set || is_set(catmintftypeofoamrecover.yfilter)) leaf_name_data.push_back(catmintftypeofoamrecover.get_name_leafdata());
    if (atmintfcurrentlydowntouppvcls.is_set || is_set(atmintfcurrentlydowntouppvcls.yfilter)) leaf_name_data.push_back(atmintfcurrentlydowntouppvcls.get_name_leafdata());
    if (atmintfoamfailedpvcls.is_set || is_set(atmintfoamfailedpvcls.yfilter)) leaf_name_data.push_back(atmintfoamfailedpvcls.get_name_leafdata());
    if (atmintfcurrentlyoamfailingpvcls.is_set || is_set(atmintfcurrentlyoamfailingpvcls.yfilter)) leaf_name_data.push_back(atmintfcurrentlyoamfailingpvcls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceMaxVpcs")
    {
        atminterfacemaxvpcs = value;
        atminterfacemaxvpcs.value_namespace = name_space;
        atminterfacemaxvpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceMaxVccs")
    {
        atminterfacemaxvccs = value;
        atminterfacemaxvccs.value_namespace = name_space;
        atminterfacemaxvccs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceConfVpcs")
    {
        atminterfaceconfvpcs = value;
        atminterfaceconfvpcs.value_namespace = name_space;
        atminterfaceconfvpcs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceConfVccs")
    {
        atminterfaceconfvccs = value;
        atminterfaceconfvccs.value_namespace = name_space;
        atminterfaceconfvccs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceMaxActiveVpiBits")
    {
        atminterfacemaxactivevpibits = value;
        atminterfacemaxactivevpibits.value_namespace = name_space;
        atminterfacemaxactivevpibits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceMaxActiveVciBits")
    {
        atminterfacemaxactivevcibits = value;
        atminterfacemaxactivevcibits.value_namespace = name_space;
        atminterfacemaxactivevcibits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceIlmiVpi")
    {
        atminterfaceilmivpi = value;
        atminterfaceilmivpi.value_namespace = name_space;
        atminterfaceilmivpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceIlmiVci")
    {
        atminterfaceilmivci = value;
        atminterfaceilmivci.value_namespace = name_space;
        atminterfaceilmivci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceAddressType")
    {
        atminterfaceaddresstype = value;
        atminterfaceaddresstype.value_namespace = name_space;
        atminterfaceaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceAdminAddress")
    {
        atminterfaceadminaddress = value;
        atminterfaceadminaddress.value_namespace = name_space;
        atminterfaceadminaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceMyNeighborIpAddress")
    {
        atminterfacemyneighboripaddress = value;
        atminterfacemyneighboripaddress.value_namespace = name_space;
        atminterfacemyneighboripaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceMyNeighborIfName")
    {
        atminterfacemyneighborifname = value;
        atminterfacemyneighborifname.value_namespace = name_space;
        atminterfacemyneighborifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceCurrentMaxVpiBits")
    {
        atminterfacecurrentmaxvpibits = value;
        atminterfacecurrentmaxvpibits.value_namespace = name_space;
        atminterfacecurrentmaxvpibits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceCurrentMaxVciBits")
    {
        atminterfacecurrentmaxvcibits = value;
        atminterfacecurrentmaxvcibits.value_namespace = name_space;
        atminterfacecurrentmaxvcibits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceSubscrAddress")
    {
        atminterfacesubscraddress = value;
        atminterfacesubscraddress.value_namespace = name_space;
        atminterfacesubscraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfPvcFailures")
    {
        atmintfpvcfailures = value;
        atmintfpvcfailures.value_namespace = name_space;
        atmintfpvcfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfCurrentlyFailingPVcls")
    {
        atmintfcurrentlyfailingpvcls = value;
        atmintfcurrentlyfailingpvcls.value_namespace = name_space;
        atmintfcurrentlyfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfPvcFailuresTrapEnable")
    {
        atmintfpvcfailurestrapenable = value;
        atmintfpvcfailurestrapenable.value_namespace = name_space;
        atmintfpvcfailurestrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfPvcNotificationInterval")
    {
        atmintfpvcnotificationinterval = value;
        atmintfpvcnotificationinterval.value_namespace = name_space;
        atmintfpvcnotificationinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPreviouslyFailedPVclInterval")
    {
        atmpreviouslyfailedpvclinterval = value;
        atmpreviouslyfailedpvclinterval.value_namespace = name_space;
        atmpreviouslyfailedpvclinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurrentlyDownToUpPVcls")
    {
        catmintfcurrentlydowntouppvcls = value;
        catmintfcurrentlydowntouppvcls.value_namespace = name_space;
        catmintfcurrentlydowntouppvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfOAMFailedPVcls")
    {
        catmintfoamfailedpvcls = value;
        catmintfoamfailedpvcls.value_namespace = name_space;
        catmintfoamfailedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurrentOAMFailingPVcls")
    {
        catmintfcurrentoamfailingpvcls = value;
        catmintfcurrentoamfailingpvcls.value_namespace = name_space;
        catmintfcurrentoamfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfSegCCOAMFailedPVcls")
    {
        catmintfsegccoamfailedpvcls = value;
        catmintfsegccoamfailedpvcls.value_namespace = name_space;
        catmintfsegccoamfailedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurSegCCOAMFailingPVcls")
    {
        catmintfcursegccoamfailingpvcls = value;
        catmintfcursegccoamfailingpvcls.value_namespace = name_space;
        catmintfcursegccoamfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfEndCCOAMFailedPVcls")
    {
        catmintfendccoamfailedpvcls = value;
        catmintfendccoamfailedpvcls.value_namespace = name_space;
        catmintfendccoamfailedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurEndCCOAMFailingPVcls")
    {
        catmintfcurendccoamfailingpvcls = value;
        catmintfcurendccoamfailingpvcls.value_namespace = name_space;
        catmintfcurendccoamfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfAISRDIOAMFailedPVcls")
    {
        catmintfaisrdioamfailedpvcls = value;
        catmintfaisrdioamfailedpvcls.value_namespace = name_space;
        catmintfaisrdioamfailedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurAISRDIOAMFailingPVcls")
    {
        catmintfcuraisrdioamfailingpvcls = value;
        catmintfcuraisrdioamfailingpvcls.value_namespace = name_space;
        catmintfcuraisrdioamfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfAnyOAMFailedPVcls")
    {
        catmintfanyoamfailedpvcls = value;
        catmintfanyoamfailedpvcls.value_namespace = name_space;
        catmintfanyoamfailedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurAnyOAMFailingPVcls")
    {
        catmintfcuranyoamfailingpvcls = value;
        catmintfcuranyoamfailingpvcls.value_namespace = name_space;
        catmintfcuranyoamfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfTypeOfOAMFailure")
    {
        catmintftypeofoamfailure = value;
        catmintftypeofoamfailure.value_namespace = name_space;
        catmintftypeofoamfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfOAMRcovedPVcls")
    {
        catmintfoamrcovedpvcls = value;
        catmintfoamrcovedpvcls.value_namespace = name_space;
        catmintfoamrcovedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurrentOAMRcovingPVcls")
    {
        catmintfcurrentoamrcovingpvcls = value;
        catmintfcurrentoamrcovingpvcls.value_namespace = name_space;
        catmintfcurrentoamrcovingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfSegCCOAMRcovedPVcls")
    {
        catmintfsegccoamrcovedpvcls = value;
        catmintfsegccoamrcovedpvcls.value_namespace = name_space;
        catmintfsegccoamrcovedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurSegCCOAMRcovingPVcls")
    {
        catmintfcursegccoamrcovingpvcls = value;
        catmintfcursegccoamrcovingpvcls.value_namespace = name_space;
        catmintfcursegccoamrcovingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfEndCCOAMRcovedPVcls")
    {
        catmintfendccoamrcovedpvcls = value;
        catmintfendccoamrcovedpvcls.value_namespace = name_space;
        catmintfendccoamrcovedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurEndCCOAMRcovingPVcls")
    {
        catmintfcurendccoamrcovingpvcls = value;
        catmintfcurendccoamrcovingpvcls.value_namespace = name_space;
        catmintfcurendccoamrcovingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfAISRDIOAMRcovedPVcls")
    {
        catmintfaisrdioamrcovedpvcls = value;
        catmintfaisrdioamrcovedpvcls.value_namespace = name_space;
        catmintfaisrdioamrcovedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurAISRDIOAMRcovingPVcls")
    {
        catmintfcuraisrdioamrcovingpvcls = value;
        catmintfcuraisrdioamrcovingpvcls.value_namespace = name_space;
        catmintfcuraisrdioamrcovingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfAnyOAMRcovedPVcls")
    {
        catmintfanyoamrcovedpvcls = value;
        catmintfanyoamrcovedpvcls.value_namespace = name_space;
        catmintfanyoamrcovedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfCurAnyOAMRcovingPVcls")
    {
        catmintfcuranyoamrcovingpvcls = value;
        catmintfcuranyoamrcovingpvcls.value_namespace = name_space;
        catmintfcuranyoamrcovingpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmIntfTypeOfOAMRecover")
    {
        catmintftypeofoamrecover = value;
        catmintftypeofoamrecover.value_namespace = name_space;
        catmintftypeofoamrecover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfCurrentlyDownToUpPVcls")
    {
        atmintfcurrentlydowntouppvcls = value;
        atmintfcurrentlydowntouppvcls.value_namespace = name_space;
        atmintfcurrentlydowntouppvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfOAMFailedPVcls")
    {
        atmintfoamfailedpvcls = value;
        atmintfoamfailedpvcls.value_namespace = name_space;
        atmintfoamfailedpvcls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmIntfCurrentlyOAMFailingPVcls")
    {
        atmintfcurrentlyoamfailingpvcls = value;
        atmintfcurrentlyoamfailingpvcls.value_namespace = name_space;
        atmintfcurrentlyoamfailingpvcls.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceMaxVpcs")
    {
        atminterfacemaxvpcs.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceMaxVccs")
    {
        atminterfacemaxvccs.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceConfVpcs")
    {
        atminterfaceconfvpcs.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceConfVccs")
    {
        atminterfaceconfvccs.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceMaxActiveVpiBits")
    {
        atminterfacemaxactivevpibits.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceMaxActiveVciBits")
    {
        atminterfacemaxactivevcibits.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceIlmiVpi")
    {
        atminterfaceilmivpi.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceIlmiVci")
    {
        atminterfaceilmivci.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceAddressType")
    {
        atminterfaceaddresstype.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceAdminAddress")
    {
        atminterfaceadminaddress.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceMyNeighborIpAddress")
    {
        atminterfacemyneighboripaddress.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceMyNeighborIfName")
    {
        atminterfacemyneighborifname.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceCurrentMaxVpiBits")
    {
        atminterfacecurrentmaxvpibits.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceCurrentMaxVciBits")
    {
        atminterfacecurrentmaxvcibits.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceSubscrAddress")
    {
        atminterfacesubscraddress.yfilter = yfilter;
    }
    if(value_path == "atmIntfPvcFailures")
    {
        atmintfpvcfailures.yfilter = yfilter;
    }
    if(value_path == "atmIntfCurrentlyFailingPVcls")
    {
        atmintfcurrentlyfailingpvcls.yfilter = yfilter;
    }
    if(value_path == "atmIntfPvcFailuresTrapEnable")
    {
        atmintfpvcfailurestrapenable.yfilter = yfilter;
    }
    if(value_path == "atmIntfPvcNotificationInterval")
    {
        atmintfpvcnotificationinterval.yfilter = yfilter;
    }
    if(value_path == "atmPreviouslyFailedPVclInterval")
    {
        atmpreviouslyfailedpvclinterval.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurrentlyDownToUpPVcls")
    {
        catmintfcurrentlydowntouppvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfOAMFailedPVcls")
    {
        catmintfoamfailedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurrentOAMFailingPVcls")
    {
        catmintfcurrentoamfailingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfSegCCOAMFailedPVcls")
    {
        catmintfsegccoamfailedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurSegCCOAMFailingPVcls")
    {
        catmintfcursegccoamfailingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfEndCCOAMFailedPVcls")
    {
        catmintfendccoamfailedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurEndCCOAMFailingPVcls")
    {
        catmintfcurendccoamfailingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfAISRDIOAMFailedPVcls")
    {
        catmintfaisrdioamfailedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurAISRDIOAMFailingPVcls")
    {
        catmintfcuraisrdioamfailingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfAnyOAMFailedPVcls")
    {
        catmintfanyoamfailedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurAnyOAMFailingPVcls")
    {
        catmintfcuranyoamfailingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfTypeOfOAMFailure")
    {
        catmintftypeofoamfailure.yfilter = yfilter;
    }
    if(value_path == "catmIntfOAMRcovedPVcls")
    {
        catmintfoamrcovedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurrentOAMRcovingPVcls")
    {
        catmintfcurrentoamrcovingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfSegCCOAMRcovedPVcls")
    {
        catmintfsegccoamrcovedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurSegCCOAMRcovingPVcls")
    {
        catmintfcursegccoamrcovingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfEndCCOAMRcovedPVcls")
    {
        catmintfendccoamrcovedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurEndCCOAMRcovingPVcls")
    {
        catmintfcurendccoamrcovingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfAISRDIOAMRcovedPVcls")
    {
        catmintfaisrdioamrcovedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurAISRDIOAMRcovingPVcls")
    {
        catmintfcuraisrdioamrcovingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfAnyOAMRcovedPVcls")
    {
        catmintfanyoamrcovedpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfCurAnyOAMRcovingPVcls")
    {
        catmintfcuranyoamrcovingpvcls.yfilter = yfilter;
    }
    if(value_path == "catmIntfTypeOfOAMRecover")
    {
        catmintftypeofoamrecover.yfilter = yfilter;
    }
    if(value_path == "atmIntfCurrentlyDownToUpPVcls")
    {
        atmintfcurrentlydowntouppvcls.yfilter = yfilter;
    }
    if(value_path == "atmIntfOAMFailedPVcls")
    {
        atmintfoamfailedpvcls.yfilter = yfilter;
    }
    if(value_path == "atmIntfCurrentlyOAMFailingPVcls")
    {
        atmintfcurrentlyoamfailingpvcls.yfilter = yfilter;
    }
}

bool ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmInterfaceMaxVpcs" || name == "atmInterfaceMaxVccs" || name == "atmInterfaceConfVpcs" || name == "atmInterfaceConfVccs" || name == "atmInterfaceMaxActiveVpiBits" || name == "atmInterfaceMaxActiveVciBits" || name == "atmInterfaceIlmiVpi" || name == "atmInterfaceIlmiVci" || name == "atmInterfaceAddressType" || name == "atmInterfaceAdminAddress" || name == "atmInterfaceMyNeighborIpAddress" || name == "atmInterfaceMyNeighborIfName" || name == "atmInterfaceCurrentMaxVpiBits" || name == "atmInterfaceCurrentMaxVciBits" || name == "atmInterfaceSubscrAddress" || name == "atmIntfPvcFailures" || name == "atmIntfCurrentlyFailingPVcls" || name == "atmIntfPvcFailuresTrapEnable" || name == "atmIntfPvcNotificationInterval" || name == "atmPreviouslyFailedPVclInterval" || name == "catmIntfCurrentlyDownToUpPVcls" || name == "catmIntfOAMFailedPVcls" || name == "catmIntfCurrentOAMFailingPVcls" || name == "catmIntfSegCCOAMFailedPVcls" || name == "catmIntfCurSegCCOAMFailingPVcls" || name == "catmIntfEndCCOAMFailedPVcls" || name == "catmIntfCurEndCCOAMFailingPVcls" || name == "catmIntfAISRDIOAMFailedPVcls" || name == "catmIntfCurAISRDIOAMFailingPVcls" || name == "catmIntfAnyOAMFailedPVcls" || name == "catmIntfCurAnyOAMFailingPVcls" || name == "catmIntfTypeOfOAMFailure" || name == "catmIntfOAMRcovedPVcls" || name == "catmIntfCurrentOAMRcovingPVcls" || name == "catmIntfSegCCOAMRcovedPVcls" || name == "catmIntfCurSegCCOAMRcovingPVcls" || name == "catmIntfEndCCOAMRcovedPVcls" || name == "catmIntfCurEndCCOAMRcovingPVcls" || name == "catmIntfAISRDIOAMRcovedPVcls" || name == "catmIntfCurAISRDIOAMRcovingPVcls" || name == "catmIntfAnyOAMRcovedPVcls" || name == "catmIntfCurAnyOAMRcovingPVcls" || name == "catmIntfTypeOfOAMRecover" || name == "atmIntfCurrentlyDownToUpPVcls" || name == "atmIntfOAMFailedPVcls" || name == "atmIntfCurrentlyOAMFailingPVcls")
        return true;
    return false;
}

ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcptable()
{

    yang_name = "atmInterfaceDs3PlcpTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atminterfaceds3Plcptable::~Atminterfaceds3Plcptable()
{
}

bool ATMMIB::Atminterfaceds3Plcptable::has_data() const
{
    for (std::size_t index=0; index<atminterfaceds3plcpentry.size(); index++)
    {
        if(atminterfaceds3plcpentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atminterfaceds3Plcptable::has_operation() const
{
    for (std::size_t index=0; index<atminterfaceds3plcpentry.size(); index++)
    {
        if(atminterfaceds3plcpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atminterfaceds3Plcptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atminterfaceds3Plcptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceDs3PlcpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atminterfaceds3Plcptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atminterfaceds3Plcptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmInterfaceDs3PlcpEntry")
    {
        for(auto const & c : atminterfaceds3plcpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry>();
        c->parent = this;
        atminterfaceds3plcpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atminterfaceds3Plcptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atminterfaceds3plcpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atminterfaceds3Plcptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atminterfaceds3Plcptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atminterfaceds3Plcptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmInterfaceDs3PlcpEntry")
        return true;
    return false;
}

ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpentry()
    :
    ifindex{YType::str, "ifIndex"},
    atminterfaceds3plcpsefss{YType::uint32, "atmInterfaceDs3PlcpSEFSs"},
    atminterfaceds3plcpalarmstate{YType::enumeration, "atmInterfaceDs3PlcpAlarmState"},
    atminterfaceds3plcpuass{YType::uint32, "atmInterfaceDs3PlcpUASs"}
{

    yang_name = "atmInterfaceDs3PlcpEntry"; yang_parent_name = "atmInterfaceDs3PlcpTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::~Atminterfaceds3Plcpentry()
{
}

bool ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::has_data() const
{
    return ifindex.is_set
	|| atminterfaceds3plcpsefss.is_set
	|| atminterfaceds3plcpalarmstate.is_set
	|| atminterfaceds3plcpuass.is_set;
}

bool ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atminterfaceds3plcpsefss.yfilter)
	|| ydk::is_set(atminterfaceds3plcpalarmstate.yfilter)
	|| ydk::is_set(atminterfaceds3plcpuass.yfilter);
}

std::string ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmInterfaceDs3PlcpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceDs3PlcpEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atminterfaceds3plcpsefss.is_set || is_set(atminterfaceds3plcpsefss.yfilter)) leaf_name_data.push_back(atminterfaceds3plcpsefss.get_name_leafdata());
    if (atminterfaceds3plcpalarmstate.is_set || is_set(atminterfaceds3plcpalarmstate.yfilter)) leaf_name_data.push_back(atminterfaceds3plcpalarmstate.get_name_leafdata());
    if (atminterfaceds3plcpuass.is_set || is_set(atminterfaceds3plcpuass.yfilter)) leaf_name_data.push_back(atminterfaceds3plcpuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceDs3PlcpSEFSs")
    {
        atminterfaceds3plcpsefss = value;
        atminterfaceds3plcpsefss.value_namespace = name_space;
        atminterfaceds3plcpsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceDs3PlcpAlarmState")
    {
        atminterfaceds3plcpalarmstate = value;
        atminterfaceds3plcpalarmstate.value_namespace = name_space;
        atminterfaceds3plcpalarmstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceDs3PlcpUASs")
    {
        atminterfaceds3plcpuass = value;
        atminterfaceds3plcpuass.value_namespace = name_space;
        atminterfaceds3plcpuass.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceDs3PlcpSEFSs")
    {
        atminterfaceds3plcpsefss.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceDs3PlcpAlarmState")
    {
        atminterfaceds3plcpalarmstate.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceDs3PlcpUASs")
    {
        atminterfaceds3plcpuass.yfilter = yfilter;
    }
}

bool ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmInterfaceDs3PlcpSEFSs" || name == "atmInterfaceDs3PlcpAlarmState" || name == "atmInterfaceDs3PlcpUASs")
        return true;
    return false;
}

ATMMIB::Atminterfacetctable::Atminterfacetctable()
{

    yang_name = "atmInterfaceTCTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atminterfacetctable::~Atminterfacetctable()
{
}

bool ATMMIB::Atminterfacetctable::has_data() const
{
    for (std::size_t index=0; index<atminterfacetcentry.size(); index++)
    {
        if(atminterfacetcentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atminterfacetctable::has_operation() const
{
    for (std::size_t index=0; index<atminterfacetcentry.size(); index++)
    {
        if(atminterfacetcentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atminterfacetctable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atminterfacetctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceTCTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atminterfacetctable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atminterfacetctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmInterfaceTCEntry")
    {
        for(auto const & c : atminterfacetcentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atminterfacetctable::Atminterfacetcentry>();
        c->parent = this;
        atminterfacetcentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atminterfacetctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atminterfacetcentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atminterfacetctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atminterfacetctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atminterfacetctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmInterfaceTCEntry")
        return true;
    return false;
}

ATMMIB::Atminterfacetctable::Atminterfacetcentry::Atminterfacetcentry()
    :
    ifindex{YType::str, "ifIndex"},
    atminterfaceocdevents{YType::uint32, "atmInterfaceOCDEvents"},
    atminterfacetcalarmstate{YType::enumeration, "atmInterfaceTCAlarmState"}
{

    yang_name = "atmInterfaceTCEntry"; yang_parent_name = "atmInterfaceTCTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atminterfacetctable::Atminterfacetcentry::~Atminterfacetcentry()
{
}

bool ATMMIB::Atminterfacetctable::Atminterfacetcentry::has_data() const
{
    return ifindex.is_set
	|| atminterfaceocdevents.is_set
	|| atminterfacetcalarmstate.is_set;
}

bool ATMMIB::Atminterfacetctable::Atminterfacetcentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atminterfaceocdevents.yfilter)
	|| ydk::is_set(atminterfacetcalarmstate.yfilter);
}

std::string ATMMIB::Atminterfacetctable::Atminterfacetcentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmInterfaceTCTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atminterfacetctable::Atminterfacetcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceTCEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atminterfacetctable::Atminterfacetcentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atminterfaceocdevents.is_set || is_set(atminterfaceocdevents.yfilter)) leaf_name_data.push_back(atminterfaceocdevents.get_name_leafdata());
    if (atminterfacetcalarmstate.is_set || is_set(atminterfacetcalarmstate.yfilter)) leaf_name_data.push_back(atminterfacetcalarmstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atminterfacetctable::Atminterfacetcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atminterfacetctable::Atminterfacetcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atminterfacetctable::Atminterfacetcentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceOCDEvents")
    {
        atminterfaceocdevents = value;
        atminterfaceocdevents.value_namespace = name_space;
        atminterfaceocdevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmInterfaceTCAlarmState")
    {
        atminterfacetcalarmstate = value;
        atminterfacetcalarmstate.value_namespace = name_space;
        atminterfacetcalarmstate.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atminterfacetctable::Atminterfacetcentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceOCDEvents")
    {
        atminterfaceocdevents.yfilter = yfilter;
    }
    if(value_path == "atmInterfaceTCAlarmState")
    {
        atminterfacetcalarmstate.yfilter = yfilter;
    }
}

bool ATMMIB::Atminterfacetctable::Atminterfacetcentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmInterfaceOCDEvents" || name == "atmInterfaceTCAlarmState")
        return true;
    return false;
}

ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamtable()
{

    yang_name = "atmTrafficDescrParamTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmtrafficdescrparamtable::~Atmtrafficdescrparamtable()
{
}

bool ATMMIB::Atmtrafficdescrparamtable::has_data() const
{
    for (std::size_t index=0; index<atmtrafficdescrparamentry.size(); index++)
    {
        if(atmtrafficdescrparamentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atmtrafficdescrparamtable::has_operation() const
{
    for (std::size_t index=0; index<atmtrafficdescrparamentry.size(); index++)
    {
        if(atmtrafficdescrparamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atmtrafficdescrparamtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmtrafficdescrparamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmTrafficDescrParamTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmtrafficdescrparamtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmtrafficdescrparamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmTrafficDescrParamEntry")
    {
        for(auto const & c : atmtrafficdescrparamentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry>();
        c->parent = this;
        atmtrafficdescrparamentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmtrafficdescrparamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmtrafficdescrparamentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atmtrafficdescrparamtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atmtrafficdescrparamtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atmtrafficdescrparamtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmTrafficDescrParamEntry")
        return true;
    return false;
}

ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::Atmtrafficdescrparamentry()
    :
    atmtrafficdescrparamindex{YType::int32, "atmTrafficDescrParamIndex"},
    atmtrafficdescrtype{YType::str, "atmTrafficDescrType"},
    atmtrafficdescrparam1{YType::int32, "atmTrafficDescrParam1"},
    atmtrafficdescrparam2{YType::int32, "atmTrafficDescrParam2"},
    atmtrafficdescrparam3{YType::int32, "atmTrafficDescrParam3"},
    atmtrafficdescrparam4{YType::int32, "atmTrafficDescrParam4"},
    atmtrafficdescrparam5{YType::int32, "atmTrafficDescrParam5"},
    atmtrafficqosclass{YType::int32, "atmTrafficQoSClass"},
    atmtrafficdescrrowstatus{YType::enumeration, "atmTrafficDescrRowStatus"},
    atmservicecategory{YType::enumeration, "atmServiceCategory"},
    atmtrafficframediscard{YType::boolean, "atmTrafficFrameDiscard"}
{

    yang_name = "atmTrafficDescrParamEntry"; yang_parent_name = "atmTrafficDescrParamTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::~Atmtrafficdescrparamentry()
{
}

bool ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::has_data() const
{
    return atmtrafficdescrparamindex.is_set
	|| atmtrafficdescrtype.is_set
	|| atmtrafficdescrparam1.is_set
	|| atmtrafficdescrparam2.is_set
	|| atmtrafficdescrparam3.is_set
	|| atmtrafficdescrparam4.is_set
	|| atmtrafficdescrparam5.is_set
	|| atmtrafficqosclass.is_set
	|| atmtrafficdescrrowstatus.is_set
	|| atmservicecategory.is_set
	|| atmtrafficframediscard.is_set;
}

bool ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atmtrafficdescrparamindex.yfilter)
	|| ydk::is_set(atmtrafficdescrtype.yfilter)
	|| ydk::is_set(atmtrafficdescrparam1.yfilter)
	|| ydk::is_set(atmtrafficdescrparam2.yfilter)
	|| ydk::is_set(atmtrafficdescrparam3.yfilter)
	|| ydk::is_set(atmtrafficdescrparam4.yfilter)
	|| ydk::is_set(atmtrafficdescrparam5.yfilter)
	|| ydk::is_set(atmtrafficqosclass.yfilter)
	|| ydk::is_set(atmtrafficdescrrowstatus.yfilter)
	|| ydk::is_set(atmservicecategory.yfilter)
	|| ydk::is_set(atmtrafficframediscard.yfilter);
}

std::string ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmTrafficDescrParamTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmTrafficDescrParamEntry" <<"[atmTrafficDescrParamIndex='" <<atmtrafficdescrparamindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmtrafficdescrparamindex.is_set || is_set(atmtrafficdescrparamindex.yfilter)) leaf_name_data.push_back(atmtrafficdescrparamindex.get_name_leafdata());
    if (atmtrafficdescrtype.is_set || is_set(atmtrafficdescrtype.yfilter)) leaf_name_data.push_back(atmtrafficdescrtype.get_name_leafdata());
    if (atmtrafficdescrparam1.is_set || is_set(atmtrafficdescrparam1.yfilter)) leaf_name_data.push_back(atmtrafficdescrparam1.get_name_leafdata());
    if (atmtrafficdescrparam2.is_set || is_set(atmtrafficdescrparam2.yfilter)) leaf_name_data.push_back(atmtrafficdescrparam2.get_name_leafdata());
    if (atmtrafficdescrparam3.is_set || is_set(atmtrafficdescrparam3.yfilter)) leaf_name_data.push_back(atmtrafficdescrparam3.get_name_leafdata());
    if (atmtrafficdescrparam4.is_set || is_set(atmtrafficdescrparam4.yfilter)) leaf_name_data.push_back(atmtrafficdescrparam4.get_name_leafdata());
    if (atmtrafficdescrparam5.is_set || is_set(atmtrafficdescrparam5.yfilter)) leaf_name_data.push_back(atmtrafficdescrparam5.get_name_leafdata());
    if (atmtrafficqosclass.is_set || is_set(atmtrafficqosclass.yfilter)) leaf_name_data.push_back(atmtrafficqosclass.get_name_leafdata());
    if (atmtrafficdescrrowstatus.is_set || is_set(atmtrafficdescrrowstatus.yfilter)) leaf_name_data.push_back(atmtrafficdescrrowstatus.get_name_leafdata());
    if (atmservicecategory.is_set || is_set(atmservicecategory.yfilter)) leaf_name_data.push_back(atmservicecategory.get_name_leafdata());
    if (atmtrafficframediscard.is_set || is_set(atmtrafficframediscard.yfilter)) leaf_name_data.push_back(atmtrafficframediscard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atmTrafficDescrParamIndex")
    {
        atmtrafficdescrparamindex = value;
        atmtrafficdescrparamindex.value_namespace = name_space;
        atmtrafficdescrparamindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrType")
    {
        atmtrafficdescrtype = value;
        atmtrafficdescrtype.value_namespace = name_space;
        atmtrafficdescrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrParam1")
    {
        atmtrafficdescrparam1 = value;
        atmtrafficdescrparam1.value_namespace = name_space;
        atmtrafficdescrparam1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrParam2")
    {
        atmtrafficdescrparam2 = value;
        atmtrafficdescrparam2.value_namespace = name_space;
        atmtrafficdescrparam2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrParam3")
    {
        atmtrafficdescrparam3 = value;
        atmtrafficdescrparam3.value_namespace = name_space;
        atmtrafficdescrparam3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrParam4")
    {
        atmtrafficdescrparam4 = value;
        atmtrafficdescrparam4.value_namespace = name_space;
        atmtrafficdescrparam4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrParam5")
    {
        atmtrafficdescrparam5 = value;
        atmtrafficdescrparam5.value_namespace = name_space;
        atmtrafficdescrparam5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficQoSClass")
    {
        atmtrafficqosclass = value;
        atmtrafficqosclass.value_namespace = name_space;
        atmtrafficqosclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficDescrRowStatus")
    {
        atmtrafficdescrrowstatus = value;
        atmtrafficdescrrowstatus.value_namespace = name_space;
        atmtrafficdescrrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmServiceCategory")
    {
        atmservicecategory = value;
        atmservicecategory.value_namespace = name_space;
        atmservicecategory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmTrafficFrameDiscard")
    {
        atmtrafficframediscard = value;
        atmtrafficframediscard.value_namespace = name_space;
        atmtrafficframediscard.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atmTrafficDescrParamIndex")
    {
        atmtrafficdescrparamindex.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrType")
    {
        atmtrafficdescrtype.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrParam1")
    {
        atmtrafficdescrparam1.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrParam2")
    {
        atmtrafficdescrparam2.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrParam3")
    {
        atmtrafficdescrparam3.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrParam4")
    {
        atmtrafficdescrparam4.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrParam5")
    {
        atmtrafficdescrparam5.yfilter = yfilter;
    }
    if(value_path == "atmTrafficQoSClass")
    {
        atmtrafficqosclass.yfilter = yfilter;
    }
    if(value_path == "atmTrafficDescrRowStatus")
    {
        atmtrafficdescrrowstatus.yfilter = yfilter;
    }
    if(value_path == "atmServiceCategory")
    {
        atmservicecategory.yfilter = yfilter;
    }
    if(value_path == "atmTrafficFrameDiscard")
    {
        atmtrafficframediscard.yfilter = yfilter;
    }
}

bool ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmTrafficDescrParamIndex" || name == "atmTrafficDescrType" || name == "atmTrafficDescrParam1" || name == "atmTrafficDescrParam2" || name == "atmTrafficDescrParam3" || name == "atmTrafficDescrParam4" || name == "atmTrafficDescrParam5" || name == "atmTrafficQoSClass" || name == "atmTrafficDescrRowStatus" || name == "atmServiceCategory" || name == "atmTrafficFrameDiscard")
        return true;
    return false;
}

ATMMIB::Atmvpltable::Atmvpltable()
{

    yang_name = "atmVplTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvpltable::~Atmvpltable()
{
}

bool ATMMIB::Atmvpltable::has_data() const
{
    for (std::size_t index=0; index<atmvplentry.size(); index++)
    {
        if(atmvplentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atmvpltable::has_operation() const
{
    for (std::size_t index=0; index<atmvplentry.size(); index++)
    {
        if(atmvplentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atmvpltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVplTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvpltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVplEntry")
    {
        for(auto const & c : atmvplentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atmvpltable::Atmvplentry>();
        c->parent = this;
        atmvplentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvplentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atmvpltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atmvpltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atmvpltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVplEntry")
        return true;
    return false;
}

ATMMIB::Atmvpltable::Atmvplentry::Atmvplentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvplvpi{YType::int32, "atmVplVpi"},
    atmvpladminstatus{YType::enumeration, "atmVplAdminStatus"},
    atmvploperstatus{YType::enumeration, "atmVplOperStatus"},
    atmvpllastchange{YType::uint32, "atmVplLastChange"},
    atmvplreceivetrafficdescrindex{YType::int32, "atmVplReceiveTrafficDescrIndex"},
    atmvpltransmittrafficdescrindex{YType::int32, "atmVplTransmitTrafficDescrIndex"},
    atmvplcrossconnectidentifier{YType::int32, "atmVplCrossConnectIdentifier"},
    atmvplrowstatus{YType::enumeration, "atmVplRowStatus"},
    atmvplcasttype{YType::enumeration, "atmVplCastType"},
    atmvplconnkind{YType::enumeration, "atmVplConnKind"}
{

    yang_name = "atmVplEntry"; yang_parent_name = "atmVplTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvpltable::Atmvplentry::~Atmvplentry()
{
}

bool ATMMIB::Atmvpltable::Atmvplentry::has_data() const
{
    return ifindex.is_set
	|| atmvplvpi.is_set
	|| atmvpladminstatus.is_set
	|| atmvploperstatus.is_set
	|| atmvpllastchange.is_set
	|| atmvplreceivetrafficdescrindex.is_set
	|| atmvpltransmittrafficdescrindex.is_set
	|| atmvplcrossconnectidentifier.is_set
	|| atmvplrowstatus.is_set
	|| atmvplcasttype.is_set
	|| atmvplconnkind.is_set;
}

bool ATMMIB::Atmvpltable::Atmvplentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvplvpi.yfilter)
	|| ydk::is_set(atmvpladminstatus.yfilter)
	|| ydk::is_set(atmvploperstatus.yfilter)
	|| ydk::is_set(atmvpllastchange.yfilter)
	|| ydk::is_set(atmvplreceivetrafficdescrindex.yfilter)
	|| ydk::is_set(atmvpltransmittrafficdescrindex.yfilter)
	|| ydk::is_set(atmvplcrossconnectidentifier.yfilter)
	|| ydk::is_set(atmvplrowstatus.yfilter)
	|| ydk::is_set(atmvplcasttype.yfilter)
	|| ydk::is_set(atmvplconnkind.yfilter);
}

std::string ATMMIB::Atmvpltable::Atmvplentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmVplTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvpltable::Atmvplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVplEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVplVpi='" <<atmvplvpi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvpltable::Atmvplentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvplvpi.is_set || is_set(atmvplvpi.yfilter)) leaf_name_data.push_back(atmvplvpi.get_name_leafdata());
    if (atmvpladminstatus.is_set || is_set(atmvpladminstatus.yfilter)) leaf_name_data.push_back(atmvpladminstatus.get_name_leafdata());
    if (atmvploperstatus.is_set || is_set(atmvploperstatus.yfilter)) leaf_name_data.push_back(atmvploperstatus.get_name_leafdata());
    if (atmvpllastchange.is_set || is_set(atmvpllastchange.yfilter)) leaf_name_data.push_back(atmvpllastchange.get_name_leafdata());
    if (atmvplreceivetrafficdescrindex.is_set || is_set(atmvplreceivetrafficdescrindex.yfilter)) leaf_name_data.push_back(atmvplreceivetrafficdescrindex.get_name_leafdata());
    if (atmvpltransmittrafficdescrindex.is_set || is_set(atmvpltransmittrafficdescrindex.yfilter)) leaf_name_data.push_back(atmvpltransmittrafficdescrindex.get_name_leafdata());
    if (atmvplcrossconnectidentifier.is_set || is_set(atmvplcrossconnectidentifier.yfilter)) leaf_name_data.push_back(atmvplcrossconnectidentifier.get_name_leafdata());
    if (atmvplrowstatus.is_set || is_set(atmvplrowstatus.yfilter)) leaf_name_data.push_back(atmvplrowstatus.get_name_leafdata());
    if (atmvplcasttype.is_set || is_set(atmvplcasttype.yfilter)) leaf_name_data.push_back(atmvplcasttype.get_name_leafdata());
    if (atmvplconnkind.is_set || is_set(atmvplconnkind.yfilter)) leaf_name_data.push_back(atmvplconnkind.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvpltable::Atmvplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvpltable::Atmvplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atmvpltable::Atmvplentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplVpi")
    {
        atmvplvpi = value;
        atmvplvpi.value_namespace = name_space;
        atmvplvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplAdminStatus")
    {
        atmvpladminstatus = value;
        atmvpladminstatus.value_namespace = name_space;
        atmvpladminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplOperStatus")
    {
        atmvploperstatus = value;
        atmvploperstatus.value_namespace = name_space;
        atmvploperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplLastChange")
    {
        atmvpllastchange = value;
        atmvpllastchange.value_namespace = name_space;
        atmvpllastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplReceiveTrafficDescrIndex")
    {
        atmvplreceivetrafficdescrindex = value;
        atmvplreceivetrafficdescrindex.value_namespace = name_space;
        atmvplreceivetrafficdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplTransmitTrafficDescrIndex")
    {
        atmvpltransmittrafficdescrindex = value;
        atmvpltransmittrafficdescrindex.value_namespace = name_space;
        atmvpltransmittrafficdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplCrossConnectIdentifier")
    {
        atmvplcrossconnectidentifier = value;
        atmvplcrossconnectidentifier.value_namespace = name_space;
        atmvplcrossconnectidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplRowStatus")
    {
        atmvplrowstatus = value;
        atmvplrowstatus.value_namespace = name_space;
        atmvplrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplCastType")
    {
        atmvplcasttype = value;
        atmvplcasttype.value_namespace = name_space;
        atmvplcasttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplConnKind")
    {
        atmvplconnkind = value;
        atmvplconnkind.value_namespace = name_space;
        atmvplconnkind.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atmvpltable::Atmvplentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVplVpi")
    {
        atmvplvpi.yfilter = yfilter;
    }
    if(value_path == "atmVplAdminStatus")
    {
        atmvpladminstatus.yfilter = yfilter;
    }
    if(value_path == "atmVplOperStatus")
    {
        atmvploperstatus.yfilter = yfilter;
    }
    if(value_path == "atmVplLastChange")
    {
        atmvpllastchange.yfilter = yfilter;
    }
    if(value_path == "atmVplReceiveTrafficDescrIndex")
    {
        atmvplreceivetrafficdescrindex.yfilter = yfilter;
    }
    if(value_path == "atmVplTransmitTrafficDescrIndex")
    {
        atmvpltransmittrafficdescrindex.yfilter = yfilter;
    }
    if(value_path == "atmVplCrossConnectIdentifier")
    {
        atmvplcrossconnectidentifier.yfilter = yfilter;
    }
    if(value_path == "atmVplRowStatus")
    {
        atmvplrowstatus.yfilter = yfilter;
    }
    if(value_path == "atmVplCastType")
    {
        atmvplcasttype.yfilter = yfilter;
    }
    if(value_path == "atmVplConnKind")
    {
        atmvplconnkind.yfilter = yfilter;
    }
}

bool ATMMIB::Atmvpltable::Atmvplentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVplVpi" || name == "atmVplAdminStatus" || name == "atmVplOperStatus" || name == "atmVplLastChange" || name == "atmVplReceiveTrafficDescrIndex" || name == "atmVplTransmitTrafficDescrIndex" || name == "atmVplCrossConnectIdentifier" || name == "atmVplRowStatus" || name == "atmVplCastType" || name == "atmVplConnKind")
        return true;
    return false;
}

ATMMIB::Atmvcltable::Atmvcltable()
{

    yang_name = "atmVclTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvcltable::~Atmvcltable()
{
}

bool ATMMIB::Atmvcltable::has_data() const
{
    for (std::size_t index=0; index<atmvclentry.size(); index++)
    {
        if(atmvclentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atmvcltable::has_operation() const
{
    for (std::size_t index=0; index<atmvclentry.size(); index++)
    {
        if(atmvclentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atmvcltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvcltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVclTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvcltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvcltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVclEntry")
    {
        for(auto const & c : atmvclentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atmvcltable::Atmvclentry>();
        c->parent = this;
        atmvclentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvclentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atmvcltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atmvcltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atmvcltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVclEntry")
        return true;
    return false;
}

ATMMIB::Atmvcltable::Atmvclentry::Atmvclentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::int32, "atmVclVpi"},
    atmvclvci{YType::int32, "atmVclVci"},
    atmvcladminstatus{YType::enumeration, "atmVclAdminStatus"},
    atmvcloperstatus{YType::enumeration, "atmVclOperStatus"},
    atmvcllastchange{YType::uint32, "atmVclLastChange"},
    atmvclreceivetrafficdescrindex{YType::int32, "atmVclReceiveTrafficDescrIndex"},
    atmvcltransmittrafficdescrindex{YType::int32, "atmVclTransmitTrafficDescrIndex"},
    atmvccaaltype{YType::enumeration, "atmVccAalType"},
    atmvccaal5cpcstransmitsdusize{YType::int32, "atmVccAal5CpcsTransmitSduSize"},
    atmvccaal5cpcsreceivesdusize{YType::int32, "atmVccAal5CpcsReceiveSduSize"},
    atmvccaal5encapstype{YType::enumeration, "atmVccAal5EncapsType"},
    atmvclcrossconnectidentifier{YType::int32, "atmVclCrossConnectIdentifier"},
    atmvclrowstatus{YType::enumeration, "atmVclRowStatus"},
    atmvclcasttype{YType::enumeration, "atmVclCastType"},
    atmvclconnkind{YType::enumeration, "atmVclConnKind"},
    catmxvcloamloopbackfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamLoopbackFreq"},
    catmxvcloamretryfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamRetryFreq"},
    catmxvcloamupretrycount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamUpRetryCount"},
    catmxvcloamdownretrycount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamDownRetryCount"},
    catmxvcloamendccactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCActCount"},
    catmxvcloamendccdeactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCDeActCount"},
    catmxvcloamendccretryfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCRetryFreq"},
    catmxvcloamsegccactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCActCount"},
    catmxvcloamsegccdeactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCDeActCount"},
    catmxvcloamsegccretryfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCRetryFreq"},
    catmxvcloammanage{YType::boolean, "CISCO-ATM-EXT-MIB:catmxVclOamManage"},
    catmxvcloamloopbkstatus{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamLoopBkStatus"},
    catmxvcloamvcstate{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamVcState"},
    catmxvcloamendccstatus{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCStatus"},
    catmxvcloamsegccstatus{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCStatus"},
    catmxvcloamendccvcstate{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCVcState"},
    catmxvcloamsegccvcstate{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCVcState"},
    catmxvcloamcellsreceived{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamCellsReceived"},
    catmxvcloamcellssent{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamCellsSent"},
    catmxvcloamcellsdropped{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamCellsDropped"},
    catmxvcloaminf5ais{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamInF5ais"},
    catmxvcloamoutf5ais{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamOutF5ais"},
    catmxvcloaminf5rdi{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamInF5rdi"},
    catmxvcloamoutf5rdi{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamOutF5rdi"}
{

    yang_name = "atmVclEntry"; yang_parent_name = "atmVclTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvcltable::Atmvclentry::~Atmvclentry()
{
}

bool ATMMIB::Atmvcltable::Atmvclentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| atmvcladminstatus.is_set
	|| atmvcloperstatus.is_set
	|| atmvcllastchange.is_set
	|| atmvclreceivetrafficdescrindex.is_set
	|| atmvcltransmittrafficdescrindex.is_set
	|| atmvccaaltype.is_set
	|| atmvccaal5cpcstransmitsdusize.is_set
	|| atmvccaal5cpcsreceivesdusize.is_set
	|| atmvccaal5encapstype.is_set
	|| atmvclcrossconnectidentifier.is_set
	|| atmvclrowstatus.is_set
	|| atmvclcasttype.is_set
	|| atmvclconnkind.is_set
	|| catmxvcloamloopbackfreq.is_set
	|| catmxvcloamretryfreq.is_set
	|| catmxvcloamupretrycount.is_set
	|| catmxvcloamdownretrycount.is_set
	|| catmxvcloamendccactcount.is_set
	|| catmxvcloamendccdeactcount.is_set
	|| catmxvcloamendccretryfreq.is_set
	|| catmxvcloamsegccactcount.is_set
	|| catmxvcloamsegccdeactcount.is_set
	|| catmxvcloamsegccretryfreq.is_set
	|| catmxvcloammanage.is_set
	|| catmxvcloamloopbkstatus.is_set
	|| catmxvcloamvcstate.is_set
	|| catmxvcloamendccstatus.is_set
	|| catmxvcloamsegccstatus.is_set
	|| catmxvcloamendccvcstate.is_set
	|| catmxvcloamsegccvcstate.is_set
	|| catmxvcloamcellsreceived.is_set
	|| catmxvcloamcellssent.is_set
	|| catmxvcloamcellsdropped.is_set
	|| catmxvcloaminf5ais.is_set
	|| catmxvcloamoutf5ais.is_set
	|| catmxvcloaminf5rdi.is_set
	|| catmxvcloamoutf5rdi.is_set;
}

bool ATMMIB::Atmvcltable::Atmvclentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(atmvcladminstatus.yfilter)
	|| ydk::is_set(atmvcloperstatus.yfilter)
	|| ydk::is_set(atmvcllastchange.yfilter)
	|| ydk::is_set(atmvclreceivetrafficdescrindex.yfilter)
	|| ydk::is_set(atmvcltransmittrafficdescrindex.yfilter)
	|| ydk::is_set(atmvccaaltype.yfilter)
	|| ydk::is_set(atmvccaal5cpcstransmitsdusize.yfilter)
	|| ydk::is_set(atmvccaal5cpcsreceivesdusize.yfilter)
	|| ydk::is_set(atmvccaal5encapstype.yfilter)
	|| ydk::is_set(atmvclcrossconnectidentifier.yfilter)
	|| ydk::is_set(atmvclrowstatus.yfilter)
	|| ydk::is_set(atmvclcasttype.yfilter)
	|| ydk::is_set(atmvclconnkind.yfilter)
	|| ydk::is_set(catmxvcloamloopbackfreq.yfilter)
	|| ydk::is_set(catmxvcloamretryfreq.yfilter)
	|| ydk::is_set(catmxvcloamupretrycount.yfilter)
	|| ydk::is_set(catmxvcloamdownretrycount.yfilter)
	|| ydk::is_set(catmxvcloamendccactcount.yfilter)
	|| ydk::is_set(catmxvcloamendccdeactcount.yfilter)
	|| ydk::is_set(catmxvcloamendccretryfreq.yfilter)
	|| ydk::is_set(catmxvcloamsegccactcount.yfilter)
	|| ydk::is_set(catmxvcloamsegccdeactcount.yfilter)
	|| ydk::is_set(catmxvcloamsegccretryfreq.yfilter)
	|| ydk::is_set(catmxvcloammanage.yfilter)
	|| ydk::is_set(catmxvcloamloopbkstatus.yfilter)
	|| ydk::is_set(catmxvcloamvcstate.yfilter)
	|| ydk::is_set(catmxvcloamendccstatus.yfilter)
	|| ydk::is_set(catmxvcloamsegccstatus.yfilter)
	|| ydk::is_set(catmxvcloamendccvcstate.yfilter)
	|| ydk::is_set(catmxvcloamsegccvcstate.yfilter)
	|| ydk::is_set(catmxvcloamcellsreceived.yfilter)
	|| ydk::is_set(catmxvcloamcellssent.yfilter)
	|| ydk::is_set(catmxvcloamcellsdropped.yfilter)
	|| ydk::is_set(catmxvcloaminf5ais.yfilter)
	|| ydk::is_set(catmxvcloamoutf5ais.yfilter)
	|| ydk::is_set(catmxvcloaminf5rdi.yfilter)
	|| ydk::is_set(catmxvcloamoutf5rdi.yfilter);
}

std::string ATMMIB::Atmvcltable::Atmvclentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmVclTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvcltable::Atmvclentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVclEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvcltable::Atmvclentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (atmvcladminstatus.is_set || is_set(atmvcladminstatus.yfilter)) leaf_name_data.push_back(atmvcladminstatus.get_name_leafdata());
    if (atmvcloperstatus.is_set || is_set(atmvcloperstatus.yfilter)) leaf_name_data.push_back(atmvcloperstatus.get_name_leafdata());
    if (atmvcllastchange.is_set || is_set(atmvcllastchange.yfilter)) leaf_name_data.push_back(atmvcllastchange.get_name_leafdata());
    if (atmvclreceivetrafficdescrindex.is_set || is_set(atmvclreceivetrafficdescrindex.yfilter)) leaf_name_data.push_back(atmvclreceivetrafficdescrindex.get_name_leafdata());
    if (atmvcltransmittrafficdescrindex.is_set || is_set(atmvcltransmittrafficdescrindex.yfilter)) leaf_name_data.push_back(atmvcltransmittrafficdescrindex.get_name_leafdata());
    if (atmvccaaltype.is_set || is_set(atmvccaaltype.yfilter)) leaf_name_data.push_back(atmvccaaltype.get_name_leafdata());
    if (atmvccaal5cpcstransmitsdusize.is_set || is_set(atmvccaal5cpcstransmitsdusize.yfilter)) leaf_name_data.push_back(atmvccaal5cpcstransmitsdusize.get_name_leafdata());
    if (atmvccaal5cpcsreceivesdusize.is_set || is_set(atmvccaal5cpcsreceivesdusize.yfilter)) leaf_name_data.push_back(atmvccaal5cpcsreceivesdusize.get_name_leafdata());
    if (atmvccaal5encapstype.is_set || is_set(atmvccaal5encapstype.yfilter)) leaf_name_data.push_back(atmvccaal5encapstype.get_name_leafdata());
    if (atmvclcrossconnectidentifier.is_set || is_set(atmvclcrossconnectidentifier.yfilter)) leaf_name_data.push_back(atmvclcrossconnectidentifier.get_name_leafdata());
    if (atmvclrowstatus.is_set || is_set(atmvclrowstatus.yfilter)) leaf_name_data.push_back(atmvclrowstatus.get_name_leafdata());
    if (atmvclcasttype.is_set || is_set(atmvclcasttype.yfilter)) leaf_name_data.push_back(atmvclcasttype.get_name_leafdata());
    if (atmvclconnkind.is_set || is_set(atmvclconnkind.yfilter)) leaf_name_data.push_back(atmvclconnkind.get_name_leafdata());
    if (catmxvcloamloopbackfreq.is_set || is_set(catmxvcloamloopbackfreq.yfilter)) leaf_name_data.push_back(catmxvcloamloopbackfreq.get_name_leafdata());
    if (catmxvcloamretryfreq.is_set || is_set(catmxvcloamretryfreq.yfilter)) leaf_name_data.push_back(catmxvcloamretryfreq.get_name_leafdata());
    if (catmxvcloamupretrycount.is_set || is_set(catmxvcloamupretrycount.yfilter)) leaf_name_data.push_back(catmxvcloamupretrycount.get_name_leafdata());
    if (catmxvcloamdownretrycount.is_set || is_set(catmxvcloamdownretrycount.yfilter)) leaf_name_data.push_back(catmxvcloamdownretrycount.get_name_leafdata());
    if (catmxvcloamendccactcount.is_set || is_set(catmxvcloamendccactcount.yfilter)) leaf_name_data.push_back(catmxvcloamendccactcount.get_name_leafdata());
    if (catmxvcloamendccdeactcount.is_set || is_set(catmxvcloamendccdeactcount.yfilter)) leaf_name_data.push_back(catmxvcloamendccdeactcount.get_name_leafdata());
    if (catmxvcloamendccretryfreq.is_set || is_set(catmxvcloamendccretryfreq.yfilter)) leaf_name_data.push_back(catmxvcloamendccretryfreq.get_name_leafdata());
    if (catmxvcloamsegccactcount.is_set || is_set(catmxvcloamsegccactcount.yfilter)) leaf_name_data.push_back(catmxvcloamsegccactcount.get_name_leafdata());
    if (catmxvcloamsegccdeactcount.is_set || is_set(catmxvcloamsegccdeactcount.yfilter)) leaf_name_data.push_back(catmxvcloamsegccdeactcount.get_name_leafdata());
    if (catmxvcloamsegccretryfreq.is_set || is_set(catmxvcloamsegccretryfreq.yfilter)) leaf_name_data.push_back(catmxvcloamsegccretryfreq.get_name_leafdata());
    if (catmxvcloammanage.is_set || is_set(catmxvcloammanage.yfilter)) leaf_name_data.push_back(catmxvcloammanage.get_name_leafdata());
    if (catmxvcloamloopbkstatus.is_set || is_set(catmxvcloamloopbkstatus.yfilter)) leaf_name_data.push_back(catmxvcloamloopbkstatus.get_name_leafdata());
    if (catmxvcloamvcstate.is_set || is_set(catmxvcloamvcstate.yfilter)) leaf_name_data.push_back(catmxvcloamvcstate.get_name_leafdata());
    if (catmxvcloamendccstatus.is_set || is_set(catmxvcloamendccstatus.yfilter)) leaf_name_data.push_back(catmxvcloamendccstatus.get_name_leafdata());
    if (catmxvcloamsegccstatus.is_set || is_set(catmxvcloamsegccstatus.yfilter)) leaf_name_data.push_back(catmxvcloamsegccstatus.get_name_leafdata());
    if (catmxvcloamendccvcstate.is_set || is_set(catmxvcloamendccvcstate.yfilter)) leaf_name_data.push_back(catmxvcloamendccvcstate.get_name_leafdata());
    if (catmxvcloamsegccvcstate.is_set || is_set(catmxvcloamsegccvcstate.yfilter)) leaf_name_data.push_back(catmxvcloamsegccvcstate.get_name_leafdata());
    if (catmxvcloamcellsreceived.is_set || is_set(catmxvcloamcellsreceived.yfilter)) leaf_name_data.push_back(catmxvcloamcellsreceived.get_name_leafdata());
    if (catmxvcloamcellssent.is_set || is_set(catmxvcloamcellssent.yfilter)) leaf_name_data.push_back(catmxvcloamcellssent.get_name_leafdata());
    if (catmxvcloamcellsdropped.is_set || is_set(catmxvcloamcellsdropped.yfilter)) leaf_name_data.push_back(catmxvcloamcellsdropped.get_name_leafdata());
    if (catmxvcloaminf5ais.is_set || is_set(catmxvcloaminf5ais.yfilter)) leaf_name_data.push_back(catmxvcloaminf5ais.get_name_leafdata());
    if (catmxvcloamoutf5ais.is_set || is_set(catmxvcloamoutf5ais.yfilter)) leaf_name_data.push_back(catmxvcloamoutf5ais.get_name_leafdata());
    if (catmxvcloaminf5rdi.is_set || is_set(catmxvcloaminf5rdi.yfilter)) leaf_name_data.push_back(catmxvcloaminf5rdi.get_name_leafdata());
    if (catmxvcloamoutf5rdi.is_set || is_set(catmxvcloamoutf5rdi.yfilter)) leaf_name_data.push_back(catmxvcloamoutf5rdi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvcltable::Atmvclentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvcltable::Atmvclentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atmvcltable::Atmvclentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
        atmvclvci.value_namespace = name_space;
        atmvclvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclAdminStatus")
    {
        atmvcladminstatus = value;
        atmvcladminstatus.value_namespace = name_space;
        atmvcladminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclOperStatus")
    {
        atmvcloperstatus = value;
        atmvcloperstatus.value_namespace = name_space;
        atmvcloperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclLastChange")
    {
        atmvcllastchange = value;
        atmvcllastchange.value_namespace = name_space;
        atmvcllastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclReceiveTrafficDescrIndex")
    {
        atmvclreceivetrafficdescrindex = value;
        atmvclreceivetrafficdescrindex.value_namespace = name_space;
        atmvclreceivetrafficdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclTransmitTrafficDescrIndex")
    {
        atmvcltransmittrafficdescrindex = value;
        atmvcltransmittrafficdescrindex.value_namespace = name_space;
        atmvcltransmittrafficdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVccAalType")
    {
        atmvccaaltype = value;
        atmvccaaltype.value_namespace = name_space;
        atmvccaaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVccAal5CpcsTransmitSduSize")
    {
        atmvccaal5cpcstransmitsdusize = value;
        atmvccaal5cpcstransmitsdusize.value_namespace = name_space;
        atmvccaal5cpcstransmitsdusize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVccAal5CpcsReceiveSduSize")
    {
        atmvccaal5cpcsreceivesdusize = value;
        atmvccaal5cpcsreceivesdusize.value_namespace = name_space;
        atmvccaal5cpcsreceivesdusize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVccAal5EncapsType")
    {
        atmvccaal5encapstype = value;
        atmvccaal5encapstype.value_namespace = name_space;
        atmvccaal5encapstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclCrossConnectIdentifier")
    {
        atmvclcrossconnectidentifier = value;
        atmvclcrossconnectidentifier.value_namespace = name_space;
        atmvclcrossconnectidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclRowStatus")
    {
        atmvclrowstatus = value;
        atmvclrowstatus.value_namespace = name_space;
        atmvclrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclCastType")
    {
        atmvclcasttype = value;
        atmvclcasttype.value_namespace = name_space;
        atmvclcasttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclConnKind")
    {
        atmvclconnkind = value;
        atmvclconnkind.value_namespace = name_space;
        atmvclconnkind.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamLoopbackFreq")
    {
        catmxvcloamloopbackfreq = value;
        catmxvcloamloopbackfreq.value_namespace = name_space;
        catmxvcloamloopbackfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamRetryFreq")
    {
        catmxvcloamretryfreq = value;
        catmxvcloamretryfreq.value_namespace = name_space;
        catmxvcloamretryfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamUpRetryCount")
    {
        catmxvcloamupretrycount = value;
        catmxvcloamupretrycount.value_namespace = name_space;
        catmxvcloamupretrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamDownRetryCount")
    {
        catmxvcloamdownretrycount = value;
        catmxvcloamdownretrycount.value_namespace = name_space;
        catmxvcloamdownretrycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamEndCCActCount")
    {
        catmxvcloamendccactcount = value;
        catmxvcloamendccactcount.value_namespace = name_space;
        catmxvcloamendccactcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamEndCCDeActCount")
    {
        catmxvcloamendccdeactcount = value;
        catmxvcloamendccdeactcount.value_namespace = name_space;
        catmxvcloamendccdeactcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamEndCCRetryFreq")
    {
        catmxvcloamendccretryfreq = value;
        catmxvcloamendccretryfreq.value_namespace = name_space;
        catmxvcloamendccretryfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamSegCCActCount")
    {
        catmxvcloamsegccactcount = value;
        catmxvcloamsegccactcount.value_namespace = name_space;
        catmxvcloamsegccactcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamSegCCDeActCount")
    {
        catmxvcloamsegccdeactcount = value;
        catmxvcloamsegccdeactcount.value_namespace = name_space;
        catmxvcloamsegccdeactcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamSegCCRetryFreq")
    {
        catmxvcloamsegccretryfreq = value;
        catmxvcloamsegccretryfreq.value_namespace = name_space;
        catmxvcloamsegccretryfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamManage")
    {
        catmxvcloammanage = value;
        catmxvcloammanage.value_namespace = name_space;
        catmxvcloammanage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamLoopBkStatus")
    {
        catmxvcloamloopbkstatus = value;
        catmxvcloamloopbkstatus.value_namespace = name_space;
        catmxvcloamloopbkstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamVcState")
    {
        catmxvcloamvcstate = value;
        catmxvcloamvcstate.value_namespace = name_space;
        catmxvcloamvcstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamEndCCStatus")
    {
        catmxvcloamendccstatus = value;
        catmxvcloamendccstatus.value_namespace = name_space;
        catmxvcloamendccstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamSegCCStatus")
    {
        catmxvcloamsegccstatus = value;
        catmxvcloamsegccstatus.value_namespace = name_space;
        catmxvcloamsegccstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamEndCCVcState")
    {
        catmxvcloamendccvcstate = value;
        catmxvcloamendccvcstate.value_namespace = name_space;
        catmxvcloamendccvcstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamSegCCVcState")
    {
        catmxvcloamsegccvcstate = value;
        catmxvcloamsegccvcstate.value_namespace = name_space;
        catmxvcloamsegccvcstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamCellsReceived")
    {
        catmxvcloamcellsreceived = value;
        catmxvcloamcellsreceived.value_namespace = name_space;
        catmxvcloamcellsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamCellsSent")
    {
        catmxvcloamcellssent = value;
        catmxvcloamcellssent.value_namespace = name_space;
        catmxvcloamcellssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamCellsDropped")
    {
        catmxvcloamcellsdropped = value;
        catmxvcloamcellsdropped.value_namespace = name_space;
        catmxvcloamcellsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamInF5ais")
    {
        catmxvcloaminf5ais = value;
        catmxvcloaminf5ais.value_namespace = name_space;
        catmxvcloaminf5ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamOutF5ais")
    {
        catmxvcloamoutf5ais = value;
        catmxvcloamoutf5ais.value_namespace = name_space;
        catmxvcloamoutf5ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamInF5rdi")
    {
        catmxvcloaminf5rdi = value;
        catmxvcloaminf5rdi.value_namespace = name_space;
        catmxvcloaminf5rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmxVclOamOutF5rdi")
    {
        catmxvcloamoutf5rdi = value;
        catmxvcloamoutf5rdi.value_namespace = name_space;
        catmxvcloamoutf5rdi.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atmvcltable::Atmvclentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci.yfilter = yfilter;
    }
    if(value_path == "atmVclAdminStatus")
    {
        atmvcladminstatus.yfilter = yfilter;
    }
    if(value_path == "atmVclOperStatus")
    {
        atmvcloperstatus.yfilter = yfilter;
    }
    if(value_path == "atmVclLastChange")
    {
        atmvcllastchange.yfilter = yfilter;
    }
    if(value_path == "atmVclReceiveTrafficDescrIndex")
    {
        atmvclreceivetrafficdescrindex.yfilter = yfilter;
    }
    if(value_path == "atmVclTransmitTrafficDescrIndex")
    {
        atmvcltransmittrafficdescrindex.yfilter = yfilter;
    }
    if(value_path == "atmVccAalType")
    {
        atmvccaaltype.yfilter = yfilter;
    }
    if(value_path == "atmVccAal5CpcsTransmitSduSize")
    {
        atmvccaal5cpcstransmitsdusize.yfilter = yfilter;
    }
    if(value_path == "atmVccAal5CpcsReceiveSduSize")
    {
        atmvccaal5cpcsreceivesdusize.yfilter = yfilter;
    }
    if(value_path == "atmVccAal5EncapsType")
    {
        atmvccaal5encapstype.yfilter = yfilter;
    }
    if(value_path == "atmVclCrossConnectIdentifier")
    {
        atmvclcrossconnectidentifier.yfilter = yfilter;
    }
    if(value_path == "atmVclRowStatus")
    {
        atmvclrowstatus.yfilter = yfilter;
    }
    if(value_path == "atmVclCastType")
    {
        atmvclcasttype.yfilter = yfilter;
    }
    if(value_path == "atmVclConnKind")
    {
        atmvclconnkind.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamLoopbackFreq")
    {
        catmxvcloamloopbackfreq.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamRetryFreq")
    {
        catmxvcloamretryfreq.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamUpRetryCount")
    {
        catmxvcloamupretrycount.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamDownRetryCount")
    {
        catmxvcloamdownretrycount.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamEndCCActCount")
    {
        catmxvcloamendccactcount.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamEndCCDeActCount")
    {
        catmxvcloamendccdeactcount.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamEndCCRetryFreq")
    {
        catmxvcloamendccretryfreq.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamSegCCActCount")
    {
        catmxvcloamsegccactcount.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamSegCCDeActCount")
    {
        catmxvcloamsegccdeactcount.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamSegCCRetryFreq")
    {
        catmxvcloamsegccretryfreq.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamManage")
    {
        catmxvcloammanage.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamLoopBkStatus")
    {
        catmxvcloamloopbkstatus.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamVcState")
    {
        catmxvcloamvcstate.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamEndCCStatus")
    {
        catmxvcloamendccstatus.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamSegCCStatus")
    {
        catmxvcloamsegccstatus.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamEndCCVcState")
    {
        catmxvcloamendccvcstate.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamSegCCVcState")
    {
        catmxvcloamsegccvcstate.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamCellsReceived")
    {
        catmxvcloamcellsreceived.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamCellsSent")
    {
        catmxvcloamcellssent.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamCellsDropped")
    {
        catmxvcloamcellsdropped.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamInF5ais")
    {
        catmxvcloaminf5ais.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamOutF5ais")
    {
        catmxvcloamoutf5ais.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamInF5rdi")
    {
        catmxvcloaminf5rdi.yfilter = yfilter;
    }
    if(value_path == "catmxVclOamOutF5rdi")
    {
        catmxvcloamoutf5rdi.yfilter = yfilter;
    }
}

bool ATMMIB::Atmvcltable::Atmvclentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "atmVclAdminStatus" || name == "atmVclOperStatus" || name == "atmVclLastChange" || name == "atmVclReceiveTrafficDescrIndex" || name == "atmVclTransmitTrafficDescrIndex" || name == "atmVccAalType" || name == "atmVccAal5CpcsTransmitSduSize" || name == "atmVccAal5CpcsReceiveSduSize" || name == "atmVccAal5EncapsType" || name == "atmVclCrossConnectIdentifier" || name == "atmVclRowStatus" || name == "atmVclCastType" || name == "atmVclConnKind" || name == "catmxVclOamLoopbackFreq" || name == "catmxVclOamRetryFreq" || name == "catmxVclOamUpRetryCount" || name == "catmxVclOamDownRetryCount" || name == "catmxVclOamEndCCActCount" || name == "catmxVclOamEndCCDeActCount" || name == "catmxVclOamEndCCRetryFreq" || name == "catmxVclOamSegCCActCount" || name == "catmxVclOamSegCCDeActCount" || name == "catmxVclOamSegCCRetryFreq" || name == "catmxVclOamManage" || name == "catmxVclOamLoopBkStatus" || name == "catmxVclOamVcState" || name == "catmxVclOamEndCCStatus" || name == "catmxVclOamSegCCStatus" || name == "catmxVclOamEndCCVcState" || name == "catmxVclOamSegCCVcState" || name == "catmxVclOamCellsReceived" || name == "catmxVclOamCellsSent" || name == "catmxVclOamCellsDropped" || name == "catmxVclOamInF5ais" || name == "catmxVclOamOutF5ais" || name == "catmxVclOamInF5rdi" || name == "catmxVclOamOutF5rdi")
        return true;
    return false;
}

ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnecttable()
{

    yang_name = "atmVpCrossConnectTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvpcrossconnecttable::~Atmvpcrossconnecttable()
{
}

bool ATMMIB::Atmvpcrossconnecttable::has_data() const
{
    for (std::size_t index=0; index<atmvpcrossconnectentry.size(); index++)
    {
        if(atmvpcrossconnectentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atmvpcrossconnecttable::has_operation() const
{
    for (std::size_t index=0; index<atmvpcrossconnectentry.size(); index++)
    {
        if(atmvpcrossconnectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atmvpcrossconnecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvpcrossconnecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVpCrossConnectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvpcrossconnecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvpcrossconnecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVpCrossConnectEntry")
    {
        for(auto const & c : atmvpcrossconnectentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry>();
        c->parent = this;
        atmvpcrossconnectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvpcrossconnecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvpcrossconnectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atmvpcrossconnecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atmvpcrossconnecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atmvpcrossconnecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVpCrossConnectEntry")
        return true;
    return false;
}

ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::Atmvpcrossconnectentry()
    :
    atmvpcrossconnectindex{YType::int32, "atmVpCrossConnectIndex"},
    atmvpcrossconnectlowifindex{YType::int32, "atmVpCrossConnectLowIfIndex"},
    atmvpcrossconnectlowvpi{YType::int32, "atmVpCrossConnectLowVpi"},
    atmvpcrossconnecthighifindex{YType::int32, "atmVpCrossConnectHighIfIndex"},
    atmvpcrossconnecthighvpi{YType::int32, "atmVpCrossConnectHighVpi"},
    atmvpcrossconnectadminstatus{YType::enumeration, "atmVpCrossConnectAdminStatus"},
    atmvpcrossconnectl2hoperstatus{YType::enumeration, "atmVpCrossConnectL2HOperStatus"},
    atmvpcrossconnecth2loperstatus{YType::enumeration, "atmVpCrossConnectH2LOperStatus"},
    atmvpcrossconnectl2hlastchange{YType::uint32, "atmVpCrossConnectL2HLastChange"},
    atmvpcrossconnecth2llastchange{YType::uint32, "atmVpCrossConnectH2LLastChange"},
    atmvpcrossconnectrowstatus{YType::enumeration, "atmVpCrossConnectRowStatus"}
{

    yang_name = "atmVpCrossConnectEntry"; yang_parent_name = "atmVpCrossConnectTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::~Atmvpcrossconnectentry()
{
}

bool ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::has_data() const
{
    return atmvpcrossconnectindex.is_set
	|| atmvpcrossconnectlowifindex.is_set
	|| atmvpcrossconnectlowvpi.is_set
	|| atmvpcrossconnecthighifindex.is_set
	|| atmvpcrossconnecthighvpi.is_set
	|| atmvpcrossconnectadminstatus.is_set
	|| atmvpcrossconnectl2hoperstatus.is_set
	|| atmvpcrossconnecth2loperstatus.is_set
	|| atmvpcrossconnectl2hlastchange.is_set
	|| atmvpcrossconnecth2llastchange.is_set
	|| atmvpcrossconnectrowstatus.is_set;
}

bool ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atmvpcrossconnectindex.yfilter)
	|| ydk::is_set(atmvpcrossconnectlowifindex.yfilter)
	|| ydk::is_set(atmvpcrossconnectlowvpi.yfilter)
	|| ydk::is_set(atmvpcrossconnecthighifindex.yfilter)
	|| ydk::is_set(atmvpcrossconnecthighvpi.yfilter)
	|| ydk::is_set(atmvpcrossconnectadminstatus.yfilter)
	|| ydk::is_set(atmvpcrossconnectl2hoperstatus.yfilter)
	|| ydk::is_set(atmvpcrossconnecth2loperstatus.yfilter)
	|| ydk::is_set(atmvpcrossconnectl2hlastchange.yfilter)
	|| ydk::is_set(atmvpcrossconnecth2llastchange.yfilter)
	|| ydk::is_set(atmvpcrossconnectrowstatus.yfilter);
}

std::string ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmVpCrossConnectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVpCrossConnectEntry" <<"[atmVpCrossConnectIndex='" <<atmvpcrossconnectindex <<"']" <<"[atmVpCrossConnectLowIfIndex='" <<atmvpcrossconnectlowifindex <<"']" <<"[atmVpCrossConnectLowVpi='" <<atmvpcrossconnectlowvpi <<"']" <<"[atmVpCrossConnectHighIfIndex='" <<atmvpcrossconnecthighifindex <<"']" <<"[atmVpCrossConnectHighVpi='" <<atmvpcrossconnecthighvpi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmvpcrossconnectindex.is_set || is_set(atmvpcrossconnectindex.yfilter)) leaf_name_data.push_back(atmvpcrossconnectindex.get_name_leafdata());
    if (atmvpcrossconnectlowifindex.is_set || is_set(atmvpcrossconnectlowifindex.yfilter)) leaf_name_data.push_back(atmvpcrossconnectlowifindex.get_name_leafdata());
    if (atmvpcrossconnectlowvpi.is_set || is_set(atmvpcrossconnectlowvpi.yfilter)) leaf_name_data.push_back(atmvpcrossconnectlowvpi.get_name_leafdata());
    if (atmvpcrossconnecthighifindex.is_set || is_set(atmvpcrossconnecthighifindex.yfilter)) leaf_name_data.push_back(atmvpcrossconnecthighifindex.get_name_leafdata());
    if (atmvpcrossconnecthighvpi.is_set || is_set(atmvpcrossconnecthighvpi.yfilter)) leaf_name_data.push_back(atmvpcrossconnecthighvpi.get_name_leafdata());
    if (atmvpcrossconnectadminstatus.is_set || is_set(atmvpcrossconnectadminstatus.yfilter)) leaf_name_data.push_back(atmvpcrossconnectadminstatus.get_name_leafdata());
    if (atmvpcrossconnectl2hoperstatus.is_set || is_set(atmvpcrossconnectl2hoperstatus.yfilter)) leaf_name_data.push_back(atmvpcrossconnectl2hoperstatus.get_name_leafdata());
    if (atmvpcrossconnecth2loperstatus.is_set || is_set(atmvpcrossconnecth2loperstatus.yfilter)) leaf_name_data.push_back(atmvpcrossconnecth2loperstatus.get_name_leafdata());
    if (atmvpcrossconnectl2hlastchange.is_set || is_set(atmvpcrossconnectl2hlastchange.yfilter)) leaf_name_data.push_back(atmvpcrossconnectl2hlastchange.get_name_leafdata());
    if (atmvpcrossconnecth2llastchange.is_set || is_set(atmvpcrossconnecth2llastchange.yfilter)) leaf_name_data.push_back(atmvpcrossconnecth2llastchange.get_name_leafdata());
    if (atmvpcrossconnectrowstatus.is_set || is_set(atmvpcrossconnectrowstatus.yfilter)) leaf_name_data.push_back(atmvpcrossconnectrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atmVpCrossConnectIndex")
    {
        atmvpcrossconnectindex = value;
        atmvpcrossconnectindex.value_namespace = name_space;
        atmvpcrossconnectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectLowIfIndex")
    {
        atmvpcrossconnectlowifindex = value;
        atmvpcrossconnectlowifindex.value_namespace = name_space;
        atmvpcrossconnectlowifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectLowVpi")
    {
        atmvpcrossconnectlowvpi = value;
        atmvpcrossconnectlowvpi.value_namespace = name_space;
        atmvpcrossconnectlowvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectHighIfIndex")
    {
        atmvpcrossconnecthighifindex = value;
        atmvpcrossconnecthighifindex.value_namespace = name_space;
        atmvpcrossconnecthighifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectHighVpi")
    {
        atmvpcrossconnecthighvpi = value;
        atmvpcrossconnecthighvpi.value_namespace = name_space;
        atmvpcrossconnecthighvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectAdminStatus")
    {
        atmvpcrossconnectadminstatus = value;
        atmvpcrossconnectadminstatus.value_namespace = name_space;
        atmvpcrossconnectadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectL2HOperStatus")
    {
        atmvpcrossconnectl2hoperstatus = value;
        atmvpcrossconnectl2hoperstatus.value_namespace = name_space;
        atmvpcrossconnectl2hoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectH2LOperStatus")
    {
        atmvpcrossconnecth2loperstatus = value;
        atmvpcrossconnecth2loperstatus.value_namespace = name_space;
        atmvpcrossconnecth2loperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectL2HLastChange")
    {
        atmvpcrossconnectl2hlastchange = value;
        atmvpcrossconnectl2hlastchange.value_namespace = name_space;
        atmvpcrossconnectl2hlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectH2LLastChange")
    {
        atmvpcrossconnecth2llastchange = value;
        atmvpcrossconnecth2llastchange.value_namespace = name_space;
        atmvpcrossconnecth2llastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVpCrossConnectRowStatus")
    {
        atmvpcrossconnectrowstatus = value;
        atmvpcrossconnectrowstatus.value_namespace = name_space;
        atmvpcrossconnectrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atmVpCrossConnectIndex")
    {
        atmvpcrossconnectindex.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectLowIfIndex")
    {
        atmvpcrossconnectlowifindex.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectLowVpi")
    {
        atmvpcrossconnectlowvpi.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectHighIfIndex")
    {
        atmvpcrossconnecthighifindex.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectHighVpi")
    {
        atmvpcrossconnecthighvpi.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectAdminStatus")
    {
        atmvpcrossconnectadminstatus.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectL2HOperStatus")
    {
        atmvpcrossconnectl2hoperstatus.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectH2LOperStatus")
    {
        atmvpcrossconnecth2loperstatus.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectL2HLastChange")
    {
        atmvpcrossconnectl2hlastchange.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectH2LLastChange")
    {
        atmvpcrossconnecth2llastchange.yfilter = yfilter;
    }
    if(value_path == "atmVpCrossConnectRowStatus")
    {
        atmvpcrossconnectrowstatus.yfilter = yfilter;
    }
}

bool ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVpCrossConnectIndex" || name == "atmVpCrossConnectLowIfIndex" || name == "atmVpCrossConnectLowVpi" || name == "atmVpCrossConnectHighIfIndex" || name == "atmVpCrossConnectHighVpi" || name == "atmVpCrossConnectAdminStatus" || name == "atmVpCrossConnectL2HOperStatus" || name == "atmVpCrossConnectH2LOperStatus" || name == "atmVpCrossConnectL2HLastChange" || name == "atmVpCrossConnectH2LLastChange" || name == "atmVpCrossConnectRowStatus")
        return true;
    return false;
}

ATMMIB::Atmvccrossconnecttable::Atmvccrossconnecttable()
{

    yang_name = "atmVcCrossConnectTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvccrossconnecttable::~Atmvccrossconnecttable()
{
}

bool ATMMIB::Atmvccrossconnecttable::has_data() const
{
    for (std::size_t index=0; index<atmvccrossconnectentry.size(); index++)
    {
        if(atmvccrossconnectentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Atmvccrossconnecttable::has_operation() const
{
    for (std::size_t index=0; index<atmvccrossconnectentry.size(); index++)
    {
        if(atmvccrossconnectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Atmvccrossconnecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvccrossconnecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVcCrossConnectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvccrossconnecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvccrossconnecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVcCrossConnectEntry")
    {
        for(auto const & c : atmvccrossconnectentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry>();
        c->parent = this;
        atmvccrossconnectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvccrossconnecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvccrossconnectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Atmvccrossconnecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Atmvccrossconnecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Atmvccrossconnecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVcCrossConnectEntry")
        return true;
    return false;
}

ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::Atmvccrossconnectentry()
    :
    atmvccrossconnectindex{YType::int32, "atmVcCrossConnectIndex"},
    atmvccrossconnectlowifindex{YType::int32, "atmVcCrossConnectLowIfIndex"},
    atmvccrossconnectlowvpi{YType::int32, "atmVcCrossConnectLowVpi"},
    atmvccrossconnectlowvci{YType::int32, "atmVcCrossConnectLowVci"},
    atmvccrossconnecthighifindex{YType::int32, "atmVcCrossConnectHighIfIndex"},
    atmvccrossconnecthighvpi{YType::int32, "atmVcCrossConnectHighVpi"},
    atmvccrossconnecthighvci{YType::int32, "atmVcCrossConnectHighVci"},
    atmvccrossconnectadminstatus{YType::enumeration, "atmVcCrossConnectAdminStatus"},
    atmvccrossconnectl2hoperstatus{YType::enumeration, "atmVcCrossConnectL2HOperStatus"},
    atmvccrossconnecth2loperstatus{YType::enumeration, "atmVcCrossConnectH2LOperStatus"},
    atmvccrossconnectl2hlastchange{YType::uint32, "atmVcCrossConnectL2HLastChange"},
    atmvccrossconnecth2llastchange{YType::uint32, "atmVcCrossConnectH2LLastChange"},
    atmvccrossconnectrowstatus{YType::enumeration, "atmVcCrossConnectRowStatus"}
{

    yang_name = "atmVcCrossConnectEntry"; yang_parent_name = "atmVcCrossConnectTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::~Atmvccrossconnectentry()
{
}

bool ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::has_data() const
{
    return atmvccrossconnectindex.is_set
	|| atmvccrossconnectlowifindex.is_set
	|| atmvccrossconnectlowvpi.is_set
	|| atmvccrossconnectlowvci.is_set
	|| atmvccrossconnecthighifindex.is_set
	|| atmvccrossconnecthighvpi.is_set
	|| atmvccrossconnecthighvci.is_set
	|| atmvccrossconnectadminstatus.is_set
	|| atmvccrossconnectl2hoperstatus.is_set
	|| atmvccrossconnecth2loperstatus.is_set
	|| atmvccrossconnectl2hlastchange.is_set
	|| atmvccrossconnecth2llastchange.is_set
	|| atmvccrossconnectrowstatus.is_set;
}

bool ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atmvccrossconnectindex.yfilter)
	|| ydk::is_set(atmvccrossconnectlowifindex.yfilter)
	|| ydk::is_set(atmvccrossconnectlowvpi.yfilter)
	|| ydk::is_set(atmvccrossconnectlowvci.yfilter)
	|| ydk::is_set(atmvccrossconnecthighifindex.yfilter)
	|| ydk::is_set(atmvccrossconnecthighvpi.yfilter)
	|| ydk::is_set(atmvccrossconnecthighvci.yfilter)
	|| ydk::is_set(atmvccrossconnectadminstatus.yfilter)
	|| ydk::is_set(atmvccrossconnectl2hoperstatus.yfilter)
	|| ydk::is_set(atmvccrossconnecth2loperstatus.yfilter)
	|| ydk::is_set(atmvccrossconnectl2hlastchange.yfilter)
	|| ydk::is_set(atmvccrossconnecth2llastchange.yfilter)
	|| ydk::is_set(atmvccrossconnectrowstatus.yfilter);
}

std::string ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/atmVcCrossConnectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVcCrossConnectEntry" <<"[atmVcCrossConnectIndex='" <<atmvccrossconnectindex <<"']" <<"[atmVcCrossConnectLowIfIndex='" <<atmvccrossconnectlowifindex <<"']" <<"[atmVcCrossConnectLowVpi='" <<atmvccrossconnectlowvpi <<"']" <<"[atmVcCrossConnectLowVci='" <<atmvccrossconnectlowvci <<"']" <<"[atmVcCrossConnectHighIfIndex='" <<atmvccrossconnecthighifindex <<"']" <<"[atmVcCrossConnectHighVpi='" <<atmvccrossconnecthighvpi <<"']" <<"[atmVcCrossConnectHighVci='" <<atmvccrossconnecthighvci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmvccrossconnectindex.is_set || is_set(atmvccrossconnectindex.yfilter)) leaf_name_data.push_back(atmvccrossconnectindex.get_name_leafdata());
    if (atmvccrossconnectlowifindex.is_set || is_set(atmvccrossconnectlowifindex.yfilter)) leaf_name_data.push_back(atmvccrossconnectlowifindex.get_name_leafdata());
    if (atmvccrossconnectlowvpi.is_set || is_set(atmvccrossconnectlowvpi.yfilter)) leaf_name_data.push_back(atmvccrossconnectlowvpi.get_name_leafdata());
    if (atmvccrossconnectlowvci.is_set || is_set(atmvccrossconnectlowvci.yfilter)) leaf_name_data.push_back(atmvccrossconnectlowvci.get_name_leafdata());
    if (atmvccrossconnecthighifindex.is_set || is_set(atmvccrossconnecthighifindex.yfilter)) leaf_name_data.push_back(atmvccrossconnecthighifindex.get_name_leafdata());
    if (atmvccrossconnecthighvpi.is_set || is_set(atmvccrossconnecthighvpi.yfilter)) leaf_name_data.push_back(atmvccrossconnecthighvpi.get_name_leafdata());
    if (atmvccrossconnecthighvci.is_set || is_set(atmvccrossconnecthighvci.yfilter)) leaf_name_data.push_back(atmvccrossconnecthighvci.get_name_leafdata());
    if (atmvccrossconnectadminstatus.is_set || is_set(atmvccrossconnectadminstatus.yfilter)) leaf_name_data.push_back(atmvccrossconnectadminstatus.get_name_leafdata());
    if (atmvccrossconnectl2hoperstatus.is_set || is_set(atmvccrossconnectl2hoperstatus.yfilter)) leaf_name_data.push_back(atmvccrossconnectl2hoperstatus.get_name_leafdata());
    if (atmvccrossconnecth2loperstatus.is_set || is_set(atmvccrossconnecth2loperstatus.yfilter)) leaf_name_data.push_back(atmvccrossconnecth2loperstatus.get_name_leafdata());
    if (atmvccrossconnectl2hlastchange.is_set || is_set(atmvccrossconnectl2hlastchange.yfilter)) leaf_name_data.push_back(atmvccrossconnectl2hlastchange.get_name_leafdata());
    if (atmvccrossconnecth2llastchange.is_set || is_set(atmvccrossconnecth2llastchange.yfilter)) leaf_name_data.push_back(atmvccrossconnecth2llastchange.get_name_leafdata());
    if (atmvccrossconnectrowstatus.is_set || is_set(atmvccrossconnectrowstatus.yfilter)) leaf_name_data.push_back(atmvccrossconnectrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atmVcCrossConnectIndex")
    {
        atmvccrossconnectindex = value;
        atmvccrossconnectindex.value_namespace = name_space;
        atmvccrossconnectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectLowIfIndex")
    {
        atmvccrossconnectlowifindex = value;
        atmvccrossconnectlowifindex.value_namespace = name_space;
        atmvccrossconnectlowifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectLowVpi")
    {
        atmvccrossconnectlowvpi = value;
        atmvccrossconnectlowvpi.value_namespace = name_space;
        atmvccrossconnectlowvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectLowVci")
    {
        atmvccrossconnectlowvci = value;
        atmvccrossconnectlowvci.value_namespace = name_space;
        atmvccrossconnectlowvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectHighIfIndex")
    {
        atmvccrossconnecthighifindex = value;
        atmvccrossconnecthighifindex.value_namespace = name_space;
        atmvccrossconnecthighifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectHighVpi")
    {
        atmvccrossconnecthighvpi = value;
        atmvccrossconnecthighvpi.value_namespace = name_space;
        atmvccrossconnecthighvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectHighVci")
    {
        atmvccrossconnecthighvci = value;
        atmvccrossconnecthighvci.value_namespace = name_space;
        atmvccrossconnecthighvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectAdminStatus")
    {
        atmvccrossconnectadminstatus = value;
        atmvccrossconnectadminstatus.value_namespace = name_space;
        atmvccrossconnectadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectL2HOperStatus")
    {
        atmvccrossconnectl2hoperstatus = value;
        atmvccrossconnectl2hoperstatus.value_namespace = name_space;
        atmvccrossconnectl2hoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectH2LOperStatus")
    {
        atmvccrossconnecth2loperstatus = value;
        atmvccrossconnecth2loperstatus.value_namespace = name_space;
        atmvccrossconnecth2loperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectL2HLastChange")
    {
        atmvccrossconnectl2hlastchange = value;
        atmvccrossconnectl2hlastchange.value_namespace = name_space;
        atmvccrossconnectl2hlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectH2LLastChange")
    {
        atmvccrossconnecth2llastchange = value;
        atmvccrossconnecth2llastchange.value_namespace = name_space;
        atmvccrossconnecth2llastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVcCrossConnectRowStatus")
    {
        atmvccrossconnectrowstatus = value;
        atmvccrossconnectrowstatus.value_namespace = name_space;
        atmvccrossconnectrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atmVcCrossConnectIndex")
    {
        atmvccrossconnectindex.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectLowIfIndex")
    {
        atmvccrossconnectlowifindex.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectLowVpi")
    {
        atmvccrossconnectlowvpi.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectLowVci")
    {
        atmvccrossconnectlowvci.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectHighIfIndex")
    {
        atmvccrossconnecthighifindex.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectHighVpi")
    {
        atmvccrossconnecthighvpi.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectHighVci")
    {
        atmvccrossconnecthighvci.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectAdminStatus")
    {
        atmvccrossconnectadminstatus.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectL2HOperStatus")
    {
        atmvccrossconnectl2hoperstatus.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectH2LOperStatus")
    {
        atmvccrossconnecth2loperstatus.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectL2HLastChange")
    {
        atmvccrossconnectl2hlastchange.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectH2LLastChange")
    {
        atmvccrossconnecth2llastchange.yfilter = yfilter;
    }
    if(value_path == "atmVcCrossConnectRowStatus")
    {
        atmvccrossconnectrowstatus.yfilter = yfilter;
    }
}

bool ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmVcCrossConnectIndex" || name == "atmVcCrossConnectLowIfIndex" || name == "atmVcCrossConnectLowVpi" || name == "atmVcCrossConnectLowVci" || name == "atmVcCrossConnectHighIfIndex" || name == "atmVcCrossConnectHighVpi" || name == "atmVcCrossConnectHighVci" || name == "atmVcCrossConnectAdminStatus" || name == "atmVcCrossConnectL2HOperStatus" || name == "atmVcCrossConnectH2LOperStatus" || name == "atmVcCrossConnectL2HLastChange" || name == "atmVcCrossConnectH2LLastChange" || name == "atmVcCrossConnectRowStatus")
        return true;
    return false;
}

ATMMIB::Aal5Vcctable::Aal5Vcctable()
{

    yang_name = "aal5VccTable"; yang_parent_name = "ATM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Aal5Vcctable::~Aal5Vcctable()
{
}

bool ATMMIB::Aal5Vcctable::has_data() const
{
    for (std::size_t index=0; index<aal5vccentry.size(); index++)
    {
        if(aal5vccentry[index]->has_data())
            return true;
    }
    return false;
}

bool ATMMIB::Aal5Vcctable::has_operation() const
{
    for (std::size_t index=0; index<aal5vccentry.size(); index++)
    {
        if(aal5vccentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ATMMIB::Aal5Vcctable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Aal5Vcctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5VccTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Aal5Vcctable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Aal5Vcctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aal5VccEntry")
    {
        for(auto const & c : aal5vccentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ATMMIB::Aal5Vcctable::Aal5Vccentry>();
        c->parent = this;
        aal5vccentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Aal5Vcctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aal5vccentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ATMMIB::Aal5Vcctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ATMMIB::Aal5Vcctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ATMMIB::Aal5Vcctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aal5VccEntry")
        return true;
    return false;
}

ATMMIB::Aal5Vcctable::Aal5Vccentry::Aal5Vccentry()
    :
    ifindex{YType::str, "ifIndex"},
    aal5vccvpi{YType::int32, "aal5VccVpi"},
    aal5vccvci{YType::int32, "aal5VccVci"},
    aal5vcccrcerrors{YType::uint32, "aal5VccCrcErrors"},
    aal5vccsartimeouts{YType::uint32, "aal5VccSarTimeOuts"},
    aal5vccoversizedsdus{YType::uint32, "aal5VccOverSizedSDUs"},
    caal5vccinpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInPkts"},
    caal5vccoutpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutPkts"},
    caal5vccinoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInOctets"},
    caal5vccoutoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutOctets"},
    caal5vccindroppedpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInDroppedPkts"},
    caal5vccoutdroppedpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutDroppedPkts"},
    caal5vccindroppedoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInDroppedOctets"},
    caal5vccoutdroppedoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutDroppedOctets"},
    caal5vcchcinpkts{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCInPkts"},
    caal5vcchcoutpkts{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCOutPkts"},
    caal5vcchcinoctets{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCInOctets"},
    caal5vcchcoutoctets{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCOutOctets"},
    caal5vccextcompenabled{YType::boolean, "CISCO-ATM-EXT-MIB:cAal5VccExtCompEnabled"},
    caal5vccextvoice{YType::boolean, "CISCO-ATM-EXT-MIB:cAal5VccExtVoice"},
    caal5vccextinf5oamcells{YType::uint32, "CISCO-ATM-EXT-MIB:cAal5VccExtInF5OamCells"},
    caal5vccextoutf5oamcells{YType::uint32, "CISCO-ATM-EXT-MIB:cAal5VccExtOutF5OamCells"}
{

    yang_name = "aal5VccEntry"; yang_parent_name = "aal5VccTable"; is_top_level_class = false; has_list_ancestor = false;
}

ATMMIB::Aal5Vcctable::Aal5Vccentry::~Aal5Vccentry()
{
}

bool ATMMIB::Aal5Vcctable::Aal5Vccentry::has_data() const
{
    return ifindex.is_set
	|| aal5vccvpi.is_set
	|| aal5vccvci.is_set
	|| aal5vcccrcerrors.is_set
	|| aal5vccsartimeouts.is_set
	|| aal5vccoversizedsdus.is_set
	|| caal5vccinpkts.is_set
	|| caal5vccoutpkts.is_set
	|| caal5vccinoctets.is_set
	|| caal5vccoutoctets.is_set
	|| caal5vccindroppedpkts.is_set
	|| caal5vccoutdroppedpkts.is_set
	|| caal5vccindroppedoctets.is_set
	|| caal5vccoutdroppedoctets.is_set
	|| caal5vcchcinpkts.is_set
	|| caal5vcchcoutpkts.is_set
	|| caal5vcchcinoctets.is_set
	|| caal5vcchcoutoctets.is_set
	|| caal5vccextcompenabled.is_set
	|| caal5vccextvoice.is_set
	|| caal5vccextinf5oamcells.is_set
	|| caal5vccextoutf5oamcells.is_set;
}

bool ATMMIB::Aal5Vcctable::Aal5Vccentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(aal5vccvpi.yfilter)
	|| ydk::is_set(aal5vccvci.yfilter)
	|| ydk::is_set(aal5vcccrcerrors.yfilter)
	|| ydk::is_set(aal5vccsartimeouts.yfilter)
	|| ydk::is_set(aal5vccoversizedsdus.yfilter)
	|| ydk::is_set(caal5vccinpkts.yfilter)
	|| ydk::is_set(caal5vccoutpkts.yfilter)
	|| ydk::is_set(caal5vccinoctets.yfilter)
	|| ydk::is_set(caal5vccoutoctets.yfilter)
	|| ydk::is_set(caal5vccindroppedpkts.yfilter)
	|| ydk::is_set(caal5vccoutdroppedpkts.yfilter)
	|| ydk::is_set(caal5vccindroppedoctets.yfilter)
	|| ydk::is_set(caal5vccoutdroppedoctets.yfilter)
	|| ydk::is_set(caal5vcchcinpkts.yfilter)
	|| ydk::is_set(caal5vcchcoutpkts.yfilter)
	|| ydk::is_set(caal5vcchcinoctets.yfilter)
	|| ydk::is_set(caal5vcchcoutoctets.yfilter)
	|| ydk::is_set(caal5vccextcompenabled.yfilter)
	|| ydk::is_set(caal5vccextvoice.yfilter)
	|| ydk::is_set(caal5vccextinf5oamcells.yfilter)
	|| ydk::is_set(caal5vccextoutf5oamcells.yfilter);
}

std::string ATMMIB::Aal5Vcctable::Aal5Vccentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB/aal5VccTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ATMMIB::Aal5Vcctable::Aal5Vccentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5VccEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[aal5VccVpi='" <<aal5vccvpi <<"']" <<"[aal5VccVci='" <<aal5vccvci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ATMMIB::Aal5Vcctable::Aal5Vccentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (aal5vccvpi.is_set || is_set(aal5vccvpi.yfilter)) leaf_name_data.push_back(aal5vccvpi.get_name_leafdata());
    if (aal5vccvci.is_set || is_set(aal5vccvci.yfilter)) leaf_name_data.push_back(aal5vccvci.get_name_leafdata());
    if (aal5vcccrcerrors.is_set || is_set(aal5vcccrcerrors.yfilter)) leaf_name_data.push_back(aal5vcccrcerrors.get_name_leafdata());
    if (aal5vccsartimeouts.is_set || is_set(aal5vccsartimeouts.yfilter)) leaf_name_data.push_back(aal5vccsartimeouts.get_name_leafdata());
    if (aal5vccoversizedsdus.is_set || is_set(aal5vccoversizedsdus.yfilter)) leaf_name_data.push_back(aal5vccoversizedsdus.get_name_leafdata());
    if (caal5vccinpkts.is_set || is_set(caal5vccinpkts.yfilter)) leaf_name_data.push_back(caal5vccinpkts.get_name_leafdata());
    if (caal5vccoutpkts.is_set || is_set(caal5vccoutpkts.yfilter)) leaf_name_data.push_back(caal5vccoutpkts.get_name_leafdata());
    if (caal5vccinoctets.is_set || is_set(caal5vccinoctets.yfilter)) leaf_name_data.push_back(caal5vccinoctets.get_name_leafdata());
    if (caal5vccoutoctets.is_set || is_set(caal5vccoutoctets.yfilter)) leaf_name_data.push_back(caal5vccoutoctets.get_name_leafdata());
    if (caal5vccindroppedpkts.is_set || is_set(caal5vccindroppedpkts.yfilter)) leaf_name_data.push_back(caal5vccindroppedpkts.get_name_leafdata());
    if (caal5vccoutdroppedpkts.is_set || is_set(caal5vccoutdroppedpkts.yfilter)) leaf_name_data.push_back(caal5vccoutdroppedpkts.get_name_leafdata());
    if (caal5vccindroppedoctets.is_set || is_set(caal5vccindroppedoctets.yfilter)) leaf_name_data.push_back(caal5vccindroppedoctets.get_name_leafdata());
    if (caal5vccoutdroppedoctets.is_set || is_set(caal5vccoutdroppedoctets.yfilter)) leaf_name_data.push_back(caal5vccoutdroppedoctets.get_name_leafdata());
    if (caal5vcchcinpkts.is_set || is_set(caal5vcchcinpkts.yfilter)) leaf_name_data.push_back(caal5vcchcinpkts.get_name_leafdata());
    if (caal5vcchcoutpkts.is_set || is_set(caal5vcchcoutpkts.yfilter)) leaf_name_data.push_back(caal5vcchcoutpkts.get_name_leafdata());
    if (caal5vcchcinoctets.is_set || is_set(caal5vcchcinoctets.yfilter)) leaf_name_data.push_back(caal5vcchcinoctets.get_name_leafdata());
    if (caal5vcchcoutoctets.is_set || is_set(caal5vcchcoutoctets.yfilter)) leaf_name_data.push_back(caal5vcchcoutoctets.get_name_leafdata());
    if (caal5vccextcompenabled.is_set || is_set(caal5vccextcompenabled.yfilter)) leaf_name_data.push_back(caal5vccextcompenabled.get_name_leafdata());
    if (caal5vccextvoice.is_set || is_set(caal5vccextvoice.yfilter)) leaf_name_data.push_back(caal5vccextvoice.get_name_leafdata());
    if (caal5vccextinf5oamcells.is_set || is_set(caal5vccextinf5oamcells.yfilter)) leaf_name_data.push_back(caal5vccextinf5oamcells.get_name_leafdata());
    if (caal5vccextoutf5oamcells.is_set || is_set(caal5vccextoutf5oamcells.yfilter)) leaf_name_data.push_back(caal5vccextoutf5oamcells.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ATMMIB::Aal5Vcctable::Aal5Vccentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ATMMIB::Aal5Vcctable::Aal5Vccentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ATMMIB::Aal5Vcctable::Aal5Vccentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5VccVpi")
    {
        aal5vccvpi = value;
        aal5vccvpi.value_namespace = name_space;
        aal5vccvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5VccVci")
    {
        aal5vccvci = value;
        aal5vccvci.value_namespace = name_space;
        aal5vccvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5VccCrcErrors")
    {
        aal5vcccrcerrors = value;
        aal5vcccrcerrors.value_namespace = name_space;
        aal5vcccrcerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5VccSarTimeOuts")
    {
        aal5vccsartimeouts = value;
        aal5vccsartimeouts.value_namespace = name_space;
        aal5vccsartimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5VccOverSizedSDUs")
    {
        aal5vccoversizedsdus = value;
        aal5vccoversizedsdus.value_namespace = name_space;
        aal5vccoversizedsdus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccInPkts")
    {
        caal5vccinpkts = value;
        caal5vccinpkts.value_namespace = name_space;
        caal5vccinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccOutPkts")
    {
        caal5vccoutpkts = value;
        caal5vccoutpkts.value_namespace = name_space;
        caal5vccoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccInOctets")
    {
        caal5vccinoctets = value;
        caal5vccinoctets.value_namespace = name_space;
        caal5vccinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccOutOctets")
    {
        caal5vccoutoctets = value;
        caal5vccoutoctets.value_namespace = name_space;
        caal5vccoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccInDroppedPkts")
    {
        caal5vccindroppedpkts = value;
        caal5vccindroppedpkts.value_namespace = name_space;
        caal5vccindroppedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccOutDroppedPkts")
    {
        caal5vccoutdroppedpkts = value;
        caal5vccoutdroppedpkts.value_namespace = name_space;
        caal5vccoutdroppedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccInDroppedOctets")
    {
        caal5vccindroppedoctets = value;
        caal5vccindroppedoctets.value_namespace = name_space;
        caal5vccindroppedoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccOutDroppedOctets")
    {
        caal5vccoutdroppedoctets = value;
        caal5vccoutdroppedoctets.value_namespace = name_space;
        caal5vccoutdroppedoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccHCInPkts")
    {
        caal5vcchcinpkts = value;
        caal5vcchcinpkts.value_namespace = name_space;
        caal5vcchcinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccHCOutPkts")
    {
        caal5vcchcoutpkts = value;
        caal5vcchcoutpkts.value_namespace = name_space;
        caal5vcchcoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccHCInOctets")
    {
        caal5vcchcinoctets = value;
        caal5vcchcinoctets.value_namespace = name_space;
        caal5vcchcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccHCOutOctets")
    {
        caal5vcchcoutoctets = value;
        caal5vcchcoutoctets.value_namespace = name_space;
        caal5vcchcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccExtCompEnabled")
    {
        caal5vccextcompenabled = value;
        caal5vccextcompenabled.value_namespace = name_space;
        caal5vccextcompenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccExtVoice")
    {
        caal5vccextvoice = value;
        caal5vccextvoice.value_namespace = name_space;
        caal5vccextvoice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccExtInF5OamCells")
    {
        caal5vccextinf5oamcells = value;
        caal5vccextinf5oamcells.value_namespace = name_space;
        caal5vccextinf5oamcells.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cAal5VccExtOutF5OamCells")
    {
        caal5vccextoutf5oamcells = value;
        caal5vccextoutf5oamcells.value_namespace = name_space;
        caal5vccextoutf5oamcells.value_namespace_prefix = name_space_prefix;
    }
}

void ATMMIB::Aal5Vcctable::Aal5Vccentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "aal5VccVpi")
    {
        aal5vccvpi.yfilter = yfilter;
    }
    if(value_path == "aal5VccVci")
    {
        aal5vccvci.yfilter = yfilter;
    }
    if(value_path == "aal5VccCrcErrors")
    {
        aal5vcccrcerrors.yfilter = yfilter;
    }
    if(value_path == "aal5VccSarTimeOuts")
    {
        aal5vccsartimeouts.yfilter = yfilter;
    }
    if(value_path == "aal5VccOverSizedSDUs")
    {
        aal5vccoversizedsdus.yfilter = yfilter;
    }
    if(value_path == "cAal5VccInPkts")
    {
        caal5vccinpkts.yfilter = yfilter;
    }
    if(value_path == "cAal5VccOutPkts")
    {
        caal5vccoutpkts.yfilter = yfilter;
    }
    if(value_path == "cAal5VccInOctets")
    {
        caal5vccinoctets.yfilter = yfilter;
    }
    if(value_path == "cAal5VccOutOctets")
    {
        caal5vccoutoctets.yfilter = yfilter;
    }
    if(value_path == "cAal5VccInDroppedPkts")
    {
        caal5vccindroppedpkts.yfilter = yfilter;
    }
    if(value_path == "cAal5VccOutDroppedPkts")
    {
        caal5vccoutdroppedpkts.yfilter = yfilter;
    }
    if(value_path == "cAal5VccInDroppedOctets")
    {
        caal5vccindroppedoctets.yfilter = yfilter;
    }
    if(value_path == "cAal5VccOutDroppedOctets")
    {
        caal5vccoutdroppedoctets.yfilter = yfilter;
    }
    if(value_path == "cAal5VccHCInPkts")
    {
        caal5vcchcinpkts.yfilter = yfilter;
    }
    if(value_path == "cAal5VccHCOutPkts")
    {
        caal5vcchcoutpkts.yfilter = yfilter;
    }
    if(value_path == "cAal5VccHCInOctets")
    {
        caal5vcchcinoctets.yfilter = yfilter;
    }
    if(value_path == "cAal5VccHCOutOctets")
    {
        caal5vcchcoutoctets.yfilter = yfilter;
    }
    if(value_path == "cAal5VccExtCompEnabled")
    {
        caal5vccextcompenabled.yfilter = yfilter;
    }
    if(value_path == "cAal5VccExtVoice")
    {
        caal5vccextvoice.yfilter = yfilter;
    }
    if(value_path == "cAal5VccExtInF5OamCells")
    {
        caal5vccextinf5oamcells.yfilter = yfilter;
    }
    if(value_path == "cAal5VccExtOutF5OamCells")
    {
        caal5vccextoutf5oamcells.yfilter = yfilter;
    }
}

bool ATMMIB::Aal5Vcctable::Aal5Vccentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "aal5VccVpi" || name == "aal5VccVci" || name == "aal5VccCrcErrors" || name == "aal5VccSarTimeOuts" || name == "aal5VccOverSizedSDUs" || name == "cAal5VccInPkts" || name == "cAal5VccOutPkts" || name == "cAal5VccInOctets" || name == "cAal5VccOutOctets" || name == "cAal5VccInDroppedPkts" || name == "cAal5VccOutDroppedPkts" || name == "cAal5VccInDroppedOctets" || name == "cAal5VccOutDroppedOctets" || name == "cAal5VccHCInPkts" || name == "cAal5VccHCOutPkts" || name == "cAal5VccHCInOctets" || name == "cAal5VccHCOutOctets" || name == "cAal5VccExtCompEnabled" || name == "cAal5VccExtVoice" || name == "cAal5VccExtInF5OamCells" || name == "cAal5VccExtOutF5OamCells")
        return true;
    return false;
}

const Enum::YLeaf ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceaddresstype::private_ {1, "private"};
const Enum::YLeaf ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceaddresstype::nsapE164 {2, "nsapE164"};
const Enum::YLeaf ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceaddresstype::nativeE164 {3, "nativeE164"};
const Enum::YLeaf ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceaddresstype::other {4, "other"};

const Enum::YLeaf ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpalarmstate::noAlarm {1, "noAlarm"};
const Enum::YLeaf ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpalarmstate::receivedFarEndAlarm {2, "receivedFarEndAlarm"};
const Enum::YLeaf ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpalarmstate::incomingLOF {3, "incomingLOF"};

const Enum::YLeaf ATMMIB::Atminterfacetctable::Atminterfacetcentry::Atminterfacetcalarmstate::noAlarm {1, "noAlarm"};
const Enum::YLeaf ATMMIB::Atminterfacetctable::Atminterfacetcentry::Atminterfacetcalarmstate::lcdFailure {2, "lcdFailure"};

const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype::aal1 {1, "aal1"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype::aal34 {2, "aal34"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype::aal5 {3, "aal5"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype::other {4, "other"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype::unknown {5, "unknown"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype::aal2 {6, "aal2"};

const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::vcMultiplexRoutedProtocol {1, "vcMultiplexRoutedProtocol"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::vcMultiplexBridgedProtocol8023 {2, "vcMultiplexBridgedProtocol8023"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::vcMultiplexBridgedProtocol8025 {3, "vcMultiplexBridgedProtocol8025"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::vcMultiplexBridgedProtocol8026 {4, "vcMultiplexBridgedProtocol8026"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::vcMultiplexLANemulation8023 {5, "vcMultiplexLANemulation8023"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::vcMultiplexLANemulation8025 {6, "vcMultiplexLANemulation8025"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::llcEncapsulation {7, "llcEncapsulation"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::multiprotocolFrameRelaySscs {8, "multiprotocolFrameRelaySscs"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::other {9, "other"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype::unknown {10, "unknown"};

const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamloopbkstatus::disabled {1, "disabled"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamloopbkstatus::sent {2, "sent"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamloopbkstatus::received {3, "received"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamloopbkstatus::failed {4, "failed"};

const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::downRetry {1, "downRetry"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::verified {2, "verified"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::notVerified {3, "notVerified"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::upRetry {4, "upRetry"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::aisRDI {5, "aisRDI"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::aisOut {6, "aisOut"};
const Enum::YLeaf ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate::notManaged {7, "notManaged"};


}
}

