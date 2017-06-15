
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ATM_MIB.hpp"

namespace ydk {
namespace ATM_MIB {

AtmMib::AtmMib()
    :
    aal5vcctable_(std::make_shared<AtmMib::Aal5Vcctable>())
	,atminterfaceconftable_(std::make_shared<AtmMib::Atminterfaceconftable>())
	,atminterfaceds3plcptable_(std::make_shared<AtmMib::Atminterfaceds3Plcptable>())
	,atminterfacetctable_(std::make_shared<AtmMib::Atminterfacetctable>())
	,atmmibobjects_(std::make_shared<AtmMib::Atmmibobjects>())
	,atmtrafficdescrparamtable_(std::make_shared<AtmMib::Atmtrafficdescrparamtable>())
	,atmvccrossconnecttable_(std::make_shared<AtmMib::Atmvccrossconnecttable>())
	,atmvcltable_(std::make_shared<AtmMib::Atmvcltable>())
	,atmvpcrossconnecttable_(std::make_shared<AtmMib::Atmvpcrossconnecttable>())
	,atmvpltable_(std::make_shared<AtmMib::Atmvpltable>())
{
    aal5vcctable_->parent = this;

    atminterfaceconftable_->parent = this;

    atminterfaceds3plcptable_->parent = this;

    atminterfacetctable_->parent = this;

    atmmibobjects_->parent = this;

    atmtrafficdescrparamtable_->parent = this;

    atmvccrossconnecttable_->parent = this;

    atmvcltable_->parent = this;

    atmvpcrossconnecttable_->parent = this;

    atmvpltable_->parent = this;

    yang_name = "ATM-MIB"; yang_parent_name = "ATM-MIB";
}

AtmMib::~AtmMib()
{
}

bool AtmMib::has_data() const
{
    return (aal5vcctable_ !=  nullptr && aal5vcctable_->has_data())
	|| (atminterfaceconftable_ !=  nullptr && atminterfaceconftable_->has_data())
	|| (atminterfaceds3plcptable_ !=  nullptr && atminterfaceds3plcptable_->has_data())
	|| (atminterfacetctable_ !=  nullptr && atminterfacetctable_->has_data())
	|| (atmmibobjects_ !=  nullptr && atmmibobjects_->has_data())
	|| (atmtrafficdescrparamtable_ !=  nullptr && atmtrafficdescrparamtable_->has_data())
	|| (atmvccrossconnecttable_ !=  nullptr && atmvccrossconnecttable_->has_data())
	|| (atmvcltable_ !=  nullptr && atmvcltable_->has_data())
	|| (atmvpcrossconnecttable_ !=  nullptr && atmvpcrossconnecttable_->has_data())
	|| (atmvpltable_ !=  nullptr && atmvpltable_->has_data());
}

bool AtmMib::has_operation() const
{
    return is_set(operation)
	|| (aal5vcctable_ !=  nullptr && aal5vcctable_->has_operation())
	|| (atminterfaceconftable_ !=  nullptr && atminterfaceconftable_->has_operation())
	|| (atminterfaceds3plcptable_ !=  nullptr && atminterfaceds3plcptable_->has_operation())
	|| (atminterfacetctable_ !=  nullptr && atminterfacetctable_->has_operation())
	|| (atmmibobjects_ !=  nullptr && atmmibobjects_->has_operation())
	|| (atmtrafficdescrparamtable_ !=  nullptr && atmtrafficdescrparamtable_->has_operation())
	|| (atmvccrossconnecttable_ !=  nullptr && atmvccrossconnecttable_->has_operation())
	|| (atmvcltable_ !=  nullptr && atmvcltable_->has_operation())
	|| (atmvpcrossconnecttable_ !=  nullptr && atmvpcrossconnecttable_->has_operation())
	|| (atmvpltable_ !=  nullptr && atmvpltable_->has_operation());
}

std::string AtmMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-MIB:ATM-MIB";

    return path_buffer.str();

}

const EntityPath AtmMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AtmMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aal5VccTable")
    {
        if(aal5vcctable_ == nullptr)
        {
            aal5vcctable_ = std::make_shared<AtmMib::Aal5Vcctable>();
        }
        return aal5vcctable_;
    }

    if(child_yang_name == "atmInterfaceConfTable")
    {
        if(atminterfaceconftable_ == nullptr)
        {
            atminterfaceconftable_ = std::make_shared<AtmMib::Atminterfaceconftable>();
        }
        return atminterfaceconftable_;
    }

    if(child_yang_name == "atmInterfaceDs3PlcpTable")
    {
        if(atminterfaceds3plcptable_ == nullptr)
        {
            atminterfaceds3plcptable_ = std::make_shared<AtmMib::Atminterfaceds3Plcptable>();
        }
        return atminterfaceds3plcptable_;
    }

    if(child_yang_name == "atmInterfaceTCTable")
    {
        if(atminterfacetctable_ == nullptr)
        {
            atminterfacetctable_ = std::make_shared<AtmMib::Atminterfacetctable>();
        }
        return atminterfacetctable_;
    }

    if(child_yang_name == "atmMIBObjects")
    {
        if(atmmibobjects_ == nullptr)
        {
            atmmibobjects_ = std::make_shared<AtmMib::Atmmibobjects>();
        }
        return atmmibobjects_;
    }

    if(child_yang_name == "atmTrafficDescrParamTable")
    {
        if(atmtrafficdescrparamtable_ == nullptr)
        {
            atmtrafficdescrparamtable_ = std::make_shared<AtmMib::Atmtrafficdescrparamtable>();
        }
        return atmtrafficdescrparamtable_;
    }

    if(child_yang_name == "atmVcCrossConnectTable")
    {
        if(atmvccrossconnecttable_ == nullptr)
        {
            atmvccrossconnecttable_ = std::make_shared<AtmMib::Atmvccrossconnecttable>();
        }
        return atmvccrossconnecttable_;
    }

    if(child_yang_name == "atmVclTable")
    {
        if(atmvcltable_ == nullptr)
        {
            atmvcltable_ = std::make_shared<AtmMib::Atmvcltable>();
        }
        return atmvcltable_;
    }

    if(child_yang_name == "atmVpCrossConnectTable")
    {
        if(atmvpcrossconnecttable_ == nullptr)
        {
            atmvpcrossconnecttable_ = std::make_shared<AtmMib::Atmvpcrossconnecttable>();
        }
        return atmvpcrossconnecttable_;
    }

    if(child_yang_name == "atmVplTable")
    {
        if(atmvpltable_ == nullptr)
        {
            atmvpltable_ = std::make_shared<AtmMib::Atmvpltable>();
        }
        return atmvpltable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aal5vcctable_ != nullptr)
    {
        children["aal5VccTable"] = aal5vcctable_;
    }

    if(atminterfaceconftable_ != nullptr)
    {
        children["atmInterfaceConfTable"] = atminterfaceconftable_;
    }

    if(atminterfaceds3plcptable_ != nullptr)
    {
        children["atmInterfaceDs3PlcpTable"] = atminterfaceds3plcptable_;
    }

    if(atminterfacetctable_ != nullptr)
    {
        children["atmInterfaceTCTable"] = atminterfacetctable_;
    }

    if(atmmibobjects_ != nullptr)
    {
        children["atmMIBObjects"] = atmmibobjects_;
    }

    if(atmtrafficdescrparamtable_ != nullptr)
    {
        children["atmTrafficDescrParamTable"] = atmtrafficdescrparamtable_;
    }

    if(atmvccrossconnecttable_ != nullptr)
    {
        children["atmVcCrossConnectTable"] = atmvccrossconnecttable_;
    }

    if(atmvcltable_ != nullptr)
    {
        children["atmVclTable"] = atmvcltable_;
    }

    if(atmvpcrossconnecttable_ != nullptr)
    {
        children["atmVpCrossConnectTable"] = atmvpcrossconnecttable_;
    }

    if(atmvpltable_ != nullptr)
    {
        children["atmVplTable"] = atmvpltable_;
    }

    return children;
}

void AtmMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> AtmMib::clone_ptr() const
{
    return std::make_shared<AtmMib>();
}

std::string AtmMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AtmMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AtmMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

AtmMib::Atmmibobjects::Atmmibobjects()
    :
    atmtrafficdescrparamindexnext{YType::int32, "atmTrafficDescrParamIndexNext"},
    atmvccrossconnectindexnext{YType::int32, "atmVcCrossConnectIndexNext"},
    atmvpcrossconnectindexnext{YType::int32, "atmVpCrossConnectIndexNext"}
{
    yang_name = "atmMIBObjects"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atmmibobjects::~Atmmibobjects()
{
}

bool AtmMib::Atmmibobjects::has_data() const
{
    return atmtrafficdescrparamindexnext.is_set
	|| atmvccrossconnectindexnext.is_set
	|| atmvpcrossconnectindexnext.is_set;
}

bool AtmMib::Atmmibobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(atmtrafficdescrparamindexnext.operation)
	|| is_set(atmvccrossconnectindexnext.operation)
	|| is_set(atmvpcrossconnectindexnext.operation);
}

std::string AtmMib::Atmmibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmMIBObjects";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmmibobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmtrafficdescrparamindexnext.is_set || is_set(atmtrafficdescrparamindexnext.operation)) leaf_name_data.push_back(atmtrafficdescrparamindexnext.get_name_leafdata());
    if (atmvccrossconnectindexnext.is_set || is_set(atmvccrossconnectindexnext.operation)) leaf_name_data.push_back(atmvccrossconnectindexnext.get_name_leafdata());
    if (atmvpcrossconnectindexnext.is_set || is_set(atmvpcrossconnectindexnext.operation)) leaf_name_data.push_back(atmvpcrossconnectindexnext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmmibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmmibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atmmibobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atmTrafficDescrParamIndexNext")
    {
        atmtrafficdescrparamindexnext = value;
    }
    if(value_path == "atmVcCrossConnectIndexNext")
    {
        atmvccrossconnectindexnext = value;
    }
    if(value_path == "atmVpCrossConnectIndexNext")
    {
        atmvpcrossconnectindexnext = value;
    }
}

AtmMib::Atminterfaceconftable::Atminterfaceconftable()
{
    yang_name = "atmInterfaceConfTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atminterfaceconftable::~Atminterfaceconftable()
{
}

bool AtmMib::Atminterfaceconftable::has_data() const
{
    for (std::size_t index=0; index<atminterfaceconfentry_.size(); index++)
    {
        if(atminterfaceconfentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atminterfaceconftable::has_operation() const
{
    for (std::size_t index=0; index<atminterfaceconfentry_.size(); index++)
    {
        if(atminterfaceconfentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atminterfaceconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceConfTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atminterfaceconftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atminterfaceconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmInterfaceConfEntry")
    {
        for(auto const & c : atminterfaceconfentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atminterfaceconftable::Atminterfaceconfentry>();
        c->parent = this;
        atminterfaceconfentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atminterfaceconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atminterfaceconfentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atminterfaceconftable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceconfentry()
    :
    ifindex{YType::str, "ifIndex"},
    atminterfaceaddresstype{YType::enumeration, "atmInterfaceAddressType"},
    atminterfaceadminaddress{YType::str, "atmInterfaceAdminAddress"},
    atminterfaceconfvccs{YType::int32, "atmInterfaceConfVccs"},
    atminterfaceconfvpcs{YType::int32, "atmInterfaceConfVpcs"},
    atminterfacecurrentmaxvcibits{YType::int32, "atmInterfaceCurrentMaxVciBits"},
    atminterfacecurrentmaxvpibits{YType::int32, "atmInterfaceCurrentMaxVpiBits"},
    atminterfaceilmivci{YType::int32, "atmInterfaceIlmiVci"},
    atminterfaceilmivpi{YType::int32, "atmInterfaceIlmiVpi"},
    atminterfacemaxactivevcibits{YType::int32, "atmInterfaceMaxActiveVciBits"},
    atminterfacemaxactivevpibits{YType::int32, "atmInterfaceMaxActiveVpiBits"},
    atminterfacemaxvccs{YType::int32, "atmInterfaceMaxVccs"},
    atminterfacemaxvpcs{YType::int32, "atmInterfaceMaxVpcs"},
    atminterfacemyneighborifname{YType::str, "atmInterfaceMyNeighborIfName"},
    atminterfacemyneighboripaddress{YType::str, "atmInterfaceMyNeighborIpAddress"},
    atminterfacesubscraddress{YType::str, "atmInterfaceSubscrAddress"},
    atmintfcurrentlydowntouppvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:atmIntfCurrentlyDownToUpPVcls"},
    atmintfcurrentlyfailingpvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfCurrentlyFailingPVcls"},
    atmintfcurrentlyoamfailingpvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:atmIntfCurrentlyOAMFailingPVcls"},
    atmintfoamfailedpvcls{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:atmIntfOAMFailedPVcls"},
    atmintfpvcfailures{YType::uint32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfPvcFailures"},
    atmintfpvcfailurestrapenable{YType::boolean, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfPvcFailuresTrapEnable"},
    atmintfpvcnotificationinterval{YType::int32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmIntfPvcNotificationInterval"},
    atmpreviouslyfailedpvclinterval{YType::int32, "CISCO-IETF-ATM2-PVCTRAP-MIB:atmPreviouslyFailedPVclInterval"},
    catmintfaisrdioamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAISRDIOAMFailedPVcls"},
    catmintfaisrdioamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAISRDIOAMRcovedPVcls"},
    catmintfanyoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAnyOAMFailedPVcls"},
    catmintfanyoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfAnyOAMRcovedPVcls"},
    catmintfcuraisrdioamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAISRDIOAMFailingPVcls"},
    catmintfcuraisrdioamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAISRDIOAMRcovingPVcls"},
    catmintfcuranyoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAnyOAMFailingPVcls"},
    catmintfcuranyoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurAnyOAMRcovingPVcls"},
    catmintfcurendccoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurEndCCOAMFailingPVcls"},
    catmintfcurendccoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurEndCCOAMRcovingPVcls"},
    catmintfcurrentlydowntouppvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurrentlyDownToUpPVcls"},
    catmintfcurrentoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurrentOAMFailingPVcls"},
    catmintfcurrentoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurrentOAMRcovingPVcls"},
    catmintfcursegccoamfailingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurSegCCOAMFailingPVcls"},
    catmintfcursegccoamrcovingpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfCurSegCCOAMRcovingPVcls"},
    catmintfendccoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfEndCCOAMFailedPVcls"},
    catmintfendccoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfEndCCOAMRcovedPVcls"},
    catmintfoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfOAMFailedPVcls"},
    catmintfoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfOAMRcovedPVcls"},
    catmintfsegccoamfailedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfSegCCOAMFailedPVcls"},
    catmintfsegccoamrcovedpvcls{YType::uint32, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfSegCCOAMRcovedPVcls"},
    catmintftypeofoamfailure{YType::enumeration, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfTypeOfOAMFailure"},
    catmintftypeofoamrecover{YType::enumeration, "CISCO-ATM-PVCTRAP-EXTN-MIB:catmIntfTypeOfOAMRecover"}
{
    yang_name = "atmInterfaceConfEntry"; yang_parent_name = "atmInterfaceConfTable";
}

AtmMib::Atminterfaceconftable::Atminterfaceconfentry::~Atminterfaceconfentry()
{
}

bool AtmMib::Atminterfaceconftable::Atminterfaceconfentry::has_data() const
{
    return ifindex.is_set
	|| atminterfaceaddresstype.is_set
	|| atminterfaceadminaddress.is_set
	|| atminterfaceconfvccs.is_set
	|| atminterfaceconfvpcs.is_set
	|| atminterfacecurrentmaxvcibits.is_set
	|| atminterfacecurrentmaxvpibits.is_set
	|| atminterfaceilmivci.is_set
	|| atminterfaceilmivpi.is_set
	|| atminterfacemaxactivevcibits.is_set
	|| atminterfacemaxactivevpibits.is_set
	|| atminterfacemaxvccs.is_set
	|| atminterfacemaxvpcs.is_set
	|| atminterfacemyneighborifname.is_set
	|| atminterfacemyneighboripaddress.is_set
	|| atminterfacesubscraddress.is_set
	|| atmintfcurrentlydowntouppvcls.is_set
	|| atmintfcurrentlyfailingpvcls.is_set
	|| atmintfcurrentlyoamfailingpvcls.is_set
	|| atmintfoamfailedpvcls.is_set
	|| atmintfpvcfailures.is_set
	|| atmintfpvcfailurestrapenable.is_set
	|| atmintfpvcnotificationinterval.is_set
	|| atmpreviouslyfailedpvclinterval.is_set
	|| catmintfaisrdioamfailedpvcls.is_set
	|| catmintfaisrdioamrcovedpvcls.is_set
	|| catmintfanyoamfailedpvcls.is_set
	|| catmintfanyoamrcovedpvcls.is_set
	|| catmintfcuraisrdioamfailingpvcls.is_set
	|| catmintfcuraisrdioamrcovingpvcls.is_set
	|| catmintfcuranyoamfailingpvcls.is_set
	|| catmintfcuranyoamrcovingpvcls.is_set
	|| catmintfcurendccoamfailingpvcls.is_set
	|| catmintfcurendccoamrcovingpvcls.is_set
	|| catmintfcurrentlydowntouppvcls.is_set
	|| catmintfcurrentoamfailingpvcls.is_set
	|| catmintfcurrentoamrcovingpvcls.is_set
	|| catmintfcursegccoamfailingpvcls.is_set
	|| catmintfcursegccoamrcovingpvcls.is_set
	|| catmintfendccoamfailedpvcls.is_set
	|| catmintfendccoamrcovedpvcls.is_set
	|| catmintfoamfailedpvcls.is_set
	|| catmintfoamrcovedpvcls.is_set
	|| catmintfsegccoamfailedpvcls.is_set
	|| catmintfsegccoamrcovedpvcls.is_set
	|| catmintftypeofoamfailure.is_set
	|| catmintftypeofoamrecover.is_set;
}

bool AtmMib::Atminterfaceconftable::Atminterfaceconfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atminterfaceaddresstype.operation)
	|| is_set(atminterfaceadminaddress.operation)
	|| is_set(atminterfaceconfvccs.operation)
	|| is_set(atminterfaceconfvpcs.operation)
	|| is_set(atminterfacecurrentmaxvcibits.operation)
	|| is_set(atminterfacecurrentmaxvpibits.operation)
	|| is_set(atminterfaceilmivci.operation)
	|| is_set(atminterfaceilmivpi.operation)
	|| is_set(atminterfacemaxactivevcibits.operation)
	|| is_set(atminterfacemaxactivevpibits.operation)
	|| is_set(atminterfacemaxvccs.operation)
	|| is_set(atminterfacemaxvpcs.operation)
	|| is_set(atminterfacemyneighborifname.operation)
	|| is_set(atminterfacemyneighboripaddress.operation)
	|| is_set(atminterfacesubscraddress.operation)
	|| is_set(atmintfcurrentlydowntouppvcls.operation)
	|| is_set(atmintfcurrentlyfailingpvcls.operation)
	|| is_set(atmintfcurrentlyoamfailingpvcls.operation)
	|| is_set(atmintfoamfailedpvcls.operation)
	|| is_set(atmintfpvcfailures.operation)
	|| is_set(atmintfpvcfailurestrapenable.operation)
	|| is_set(atmintfpvcnotificationinterval.operation)
	|| is_set(atmpreviouslyfailedpvclinterval.operation)
	|| is_set(catmintfaisrdioamfailedpvcls.operation)
	|| is_set(catmintfaisrdioamrcovedpvcls.operation)
	|| is_set(catmintfanyoamfailedpvcls.operation)
	|| is_set(catmintfanyoamrcovedpvcls.operation)
	|| is_set(catmintfcuraisrdioamfailingpvcls.operation)
	|| is_set(catmintfcuraisrdioamrcovingpvcls.operation)
	|| is_set(catmintfcuranyoamfailingpvcls.operation)
	|| is_set(catmintfcuranyoamrcovingpvcls.operation)
	|| is_set(catmintfcurendccoamfailingpvcls.operation)
	|| is_set(catmintfcurendccoamrcovingpvcls.operation)
	|| is_set(catmintfcurrentlydowntouppvcls.operation)
	|| is_set(catmintfcurrentoamfailingpvcls.operation)
	|| is_set(catmintfcurrentoamrcovingpvcls.operation)
	|| is_set(catmintfcursegccoamfailingpvcls.operation)
	|| is_set(catmintfcursegccoamrcovingpvcls.operation)
	|| is_set(catmintfendccoamfailedpvcls.operation)
	|| is_set(catmintfendccoamrcovedpvcls.operation)
	|| is_set(catmintfoamfailedpvcls.operation)
	|| is_set(catmintfoamrcovedpvcls.operation)
	|| is_set(catmintfsegccoamfailedpvcls.operation)
	|| is_set(catmintfsegccoamrcovedpvcls.operation)
	|| is_set(catmintftypeofoamfailure.operation)
	|| is_set(catmintftypeofoamrecover.operation);
}

std::string AtmMib::Atminterfaceconftable::Atminterfaceconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceConfEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atminterfaceconftable::Atminterfaceconfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmInterfaceConfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atminterfaceaddresstype.is_set || is_set(atminterfaceaddresstype.operation)) leaf_name_data.push_back(atminterfaceaddresstype.get_name_leafdata());
    if (atminterfaceadminaddress.is_set || is_set(atminterfaceadminaddress.operation)) leaf_name_data.push_back(atminterfaceadminaddress.get_name_leafdata());
    if (atminterfaceconfvccs.is_set || is_set(atminterfaceconfvccs.operation)) leaf_name_data.push_back(atminterfaceconfvccs.get_name_leafdata());
    if (atminterfaceconfvpcs.is_set || is_set(atminterfaceconfvpcs.operation)) leaf_name_data.push_back(atminterfaceconfvpcs.get_name_leafdata());
    if (atminterfacecurrentmaxvcibits.is_set || is_set(atminterfacecurrentmaxvcibits.operation)) leaf_name_data.push_back(atminterfacecurrentmaxvcibits.get_name_leafdata());
    if (atminterfacecurrentmaxvpibits.is_set || is_set(atminterfacecurrentmaxvpibits.operation)) leaf_name_data.push_back(atminterfacecurrentmaxvpibits.get_name_leafdata());
    if (atminterfaceilmivci.is_set || is_set(atminterfaceilmivci.operation)) leaf_name_data.push_back(atminterfaceilmivci.get_name_leafdata());
    if (atminterfaceilmivpi.is_set || is_set(atminterfaceilmivpi.operation)) leaf_name_data.push_back(atminterfaceilmivpi.get_name_leafdata());
    if (atminterfacemaxactivevcibits.is_set || is_set(atminterfacemaxactivevcibits.operation)) leaf_name_data.push_back(atminterfacemaxactivevcibits.get_name_leafdata());
    if (atminterfacemaxactivevpibits.is_set || is_set(atminterfacemaxactivevpibits.operation)) leaf_name_data.push_back(atminterfacemaxactivevpibits.get_name_leafdata());
    if (atminterfacemaxvccs.is_set || is_set(atminterfacemaxvccs.operation)) leaf_name_data.push_back(atminterfacemaxvccs.get_name_leafdata());
    if (atminterfacemaxvpcs.is_set || is_set(atminterfacemaxvpcs.operation)) leaf_name_data.push_back(atminterfacemaxvpcs.get_name_leafdata());
    if (atminterfacemyneighborifname.is_set || is_set(atminterfacemyneighborifname.operation)) leaf_name_data.push_back(atminterfacemyneighborifname.get_name_leafdata());
    if (atminterfacemyneighboripaddress.is_set || is_set(atminterfacemyneighboripaddress.operation)) leaf_name_data.push_back(atminterfacemyneighboripaddress.get_name_leafdata());
    if (atminterfacesubscraddress.is_set || is_set(atminterfacesubscraddress.operation)) leaf_name_data.push_back(atminterfacesubscraddress.get_name_leafdata());
    if (atmintfcurrentlydowntouppvcls.is_set || is_set(atmintfcurrentlydowntouppvcls.operation)) leaf_name_data.push_back(atmintfcurrentlydowntouppvcls.get_name_leafdata());
    if (atmintfcurrentlyfailingpvcls.is_set || is_set(atmintfcurrentlyfailingpvcls.operation)) leaf_name_data.push_back(atmintfcurrentlyfailingpvcls.get_name_leafdata());
    if (atmintfcurrentlyoamfailingpvcls.is_set || is_set(atmintfcurrentlyoamfailingpvcls.operation)) leaf_name_data.push_back(atmintfcurrentlyoamfailingpvcls.get_name_leafdata());
    if (atmintfoamfailedpvcls.is_set || is_set(atmintfoamfailedpvcls.operation)) leaf_name_data.push_back(atmintfoamfailedpvcls.get_name_leafdata());
    if (atmintfpvcfailures.is_set || is_set(atmintfpvcfailures.operation)) leaf_name_data.push_back(atmintfpvcfailures.get_name_leafdata());
    if (atmintfpvcfailurestrapenable.is_set || is_set(atmintfpvcfailurestrapenable.operation)) leaf_name_data.push_back(atmintfpvcfailurestrapenable.get_name_leafdata());
    if (atmintfpvcnotificationinterval.is_set || is_set(atmintfpvcnotificationinterval.operation)) leaf_name_data.push_back(atmintfpvcnotificationinterval.get_name_leafdata());
    if (atmpreviouslyfailedpvclinterval.is_set || is_set(atmpreviouslyfailedpvclinterval.operation)) leaf_name_data.push_back(atmpreviouslyfailedpvclinterval.get_name_leafdata());
    if (catmintfaisrdioamfailedpvcls.is_set || is_set(catmintfaisrdioamfailedpvcls.operation)) leaf_name_data.push_back(catmintfaisrdioamfailedpvcls.get_name_leafdata());
    if (catmintfaisrdioamrcovedpvcls.is_set || is_set(catmintfaisrdioamrcovedpvcls.operation)) leaf_name_data.push_back(catmintfaisrdioamrcovedpvcls.get_name_leafdata());
    if (catmintfanyoamfailedpvcls.is_set || is_set(catmintfanyoamfailedpvcls.operation)) leaf_name_data.push_back(catmintfanyoamfailedpvcls.get_name_leafdata());
    if (catmintfanyoamrcovedpvcls.is_set || is_set(catmintfanyoamrcovedpvcls.operation)) leaf_name_data.push_back(catmintfanyoamrcovedpvcls.get_name_leafdata());
    if (catmintfcuraisrdioamfailingpvcls.is_set || is_set(catmintfcuraisrdioamfailingpvcls.operation)) leaf_name_data.push_back(catmintfcuraisrdioamfailingpvcls.get_name_leafdata());
    if (catmintfcuraisrdioamrcovingpvcls.is_set || is_set(catmintfcuraisrdioamrcovingpvcls.operation)) leaf_name_data.push_back(catmintfcuraisrdioamrcovingpvcls.get_name_leafdata());
    if (catmintfcuranyoamfailingpvcls.is_set || is_set(catmintfcuranyoamfailingpvcls.operation)) leaf_name_data.push_back(catmintfcuranyoamfailingpvcls.get_name_leafdata());
    if (catmintfcuranyoamrcovingpvcls.is_set || is_set(catmintfcuranyoamrcovingpvcls.operation)) leaf_name_data.push_back(catmintfcuranyoamrcovingpvcls.get_name_leafdata());
    if (catmintfcurendccoamfailingpvcls.is_set || is_set(catmintfcurendccoamfailingpvcls.operation)) leaf_name_data.push_back(catmintfcurendccoamfailingpvcls.get_name_leafdata());
    if (catmintfcurendccoamrcovingpvcls.is_set || is_set(catmintfcurendccoamrcovingpvcls.operation)) leaf_name_data.push_back(catmintfcurendccoamrcovingpvcls.get_name_leafdata());
    if (catmintfcurrentlydowntouppvcls.is_set || is_set(catmintfcurrentlydowntouppvcls.operation)) leaf_name_data.push_back(catmintfcurrentlydowntouppvcls.get_name_leafdata());
    if (catmintfcurrentoamfailingpvcls.is_set || is_set(catmintfcurrentoamfailingpvcls.operation)) leaf_name_data.push_back(catmintfcurrentoamfailingpvcls.get_name_leafdata());
    if (catmintfcurrentoamrcovingpvcls.is_set || is_set(catmintfcurrentoamrcovingpvcls.operation)) leaf_name_data.push_back(catmintfcurrentoamrcovingpvcls.get_name_leafdata());
    if (catmintfcursegccoamfailingpvcls.is_set || is_set(catmintfcursegccoamfailingpvcls.operation)) leaf_name_data.push_back(catmintfcursegccoamfailingpvcls.get_name_leafdata());
    if (catmintfcursegccoamrcovingpvcls.is_set || is_set(catmintfcursegccoamrcovingpvcls.operation)) leaf_name_data.push_back(catmintfcursegccoamrcovingpvcls.get_name_leafdata());
    if (catmintfendccoamfailedpvcls.is_set || is_set(catmintfendccoamfailedpvcls.operation)) leaf_name_data.push_back(catmintfendccoamfailedpvcls.get_name_leafdata());
    if (catmintfendccoamrcovedpvcls.is_set || is_set(catmintfendccoamrcovedpvcls.operation)) leaf_name_data.push_back(catmintfendccoamrcovedpvcls.get_name_leafdata());
    if (catmintfoamfailedpvcls.is_set || is_set(catmintfoamfailedpvcls.operation)) leaf_name_data.push_back(catmintfoamfailedpvcls.get_name_leafdata());
    if (catmintfoamrcovedpvcls.is_set || is_set(catmintfoamrcovedpvcls.operation)) leaf_name_data.push_back(catmintfoamrcovedpvcls.get_name_leafdata());
    if (catmintfsegccoamfailedpvcls.is_set || is_set(catmintfsegccoamfailedpvcls.operation)) leaf_name_data.push_back(catmintfsegccoamfailedpvcls.get_name_leafdata());
    if (catmintfsegccoamrcovedpvcls.is_set || is_set(catmintfsegccoamrcovedpvcls.operation)) leaf_name_data.push_back(catmintfsegccoamrcovedpvcls.get_name_leafdata());
    if (catmintftypeofoamfailure.is_set || is_set(catmintftypeofoamfailure.operation)) leaf_name_data.push_back(catmintftypeofoamfailure.get_name_leafdata());
    if (catmintftypeofoamrecover.is_set || is_set(catmintftypeofoamrecover.operation)) leaf_name_data.push_back(catmintftypeofoamrecover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atminterfaceconftable::Atminterfaceconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atminterfaceconftable::Atminterfaceconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atminterfaceconftable::Atminterfaceconfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmInterfaceAddressType")
    {
        atminterfaceaddresstype = value;
    }
    if(value_path == "atmInterfaceAdminAddress")
    {
        atminterfaceadminaddress = value;
    }
    if(value_path == "atmInterfaceConfVccs")
    {
        atminterfaceconfvccs = value;
    }
    if(value_path == "atmInterfaceConfVpcs")
    {
        atminterfaceconfvpcs = value;
    }
    if(value_path == "atmInterfaceCurrentMaxVciBits")
    {
        atminterfacecurrentmaxvcibits = value;
    }
    if(value_path == "atmInterfaceCurrentMaxVpiBits")
    {
        atminterfacecurrentmaxvpibits = value;
    }
    if(value_path == "atmInterfaceIlmiVci")
    {
        atminterfaceilmivci = value;
    }
    if(value_path == "atmInterfaceIlmiVpi")
    {
        atminterfaceilmivpi = value;
    }
    if(value_path == "atmInterfaceMaxActiveVciBits")
    {
        atminterfacemaxactivevcibits = value;
    }
    if(value_path == "atmInterfaceMaxActiveVpiBits")
    {
        atminterfacemaxactivevpibits = value;
    }
    if(value_path == "atmInterfaceMaxVccs")
    {
        atminterfacemaxvccs = value;
    }
    if(value_path == "atmInterfaceMaxVpcs")
    {
        atminterfacemaxvpcs = value;
    }
    if(value_path == "atmInterfaceMyNeighborIfName")
    {
        atminterfacemyneighborifname = value;
    }
    if(value_path == "atmInterfaceMyNeighborIpAddress")
    {
        atminterfacemyneighboripaddress = value;
    }
    if(value_path == "atmInterfaceSubscrAddress")
    {
        atminterfacesubscraddress = value;
    }
    if(value_path == "atmIntfCurrentlyDownToUpPVcls")
    {
        atmintfcurrentlydowntouppvcls = value;
    }
    if(value_path == "atmIntfCurrentlyFailingPVcls")
    {
        atmintfcurrentlyfailingpvcls = value;
    }
    if(value_path == "atmIntfCurrentlyOAMFailingPVcls")
    {
        atmintfcurrentlyoamfailingpvcls = value;
    }
    if(value_path == "atmIntfOAMFailedPVcls")
    {
        atmintfoamfailedpvcls = value;
    }
    if(value_path == "atmIntfPvcFailures")
    {
        atmintfpvcfailures = value;
    }
    if(value_path == "atmIntfPvcFailuresTrapEnable")
    {
        atmintfpvcfailurestrapenable = value;
    }
    if(value_path == "atmIntfPvcNotificationInterval")
    {
        atmintfpvcnotificationinterval = value;
    }
    if(value_path == "atmPreviouslyFailedPVclInterval")
    {
        atmpreviouslyfailedpvclinterval = value;
    }
    if(value_path == "catmIntfAISRDIOAMFailedPVcls")
    {
        catmintfaisrdioamfailedpvcls = value;
    }
    if(value_path == "catmIntfAISRDIOAMRcovedPVcls")
    {
        catmintfaisrdioamrcovedpvcls = value;
    }
    if(value_path == "catmIntfAnyOAMFailedPVcls")
    {
        catmintfanyoamfailedpvcls = value;
    }
    if(value_path == "catmIntfAnyOAMRcovedPVcls")
    {
        catmintfanyoamrcovedpvcls = value;
    }
    if(value_path == "catmIntfCurAISRDIOAMFailingPVcls")
    {
        catmintfcuraisrdioamfailingpvcls = value;
    }
    if(value_path == "catmIntfCurAISRDIOAMRcovingPVcls")
    {
        catmintfcuraisrdioamrcovingpvcls = value;
    }
    if(value_path == "catmIntfCurAnyOAMFailingPVcls")
    {
        catmintfcuranyoamfailingpvcls = value;
    }
    if(value_path == "catmIntfCurAnyOAMRcovingPVcls")
    {
        catmintfcuranyoamrcovingpvcls = value;
    }
    if(value_path == "catmIntfCurEndCCOAMFailingPVcls")
    {
        catmintfcurendccoamfailingpvcls = value;
    }
    if(value_path == "catmIntfCurEndCCOAMRcovingPVcls")
    {
        catmintfcurendccoamrcovingpvcls = value;
    }
    if(value_path == "catmIntfCurrentlyDownToUpPVcls")
    {
        catmintfcurrentlydowntouppvcls = value;
    }
    if(value_path == "catmIntfCurrentOAMFailingPVcls")
    {
        catmintfcurrentoamfailingpvcls = value;
    }
    if(value_path == "catmIntfCurrentOAMRcovingPVcls")
    {
        catmintfcurrentoamrcovingpvcls = value;
    }
    if(value_path == "catmIntfCurSegCCOAMFailingPVcls")
    {
        catmintfcursegccoamfailingpvcls = value;
    }
    if(value_path == "catmIntfCurSegCCOAMRcovingPVcls")
    {
        catmintfcursegccoamrcovingpvcls = value;
    }
    if(value_path == "catmIntfEndCCOAMFailedPVcls")
    {
        catmintfendccoamfailedpvcls = value;
    }
    if(value_path == "catmIntfEndCCOAMRcovedPVcls")
    {
        catmintfendccoamrcovedpvcls = value;
    }
    if(value_path == "catmIntfOAMFailedPVcls")
    {
        catmintfoamfailedpvcls = value;
    }
    if(value_path == "catmIntfOAMRcovedPVcls")
    {
        catmintfoamrcovedpvcls = value;
    }
    if(value_path == "catmIntfSegCCOAMFailedPVcls")
    {
        catmintfsegccoamfailedpvcls = value;
    }
    if(value_path == "catmIntfSegCCOAMRcovedPVcls")
    {
        catmintfsegccoamrcovedpvcls = value;
    }
    if(value_path == "catmIntfTypeOfOAMFailure")
    {
        catmintftypeofoamfailure = value;
    }
    if(value_path == "catmIntfTypeOfOAMRecover")
    {
        catmintftypeofoamrecover = value;
    }
}

AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcptable()
{
    yang_name = "atmInterfaceDs3PlcpTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atminterfaceds3Plcptable::~Atminterfaceds3Plcptable()
{
}

bool AtmMib::Atminterfaceds3Plcptable::has_data() const
{
    for (std::size_t index=0; index<atminterfaceds3plcpentry_.size(); index++)
    {
        if(atminterfaceds3plcpentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atminterfaceds3Plcptable::has_operation() const
{
    for (std::size_t index=0; index<atminterfaceds3plcpentry_.size(); index++)
    {
        if(atminterfaceds3plcpentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atminterfaceds3Plcptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceDs3PlcpTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atminterfaceds3Plcptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atminterfaceds3Plcptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmInterfaceDs3PlcpEntry")
    {
        for(auto const & c : atminterfaceds3plcpentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry>();
        c->parent = this;
        atminterfaceds3plcpentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atminterfaceds3Plcptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atminterfaceds3plcpentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atminterfaceds3Plcptable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpentry()
    :
    ifindex{YType::str, "ifIndex"},
    atminterfaceds3plcpalarmstate{YType::enumeration, "atmInterfaceDs3PlcpAlarmState"},
    atminterfaceds3plcpsefss{YType::uint32, "atmInterfaceDs3PlcpSEFSs"},
    atminterfaceds3plcpuass{YType::uint32, "atmInterfaceDs3PlcpUASs"}
{
    yang_name = "atmInterfaceDs3PlcpEntry"; yang_parent_name = "atmInterfaceDs3PlcpTable";
}

AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::~Atminterfaceds3Plcpentry()
{
}

bool AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::has_data() const
{
    return ifindex.is_set
	|| atminterfaceds3plcpalarmstate.is_set
	|| atminterfaceds3plcpsefss.is_set
	|| atminterfaceds3plcpuass.is_set;
}

bool AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atminterfaceds3plcpalarmstate.operation)
	|| is_set(atminterfaceds3plcpsefss.operation)
	|| is_set(atminterfaceds3plcpuass.operation);
}

std::string AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceDs3PlcpEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmInterfaceDs3PlcpTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atminterfaceds3plcpalarmstate.is_set || is_set(atminterfaceds3plcpalarmstate.operation)) leaf_name_data.push_back(atminterfaceds3plcpalarmstate.get_name_leafdata());
    if (atminterfaceds3plcpsefss.is_set || is_set(atminterfaceds3plcpsefss.operation)) leaf_name_data.push_back(atminterfaceds3plcpsefss.get_name_leafdata());
    if (atminterfaceds3plcpuass.is_set || is_set(atminterfaceds3plcpuass.operation)) leaf_name_data.push_back(atminterfaceds3plcpuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmInterfaceDs3PlcpAlarmState")
    {
        atminterfaceds3plcpalarmstate = value;
    }
    if(value_path == "atmInterfaceDs3PlcpSEFSs")
    {
        atminterfaceds3plcpsefss = value;
    }
    if(value_path == "atmInterfaceDs3PlcpUASs")
    {
        atminterfaceds3plcpuass = value;
    }
}

AtmMib::Atminterfacetctable::Atminterfacetctable()
{
    yang_name = "atmInterfaceTCTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atminterfacetctable::~Atminterfacetctable()
{
}

bool AtmMib::Atminterfacetctable::has_data() const
{
    for (std::size_t index=0; index<atminterfacetcentry_.size(); index++)
    {
        if(atminterfacetcentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atminterfacetctable::has_operation() const
{
    for (std::size_t index=0; index<atminterfacetcentry_.size(); index++)
    {
        if(atminterfacetcentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atminterfacetctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceTCTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atminterfacetctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atminterfacetctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmInterfaceTCEntry")
    {
        for(auto const & c : atminterfacetcentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atminterfacetctable::Atminterfacetcentry>();
        c->parent = this;
        atminterfacetcentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atminterfacetctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atminterfacetcentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atminterfacetctable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atminterfacetctable::Atminterfacetcentry::Atminterfacetcentry()
    :
    ifindex{YType::str, "ifIndex"},
    atminterfaceocdevents{YType::uint32, "atmInterfaceOCDEvents"},
    atminterfacetcalarmstate{YType::enumeration, "atmInterfaceTCAlarmState"}
{
    yang_name = "atmInterfaceTCEntry"; yang_parent_name = "atmInterfaceTCTable";
}

AtmMib::Atminterfacetctable::Atminterfacetcentry::~Atminterfacetcentry()
{
}

bool AtmMib::Atminterfacetctable::Atminterfacetcentry::has_data() const
{
    return ifindex.is_set
	|| atminterfaceocdevents.is_set
	|| atminterfacetcalarmstate.is_set;
}

bool AtmMib::Atminterfacetctable::Atminterfacetcentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atminterfaceocdevents.operation)
	|| is_set(atminterfacetcalarmstate.operation);
}

std::string AtmMib::Atminterfacetctable::Atminterfacetcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmInterfaceTCEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atminterfacetctable::Atminterfacetcentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmInterfaceTCTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atminterfaceocdevents.is_set || is_set(atminterfaceocdevents.operation)) leaf_name_data.push_back(atminterfaceocdevents.get_name_leafdata());
    if (atminterfacetcalarmstate.is_set || is_set(atminterfacetcalarmstate.operation)) leaf_name_data.push_back(atminterfacetcalarmstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atminterfacetctable::Atminterfacetcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atminterfacetctable::Atminterfacetcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atminterfacetctable::Atminterfacetcentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmInterfaceOCDEvents")
    {
        atminterfaceocdevents = value;
    }
    if(value_path == "atmInterfaceTCAlarmState")
    {
        atminterfacetcalarmstate = value;
    }
}

AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamtable()
{
    yang_name = "atmTrafficDescrParamTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atmtrafficdescrparamtable::~Atmtrafficdescrparamtable()
{
}

bool AtmMib::Atmtrafficdescrparamtable::has_data() const
{
    for (std::size_t index=0; index<atmtrafficdescrparamentry_.size(); index++)
    {
        if(atmtrafficdescrparamentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atmtrafficdescrparamtable::has_operation() const
{
    for (std::size_t index=0; index<atmtrafficdescrparamentry_.size(); index++)
    {
        if(atmtrafficdescrparamentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atmtrafficdescrparamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmTrafficDescrParamTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmtrafficdescrparamtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmtrafficdescrparamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmTrafficDescrParamEntry")
    {
        for(auto const & c : atmtrafficdescrparamentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry>();
        c->parent = this;
        atmtrafficdescrparamentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmtrafficdescrparamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmtrafficdescrparamentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atmtrafficdescrparamtable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::Atmtrafficdescrparamentry()
    :
    atmtrafficdescrparamindex{YType::int32, "atmTrafficDescrParamIndex"},
    atmservicecategory{YType::enumeration, "atmServiceCategory"},
    atmtrafficdescrparam1{YType::int32, "atmTrafficDescrParam1"},
    atmtrafficdescrparam2{YType::int32, "atmTrafficDescrParam2"},
    atmtrafficdescrparam3{YType::int32, "atmTrafficDescrParam3"},
    atmtrafficdescrparam4{YType::int32, "atmTrafficDescrParam4"},
    atmtrafficdescrparam5{YType::int32, "atmTrafficDescrParam5"},
    atmtrafficdescrrowstatus{YType::enumeration, "atmTrafficDescrRowStatus"},
    atmtrafficdescrtype{YType::str, "atmTrafficDescrType"},
    atmtrafficframediscard{YType::boolean, "atmTrafficFrameDiscard"},
    atmtrafficqosclass{YType::int32, "atmTrafficQoSClass"}
{
    yang_name = "atmTrafficDescrParamEntry"; yang_parent_name = "atmTrafficDescrParamTable";
}

AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::~Atmtrafficdescrparamentry()
{
}

bool AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::has_data() const
{
    return atmtrafficdescrparamindex.is_set
	|| atmservicecategory.is_set
	|| atmtrafficdescrparam1.is_set
	|| atmtrafficdescrparam2.is_set
	|| atmtrafficdescrparam3.is_set
	|| atmtrafficdescrparam4.is_set
	|| atmtrafficdescrparam5.is_set
	|| atmtrafficdescrrowstatus.is_set
	|| atmtrafficdescrtype.is_set
	|| atmtrafficframediscard.is_set
	|| atmtrafficqosclass.is_set;
}

bool AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::has_operation() const
{
    return is_set(operation)
	|| is_set(atmtrafficdescrparamindex.operation)
	|| is_set(atmservicecategory.operation)
	|| is_set(atmtrafficdescrparam1.operation)
	|| is_set(atmtrafficdescrparam2.operation)
	|| is_set(atmtrafficdescrparam3.operation)
	|| is_set(atmtrafficdescrparam4.operation)
	|| is_set(atmtrafficdescrparam5.operation)
	|| is_set(atmtrafficdescrrowstatus.operation)
	|| is_set(atmtrafficdescrtype.operation)
	|| is_set(atmtrafficframediscard.operation)
	|| is_set(atmtrafficqosclass.operation);
}

std::string AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmTrafficDescrParamEntry" <<"[atmTrafficDescrParamIndex='" <<atmtrafficdescrparamindex <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmTrafficDescrParamTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmtrafficdescrparamindex.is_set || is_set(atmtrafficdescrparamindex.operation)) leaf_name_data.push_back(atmtrafficdescrparamindex.get_name_leafdata());
    if (atmservicecategory.is_set || is_set(atmservicecategory.operation)) leaf_name_data.push_back(atmservicecategory.get_name_leafdata());
    if (atmtrafficdescrparam1.is_set || is_set(atmtrafficdescrparam1.operation)) leaf_name_data.push_back(atmtrafficdescrparam1.get_name_leafdata());
    if (atmtrafficdescrparam2.is_set || is_set(atmtrafficdescrparam2.operation)) leaf_name_data.push_back(atmtrafficdescrparam2.get_name_leafdata());
    if (atmtrafficdescrparam3.is_set || is_set(atmtrafficdescrparam3.operation)) leaf_name_data.push_back(atmtrafficdescrparam3.get_name_leafdata());
    if (atmtrafficdescrparam4.is_set || is_set(atmtrafficdescrparam4.operation)) leaf_name_data.push_back(atmtrafficdescrparam4.get_name_leafdata());
    if (atmtrafficdescrparam5.is_set || is_set(atmtrafficdescrparam5.operation)) leaf_name_data.push_back(atmtrafficdescrparam5.get_name_leafdata());
    if (atmtrafficdescrrowstatus.is_set || is_set(atmtrafficdescrrowstatus.operation)) leaf_name_data.push_back(atmtrafficdescrrowstatus.get_name_leafdata());
    if (atmtrafficdescrtype.is_set || is_set(atmtrafficdescrtype.operation)) leaf_name_data.push_back(atmtrafficdescrtype.get_name_leafdata());
    if (atmtrafficframediscard.is_set || is_set(atmtrafficframediscard.operation)) leaf_name_data.push_back(atmtrafficframediscard.get_name_leafdata());
    if (atmtrafficqosclass.is_set || is_set(atmtrafficqosclass.operation)) leaf_name_data.push_back(atmtrafficqosclass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atmTrafficDescrParamIndex")
    {
        atmtrafficdescrparamindex = value;
    }
    if(value_path == "atmServiceCategory")
    {
        atmservicecategory = value;
    }
    if(value_path == "atmTrafficDescrParam1")
    {
        atmtrafficdescrparam1 = value;
    }
    if(value_path == "atmTrafficDescrParam2")
    {
        atmtrafficdescrparam2 = value;
    }
    if(value_path == "atmTrafficDescrParam3")
    {
        atmtrafficdescrparam3 = value;
    }
    if(value_path == "atmTrafficDescrParam4")
    {
        atmtrafficdescrparam4 = value;
    }
    if(value_path == "atmTrafficDescrParam5")
    {
        atmtrafficdescrparam5 = value;
    }
    if(value_path == "atmTrafficDescrRowStatus")
    {
        atmtrafficdescrrowstatus = value;
    }
    if(value_path == "atmTrafficDescrType")
    {
        atmtrafficdescrtype = value;
    }
    if(value_path == "atmTrafficFrameDiscard")
    {
        atmtrafficframediscard = value;
    }
    if(value_path == "atmTrafficQoSClass")
    {
        atmtrafficqosclass = value;
    }
}

AtmMib::Atmvpltable::Atmvpltable()
{
    yang_name = "atmVplTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atmvpltable::~Atmvpltable()
{
}

bool AtmMib::Atmvpltable::has_data() const
{
    for (std::size_t index=0; index<atmvplentry_.size(); index++)
    {
        if(atmvplentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atmvpltable::has_operation() const
{
    for (std::size_t index=0; index<atmvplentry_.size(); index++)
    {
        if(atmvplentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atmvpltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVplTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvpltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvpltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVplEntry")
    {
        for(auto const & c : atmvplentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atmvpltable::Atmvplentry>();
        c->parent = this;
        atmvplentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvpltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvplentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atmvpltable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atmvpltable::Atmvplentry::Atmvplentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvplvpi{YType::int32, "atmVplVpi"},
    atmvpladminstatus{YType::enumeration, "atmVplAdminStatus"},
    atmvplcasttype{YType::enumeration, "atmVplCastType"},
    atmvplconnkind{YType::enumeration, "atmVplConnKind"},
    atmvplcrossconnectidentifier{YType::int32, "atmVplCrossConnectIdentifier"},
    atmvpllastchange{YType::uint32, "atmVplLastChange"},
    atmvploperstatus{YType::enumeration, "atmVplOperStatus"},
    atmvplreceivetrafficdescrindex{YType::int32, "atmVplReceiveTrafficDescrIndex"},
    atmvplrowstatus{YType::enumeration, "atmVplRowStatus"},
    atmvpltransmittrafficdescrindex{YType::int32, "atmVplTransmitTrafficDescrIndex"}
{
    yang_name = "atmVplEntry"; yang_parent_name = "atmVplTable";
}

AtmMib::Atmvpltable::Atmvplentry::~Atmvplentry()
{
}

bool AtmMib::Atmvpltable::Atmvplentry::has_data() const
{
    return ifindex.is_set
	|| atmvplvpi.is_set
	|| atmvpladminstatus.is_set
	|| atmvplcasttype.is_set
	|| atmvplconnkind.is_set
	|| atmvplcrossconnectidentifier.is_set
	|| atmvpllastchange.is_set
	|| atmvploperstatus.is_set
	|| atmvplreceivetrafficdescrindex.is_set
	|| atmvplrowstatus.is_set
	|| atmvpltransmittrafficdescrindex.is_set;
}

bool AtmMib::Atmvpltable::Atmvplentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvplvpi.operation)
	|| is_set(atmvpladminstatus.operation)
	|| is_set(atmvplcasttype.operation)
	|| is_set(atmvplconnkind.operation)
	|| is_set(atmvplcrossconnectidentifier.operation)
	|| is_set(atmvpllastchange.operation)
	|| is_set(atmvploperstatus.operation)
	|| is_set(atmvplreceivetrafficdescrindex.operation)
	|| is_set(atmvplrowstatus.operation)
	|| is_set(atmvpltransmittrafficdescrindex.operation);
}

std::string AtmMib::Atmvpltable::Atmvplentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVplEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVplVpi='" <<atmvplvpi <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvpltable::Atmvplentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmVplTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvplvpi.is_set || is_set(atmvplvpi.operation)) leaf_name_data.push_back(atmvplvpi.get_name_leafdata());
    if (atmvpladminstatus.is_set || is_set(atmvpladminstatus.operation)) leaf_name_data.push_back(atmvpladminstatus.get_name_leafdata());
    if (atmvplcasttype.is_set || is_set(atmvplcasttype.operation)) leaf_name_data.push_back(atmvplcasttype.get_name_leafdata());
    if (atmvplconnkind.is_set || is_set(atmvplconnkind.operation)) leaf_name_data.push_back(atmvplconnkind.get_name_leafdata());
    if (atmvplcrossconnectidentifier.is_set || is_set(atmvplcrossconnectidentifier.operation)) leaf_name_data.push_back(atmvplcrossconnectidentifier.get_name_leafdata());
    if (atmvpllastchange.is_set || is_set(atmvpllastchange.operation)) leaf_name_data.push_back(atmvpllastchange.get_name_leafdata());
    if (atmvploperstatus.is_set || is_set(atmvploperstatus.operation)) leaf_name_data.push_back(atmvploperstatus.get_name_leafdata());
    if (atmvplreceivetrafficdescrindex.is_set || is_set(atmvplreceivetrafficdescrindex.operation)) leaf_name_data.push_back(atmvplreceivetrafficdescrindex.get_name_leafdata());
    if (atmvplrowstatus.is_set || is_set(atmvplrowstatus.operation)) leaf_name_data.push_back(atmvplrowstatus.get_name_leafdata());
    if (atmvpltransmittrafficdescrindex.is_set || is_set(atmvpltransmittrafficdescrindex.operation)) leaf_name_data.push_back(atmvpltransmittrafficdescrindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvpltable::Atmvplentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvpltable::Atmvplentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atmvpltable::Atmvplentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVplVpi")
    {
        atmvplvpi = value;
    }
    if(value_path == "atmVplAdminStatus")
    {
        atmvpladminstatus = value;
    }
    if(value_path == "atmVplCastType")
    {
        atmvplcasttype = value;
    }
    if(value_path == "atmVplConnKind")
    {
        atmvplconnkind = value;
    }
    if(value_path == "atmVplCrossConnectIdentifier")
    {
        atmvplcrossconnectidentifier = value;
    }
    if(value_path == "atmVplLastChange")
    {
        atmvpllastchange = value;
    }
    if(value_path == "atmVplOperStatus")
    {
        atmvploperstatus = value;
    }
    if(value_path == "atmVplReceiveTrafficDescrIndex")
    {
        atmvplreceivetrafficdescrindex = value;
    }
    if(value_path == "atmVplRowStatus")
    {
        atmvplrowstatus = value;
    }
    if(value_path == "atmVplTransmitTrafficDescrIndex")
    {
        atmvpltransmittrafficdescrindex = value;
    }
}

AtmMib::Atmvcltable::Atmvcltable()
{
    yang_name = "atmVclTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atmvcltable::~Atmvcltable()
{
}

bool AtmMib::Atmvcltable::has_data() const
{
    for (std::size_t index=0; index<atmvclentry_.size(); index++)
    {
        if(atmvclentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atmvcltable::has_operation() const
{
    for (std::size_t index=0; index<atmvclentry_.size(); index++)
    {
        if(atmvclentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atmvcltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVclTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvcltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvcltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVclEntry")
    {
        for(auto const & c : atmvclentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atmvcltable::Atmvclentry>();
        c->parent = this;
        atmvclentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvclentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atmvcltable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atmvcltable::Atmvclentry::Atmvclentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::int32, "atmVclVpi"},
    atmvclvci{YType::int32, "atmVclVci"},
    atmvccaal5cpcsreceivesdusize{YType::int32, "atmVccAal5CpcsReceiveSduSize"},
    atmvccaal5cpcstransmitsdusize{YType::int32, "atmVccAal5CpcsTransmitSduSize"},
    atmvccaal5encapstype{YType::enumeration, "atmVccAal5EncapsType"},
    atmvccaaltype{YType::enumeration, "atmVccAalType"},
    atmvcladminstatus{YType::enumeration, "atmVclAdminStatus"},
    atmvclcasttype{YType::enumeration, "atmVclCastType"},
    atmvclconnkind{YType::enumeration, "atmVclConnKind"},
    atmvclcrossconnectidentifier{YType::int32, "atmVclCrossConnectIdentifier"},
    atmvcllastchange{YType::uint32, "atmVclLastChange"},
    atmvcloperstatus{YType::enumeration, "atmVclOperStatus"},
    atmvclreceivetrafficdescrindex{YType::int32, "atmVclReceiveTrafficDescrIndex"},
    atmvclrowstatus{YType::enumeration, "atmVclRowStatus"},
    atmvcltransmittrafficdescrindex{YType::int32, "atmVclTransmitTrafficDescrIndex"},
    catmxvcloamcellsdropped{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamCellsDropped"},
    catmxvcloamcellsreceived{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamCellsReceived"},
    catmxvcloamcellssent{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamCellsSent"},
    catmxvcloamdownretrycount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamDownRetryCount"},
    catmxvcloamendccactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCActCount"},
    catmxvcloamendccdeactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCDeActCount"},
    catmxvcloamendccretryfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCRetryFreq"},
    catmxvcloamendccstatus{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCStatus"},
    catmxvcloamendccvcstate{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamEndCCVcState"},
    catmxvcloaminf5ais{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamInF5ais"},
    catmxvcloaminf5rdi{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamInF5rdi"},
    catmxvcloamloopbackfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamLoopbackFreq"},
    catmxvcloamloopbkstatus{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamLoopBkStatus"},
    catmxvcloammanage{YType::boolean, "CISCO-ATM-EXT-MIB:catmxVclOamManage"},
    catmxvcloamoutf5ais{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamOutF5ais"},
    catmxvcloamoutf5rdi{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamOutF5rdi"},
    catmxvcloamretryfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamRetryFreq"},
    catmxvcloamsegccactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCActCount"},
    catmxvcloamsegccdeactcount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCDeActCount"},
    catmxvcloamsegccretryfreq{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCRetryFreq"},
    catmxvcloamsegccstatus{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCStatus"},
    catmxvcloamsegccvcstate{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamSegCCVcState"},
    catmxvcloamupretrycount{YType::uint32, "CISCO-ATM-EXT-MIB:catmxVclOamUpRetryCount"},
    catmxvcloamvcstate{YType::enumeration, "CISCO-ATM-EXT-MIB:catmxVclOamVcState"}
{
    yang_name = "atmVclEntry"; yang_parent_name = "atmVclTable";
}

AtmMib::Atmvcltable::Atmvclentry::~Atmvclentry()
{
}

bool AtmMib::Atmvcltable::Atmvclentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| atmvccaal5cpcsreceivesdusize.is_set
	|| atmvccaal5cpcstransmitsdusize.is_set
	|| atmvccaal5encapstype.is_set
	|| atmvccaaltype.is_set
	|| atmvcladminstatus.is_set
	|| atmvclcasttype.is_set
	|| atmvclconnkind.is_set
	|| atmvclcrossconnectidentifier.is_set
	|| atmvcllastchange.is_set
	|| atmvcloperstatus.is_set
	|| atmvclreceivetrafficdescrindex.is_set
	|| atmvclrowstatus.is_set
	|| atmvcltransmittrafficdescrindex.is_set
	|| catmxvcloamcellsdropped.is_set
	|| catmxvcloamcellsreceived.is_set
	|| catmxvcloamcellssent.is_set
	|| catmxvcloamdownretrycount.is_set
	|| catmxvcloamendccactcount.is_set
	|| catmxvcloamendccdeactcount.is_set
	|| catmxvcloamendccretryfreq.is_set
	|| catmxvcloamendccstatus.is_set
	|| catmxvcloamendccvcstate.is_set
	|| catmxvcloaminf5ais.is_set
	|| catmxvcloaminf5rdi.is_set
	|| catmxvcloamloopbackfreq.is_set
	|| catmxvcloamloopbkstatus.is_set
	|| catmxvcloammanage.is_set
	|| catmxvcloamoutf5ais.is_set
	|| catmxvcloamoutf5rdi.is_set
	|| catmxvcloamretryfreq.is_set
	|| catmxvcloamsegccactcount.is_set
	|| catmxvcloamsegccdeactcount.is_set
	|| catmxvcloamsegccretryfreq.is_set
	|| catmxvcloamsegccstatus.is_set
	|| catmxvcloamsegccvcstate.is_set
	|| catmxvcloamupretrycount.is_set
	|| catmxvcloamvcstate.is_set;
}

bool AtmMib::Atmvcltable::Atmvclentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(atmvccaal5cpcsreceivesdusize.operation)
	|| is_set(atmvccaal5cpcstransmitsdusize.operation)
	|| is_set(atmvccaal5encapstype.operation)
	|| is_set(atmvccaaltype.operation)
	|| is_set(atmvcladminstatus.operation)
	|| is_set(atmvclcasttype.operation)
	|| is_set(atmvclconnkind.operation)
	|| is_set(atmvclcrossconnectidentifier.operation)
	|| is_set(atmvcllastchange.operation)
	|| is_set(atmvcloperstatus.operation)
	|| is_set(atmvclreceivetrafficdescrindex.operation)
	|| is_set(atmvclrowstatus.operation)
	|| is_set(atmvcltransmittrafficdescrindex.operation)
	|| is_set(catmxvcloamcellsdropped.operation)
	|| is_set(catmxvcloamcellsreceived.operation)
	|| is_set(catmxvcloamcellssent.operation)
	|| is_set(catmxvcloamdownretrycount.operation)
	|| is_set(catmxvcloamendccactcount.operation)
	|| is_set(catmxvcloamendccdeactcount.operation)
	|| is_set(catmxvcloamendccretryfreq.operation)
	|| is_set(catmxvcloamendccstatus.operation)
	|| is_set(catmxvcloamendccvcstate.operation)
	|| is_set(catmxvcloaminf5ais.operation)
	|| is_set(catmxvcloaminf5rdi.operation)
	|| is_set(catmxvcloamloopbackfreq.operation)
	|| is_set(catmxvcloamloopbkstatus.operation)
	|| is_set(catmxvcloammanage.operation)
	|| is_set(catmxvcloamoutf5ais.operation)
	|| is_set(catmxvcloamoutf5rdi.operation)
	|| is_set(catmxvcloamretryfreq.operation)
	|| is_set(catmxvcloamsegccactcount.operation)
	|| is_set(catmxvcloamsegccdeactcount.operation)
	|| is_set(catmxvcloamsegccretryfreq.operation)
	|| is_set(catmxvcloamsegccstatus.operation)
	|| is_set(catmxvcloamsegccvcstate.operation)
	|| is_set(catmxvcloamupretrycount.operation)
	|| is_set(catmxvcloamvcstate.operation);
}

std::string AtmMib::Atmvcltable::Atmvclentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVclEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvcltable::Atmvclentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmVclTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (atmvccaal5cpcsreceivesdusize.is_set || is_set(atmvccaal5cpcsreceivesdusize.operation)) leaf_name_data.push_back(atmvccaal5cpcsreceivesdusize.get_name_leafdata());
    if (atmvccaal5cpcstransmitsdusize.is_set || is_set(atmvccaal5cpcstransmitsdusize.operation)) leaf_name_data.push_back(atmvccaal5cpcstransmitsdusize.get_name_leafdata());
    if (atmvccaal5encapstype.is_set || is_set(atmvccaal5encapstype.operation)) leaf_name_data.push_back(atmvccaal5encapstype.get_name_leafdata());
    if (atmvccaaltype.is_set || is_set(atmvccaaltype.operation)) leaf_name_data.push_back(atmvccaaltype.get_name_leafdata());
    if (atmvcladminstatus.is_set || is_set(atmvcladminstatus.operation)) leaf_name_data.push_back(atmvcladminstatus.get_name_leafdata());
    if (atmvclcasttype.is_set || is_set(atmvclcasttype.operation)) leaf_name_data.push_back(atmvclcasttype.get_name_leafdata());
    if (atmvclconnkind.is_set || is_set(atmvclconnkind.operation)) leaf_name_data.push_back(atmvclconnkind.get_name_leafdata());
    if (atmvclcrossconnectidentifier.is_set || is_set(atmvclcrossconnectidentifier.operation)) leaf_name_data.push_back(atmvclcrossconnectidentifier.get_name_leafdata());
    if (atmvcllastchange.is_set || is_set(atmvcllastchange.operation)) leaf_name_data.push_back(atmvcllastchange.get_name_leafdata());
    if (atmvcloperstatus.is_set || is_set(atmvcloperstatus.operation)) leaf_name_data.push_back(atmvcloperstatus.get_name_leafdata());
    if (atmvclreceivetrafficdescrindex.is_set || is_set(atmvclreceivetrafficdescrindex.operation)) leaf_name_data.push_back(atmvclreceivetrafficdescrindex.get_name_leafdata());
    if (atmvclrowstatus.is_set || is_set(atmvclrowstatus.operation)) leaf_name_data.push_back(atmvclrowstatus.get_name_leafdata());
    if (atmvcltransmittrafficdescrindex.is_set || is_set(atmvcltransmittrafficdescrindex.operation)) leaf_name_data.push_back(atmvcltransmittrafficdescrindex.get_name_leafdata());
    if (catmxvcloamcellsdropped.is_set || is_set(catmxvcloamcellsdropped.operation)) leaf_name_data.push_back(catmxvcloamcellsdropped.get_name_leafdata());
    if (catmxvcloamcellsreceived.is_set || is_set(catmxvcloamcellsreceived.operation)) leaf_name_data.push_back(catmxvcloamcellsreceived.get_name_leafdata());
    if (catmxvcloamcellssent.is_set || is_set(catmxvcloamcellssent.operation)) leaf_name_data.push_back(catmxvcloamcellssent.get_name_leafdata());
    if (catmxvcloamdownretrycount.is_set || is_set(catmxvcloamdownretrycount.operation)) leaf_name_data.push_back(catmxvcloamdownretrycount.get_name_leafdata());
    if (catmxvcloamendccactcount.is_set || is_set(catmxvcloamendccactcount.operation)) leaf_name_data.push_back(catmxvcloamendccactcount.get_name_leafdata());
    if (catmxvcloamendccdeactcount.is_set || is_set(catmxvcloamendccdeactcount.operation)) leaf_name_data.push_back(catmxvcloamendccdeactcount.get_name_leafdata());
    if (catmxvcloamendccretryfreq.is_set || is_set(catmxvcloamendccretryfreq.operation)) leaf_name_data.push_back(catmxvcloamendccretryfreq.get_name_leafdata());
    if (catmxvcloamendccstatus.is_set || is_set(catmxvcloamendccstatus.operation)) leaf_name_data.push_back(catmxvcloamendccstatus.get_name_leafdata());
    if (catmxvcloamendccvcstate.is_set || is_set(catmxvcloamendccvcstate.operation)) leaf_name_data.push_back(catmxvcloamendccvcstate.get_name_leafdata());
    if (catmxvcloaminf5ais.is_set || is_set(catmxvcloaminf5ais.operation)) leaf_name_data.push_back(catmxvcloaminf5ais.get_name_leafdata());
    if (catmxvcloaminf5rdi.is_set || is_set(catmxvcloaminf5rdi.operation)) leaf_name_data.push_back(catmxvcloaminf5rdi.get_name_leafdata());
    if (catmxvcloamloopbackfreq.is_set || is_set(catmxvcloamloopbackfreq.operation)) leaf_name_data.push_back(catmxvcloamloopbackfreq.get_name_leafdata());
    if (catmxvcloamloopbkstatus.is_set || is_set(catmxvcloamloopbkstatus.operation)) leaf_name_data.push_back(catmxvcloamloopbkstatus.get_name_leafdata());
    if (catmxvcloammanage.is_set || is_set(catmxvcloammanage.operation)) leaf_name_data.push_back(catmxvcloammanage.get_name_leafdata());
    if (catmxvcloamoutf5ais.is_set || is_set(catmxvcloamoutf5ais.operation)) leaf_name_data.push_back(catmxvcloamoutf5ais.get_name_leafdata());
    if (catmxvcloamoutf5rdi.is_set || is_set(catmxvcloamoutf5rdi.operation)) leaf_name_data.push_back(catmxvcloamoutf5rdi.get_name_leafdata());
    if (catmxvcloamretryfreq.is_set || is_set(catmxvcloamretryfreq.operation)) leaf_name_data.push_back(catmxvcloamretryfreq.get_name_leafdata());
    if (catmxvcloamsegccactcount.is_set || is_set(catmxvcloamsegccactcount.operation)) leaf_name_data.push_back(catmxvcloamsegccactcount.get_name_leafdata());
    if (catmxvcloamsegccdeactcount.is_set || is_set(catmxvcloamsegccdeactcount.operation)) leaf_name_data.push_back(catmxvcloamsegccdeactcount.get_name_leafdata());
    if (catmxvcloamsegccretryfreq.is_set || is_set(catmxvcloamsegccretryfreq.operation)) leaf_name_data.push_back(catmxvcloamsegccretryfreq.get_name_leafdata());
    if (catmxvcloamsegccstatus.is_set || is_set(catmxvcloamsegccstatus.operation)) leaf_name_data.push_back(catmxvcloamsegccstatus.get_name_leafdata());
    if (catmxvcloamsegccvcstate.is_set || is_set(catmxvcloamsegccvcstate.operation)) leaf_name_data.push_back(catmxvcloamsegccvcstate.get_name_leafdata());
    if (catmxvcloamupretrycount.is_set || is_set(catmxvcloamupretrycount.operation)) leaf_name_data.push_back(catmxvcloamupretrycount.get_name_leafdata());
    if (catmxvcloamvcstate.is_set || is_set(catmxvcloamvcstate.operation)) leaf_name_data.push_back(catmxvcloamvcstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvcltable::Atmvclentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvcltable::Atmvclentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atmvcltable::Atmvclentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
    }
    if(value_path == "atmVccAal5CpcsReceiveSduSize")
    {
        atmvccaal5cpcsreceivesdusize = value;
    }
    if(value_path == "atmVccAal5CpcsTransmitSduSize")
    {
        atmvccaal5cpcstransmitsdusize = value;
    }
    if(value_path == "atmVccAal5EncapsType")
    {
        atmvccaal5encapstype = value;
    }
    if(value_path == "atmVccAalType")
    {
        atmvccaaltype = value;
    }
    if(value_path == "atmVclAdminStatus")
    {
        atmvcladminstatus = value;
    }
    if(value_path == "atmVclCastType")
    {
        atmvclcasttype = value;
    }
    if(value_path == "atmVclConnKind")
    {
        atmvclconnkind = value;
    }
    if(value_path == "atmVclCrossConnectIdentifier")
    {
        atmvclcrossconnectidentifier = value;
    }
    if(value_path == "atmVclLastChange")
    {
        atmvcllastchange = value;
    }
    if(value_path == "atmVclOperStatus")
    {
        atmvcloperstatus = value;
    }
    if(value_path == "atmVclReceiveTrafficDescrIndex")
    {
        atmvclreceivetrafficdescrindex = value;
    }
    if(value_path == "atmVclRowStatus")
    {
        atmvclrowstatus = value;
    }
    if(value_path == "atmVclTransmitTrafficDescrIndex")
    {
        atmvcltransmittrafficdescrindex = value;
    }
    if(value_path == "catmxVclOamCellsDropped")
    {
        catmxvcloamcellsdropped = value;
    }
    if(value_path == "catmxVclOamCellsReceived")
    {
        catmxvcloamcellsreceived = value;
    }
    if(value_path == "catmxVclOamCellsSent")
    {
        catmxvcloamcellssent = value;
    }
    if(value_path == "catmxVclOamDownRetryCount")
    {
        catmxvcloamdownretrycount = value;
    }
    if(value_path == "catmxVclOamEndCCActCount")
    {
        catmxvcloamendccactcount = value;
    }
    if(value_path == "catmxVclOamEndCCDeActCount")
    {
        catmxvcloamendccdeactcount = value;
    }
    if(value_path == "catmxVclOamEndCCRetryFreq")
    {
        catmxvcloamendccretryfreq = value;
    }
    if(value_path == "catmxVclOamEndCCStatus")
    {
        catmxvcloamendccstatus = value;
    }
    if(value_path == "catmxVclOamEndCCVcState")
    {
        catmxvcloamendccvcstate = value;
    }
    if(value_path == "catmxVclOamInF5ais")
    {
        catmxvcloaminf5ais = value;
    }
    if(value_path == "catmxVclOamInF5rdi")
    {
        catmxvcloaminf5rdi = value;
    }
    if(value_path == "catmxVclOamLoopbackFreq")
    {
        catmxvcloamloopbackfreq = value;
    }
    if(value_path == "catmxVclOamLoopBkStatus")
    {
        catmxvcloamloopbkstatus = value;
    }
    if(value_path == "catmxVclOamManage")
    {
        catmxvcloammanage = value;
    }
    if(value_path == "catmxVclOamOutF5ais")
    {
        catmxvcloamoutf5ais = value;
    }
    if(value_path == "catmxVclOamOutF5rdi")
    {
        catmxvcloamoutf5rdi = value;
    }
    if(value_path == "catmxVclOamRetryFreq")
    {
        catmxvcloamretryfreq = value;
    }
    if(value_path == "catmxVclOamSegCCActCount")
    {
        catmxvcloamsegccactcount = value;
    }
    if(value_path == "catmxVclOamSegCCDeActCount")
    {
        catmxvcloamsegccdeactcount = value;
    }
    if(value_path == "catmxVclOamSegCCRetryFreq")
    {
        catmxvcloamsegccretryfreq = value;
    }
    if(value_path == "catmxVclOamSegCCStatus")
    {
        catmxvcloamsegccstatus = value;
    }
    if(value_path == "catmxVclOamSegCCVcState")
    {
        catmxvcloamsegccvcstate = value;
    }
    if(value_path == "catmxVclOamUpRetryCount")
    {
        catmxvcloamupretrycount = value;
    }
    if(value_path == "catmxVclOamVcState")
    {
        catmxvcloamvcstate = value;
    }
}

AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnecttable()
{
    yang_name = "atmVpCrossConnectTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atmvpcrossconnecttable::~Atmvpcrossconnecttable()
{
}

bool AtmMib::Atmvpcrossconnecttable::has_data() const
{
    for (std::size_t index=0; index<atmvpcrossconnectentry_.size(); index++)
    {
        if(atmvpcrossconnectentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atmvpcrossconnecttable::has_operation() const
{
    for (std::size_t index=0; index<atmvpcrossconnectentry_.size(); index++)
    {
        if(atmvpcrossconnectentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atmvpcrossconnecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVpCrossConnectTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvpcrossconnecttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvpcrossconnecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVpCrossConnectEntry")
    {
        for(auto const & c : atmvpcrossconnectentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry>();
        c->parent = this;
        atmvpcrossconnectentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvpcrossconnecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvpcrossconnectentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atmvpcrossconnecttable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::Atmvpcrossconnectentry()
    :
    atmvpcrossconnectindex{YType::int32, "atmVpCrossConnectIndex"},
    atmvpcrossconnectlowifindex{YType::int32, "atmVpCrossConnectLowIfIndex"},
    atmvpcrossconnectlowvpi{YType::int32, "atmVpCrossConnectLowVpi"},
    atmvpcrossconnecthighifindex{YType::int32, "atmVpCrossConnectHighIfIndex"},
    atmvpcrossconnecthighvpi{YType::int32, "atmVpCrossConnectHighVpi"},
    atmvpcrossconnectadminstatus{YType::enumeration, "atmVpCrossConnectAdminStatus"},
    atmvpcrossconnecth2llastchange{YType::uint32, "atmVpCrossConnectH2LLastChange"},
    atmvpcrossconnecth2loperstatus{YType::enumeration, "atmVpCrossConnectH2LOperStatus"},
    atmvpcrossconnectl2hlastchange{YType::uint32, "atmVpCrossConnectL2HLastChange"},
    atmvpcrossconnectl2hoperstatus{YType::enumeration, "atmVpCrossConnectL2HOperStatus"},
    atmvpcrossconnectrowstatus{YType::enumeration, "atmVpCrossConnectRowStatus"}
{
    yang_name = "atmVpCrossConnectEntry"; yang_parent_name = "atmVpCrossConnectTable";
}

AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::~Atmvpcrossconnectentry()
{
}

bool AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::has_data() const
{
    return atmvpcrossconnectindex.is_set
	|| atmvpcrossconnectlowifindex.is_set
	|| atmvpcrossconnectlowvpi.is_set
	|| atmvpcrossconnecthighifindex.is_set
	|| atmvpcrossconnecthighvpi.is_set
	|| atmvpcrossconnectadminstatus.is_set
	|| atmvpcrossconnecth2llastchange.is_set
	|| atmvpcrossconnecth2loperstatus.is_set
	|| atmvpcrossconnectl2hlastchange.is_set
	|| atmvpcrossconnectl2hoperstatus.is_set
	|| atmvpcrossconnectrowstatus.is_set;
}

bool AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::has_operation() const
{
    return is_set(operation)
	|| is_set(atmvpcrossconnectindex.operation)
	|| is_set(atmvpcrossconnectlowifindex.operation)
	|| is_set(atmvpcrossconnectlowvpi.operation)
	|| is_set(atmvpcrossconnecthighifindex.operation)
	|| is_set(atmvpcrossconnecthighvpi.operation)
	|| is_set(atmvpcrossconnectadminstatus.operation)
	|| is_set(atmvpcrossconnecth2llastchange.operation)
	|| is_set(atmvpcrossconnecth2loperstatus.operation)
	|| is_set(atmvpcrossconnectl2hlastchange.operation)
	|| is_set(atmvpcrossconnectl2hoperstatus.operation)
	|| is_set(atmvpcrossconnectrowstatus.operation);
}

std::string AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVpCrossConnectEntry" <<"[atmVpCrossConnectIndex='" <<atmvpcrossconnectindex <<"']" <<"[atmVpCrossConnectLowIfIndex='" <<atmvpcrossconnectlowifindex <<"']" <<"[atmVpCrossConnectLowVpi='" <<atmvpcrossconnectlowvpi <<"']" <<"[atmVpCrossConnectHighIfIndex='" <<atmvpcrossconnecthighifindex <<"']" <<"[atmVpCrossConnectHighVpi='" <<atmvpcrossconnecthighvpi <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmVpCrossConnectTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmvpcrossconnectindex.is_set || is_set(atmvpcrossconnectindex.operation)) leaf_name_data.push_back(atmvpcrossconnectindex.get_name_leafdata());
    if (atmvpcrossconnectlowifindex.is_set || is_set(atmvpcrossconnectlowifindex.operation)) leaf_name_data.push_back(atmvpcrossconnectlowifindex.get_name_leafdata());
    if (atmvpcrossconnectlowvpi.is_set || is_set(atmvpcrossconnectlowvpi.operation)) leaf_name_data.push_back(atmvpcrossconnectlowvpi.get_name_leafdata());
    if (atmvpcrossconnecthighifindex.is_set || is_set(atmvpcrossconnecthighifindex.operation)) leaf_name_data.push_back(atmvpcrossconnecthighifindex.get_name_leafdata());
    if (atmvpcrossconnecthighvpi.is_set || is_set(atmvpcrossconnecthighvpi.operation)) leaf_name_data.push_back(atmvpcrossconnecthighvpi.get_name_leafdata());
    if (atmvpcrossconnectadminstatus.is_set || is_set(atmvpcrossconnectadminstatus.operation)) leaf_name_data.push_back(atmvpcrossconnectadminstatus.get_name_leafdata());
    if (atmvpcrossconnecth2llastchange.is_set || is_set(atmvpcrossconnecth2llastchange.operation)) leaf_name_data.push_back(atmvpcrossconnecth2llastchange.get_name_leafdata());
    if (atmvpcrossconnecth2loperstatus.is_set || is_set(atmvpcrossconnecth2loperstatus.operation)) leaf_name_data.push_back(atmvpcrossconnecth2loperstatus.get_name_leafdata());
    if (atmvpcrossconnectl2hlastchange.is_set || is_set(atmvpcrossconnectl2hlastchange.operation)) leaf_name_data.push_back(atmvpcrossconnectl2hlastchange.get_name_leafdata());
    if (atmvpcrossconnectl2hoperstatus.is_set || is_set(atmvpcrossconnectl2hoperstatus.operation)) leaf_name_data.push_back(atmvpcrossconnectl2hoperstatus.get_name_leafdata());
    if (atmvpcrossconnectrowstatus.is_set || is_set(atmvpcrossconnectrowstatus.operation)) leaf_name_data.push_back(atmvpcrossconnectrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atmVpCrossConnectIndex")
    {
        atmvpcrossconnectindex = value;
    }
    if(value_path == "atmVpCrossConnectLowIfIndex")
    {
        atmvpcrossconnectlowifindex = value;
    }
    if(value_path == "atmVpCrossConnectLowVpi")
    {
        atmvpcrossconnectlowvpi = value;
    }
    if(value_path == "atmVpCrossConnectHighIfIndex")
    {
        atmvpcrossconnecthighifindex = value;
    }
    if(value_path == "atmVpCrossConnectHighVpi")
    {
        atmvpcrossconnecthighvpi = value;
    }
    if(value_path == "atmVpCrossConnectAdminStatus")
    {
        atmvpcrossconnectadminstatus = value;
    }
    if(value_path == "atmVpCrossConnectH2LLastChange")
    {
        atmvpcrossconnecth2llastchange = value;
    }
    if(value_path == "atmVpCrossConnectH2LOperStatus")
    {
        atmvpcrossconnecth2loperstatus = value;
    }
    if(value_path == "atmVpCrossConnectL2HLastChange")
    {
        atmvpcrossconnectl2hlastchange = value;
    }
    if(value_path == "atmVpCrossConnectL2HOperStatus")
    {
        atmvpcrossconnectl2hoperstatus = value;
    }
    if(value_path == "atmVpCrossConnectRowStatus")
    {
        atmvpcrossconnectrowstatus = value;
    }
}

AtmMib::Atmvccrossconnecttable::Atmvccrossconnecttable()
{
    yang_name = "atmVcCrossConnectTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Atmvccrossconnecttable::~Atmvccrossconnecttable()
{
}

bool AtmMib::Atmvccrossconnecttable::has_data() const
{
    for (std::size_t index=0; index<atmvccrossconnectentry_.size(); index++)
    {
        if(atmvccrossconnectentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Atmvccrossconnecttable::has_operation() const
{
    for (std::size_t index=0; index<atmvccrossconnectentry_.size(); index++)
    {
        if(atmvccrossconnectentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Atmvccrossconnecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVcCrossConnectTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvccrossconnecttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvccrossconnecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmVcCrossConnectEntry")
    {
        for(auto const & c : atmvccrossconnectentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry>();
        c->parent = this;
        atmvccrossconnectentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvccrossconnecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atmvccrossconnectentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Atmvccrossconnecttable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::Atmvccrossconnectentry()
    :
    atmvccrossconnectindex{YType::int32, "atmVcCrossConnectIndex"},
    atmvccrossconnectlowifindex{YType::int32, "atmVcCrossConnectLowIfIndex"},
    atmvccrossconnectlowvpi{YType::int32, "atmVcCrossConnectLowVpi"},
    atmvccrossconnectlowvci{YType::int32, "atmVcCrossConnectLowVci"},
    atmvccrossconnecthighifindex{YType::int32, "atmVcCrossConnectHighIfIndex"},
    atmvccrossconnecthighvpi{YType::int32, "atmVcCrossConnectHighVpi"},
    atmvccrossconnecthighvci{YType::int32, "atmVcCrossConnectHighVci"},
    atmvccrossconnectadminstatus{YType::enumeration, "atmVcCrossConnectAdminStatus"},
    atmvccrossconnecth2llastchange{YType::uint32, "atmVcCrossConnectH2LLastChange"},
    atmvccrossconnecth2loperstatus{YType::enumeration, "atmVcCrossConnectH2LOperStatus"},
    atmvccrossconnectl2hlastchange{YType::uint32, "atmVcCrossConnectL2HLastChange"},
    atmvccrossconnectl2hoperstatus{YType::enumeration, "atmVcCrossConnectL2HOperStatus"},
    atmvccrossconnectrowstatus{YType::enumeration, "atmVcCrossConnectRowStatus"}
{
    yang_name = "atmVcCrossConnectEntry"; yang_parent_name = "atmVcCrossConnectTable";
}

AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::~Atmvccrossconnectentry()
{
}

bool AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::has_data() const
{
    return atmvccrossconnectindex.is_set
	|| atmvccrossconnectlowifindex.is_set
	|| atmvccrossconnectlowvpi.is_set
	|| atmvccrossconnectlowvci.is_set
	|| atmvccrossconnecthighifindex.is_set
	|| atmvccrossconnecthighvpi.is_set
	|| atmvccrossconnecthighvci.is_set
	|| atmvccrossconnectadminstatus.is_set
	|| atmvccrossconnecth2llastchange.is_set
	|| atmvccrossconnecth2loperstatus.is_set
	|| atmvccrossconnectl2hlastchange.is_set
	|| atmvccrossconnectl2hoperstatus.is_set
	|| atmvccrossconnectrowstatus.is_set;
}

bool AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::has_operation() const
{
    return is_set(operation)
	|| is_set(atmvccrossconnectindex.operation)
	|| is_set(atmvccrossconnectlowifindex.operation)
	|| is_set(atmvccrossconnectlowvpi.operation)
	|| is_set(atmvccrossconnectlowvci.operation)
	|| is_set(atmvccrossconnecthighifindex.operation)
	|| is_set(atmvccrossconnecthighvpi.operation)
	|| is_set(atmvccrossconnecthighvci.operation)
	|| is_set(atmvccrossconnectadminstatus.operation)
	|| is_set(atmvccrossconnecth2llastchange.operation)
	|| is_set(atmvccrossconnecth2loperstatus.operation)
	|| is_set(atmvccrossconnectl2hlastchange.operation)
	|| is_set(atmvccrossconnectl2hoperstatus.operation)
	|| is_set(atmvccrossconnectrowstatus.operation);
}

std::string AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmVcCrossConnectEntry" <<"[atmVcCrossConnectIndex='" <<atmvccrossconnectindex <<"']" <<"[atmVcCrossConnectLowIfIndex='" <<atmvccrossconnectlowifindex <<"']" <<"[atmVcCrossConnectLowVpi='" <<atmvccrossconnectlowvpi <<"']" <<"[atmVcCrossConnectLowVci='" <<atmvccrossconnectlowvci <<"']" <<"[atmVcCrossConnectHighIfIndex='" <<atmvccrossconnecthighifindex <<"']" <<"[atmVcCrossConnectHighVpi='" <<atmvccrossconnecthighvpi <<"']" <<"[atmVcCrossConnectHighVci='" <<atmvccrossconnecthighvci <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/atmVcCrossConnectTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atmvccrossconnectindex.is_set || is_set(atmvccrossconnectindex.operation)) leaf_name_data.push_back(atmvccrossconnectindex.get_name_leafdata());
    if (atmvccrossconnectlowifindex.is_set || is_set(atmvccrossconnectlowifindex.operation)) leaf_name_data.push_back(atmvccrossconnectlowifindex.get_name_leafdata());
    if (atmvccrossconnectlowvpi.is_set || is_set(atmvccrossconnectlowvpi.operation)) leaf_name_data.push_back(atmvccrossconnectlowvpi.get_name_leafdata());
    if (atmvccrossconnectlowvci.is_set || is_set(atmvccrossconnectlowvci.operation)) leaf_name_data.push_back(atmvccrossconnectlowvci.get_name_leafdata());
    if (atmvccrossconnecthighifindex.is_set || is_set(atmvccrossconnecthighifindex.operation)) leaf_name_data.push_back(atmvccrossconnecthighifindex.get_name_leafdata());
    if (atmvccrossconnecthighvpi.is_set || is_set(atmvccrossconnecthighvpi.operation)) leaf_name_data.push_back(atmvccrossconnecthighvpi.get_name_leafdata());
    if (atmvccrossconnecthighvci.is_set || is_set(atmvccrossconnecthighvci.operation)) leaf_name_data.push_back(atmvccrossconnecthighvci.get_name_leafdata());
    if (atmvccrossconnectadminstatus.is_set || is_set(atmvccrossconnectadminstatus.operation)) leaf_name_data.push_back(atmvccrossconnectadminstatus.get_name_leafdata());
    if (atmvccrossconnecth2llastchange.is_set || is_set(atmvccrossconnecth2llastchange.operation)) leaf_name_data.push_back(atmvccrossconnecth2llastchange.get_name_leafdata());
    if (atmvccrossconnecth2loperstatus.is_set || is_set(atmvccrossconnecth2loperstatus.operation)) leaf_name_data.push_back(atmvccrossconnecth2loperstatus.get_name_leafdata());
    if (atmvccrossconnectl2hlastchange.is_set || is_set(atmvccrossconnectl2hlastchange.operation)) leaf_name_data.push_back(atmvccrossconnectl2hlastchange.get_name_leafdata());
    if (atmvccrossconnectl2hoperstatus.is_set || is_set(atmvccrossconnectl2hoperstatus.operation)) leaf_name_data.push_back(atmvccrossconnectl2hoperstatus.get_name_leafdata());
    if (atmvccrossconnectrowstatus.is_set || is_set(atmvccrossconnectrowstatus.operation)) leaf_name_data.push_back(atmvccrossconnectrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atmVcCrossConnectIndex")
    {
        atmvccrossconnectindex = value;
    }
    if(value_path == "atmVcCrossConnectLowIfIndex")
    {
        atmvccrossconnectlowifindex = value;
    }
    if(value_path == "atmVcCrossConnectLowVpi")
    {
        atmvccrossconnectlowvpi = value;
    }
    if(value_path == "atmVcCrossConnectLowVci")
    {
        atmvccrossconnectlowvci = value;
    }
    if(value_path == "atmVcCrossConnectHighIfIndex")
    {
        atmvccrossconnecthighifindex = value;
    }
    if(value_path == "atmVcCrossConnectHighVpi")
    {
        atmvccrossconnecthighvpi = value;
    }
    if(value_path == "atmVcCrossConnectHighVci")
    {
        atmvccrossconnecthighvci = value;
    }
    if(value_path == "atmVcCrossConnectAdminStatus")
    {
        atmvccrossconnectadminstatus = value;
    }
    if(value_path == "atmVcCrossConnectH2LLastChange")
    {
        atmvccrossconnecth2llastchange = value;
    }
    if(value_path == "atmVcCrossConnectH2LOperStatus")
    {
        atmvccrossconnecth2loperstatus = value;
    }
    if(value_path == "atmVcCrossConnectL2HLastChange")
    {
        atmvccrossconnectl2hlastchange = value;
    }
    if(value_path == "atmVcCrossConnectL2HOperStatus")
    {
        atmvccrossconnectl2hoperstatus = value;
    }
    if(value_path == "atmVcCrossConnectRowStatus")
    {
        atmvccrossconnectrowstatus = value;
    }
}

AtmMib::Aal5Vcctable::Aal5Vcctable()
{
    yang_name = "aal5VccTable"; yang_parent_name = "ATM-MIB";
}

AtmMib::Aal5Vcctable::~Aal5Vcctable()
{
}

bool AtmMib::Aal5Vcctable::has_data() const
{
    for (std::size_t index=0; index<aal5vccentry_.size(); index++)
    {
        if(aal5vccentry_[index]->has_data())
            return true;
    }
    return false;
}

bool AtmMib::Aal5Vcctable::has_operation() const
{
    for (std::size_t index=0; index<aal5vccentry_.size(); index++)
    {
        if(aal5vccentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AtmMib::Aal5Vcctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5VccTable";

    return path_buffer.str();

}

const EntityPath AtmMib::Aal5Vcctable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Aal5Vcctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aal5VccEntry")
    {
        for(auto const & c : aal5vccentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AtmMib::Aal5Vcctable::Aal5Vccentry>();
        c->parent = this;
        aal5vccentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Aal5Vcctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aal5vccentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AtmMib::Aal5Vcctable::set_value(const std::string & value_path, std::string value)
{
}

AtmMib::Aal5Vcctable::Aal5Vccentry::Aal5Vccentry()
    :
    ifindex{YType::str, "ifIndex"},
    aal5vccvpi{YType::int32, "aal5VccVpi"},
    aal5vccvci{YType::int32, "aal5VccVci"},
    aal5vcccrcerrors{YType::uint32, "aal5VccCrcErrors"},
    aal5vccoversizedsdus{YType::uint32, "aal5VccOverSizedSDUs"},
    aal5vccsartimeouts{YType::uint32, "aal5VccSarTimeOuts"},
    caal5vccextcompenabled{YType::boolean, "CISCO-ATM-EXT-MIB:cAal5VccExtCompEnabled"},
    caal5vccextinf5oamcells{YType::uint32, "CISCO-ATM-EXT-MIB:cAal5VccExtInF5OamCells"},
    caal5vccextoutf5oamcells{YType::uint32, "CISCO-ATM-EXT-MIB:cAal5VccExtOutF5OamCells"},
    caal5vccextvoice{YType::boolean, "CISCO-ATM-EXT-MIB:cAal5VccExtVoice"},
    caal5vcchcinoctets{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCInOctets"},
    caal5vcchcinpkts{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCInPkts"},
    caal5vcchcoutoctets{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCOutOctets"},
    caal5vcchcoutpkts{YType::uint64, "CISCO-AAL5-MIB:cAal5VccHCOutPkts"},
    caal5vccindroppedoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInDroppedOctets"},
    caal5vccindroppedpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInDroppedPkts"},
    caal5vccinoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInOctets"},
    caal5vccinpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccInPkts"},
    caal5vccoutdroppedoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutDroppedOctets"},
    caal5vccoutdroppedpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutDroppedPkts"},
    caal5vccoutoctets{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutOctets"},
    caal5vccoutpkts{YType::uint32, "CISCO-AAL5-MIB:cAal5VccOutPkts"}
{
    yang_name = "aal5VccEntry"; yang_parent_name = "aal5VccTable";
}

AtmMib::Aal5Vcctable::Aal5Vccentry::~Aal5Vccentry()
{
}

bool AtmMib::Aal5Vcctable::Aal5Vccentry::has_data() const
{
    return ifindex.is_set
	|| aal5vccvpi.is_set
	|| aal5vccvci.is_set
	|| aal5vcccrcerrors.is_set
	|| aal5vccoversizedsdus.is_set
	|| aal5vccsartimeouts.is_set
	|| caal5vccextcompenabled.is_set
	|| caal5vccextinf5oamcells.is_set
	|| caal5vccextoutf5oamcells.is_set
	|| caal5vccextvoice.is_set
	|| caal5vcchcinoctets.is_set
	|| caal5vcchcinpkts.is_set
	|| caal5vcchcoutoctets.is_set
	|| caal5vcchcoutpkts.is_set
	|| caal5vccindroppedoctets.is_set
	|| caal5vccindroppedpkts.is_set
	|| caal5vccinoctets.is_set
	|| caal5vccinpkts.is_set
	|| caal5vccoutdroppedoctets.is_set
	|| caal5vccoutdroppedpkts.is_set
	|| caal5vccoutoctets.is_set
	|| caal5vccoutpkts.is_set;
}

bool AtmMib::Aal5Vcctable::Aal5Vccentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(aal5vccvpi.operation)
	|| is_set(aal5vccvci.operation)
	|| is_set(aal5vcccrcerrors.operation)
	|| is_set(aal5vccoversizedsdus.operation)
	|| is_set(aal5vccsartimeouts.operation)
	|| is_set(caal5vccextcompenabled.operation)
	|| is_set(caal5vccextinf5oamcells.operation)
	|| is_set(caal5vccextoutf5oamcells.operation)
	|| is_set(caal5vccextvoice.operation)
	|| is_set(caal5vcchcinoctets.operation)
	|| is_set(caal5vcchcinpkts.operation)
	|| is_set(caal5vcchcoutoctets.operation)
	|| is_set(caal5vcchcoutpkts.operation)
	|| is_set(caal5vccindroppedoctets.operation)
	|| is_set(caal5vccindroppedpkts.operation)
	|| is_set(caal5vccinoctets.operation)
	|| is_set(caal5vccinpkts.operation)
	|| is_set(caal5vccoutdroppedoctets.operation)
	|| is_set(caal5vccoutdroppedpkts.operation)
	|| is_set(caal5vccoutoctets.operation)
	|| is_set(caal5vccoutpkts.operation);
}

std::string AtmMib::Aal5Vcctable::Aal5Vccentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5VccEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[aal5VccVpi='" <<aal5vccvpi <<"']" <<"[aal5VccVci='" <<aal5vccvci <<"']";

    return path_buffer.str();

}

const EntityPath AtmMib::Aal5Vcctable::Aal5Vccentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ATM-MIB:ATM-MIB/aal5VccTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (aal5vccvpi.is_set || is_set(aal5vccvpi.operation)) leaf_name_data.push_back(aal5vccvpi.get_name_leafdata());
    if (aal5vccvci.is_set || is_set(aal5vccvci.operation)) leaf_name_data.push_back(aal5vccvci.get_name_leafdata());
    if (aal5vcccrcerrors.is_set || is_set(aal5vcccrcerrors.operation)) leaf_name_data.push_back(aal5vcccrcerrors.get_name_leafdata());
    if (aal5vccoversizedsdus.is_set || is_set(aal5vccoversizedsdus.operation)) leaf_name_data.push_back(aal5vccoversizedsdus.get_name_leafdata());
    if (aal5vccsartimeouts.is_set || is_set(aal5vccsartimeouts.operation)) leaf_name_data.push_back(aal5vccsartimeouts.get_name_leafdata());
    if (caal5vccextcompenabled.is_set || is_set(caal5vccextcompenabled.operation)) leaf_name_data.push_back(caal5vccextcompenabled.get_name_leafdata());
    if (caal5vccextinf5oamcells.is_set || is_set(caal5vccextinf5oamcells.operation)) leaf_name_data.push_back(caal5vccextinf5oamcells.get_name_leafdata());
    if (caal5vccextoutf5oamcells.is_set || is_set(caal5vccextoutf5oamcells.operation)) leaf_name_data.push_back(caal5vccextoutf5oamcells.get_name_leafdata());
    if (caal5vccextvoice.is_set || is_set(caal5vccextvoice.operation)) leaf_name_data.push_back(caal5vccextvoice.get_name_leafdata());
    if (caal5vcchcinoctets.is_set || is_set(caal5vcchcinoctets.operation)) leaf_name_data.push_back(caal5vcchcinoctets.get_name_leafdata());
    if (caal5vcchcinpkts.is_set || is_set(caal5vcchcinpkts.operation)) leaf_name_data.push_back(caal5vcchcinpkts.get_name_leafdata());
    if (caal5vcchcoutoctets.is_set || is_set(caal5vcchcoutoctets.operation)) leaf_name_data.push_back(caal5vcchcoutoctets.get_name_leafdata());
    if (caal5vcchcoutpkts.is_set || is_set(caal5vcchcoutpkts.operation)) leaf_name_data.push_back(caal5vcchcoutpkts.get_name_leafdata());
    if (caal5vccindroppedoctets.is_set || is_set(caal5vccindroppedoctets.operation)) leaf_name_data.push_back(caal5vccindroppedoctets.get_name_leafdata());
    if (caal5vccindroppedpkts.is_set || is_set(caal5vccindroppedpkts.operation)) leaf_name_data.push_back(caal5vccindroppedpkts.get_name_leafdata());
    if (caal5vccinoctets.is_set || is_set(caal5vccinoctets.operation)) leaf_name_data.push_back(caal5vccinoctets.get_name_leafdata());
    if (caal5vccinpkts.is_set || is_set(caal5vccinpkts.operation)) leaf_name_data.push_back(caal5vccinpkts.get_name_leafdata());
    if (caal5vccoutdroppedoctets.is_set || is_set(caal5vccoutdroppedoctets.operation)) leaf_name_data.push_back(caal5vccoutdroppedoctets.get_name_leafdata());
    if (caal5vccoutdroppedpkts.is_set || is_set(caal5vccoutdroppedpkts.operation)) leaf_name_data.push_back(caal5vccoutdroppedpkts.get_name_leafdata());
    if (caal5vccoutoctets.is_set || is_set(caal5vccoutoctets.operation)) leaf_name_data.push_back(caal5vccoutoctets.get_name_leafdata());
    if (caal5vccoutpkts.is_set || is_set(caal5vccoutpkts.operation)) leaf_name_data.push_back(caal5vccoutpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AtmMib::Aal5Vcctable::Aal5Vccentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AtmMib::Aal5Vcctable::Aal5Vccentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AtmMib::Aal5Vcctable::Aal5Vccentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "aal5VccVpi")
    {
        aal5vccvpi = value;
    }
    if(value_path == "aal5VccVci")
    {
        aal5vccvci = value;
    }
    if(value_path == "aal5VccCrcErrors")
    {
        aal5vcccrcerrors = value;
    }
    if(value_path == "aal5VccOverSizedSDUs")
    {
        aal5vccoversizedsdus = value;
    }
    if(value_path == "aal5VccSarTimeOuts")
    {
        aal5vccsartimeouts = value;
    }
    if(value_path == "cAal5VccExtCompEnabled")
    {
        caal5vccextcompenabled = value;
    }
    if(value_path == "cAal5VccExtInF5OamCells")
    {
        caal5vccextinf5oamcells = value;
    }
    if(value_path == "cAal5VccExtOutF5OamCells")
    {
        caal5vccextoutf5oamcells = value;
    }
    if(value_path == "cAal5VccExtVoice")
    {
        caal5vccextvoice = value;
    }
    if(value_path == "cAal5VccHCInOctets")
    {
        caal5vcchcinoctets = value;
    }
    if(value_path == "cAal5VccHCInPkts")
    {
        caal5vcchcinpkts = value;
    }
    if(value_path == "cAal5VccHCOutOctets")
    {
        caal5vcchcoutoctets = value;
    }
    if(value_path == "cAal5VccHCOutPkts")
    {
        caal5vcchcoutpkts = value;
    }
    if(value_path == "cAal5VccInDroppedOctets")
    {
        caal5vccindroppedoctets = value;
    }
    if(value_path == "cAal5VccInDroppedPkts")
    {
        caal5vccindroppedpkts = value;
    }
    if(value_path == "cAal5VccInOctets")
    {
        caal5vccinoctets = value;
    }
    if(value_path == "cAal5VccInPkts")
    {
        caal5vccinpkts = value;
    }
    if(value_path == "cAal5VccOutDroppedOctets")
    {
        caal5vccoutdroppedoctets = value;
    }
    if(value_path == "cAal5VccOutDroppedPkts")
    {
        caal5vccoutdroppedpkts = value;
    }
    if(value_path == "cAal5VccOutOctets")
    {
        caal5vccoutoctets = value;
    }
    if(value_path == "cAal5VccOutPkts")
    {
        caal5vccoutpkts = value;
    }
}

const Enum::YLeaf AtmMib::Atminterfaceconftable::Atminterfaceconfentry::AtminterfaceaddresstypeEnum::private_ {1, "private"};
const Enum::YLeaf AtmMib::Atminterfaceconftable::Atminterfaceconfentry::AtminterfaceaddresstypeEnum::nsapE164 {2, "nsapE164"};
const Enum::YLeaf AtmMib::Atminterfaceconftable::Atminterfaceconfentry::AtminterfaceaddresstypeEnum::nativeE164 {3, "nativeE164"};
const Enum::YLeaf AtmMib::Atminterfaceconftable::Atminterfaceconfentry::AtminterfaceaddresstypeEnum::other {4, "other"};

const Enum::YLeaf AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3PlcpalarmstateEnum::noAlarm {1, "noAlarm"};
const Enum::YLeaf AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3PlcpalarmstateEnum::receivedFarEndAlarm {2, "receivedFarEndAlarm"};
const Enum::YLeaf AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3PlcpalarmstateEnum::incomingLOF {3, "incomingLOF"};

const Enum::YLeaf AtmMib::Atminterfacetctable::Atminterfacetcentry::AtminterfacetcalarmstateEnum::noAlarm {1, "noAlarm"};
const Enum::YLeaf AtmMib::Atminterfacetctable::Atminterfacetcentry::AtminterfacetcalarmstateEnum::lcdFailure {2, "lcdFailure"};

const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum::aal1 {1, "aal1"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum::aal34 {2, "aal34"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum::aal5 {3, "aal5"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum::other {4, "other"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum::unknown {5, "unknown"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum::aal2 {6, "aal2"};

const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::vcMultiplexRoutedProtocol {1, "vcMultiplexRoutedProtocol"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::vcMultiplexBridgedProtocol8023 {2, "vcMultiplexBridgedProtocol8023"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::vcMultiplexBridgedProtocol8025 {3, "vcMultiplexBridgedProtocol8025"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::vcMultiplexBridgedProtocol8026 {4, "vcMultiplexBridgedProtocol8026"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::vcMultiplexLANemulation8023 {5, "vcMultiplexLANemulation8023"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::vcMultiplexLANemulation8025 {6, "vcMultiplexLANemulation8025"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::llcEncapsulation {7, "llcEncapsulation"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::multiprotocolFrameRelaySscs {8, "multiprotocolFrameRelaySscs"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::other {9, "other"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum::unknown {10, "unknown"};

const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamloopbkstatusEnum::disabled {1, "disabled"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamloopbkstatusEnum::sent {2, "sent"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamloopbkstatusEnum::received {3, "received"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamloopbkstatusEnum::failed {4, "failed"};

const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::downRetry {1, "downRetry"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::verified {2, "verified"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::notVerified {3, "notVerified"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::upRetry {4, "upRetry"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::aisRDI {5, "aisRDI"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::aisOut {6, "aisOut"};
const Enum::YLeaf AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum::notManaged {7, "notManaged"};


}
}

