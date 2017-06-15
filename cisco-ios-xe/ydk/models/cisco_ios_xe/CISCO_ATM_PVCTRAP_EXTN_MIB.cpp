
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_PVCTRAP_EXTN_MIB.hpp"

namespace ydk {
namespace CISCO_ATM_PVCTRAP_EXTN_MIB {

CiscoAtmPvctrapExtnMib::CiscoAtmPvctrapExtnMib()
    :
    catmaisrdistatuschpvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable>())
	,catmaisrdistatusuppvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable>())
	,catmcurstatchangepvcltable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable>())
	,catmcurstatusuppvcltable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable>())
	,catmdownpvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable>())
	,catmendccstatuschpvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable>())
	,catmendccstatusuppvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable>())
	,catmsegccstatuschpvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable>())
	,catmsegccstatusuppvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable>())
	,catmstatuschangepvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable>())
	,catmstatusuppvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable>())
	,catmuppvclrangetable_(std::make_shared<CiscoAtmPvctrapExtnMib::Catmuppvclrangetable>())
{
    catmaisrdistatuschpvclrangetable_->parent = this;

    catmaisrdistatusuppvclrangetable_->parent = this;

    catmcurstatchangepvcltable_->parent = this;

    catmcurstatusuppvcltable_->parent = this;

    catmdownpvclrangetable_->parent = this;

    catmendccstatuschpvclrangetable_->parent = this;

    catmendccstatusuppvclrangetable_->parent = this;

    catmsegccstatuschpvclrangetable_->parent = this;

    catmsegccstatusuppvclrangetable_->parent = this;

    catmstatuschangepvclrangetable_->parent = this;

    catmstatusuppvclrangetable_->parent = this;

    catmuppvclrangetable_->parent = this;

    yang_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::~CiscoAtmPvctrapExtnMib()
{
}

bool CiscoAtmPvctrapExtnMib::has_data() const
{
    return (catmaisrdistatuschpvclrangetable_ !=  nullptr && catmaisrdistatuschpvclrangetable_->has_data())
	|| (catmaisrdistatusuppvclrangetable_ !=  nullptr && catmaisrdistatusuppvclrangetable_->has_data())
	|| (catmcurstatchangepvcltable_ !=  nullptr && catmcurstatchangepvcltable_->has_data())
	|| (catmcurstatusuppvcltable_ !=  nullptr && catmcurstatusuppvcltable_->has_data())
	|| (catmdownpvclrangetable_ !=  nullptr && catmdownpvclrangetable_->has_data())
	|| (catmendccstatuschpvclrangetable_ !=  nullptr && catmendccstatuschpvclrangetable_->has_data())
	|| (catmendccstatusuppvclrangetable_ !=  nullptr && catmendccstatusuppvclrangetable_->has_data())
	|| (catmsegccstatuschpvclrangetable_ !=  nullptr && catmsegccstatuschpvclrangetable_->has_data())
	|| (catmsegccstatusuppvclrangetable_ !=  nullptr && catmsegccstatusuppvclrangetable_->has_data())
	|| (catmstatuschangepvclrangetable_ !=  nullptr && catmstatuschangepvclrangetable_->has_data())
	|| (catmstatusuppvclrangetable_ !=  nullptr && catmstatusuppvclrangetable_->has_data())
	|| (catmuppvclrangetable_ !=  nullptr && catmuppvclrangetable_->has_data());
}

bool CiscoAtmPvctrapExtnMib::has_operation() const
{
    return is_set(operation)
	|| (catmaisrdistatuschpvclrangetable_ !=  nullptr && catmaisrdistatuschpvclrangetable_->has_operation())
	|| (catmaisrdistatusuppvclrangetable_ !=  nullptr && catmaisrdistatusuppvclrangetable_->has_operation())
	|| (catmcurstatchangepvcltable_ !=  nullptr && catmcurstatchangepvcltable_->has_operation())
	|| (catmcurstatusuppvcltable_ !=  nullptr && catmcurstatusuppvcltable_->has_operation())
	|| (catmdownpvclrangetable_ !=  nullptr && catmdownpvclrangetable_->has_operation())
	|| (catmendccstatuschpvclrangetable_ !=  nullptr && catmendccstatuschpvclrangetable_->has_operation())
	|| (catmendccstatusuppvclrangetable_ !=  nullptr && catmendccstatusuppvclrangetable_->has_operation())
	|| (catmsegccstatuschpvclrangetable_ !=  nullptr && catmsegccstatuschpvclrangetable_->has_operation())
	|| (catmsegccstatusuppvclrangetable_ !=  nullptr && catmsegccstatusuppvclrangetable_->has_operation())
	|| (catmstatuschangepvclrangetable_ !=  nullptr && catmstatuschangepvclrangetable_->has_operation())
	|| (catmstatusuppvclrangetable_ !=  nullptr && catmstatusuppvclrangetable_->has_operation())
	|| (catmuppvclrangetable_ !=  nullptr && catmuppvclrangetable_->has_operation());
}

std::string CiscoAtmPvctrapExtnMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmAISRDIStatusChPVclRangeTable")
    {
        if(catmaisrdistatuschpvclrangetable_ == nullptr)
        {
            catmaisrdistatuschpvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable>();
        }
        return catmaisrdistatuschpvclrangetable_;
    }

    if(child_yang_name == "catmAISRDIStatusUpPVclRangeTable")
    {
        if(catmaisrdistatusuppvclrangetable_ == nullptr)
        {
            catmaisrdistatusuppvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable>();
        }
        return catmaisrdistatusuppvclrangetable_;
    }

    if(child_yang_name == "catmCurStatChangePVclTable")
    {
        if(catmcurstatchangepvcltable_ == nullptr)
        {
            catmcurstatchangepvcltable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable>();
        }
        return catmcurstatchangepvcltable_;
    }

    if(child_yang_name == "catmCurStatusUpPVclTable")
    {
        if(catmcurstatusuppvcltable_ == nullptr)
        {
            catmcurstatusuppvcltable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable>();
        }
        return catmcurstatusuppvcltable_;
    }

    if(child_yang_name == "catmDownPVclRangeTable")
    {
        if(catmdownpvclrangetable_ == nullptr)
        {
            catmdownpvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable>();
        }
        return catmdownpvclrangetable_;
    }

    if(child_yang_name == "catmEndCCStatusChPVclRangeTable")
    {
        if(catmendccstatuschpvclrangetable_ == nullptr)
        {
            catmendccstatuschpvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable>();
        }
        return catmendccstatuschpvclrangetable_;
    }

    if(child_yang_name == "catmEndCCStatusUpPVclRangeTable")
    {
        if(catmendccstatusuppvclrangetable_ == nullptr)
        {
            catmendccstatusuppvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable>();
        }
        return catmendccstatusuppvclrangetable_;
    }

    if(child_yang_name == "catmSegCCStatusChPVclRangeTable")
    {
        if(catmsegccstatuschpvclrangetable_ == nullptr)
        {
            catmsegccstatuschpvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable>();
        }
        return catmsegccstatuschpvclrangetable_;
    }

    if(child_yang_name == "catmSegCCStatusUpPVclRangeTable")
    {
        if(catmsegccstatusuppvclrangetable_ == nullptr)
        {
            catmsegccstatusuppvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable>();
        }
        return catmsegccstatusuppvclrangetable_;
    }

    if(child_yang_name == "catmStatusChangePVclRangeTable")
    {
        if(catmstatuschangepvclrangetable_ == nullptr)
        {
            catmstatuschangepvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable>();
        }
        return catmstatuschangepvclrangetable_;
    }

    if(child_yang_name == "catmStatusUpPVclRangeTable")
    {
        if(catmstatusuppvclrangetable_ == nullptr)
        {
            catmstatusuppvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable>();
        }
        return catmstatusuppvclrangetable_;
    }

    if(child_yang_name == "catmUpPVclRangeTable")
    {
        if(catmuppvclrangetable_ == nullptr)
        {
            catmuppvclrangetable_ = std::make_shared<CiscoAtmPvctrapExtnMib::Catmuppvclrangetable>();
        }
        return catmuppvclrangetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(catmaisrdistatuschpvclrangetable_ != nullptr)
    {
        children["catmAISRDIStatusChPVclRangeTable"] = catmaisrdistatuschpvclrangetable_;
    }

    if(catmaisrdistatusuppvclrangetable_ != nullptr)
    {
        children["catmAISRDIStatusUpPVclRangeTable"] = catmaisrdistatusuppvclrangetable_;
    }

    if(catmcurstatchangepvcltable_ != nullptr)
    {
        children["catmCurStatChangePVclTable"] = catmcurstatchangepvcltable_;
    }

    if(catmcurstatusuppvcltable_ != nullptr)
    {
        children["catmCurStatusUpPVclTable"] = catmcurstatusuppvcltable_;
    }

    if(catmdownpvclrangetable_ != nullptr)
    {
        children["catmDownPVclRangeTable"] = catmdownpvclrangetable_;
    }

    if(catmendccstatuschpvclrangetable_ != nullptr)
    {
        children["catmEndCCStatusChPVclRangeTable"] = catmendccstatuschpvclrangetable_;
    }

    if(catmendccstatusuppvclrangetable_ != nullptr)
    {
        children["catmEndCCStatusUpPVclRangeTable"] = catmendccstatusuppvclrangetable_;
    }

    if(catmsegccstatuschpvclrangetable_ != nullptr)
    {
        children["catmSegCCStatusChPVclRangeTable"] = catmsegccstatuschpvclrangetable_;
    }

    if(catmsegccstatusuppvclrangetable_ != nullptr)
    {
        children["catmSegCCStatusUpPVclRangeTable"] = catmsegccstatusuppvclrangetable_;
    }

    if(catmstatuschangepvclrangetable_ != nullptr)
    {
        children["catmStatusChangePVclRangeTable"] = catmstatuschangepvclrangetable_;
    }

    if(catmstatusuppvclrangetable_ != nullptr)
    {
        children["catmStatusUpPVclRangeTable"] = catmstatusuppvclrangetable_;
    }

    if(catmuppvclrangetable_ != nullptr)
    {
        children["catmUpPVclRangeTable"] = catmuppvclrangetable_;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::clone_ptr() const
{
    return std::make_shared<CiscoAtmPvctrapExtnMib>();
}

std::string CiscoAtmPvctrapExtnMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoAtmPvctrapExtnMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoAtmPvctrapExtnMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvcltable()
{
    yang_name = "catmCurStatChangePVclTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::~Catmcurstatchangepvcltable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::has_data() const
{
    for (std::size_t index=0; index<catmcurstatchangepvclentry_.size(); index++)
    {
        if(catmcurstatchangepvclentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::has_operation() const
{
    for (std::size_t index=0; index<catmcurstatchangepvclentry_.size(); index++)
    {
        if(catmcurstatchangepvclentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatChangePVclTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmCurStatChangePVclEntry")
    {
        for(auto const & c : catmcurstatchangepvclentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry>();
        c->parent = this;
        catmcurstatchangepvclentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmcurstatchangepvclentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::Catmcurstatchangepvclentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    catmpvclaisrdistatuschangeend{YType::uint32, "catmPVclAISRDIStatusChangeEnd"},
    catmpvclaisrdistatuschangestart{YType::uint32, "catmPVclAISRDIStatusChangeStart"},
    catmpvclaisrdistatustransition{YType::uint32, "catmPVclAISRDIStatusTransition"},
    catmpvclcurfailtime{YType::uint32, "catmPVclCurFailTime"},
    catmpvclendccstatuschangeend{YType::uint32, "catmPVclEndCCStatusChangeEnd"},
    catmpvclendccstatuschangestart{YType::uint32, "catmPVclEndCCStatusChangeStart"},
    catmpvclendccstatustransition{YType::uint32, "catmPVclEndCCStatusTransition"},
    catmpvclfailurereason{YType::enumeration, "catmPVclFailureReason"},
    catmpvclprevrecovertime{YType::uint32, "catmPVclPrevRecoverTime"},
    catmpvclsegccstatuschangeend{YType::uint32, "catmPVclSegCCStatusChangeEnd"},
    catmpvclsegccstatuschangestart{YType::uint32, "catmPVclSegCCStatusChangeStart"},
    catmpvclsegccstatustransition{YType::uint32, "catmPVclSegCCStatusTransition"},
    catmpvclstatuschangeend{YType::uint32, "catmPVclStatusChangeEnd"},
    catmpvclstatuschangestart{YType::uint32, "catmPVclStatusChangeStart"},
    catmpvclstatustransition{YType::uint32, "catmPVclStatusTransition"}
{
    yang_name = "catmCurStatChangePVclEntry"; yang_parent_name = "catmCurStatChangePVclTable";
}

CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::~Catmcurstatchangepvclentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| catmpvclaisrdistatuschangeend.is_set
	|| catmpvclaisrdistatuschangestart.is_set
	|| catmpvclaisrdistatustransition.is_set
	|| catmpvclcurfailtime.is_set
	|| catmpvclendccstatuschangeend.is_set
	|| catmpvclendccstatuschangestart.is_set
	|| catmpvclendccstatustransition.is_set
	|| catmpvclfailurereason.is_set
	|| catmpvclprevrecovertime.is_set
	|| catmpvclsegccstatuschangeend.is_set
	|| catmpvclsegccstatuschangestart.is_set
	|| catmpvclsegccstatustransition.is_set
	|| catmpvclstatuschangeend.is_set
	|| catmpvclstatuschangestart.is_set
	|| catmpvclstatustransition.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(catmpvclaisrdistatuschangeend.operation)
	|| is_set(catmpvclaisrdistatuschangestart.operation)
	|| is_set(catmpvclaisrdistatustransition.operation)
	|| is_set(catmpvclcurfailtime.operation)
	|| is_set(catmpvclendccstatuschangeend.operation)
	|| is_set(catmpvclendccstatuschangestart.operation)
	|| is_set(catmpvclendccstatustransition.operation)
	|| is_set(catmpvclfailurereason.operation)
	|| is_set(catmpvclprevrecovertime.operation)
	|| is_set(catmpvclsegccstatuschangeend.operation)
	|| is_set(catmpvclsegccstatuschangestart.operation)
	|| is_set(catmpvclsegccstatustransition.operation)
	|| is_set(catmpvclstatuschangeend.operation)
	|| is_set(catmpvclstatuschangestart.operation)
	|| is_set(catmpvclstatustransition.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatChangePVclEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmCurStatChangePVclTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (catmpvclaisrdistatuschangeend.is_set || is_set(catmpvclaisrdistatuschangeend.operation)) leaf_name_data.push_back(catmpvclaisrdistatuschangeend.get_name_leafdata());
    if (catmpvclaisrdistatuschangestart.is_set || is_set(catmpvclaisrdistatuschangestart.operation)) leaf_name_data.push_back(catmpvclaisrdistatuschangestart.get_name_leafdata());
    if (catmpvclaisrdistatustransition.is_set || is_set(catmpvclaisrdistatustransition.operation)) leaf_name_data.push_back(catmpvclaisrdistatustransition.get_name_leafdata());
    if (catmpvclcurfailtime.is_set || is_set(catmpvclcurfailtime.operation)) leaf_name_data.push_back(catmpvclcurfailtime.get_name_leafdata());
    if (catmpvclendccstatuschangeend.is_set || is_set(catmpvclendccstatuschangeend.operation)) leaf_name_data.push_back(catmpvclendccstatuschangeend.get_name_leafdata());
    if (catmpvclendccstatuschangestart.is_set || is_set(catmpvclendccstatuschangestart.operation)) leaf_name_data.push_back(catmpvclendccstatuschangestart.get_name_leafdata());
    if (catmpvclendccstatustransition.is_set || is_set(catmpvclendccstatustransition.operation)) leaf_name_data.push_back(catmpvclendccstatustransition.get_name_leafdata());
    if (catmpvclfailurereason.is_set || is_set(catmpvclfailurereason.operation)) leaf_name_data.push_back(catmpvclfailurereason.get_name_leafdata());
    if (catmpvclprevrecovertime.is_set || is_set(catmpvclprevrecovertime.operation)) leaf_name_data.push_back(catmpvclprevrecovertime.get_name_leafdata());
    if (catmpvclsegccstatuschangeend.is_set || is_set(catmpvclsegccstatuschangeend.operation)) leaf_name_data.push_back(catmpvclsegccstatuschangeend.get_name_leafdata());
    if (catmpvclsegccstatuschangestart.is_set || is_set(catmpvclsegccstatuschangestart.operation)) leaf_name_data.push_back(catmpvclsegccstatuschangestart.get_name_leafdata());
    if (catmpvclsegccstatustransition.is_set || is_set(catmpvclsegccstatustransition.operation)) leaf_name_data.push_back(catmpvclsegccstatustransition.get_name_leafdata());
    if (catmpvclstatuschangeend.is_set || is_set(catmpvclstatuschangeend.operation)) leaf_name_data.push_back(catmpvclstatuschangeend.get_name_leafdata());
    if (catmpvclstatuschangestart.is_set || is_set(catmpvclstatuschangestart.operation)) leaf_name_data.push_back(catmpvclstatuschangestart.get_name_leafdata());
    if (catmpvclstatustransition.is_set || is_set(catmpvclstatustransition.operation)) leaf_name_data.push_back(catmpvclstatustransition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmcurstatchangepvcltable::Catmcurstatchangepvclentry::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "catmPVclAISRDIStatusChangeEnd")
    {
        catmpvclaisrdistatuschangeend = value;
    }
    if(value_path == "catmPVclAISRDIStatusChangeStart")
    {
        catmpvclaisrdistatuschangestart = value;
    }
    if(value_path == "catmPVclAISRDIStatusTransition")
    {
        catmpvclaisrdistatustransition = value;
    }
    if(value_path == "catmPVclCurFailTime")
    {
        catmpvclcurfailtime = value;
    }
    if(value_path == "catmPVclEndCCStatusChangeEnd")
    {
        catmpvclendccstatuschangeend = value;
    }
    if(value_path == "catmPVclEndCCStatusChangeStart")
    {
        catmpvclendccstatuschangestart = value;
    }
    if(value_path == "catmPVclEndCCStatusTransition")
    {
        catmpvclendccstatustransition = value;
    }
    if(value_path == "catmPVclFailureReason")
    {
        catmpvclfailurereason = value;
    }
    if(value_path == "catmPVclPrevRecoverTime")
    {
        catmpvclprevrecovertime = value;
    }
    if(value_path == "catmPVclSegCCStatusChangeEnd")
    {
        catmpvclsegccstatuschangeend = value;
    }
    if(value_path == "catmPVclSegCCStatusChangeStart")
    {
        catmpvclsegccstatuschangestart = value;
    }
    if(value_path == "catmPVclSegCCStatusTransition")
    {
        catmpvclsegccstatustransition = value;
    }
    if(value_path == "catmPVclStatusChangeEnd")
    {
        catmpvclstatuschangeend = value;
    }
    if(value_path == "catmPVclStatusChangeStart")
    {
        catmpvclstatuschangestart = value;
    }
    if(value_path == "catmPVclStatusTransition")
    {
        catmpvclstatustransition = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangetable()
{
    yang_name = "catmStatusChangePVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::~Catmstatuschangepvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmstatuschangepvclrangeentry_.size(); index++)
    {
        if(catmstatuschangepvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmstatuschangepvclrangeentry_.size(); index++)
    {
        if(catmstatuschangepvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusChangePVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmStatusChangePVclRangeEntry")
    {
        for(auto const & c : catmstatuschangepvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry>();
        c->parent = this;
        catmstatuschangepvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmstatuschangepvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::Catmstatuschangepvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::int32, "catmStatusChangePVclRangeIndex"},
    catmpvclhigherrangevalue{YType::int32, "catmPVclHigherRangeValue"},
    catmpvcllowerrangevalue{YType::int32, "catmPVclLowerRangeValue"},
    catmpvclrangestatuschangeend{YType::uint32, "catmPVclRangeStatusChangeEnd"},
    catmpvclrangestatuschangestart{YType::uint32, "catmPVclRangeStatusChangeStart"}
{
    yang_name = "catmStatusChangePVclRangeEntry"; yang_parent_name = "catmStatusChangePVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::~Catmstatuschangepvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclhigherrangevalue.is_set
	|| catmpvcllowerrangevalue.is_set
	|| catmpvclrangestatuschangeend.is_set
	|| catmpvclrangestatuschangestart.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclhigherrangevalue.operation)
	|| is_set(catmpvcllowerrangevalue.operation)
	|| is_set(catmpvclrangestatuschangeend.operation)
	|| is_set(catmpvclrangestatuschangestart.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusChangePVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmStatusChangePVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclhigherrangevalue.is_set || is_set(catmpvclhigherrangevalue.operation)) leaf_name_data.push_back(catmpvclhigherrangevalue.get_name_leafdata());
    if (catmpvcllowerrangevalue.is_set || is_set(catmpvcllowerrangevalue.operation)) leaf_name_data.push_back(catmpvcllowerrangevalue.get_name_leafdata());
    if (catmpvclrangestatuschangeend.is_set || is_set(catmpvclrangestatuschangeend.operation)) leaf_name_data.push_back(catmpvclrangestatuschangeend.get_name_leafdata());
    if (catmpvclrangestatuschangestart.is_set || is_set(catmpvclrangestatuschangestart.operation)) leaf_name_data.push_back(catmpvclrangestatuschangestart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmstatuschangepvclrangetable::Catmstatuschangepvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclHigherRangeValue")
    {
        catmpvclhigherrangevalue = value;
    }
    if(value_path == "catmPVclLowerRangeValue")
    {
        catmpvcllowerrangevalue = value;
    }
    if(value_path == "catmPVclRangeStatusChangeEnd")
    {
        catmpvclrangestatuschangeend = value;
    }
    if(value_path == "catmPVclRangeStatusChangeStart")
    {
        catmpvclrangestatuschangestart = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangetable()
{
    yang_name = "catmSegCCStatusChPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::~Catmsegccstatuschpvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmsegccstatuschpvclrangeentry_.size(); index++)
    {
        if(catmsegccstatuschpvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmsegccstatuschpvclrangeentry_.size(); index++)
    {
        if(catmsegccstatuschpvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusChPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmSegCCStatusChPVclRangeEntry")
    {
        for(auto const & c : catmsegccstatuschpvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry>();
        c->parent = this;
        catmsegccstatuschpvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmsegccstatuschpvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::Catmsegccstatuschpvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclsegcchigherrangevalue{YType::int32, "catmPVclSegCCHigherRangeValue"},
    catmpvclsegcclowerrangevalue{YType::int32, "catmPVclSegCCLowerRangeValue"},
    catmpvclsegccrangestatuschend{YType::uint32, "catmPVclSegCCRangeStatusChEnd"},
    catmpvclsegccrangestatuschstart{YType::uint32, "catmPVclSegCCRangeStatusChStart"}
{
    yang_name = "catmSegCCStatusChPVclRangeEntry"; yang_parent_name = "catmSegCCStatusChPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::~Catmsegccstatuschpvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclsegcchigherrangevalue.is_set
	|| catmpvclsegcclowerrangevalue.is_set
	|| catmpvclsegccrangestatuschend.is_set
	|| catmpvclsegccrangestatuschstart.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclsegcchigherrangevalue.operation)
	|| is_set(catmpvclsegcclowerrangevalue.operation)
	|| is_set(catmpvclsegccrangestatuschend.operation)
	|| is_set(catmpvclsegccrangestatuschstart.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusChPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmSegCCStatusChPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclsegcchigherrangevalue.is_set || is_set(catmpvclsegcchigherrangevalue.operation)) leaf_name_data.push_back(catmpvclsegcchigherrangevalue.get_name_leafdata());
    if (catmpvclsegcclowerrangevalue.is_set || is_set(catmpvclsegcclowerrangevalue.operation)) leaf_name_data.push_back(catmpvclsegcclowerrangevalue.get_name_leafdata());
    if (catmpvclsegccrangestatuschend.is_set || is_set(catmpvclsegccrangestatuschend.operation)) leaf_name_data.push_back(catmpvclsegccrangestatuschend.get_name_leafdata());
    if (catmpvclsegccrangestatuschstart.is_set || is_set(catmpvclsegccrangestatuschstart.operation)) leaf_name_data.push_back(catmpvclsegccrangestatuschstart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmsegccstatuschpvclrangetable::Catmsegccstatuschpvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclSegCCHigherRangeValue")
    {
        catmpvclsegcchigherrangevalue = value;
    }
    if(value_path == "catmPVclSegCCLowerRangeValue")
    {
        catmpvclsegcclowerrangevalue = value;
    }
    if(value_path == "catmPVclSegCCRangeStatusChEnd")
    {
        catmpvclsegccrangestatuschend = value;
    }
    if(value_path == "catmPVclSegCCRangeStatusChStart")
    {
        catmpvclsegccrangestatuschstart = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangetable()
{
    yang_name = "catmEndCCStatusChPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::~Catmendccstatuschpvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmendccstatuschpvclrangeentry_.size(); index++)
    {
        if(catmendccstatuschpvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmendccstatuschpvclrangeentry_.size(); index++)
    {
        if(catmendccstatuschpvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusChPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmEndCCStatusChPVclRangeEntry")
    {
        for(auto const & c : catmendccstatuschpvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry>();
        c->parent = this;
        catmendccstatuschpvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmendccstatuschpvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::Catmendccstatuschpvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclendcchigherrangevalue{YType::int32, "catmPVclEndCCHigherRangeValue"},
    catmpvclendcclowerrangevalue{YType::int32, "catmPVclEndCCLowerRangeValue"},
    catmpvclendccrangestatuschend{YType::uint32, "catmPVclEndCCRangeStatusChEnd"},
    catmpvclendccrangestatuschstart{YType::uint32, "catmPVclEndCCRangeStatusChStart"}
{
    yang_name = "catmEndCCStatusChPVclRangeEntry"; yang_parent_name = "catmEndCCStatusChPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::~Catmendccstatuschpvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclendcchigherrangevalue.is_set
	|| catmpvclendcclowerrangevalue.is_set
	|| catmpvclendccrangestatuschend.is_set
	|| catmpvclendccrangestatuschstart.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclendcchigherrangevalue.operation)
	|| is_set(catmpvclendcclowerrangevalue.operation)
	|| is_set(catmpvclendccrangestatuschend.operation)
	|| is_set(catmpvclendccrangestatuschstart.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusChPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmEndCCStatusChPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclendcchigherrangevalue.is_set || is_set(catmpvclendcchigherrangevalue.operation)) leaf_name_data.push_back(catmpvclendcchigherrangevalue.get_name_leafdata());
    if (catmpvclendcclowerrangevalue.is_set || is_set(catmpvclendcclowerrangevalue.operation)) leaf_name_data.push_back(catmpvclendcclowerrangevalue.get_name_leafdata());
    if (catmpvclendccrangestatuschend.is_set || is_set(catmpvclendccrangestatuschend.operation)) leaf_name_data.push_back(catmpvclendccrangestatuschend.get_name_leafdata());
    if (catmpvclendccrangestatuschstart.is_set || is_set(catmpvclendccrangestatuschstart.operation)) leaf_name_data.push_back(catmpvclendccrangestatuschstart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmendccstatuschpvclrangetable::Catmendccstatuschpvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclEndCCHigherRangeValue")
    {
        catmpvclendcchigherrangevalue = value;
    }
    if(value_path == "catmPVclEndCCLowerRangeValue")
    {
        catmpvclendcclowerrangevalue = value;
    }
    if(value_path == "catmPVclEndCCRangeStatusChEnd")
    {
        catmpvclendccrangestatuschend = value;
    }
    if(value_path == "catmPVclEndCCRangeStatusChStart")
    {
        catmpvclendccrangestatuschstart = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangetable()
{
    yang_name = "catmAISRDIStatusChPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::~Catmaisrdistatuschpvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmaisrdistatuschpvclrangeentry_.size(); index++)
    {
        if(catmaisrdistatuschpvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmaisrdistatuschpvclrangeentry_.size(); index++)
    {
        if(catmaisrdistatuschpvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusChPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmAISRDIStatusChPVclRangeEntry")
    {
        for(auto const & c : catmaisrdistatuschpvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry>();
        c->parent = this;
        catmaisrdistatuschpvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmaisrdistatuschpvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::Catmaisrdistatuschpvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclaisrdihigherrangevalue{YType::int32, "catmPVclAISRDIHigherRangeValue"},
    catmpvclaisrdilowerrangevalue{YType::int32, "catmPVclAISRDILowerRangeValue"},
    catmpvclaisrdirangestatuschend{YType::uint32, "catmPVclAISRDIRangeStatusChEnd"},
    catmpvclaisrdirangestatuschstart{YType::uint32, "catmPVclAISRDIRangeStatusChStart"}
{
    yang_name = "catmAISRDIStatusChPVclRangeEntry"; yang_parent_name = "catmAISRDIStatusChPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::~Catmaisrdistatuschpvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclaisrdihigherrangevalue.is_set
	|| catmpvclaisrdilowerrangevalue.is_set
	|| catmpvclaisrdirangestatuschend.is_set
	|| catmpvclaisrdirangestatuschstart.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclaisrdihigherrangevalue.operation)
	|| is_set(catmpvclaisrdilowerrangevalue.operation)
	|| is_set(catmpvclaisrdirangestatuschend.operation)
	|| is_set(catmpvclaisrdirangestatuschstart.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusChPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmAISRDIStatusChPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclaisrdihigherrangevalue.is_set || is_set(catmpvclaisrdihigherrangevalue.operation)) leaf_name_data.push_back(catmpvclaisrdihigherrangevalue.get_name_leafdata());
    if (catmpvclaisrdilowerrangevalue.is_set || is_set(catmpvclaisrdilowerrangevalue.operation)) leaf_name_data.push_back(catmpvclaisrdilowerrangevalue.get_name_leafdata());
    if (catmpvclaisrdirangestatuschend.is_set || is_set(catmpvclaisrdirangestatuschend.operation)) leaf_name_data.push_back(catmpvclaisrdirangestatuschend.get_name_leafdata());
    if (catmpvclaisrdirangestatuschstart.is_set || is_set(catmpvclaisrdirangestatuschstart.operation)) leaf_name_data.push_back(catmpvclaisrdirangestatuschstart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmaisrdistatuschpvclrangetable::Catmaisrdistatuschpvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclAISRDIHigherRangeValue")
    {
        catmpvclaisrdihigherrangevalue = value;
    }
    if(value_path == "catmPVclAISRDILowerRangeValue")
    {
        catmpvclaisrdilowerrangevalue = value;
    }
    if(value_path == "catmPVclAISRDIRangeStatusChEnd")
    {
        catmpvclaisrdirangestatuschend = value;
    }
    if(value_path == "catmPVclAISRDIRangeStatusChStart")
    {
        catmpvclaisrdirangestatuschstart = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangetable()
{
    yang_name = "catmDownPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::~Catmdownpvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmdownpvclrangeentry_.size(); index++)
    {
        if(catmdownpvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmdownpvclrangeentry_.size(); index++)
    {
        if(catmdownpvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmDownPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmDownPVclRangeEntry")
    {
        for(auto const & c : catmdownpvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry>();
        c->parent = this;
        catmdownpvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmdownpvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::Catmdownpvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmdownpvclhigherrangevalue{YType::int32, "catmDownPVclHigherRangeValue"},
    catmdownpvcllowerrangevalue{YType::int32, "catmDownPVclLowerRangeValue"},
    catmdownpvclrangeend{YType::uint32, "catmDownPVclRangeEnd"},
    catmdownpvclrangestart{YType::uint32, "catmDownPVclRangeStart"},
    catmprevuppvclrangeend{YType::uint32, "catmPrevUpPVclRangeEnd"},
    catmprevuppvclrangestart{YType::uint32, "catmPrevUpPVclRangeStart"},
    catmpvclrangefailurereason{YType::enumeration, "catmPVclRangeFailureReason"}
{
    yang_name = "catmDownPVclRangeEntry"; yang_parent_name = "catmDownPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::~Catmdownpvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmdownpvclhigherrangevalue.is_set
	|| catmdownpvcllowerrangevalue.is_set
	|| catmdownpvclrangeend.is_set
	|| catmdownpvclrangestart.is_set
	|| catmprevuppvclrangeend.is_set
	|| catmprevuppvclrangestart.is_set
	|| catmpvclrangefailurereason.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmdownpvclhigherrangevalue.operation)
	|| is_set(catmdownpvcllowerrangevalue.operation)
	|| is_set(catmdownpvclrangeend.operation)
	|| is_set(catmdownpvclrangestart.operation)
	|| is_set(catmprevuppvclrangeend.operation)
	|| is_set(catmprevuppvclrangestart.operation)
	|| is_set(catmpvclrangefailurereason.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmDownPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmDownPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmdownpvclhigherrangevalue.is_set || is_set(catmdownpvclhigherrangevalue.operation)) leaf_name_data.push_back(catmdownpvclhigherrangevalue.get_name_leafdata());
    if (catmdownpvcllowerrangevalue.is_set || is_set(catmdownpvcllowerrangevalue.operation)) leaf_name_data.push_back(catmdownpvcllowerrangevalue.get_name_leafdata());
    if (catmdownpvclrangeend.is_set || is_set(catmdownpvclrangeend.operation)) leaf_name_data.push_back(catmdownpvclrangeend.get_name_leafdata());
    if (catmdownpvclrangestart.is_set || is_set(catmdownpvclrangestart.operation)) leaf_name_data.push_back(catmdownpvclrangestart.get_name_leafdata());
    if (catmprevuppvclrangeend.is_set || is_set(catmprevuppvclrangeend.operation)) leaf_name_data.push_back(catmprevuppvclrangeend.get_name_leafdata());
    if (catmprevuppvclrangestart.is_set || is_set(catmprevuppvclrangestart.operation)) leaf_name_data.push_back(catmprevuppvclrangestart.get_name_leafdata());
    if (catmpvclrangefailurereason.is_set || is_set(catmpvclrangefailurereason.operation)) leaf_name_data.push_back(catmpvclrangefailurereason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmdownpvclrangetable::Catmdownpvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmDownPVclHigherRangeValue")
    {
        catmdownpvclhigherrangevalue = value;
    }
    if(value_path == "catmDownPVclLowerRangeValue")
    {
        catmdownpvcllowerrangevalue = value;
    }
    if(value_path == "catmDownPVclRangeEnd")
    {
        catmdownpvclrangeend = value;
    }
    if(value_path == "catmDownPVclRangeStart")
    {
        catmdownpvclrangestart = value;
    }
    if(value_path == "catmPrevUpPVclRangeEnd")
    {
        catmprevuppvclrangeend = value;
    }
    if(value_path == "catmPrevUpPVclRangeStart")
    {
        catmprevuppvclrangestart = value;
    }
    if(value_path == "catmPVclRangeFailureReason")
    {
        catmpvclrangefailurereason = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvcltable()
{
    yang_name = "catmCurStatusUpPVclTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::~Catmcurstatusuppvcltable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::has_data() const
{
    for (std::size_t index=0; index<catmcurstatusuppvclentry_.size(); index++)
    {
        if(catmcurstatusuppvclentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::has_operation() const
{
    for (std::size_t index=0; index<catmcurstatusuppvclentry_.size(); index++)
    {
        if(catmcurstatusuppvclentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatusUpPVclTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmCurStatusUpPVclEntry")
    {
        for(auto const & c : catmcurstatusuppvclentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry>();
        c->parent = this;
        catmcurstatusuppvclentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmcurstatusuppvclentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::Catmcurstatusuppvclentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    catmpvclaisrdistatusupend{YType::uint32, "catmPVclAISRDIStatusUpEnd"},
    catmpvclaisrdistatusupstart{YType::uint32, "catmPVclAISRDIStatusUpStart"},
    catmpvclaisrdistatusuptransition{YType::uint32, "catmPVclAISRDIStatusUpTransition"},
    catmpvclcurrecovertime{YType::uint32, "catmPVclCurRecoverTime"},
    catmpvclendccstatusupend{YType::uint32, "catmPVclEndCCStatusUpEnd"},
    catmpvclendccstatusupstart{YType::uint32, "catmPVclEndCCStatusUpStart"},
    catmpvclendccstatusuptransition{YType::uint32, "catmPVclEndCCStatusUpTransition"},
    catmpvclprevfailtime{YType::uint32, "catmPVclPrevFailTime"},
    catmpvclrecoveryreason{YType::enumeration, "catmPVclRecoveryReason"},
    catmpvclsegccstatusupend{YType::uint32, "catmPVclSegCCStatusUpEnd"},
    catmpvclsegccstatusupstart{YType::uint32, "catmPVclSegCCStatusUpStart"},
    catmpvclsegccstatusuptransition{YType::uint32, "catmPVclSegCCStatusUpTransition"},
    catmpvclstatusupend{YType::uint32, "catmPVclStatusUpEnd"},
    catmpvclstatusupstart{YType::uint32, "catmPVclStatusUpStart"},
    catmpvclstatusuptransition{YType::uint32, "catmPVclStatusUpTransition"}
{
    yang_name = "catmCurStatusUpPVclEntry"; yang_parent_name = "catmCurStatusUpPVclTable";
}

CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::~Catmcurstatusuppvclentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| catmpvclaisrdistatusupend.is_set
	|| catmpvclaisrdistatusupstart.is_set
	|| catmpvclaisrdistatusuptransition.is_set
	|| catmpvclcurrecovertime.is_set
	|| catmpvclendccstatusupend.is_set
	|| catmpvclendccstatusupstart.is_set
	|| catmpvclendccstatusuptransition.is_set
	|| catmpvclprevfailtime.is_set
	|| catmpvclrecoveryreason.is_set
	|| catmpvclsegccstatusupend.is_set
	|| catmpvclsegccstatusupstart.is_set
	|| catmpvclsegccstatusuptransition.is_set
	|| catmpvclstatusupend.is_set
	|| catmpvclstatusupstart.is_set
	|| catmpvclstatusuptransition.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(catmpvclaisrdistatusupend.operation)
	|| is_set(catmpvclaisrdistatusupstart.operation)
	|| is_set(catmpvclaisrdistatusuptransition.operation)
	|| is_set(catmpvclcurrecovertime.operation)
	|| is_set(catmpvclendccstatusupend.operation)
	|| is_set(catmpvclendccstatusupstart.operation)
	|| is_set(catmpvclendccstatusuptransition.operation)
	|| is_set(catmpvclprevfailtime.operation)
	|| is_set(catmpvclrecoveryreason.operation)
	|| is_set(catmpvclsegccstatusupend.operation)
	|| is_set(catmpvclsegccstatusupstart.operation)
	|| is_set(catmpvclsegccstatusuptransition.operation)
	|| is_set(catmpvclstatusupend.operation)
	|| is_set(catmpvclstatusupstart.operation)
	|| is_set(catmpvclstatusuptransition.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatusUpPVclEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmCurStatusUpPVclTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (catmpvclaisrdistatusupend.is_set || is_set(catmpvclaisrdistatusupend.operation)) leaf_name_data.push_back(catmpvclaisrdistatusupend.get_name_leafdata());
    if (catmpvclaisrdistatusupstart.is_set || is_set(catmpvclaisrdistatusupstart.operation)) leaf_name_data.push_back(catmpvclaisrdistatusupstart.get_name_leafdata());
    if (catmpvclaisrdistatusuptransition.is_set || is_set(catmpvclaisrdistatusuptransition.operation)) leaf_name_data.push_back(catmpvclaisrdistatusuptransition.get_name_leafdata());
    if (catmpvclcurrecovertime.is_set || is_set(catmpvclcurrecovertime.operation)) leaf_name_data.push_back(catmpvclcurrecovertime.get_name_leafdata());
    if (catmpvclendccstatusupend.is_set || is_set(catmpvclendccstatusupend.operation)) leaf_name_data.push_back(catmpvclendccstatusupend.get_name_leafdata());
    if (catmpvclendccstatusupstart.is_set || is_set(catmpvclendccstatusupstart.operation)) leaf_name_data.push_back(catmpvclendccstatusupstart.get_name_leafdata());
    if (catmpvclendccstatusuptransition.is_set || is_set(catmpvclendccstatusuptransition.operation)) leaf_name_data.push_back(catmpvclendccstatusuptransition.get_name_leafdata());
    if (catmpvclprevfailtime.is_set || is_set(catmpvclprevfailtime.operation)) leaf_name_data.push_back(catmpvclprevfailtime.get_name_leafdata());
    if (catmpvclrecoveryreason.is_set || is_set(catmpvclrecoveryreason.operation)) leaf_name_data.push_back(catmpvclrecoveryreason.get_name_leafdata());
    if (catmpvclsegccstatusupend.is_set || is_set(catmpvclsegccstatusupend.operation)) leaf_name_data.push_back(catmpvclsegccstatusupend.get_name_leafdata());
    if (catmpvclsegccstatusupstart.is_set || is_set(catmpvclsegccstatusupstart.operation)) leaf_name_data.push_back(catmpvclsegccstatusupstart.get_name_leafdata());
    if (catmpvclsegccstatusuptransition.is_set || is_set(catmpvclsegccstatusuptransition.operation)) leaf_name_data.push_back(catmpvclsegccstatusuptransition.get_name_leafdata());
    if (catmpvclstatusupend.is_set || is_set(catmpvclstatusupend.operation)) leaf_name_data.push_back(catmpvclstatusupend.get_name_leafdata());
    if (catmpvclstatusupstart.is_set || is_set(catmpvclstatusupstart.operation)) leaf_name_data.push_back(catmpvclstatusupstart.get_name_leafdata());
    if (catmpvclstatusuptransition.is_set || is_set(catmpvclstatusuptransition.operation)) leaf_name_data.push_back(catmpvclstatusuptransition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmcurstatusuppvcltable::Catmcurstatusuppvclentry::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "catmPVclAISRDIStatusUpEnd")
    {
        catmpvclaisrdistatusupend = value;
    }
    if(value_path == "catmPVclAISRDIStatusUpStart")
    {
        catmpvclaisrdistatusupstart = value;
    }
    if(value_path == "catmPVclAISRDIStatusUpTransition")
    {
        catmpvclaisrdistatusuptransition = value;
    }
    if(value_path == "catmPVclCurRecoverTime")
    {
        catmpvclcurrecovertime = value;
    }
    if(value_path == "catmPVclEndCCStatusUpEnd")
    {
        catmpvclendccstatusupend = value;
    }
    if(value_path == "catmPVclEndCCStatusUpStart")
    {
        catmpvclendccstatusupstart = value;
    }
    if(value_path == "catmPVclEndCCStatusUpTransition")
    {
        catmpvclendccstatusuptransition = value;
    }
    if(value_path == "catmPVclPrevFailTime")
    {
        catmpvclprevfailtime = value;
    }
    if(value_path == "catmPVclRecoveryReason")
    {
        catmpvclrecoveryreason = value;
    }
    if(value_path == "catmPVclSegCCStatusUpEnd")
    {
        catmpvclsegccstatusupend = value;
    }
    if(value_path == "catmPVclSegCCStatusUpStart")
    {
        catmpvclsegccstatusupstart = value;
    }
    if(value_path == "catmPVclSegCCStatusUpTransition")
    {
        catmpvclsegccstatusuptransition = value;
    }
    if(value_path == "catmPVclStatusUpEnd")
    {
        catmpvclstatusupend = value;
    }
    if(value_path == "catmPVclStatusUpStart")
    {
        catmpvclstatusupstart = value;
    }
    if(value_path == "catmPVclStatusUpTransition")
    {
        catmpvclstatusuptransition = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangetable()
{
    yang_name = "catmStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::~Catmstatusuppvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmstatusuppvclrangeentry_.size(); index++)
    {
        if(catmstatusuppvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmstatusuppvclrangeentry_.size(); index++)
    {
        if(catmstatusuppvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusUpPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmStatusUpPVclRangeEntry")
    {
        for(auto const & c : catmstatusuppvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry>();
        c->parent = this;
        catmstatusuppvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmstatusuppvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::Catmstatusuppvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclrangestatusupend{YType::uint32, "catmPVclRangeStatusUpEnd"},
    catmpvclrangestatusupstart{YType::uint32, "catmPVclRangeStatusUpStart"},
    catmpvcluphigherrangevalue{YType::int32, "catmPVclUpHigherRangeValue"},
    catmpvcluplowerrangevalue{YType::int32, "catmPVclUpLowerRangeValue"}
{
    yang_name = "catmStatusUpPVclRangeEntry"; yang_parent_name = "catmStatusUpPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::~Catmstatusuppvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclrangestatusupend.is_set
	|| catmpvclrangestatusupstart.is_set
	|| catmpvcluphigherrangevalue.is_set
	|| catmpvcluplowerrangevalue.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclrangestatusupend.operation)
	|| is_set(catmpvclrangestatusupstart.operation)
	|| is_set(catmpvcluphigherrangevalue.operation)
	|| is_set(catmpvcluplowerrangevalue.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusUpPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmStatusUpPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclrangestatusupend.is_set || is_set(catmpvclrangestatusupend.operation)) leaf_name_data.push_back(catmpvclrangestatusupend.get_name_leafdata());
    if (catmpvclrangestatusupstart.is_set || is_set(catmpvclrangestatusupstart.operation)) leaf_name_data.push_back(catmpvclrangestatusupstart.get_name_leafdata());
    if (catmpvcluphigherrangevalue.is_set || is_set(catmpvcluphigherrangevalue.operation)) leaf_name_data.push_back(catmpvcluphigherrangevalue.get_name_leafdata());
    if (catmpvcluplowerrangevalue.is_set || is_set(catmpvcluplowerrangevalue.operation)) leaf_name_data.push_back(catmpvcluplowerrangevalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmstatusuppvclrangetable::Catmstatusuppvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclRangeStatusUpEnd")
    {
        catmpvclrangestatusupend = value;
    }
    if(value_path == "catmPVclRangeStatusUpStart")
    {
        catmpvclrangestatusupstart = value;
    }
    if(value_path == "catmPVclUpHigherRangeValue")
    {
        catmpvcluphigherrangevalue = value;
    }
    if(value_path == "catmPVclUpLowerRangeValue")
    {
        catmpvcluplowerrangevalue = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangetable()
{
    yang_name = "catmSegCCStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::~Catmsegccstatusuppvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmsegccstatusuppvclrangeentry_.size(); index++)
    {
        if(catmsegccstatusuppvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmsegccstatusuppvclrangeentry_.size(); index++)
    {
        if(catmsegccstatusuppvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusUpPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmSegCCStatusUpPVclRangeEntry")
    {
        for(auto const & c : catmsegccstatusuppvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry>();
        c->parent = this;
        catmsegccstatusuppvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmsegccstatusuppvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::Catmsegccstatusuppvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclsegccrangestatusupend{YType::uint32, "catmPVclSegCCRangeStatusUpEnd"},
    catmpvclsegccrangestatusupstart{YType::uint32, "catmPVclSegCCRangeStatusUpStart"},
    catmpvclsegccuphigherrangevalue{YType::int32, "catmPVclSegCCUpHigherRangeValue"},
    catmpvclsegccuplowerrangevalue{YType::int32, "catmPVclSegCCUpLowerRangeValue"}
{
    yang_name = "catmSegCCStatusUpPVclRangeEntry"; yang_parent_name = "catmSegCCStatusUpPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::~Catmsegccstatusuppvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclsegccrangestatusupend.is_set
	|| catmpvclsegccrangestatusupstart.is_set
	|| catmpvclsegccuphigherrangevalue.is_set
	|| catmpvclsegccuplowerrangevalue.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclsegccrangestatusupend.operation)
	|| is_set(catmpvclsegccrangestatusupstart.operation)
	|| is_set(catmpvclsegccuphigherrangevalue.operation)
	|| is_set(catmpvclsegccuplowerrangevalue.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusUpPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmSegCCStatusUpPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclsegccrangestatusupend.is_set || is_set(catmpvclsegccrangestatusupend.operation)) leaf_name_data.push_back(catmpvclsegccrangestatusupend.get_name_leafdata());
    if (catmpvclsegccrangestatusupstart.is_set || is_set(catmpvclsegccrangestatusupstart.operation)) leaf_name_data.push_back(catmpvclsegccrangestatusupstart.get_name_leafdata());
    if (catmpvclsegccuphigherrangevalue.is_set || is_set(catmpvclsegccuphigherrangevalue.operation)) leaf_name_data.push_back(catmpvclsegccuphigherrangevalue.get_name_leafdata());
    if (catmpvclsegccuplowerrangevalue.is_set || is_set(catmpvclsegccuplowerrangevalue.operation)) leaf_name_data.push_back(catmpvclsegccuplowerrangevalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmsegccstatusuppvclrangetable::Catmsegccstatusuppvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclSegCCRangeStatusUpEnd")
    {
        catmpvclsegccrangestatusupend = value;
    }
    if(value_path == "catmPVclSegCCRangeStatusUpStart")
    {
        catmpvclsegccrangestatusupstart = value;
    }
    if(value_path == "catmPVclSegCCUpHigherRangeValue")
    {
        catmpvclsegccuphigherrangevalue = value;
    }
    if(value_path == "catmPVclSegCCUpLowerRangeValue")
    {
        catmpvclsegccuplowerrangevalue = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangetable()
{
    yang_name = "catmEndCCStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::~Catmendccstatusuppvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmendccstatusuppvclrangeentry_.size(); index++)
    {
        if(catmendccstatusuppvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmendccstatusuppvclrangeentry_.size(); index++)
    {
        if(catmendccstatusuppvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusUpPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmEndCCStatusUpPVclRangeEntry")
    {
        for(auto const & c : catmendccstatusuppvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry>();
        c->parent = this;
        catmendccstatusuppvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmendccstatusuppvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::Catmendccstatusuppvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclendccrangestatusupend{YType::uint32, "catmPVclEndCCRangeStatusUpEnd"},
    catmpvclendccrangestatusupstart{YType::uint32, "catmPVclEndCCRangeStatusUpStart"},
    catmpvclendccuphigherrangevalue{YType::int32, "catmPVclEndCCUpHigherRangeValue"},
    catmpvclendccuplowerrangevalue{YType::int32, "catmPVclEndCCUpLowerRangeValue"}
{
    yang_name = "catmEndCCStatusUpPVclRangeEntry"; yang_parent_name = "catmEndCCStatusUpPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::~Catmendccstatusuppvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclendccrangestatusupend.is_set
	|| catmpvclendccrangestatusupstart.is_set
	|| catmpvclendccuphigherrangevalue.is_set
	|| catmpvclendccuplowerrangevalue.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclendccrangestatusupend.operation)
	|| is_set(catmpvclendccrangestatusupstart.operation)
	|| is_set(catmpvclendccuphigherrangevalue.operation)
	|| is_set(catmpvclendccuplowerrangevalue.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusUpPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmEndCCStatusUpPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclendccrangestatusupend.is_set || is_set(catmpvclendccrangestatusupend.operation)) leaf_name_data.push_back(catmpvclendccrangestatusupend.get_name_leafdata());
    if (catmpvclendccrangestatusupstart.is_set || is_set(catmpvclendccrangestatusupstart.operation)) leaf_name_data.push_back(catmpvclendccrangestatusupstart.get_name_leafdata());
    if (catmpvclendccuphigherrangevalue.is_set || is_set(catmpvclendccuphigherrangevalue.operation)) leaf_name_data.push_back(catmpvclendccuphigherrangevalue.get_name_leafdata());
    if (catmpvclendccuplowerrangevalue.is_set || is_set(catmpvclendccuplowerrangevalue.operation)) leaf_name_data.push_back(catmpvclendccuplowerrangevalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmendccstatusuppvclrangetable::Catmendccstatusuppvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclEndCCRangeStatusUpEnd")
    {
        catmpvclendccrangestatusupend = value;
    }
    if(value_path == "catmPVclEndCCRangeStatusUpStart")
    {
        catmpvclendccrangestatusupstart = value;
    }
    if(value_path == "catmPVclEndCCUpHigherRangeValue")
    {
        catmpvclendccuphigherrangevalue = value;
    }
    if(value_path == "catmPVclEndCCUpLowerRangeValue")
    {
        catmpvclendccuplowerrangevalue = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangetable()
{
    yang_name = "catmAISRDIStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::~Catmaisrdistatusuppvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmaisrdistatusuppvclrangeentry_.size(); index++)
    {
        if(catmaisrdistatusuppvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmaisrdistatusuppvclrangeentry_.size(); index++)
    {
        if(catmaisrdistatusuppvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusUpPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmAISRDIStatusUpPVclRangeEntry")
    {
        for(auto const & c : catmaisrdistatusuppvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry>();
        c->parent = this;
        catmaisrdistatusuppvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmaisrdistatusuppvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::Catmaisrdistatusuppvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclaisrdirangestatusupend{YType::uint32, "catmPVclAISRDIRangeStatusUpEnd"},
    catmpvclaisrdirangestatusupstart{YType::uint32, "catmPVclAISRDIRangeStatusUpStart"},
    catmpvclaisrdiuphigherrangevalue{YType::int32, "catmPVclAISRDIUpHigherRangeValue"},
    catmpvclaisrdiuplowerrangevalue{YType::int32, "catmPVclAISRDIUpLowerRangeValue"}
{
    yang_name = "catmAISRDIStatusUpPVclRangeEntry"; yang_parent_name = "catmAISRDIStatusUpPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::~Catmaisrdistatusuppvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclaisrdirangestatusupend.is_set
	|| catmpvclaisrdirangestatusupstart.is_set
	|| catmpvclaisrdiuphigherrangevalue.is_set
	|| catmpvclaisrdiuplowerrangevalue.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmpvclaisrdirangestatusupend.operation)
	|| is_set(catmpvclaisrdirangestatusupstart.operation)
	|| is_set(catmpvclaisrdiuphigherrangevalue.operation)
	|| is_set(catmpvclaisrdiuplowerrangevalue.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusUpPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmAISRDIStatusUpPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclaisrdirangestatusupend.is_set || is_set(catmpvclaisrdirangestatusupend.operation)) leaf_name_data.push_back(catmpvclaisrdirangestatusupend.get_name_leafdata());
    if (catmpvclaisrdirangestatusupstart.is_set || is_set(catmpvclaisrdirangestatusupstart.operation)) leaf_name_data.push_back(catmpvclaisrdirangestatusupstart.get_name_leafdata());
    if (catmpvclaisrdiuphigherrangevalue.is_set || is_set(catmpvclaisrdiuphigherrangevalue.operation)) leaf_name_data.push_back(catmpvclaisrdiuphigherrangevalue.get_name_leafdata());
    if (catmpvclaisrdiuplowerrangevalue.is_set || is_set(catmpvclaisrdiuplowerrangevalue.operation)) leaf_name_data.push_back(catmpvclaisrdiuplowerrangevalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmaisrdistatusuppvclrangetable::Catmaisrdistatusuppvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPVclAISRDIRangeStatusUpEnd")
    {
        catmpvclaisrdirangestatusupend = value;
    }
    if(value_path == "catmPVclAISRDIRangeStatusUpStart")
    {
        catmpvclaisrdirangestatusupstart = value;
    }
    if(value_path == "catmPVclAISRDIUpHigherRangeValue")
    {
        catmpvclaisrdiuphigherrangevalue = value;
    }
    if(value_path == "catmPVclAISRDIUpLowerRangeValue")
    {
        catmpvclaisrdiuplowerrangevalue = value;
    }
}

CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangetable()
{
    yang_name = "catmUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB";
}

CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::~Catmuppvclrangetable()
{
}

bool CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::has_data() const
{
    for (std::size_t index=0; index<catmuppvclrangeentry_.size(); index++)
    {
        if(catmuppvclrangeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::has_operation() const
{
    for (std::size_t index=0; index<catmuppvclrangeentry_.size(); index++)
    {
        if(catmuppvclrangeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmUpPVclRangeTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmUpPVclRangeEntry")
    {
        for(auto const & c : catmuppvclrangeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry>();
        c->parent = this;
        catmuppvclrangeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : catmuppvclrangeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::Catmuppvclrangeentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmprevdownpvclrangeend{YType::uint32, "catmPrevDownPVclRangeEnd"},
    catmprevdownpvclrangestart{YType::uint32, "catmPrevDownPVclRangeStart"},
    catmpvclrangerecoveryreason{YType::enumeration, "catmPVclRangeRecoveryReason"},
    catmuppvclhigherrangevalue{YType::int32, "catmUpPVclHigherRangeValue"},
    catmuppvcllowerrangevalue{YType::int32, "catmUpPVclLowerRangeValue"},
    catmuppvclrangeend{YType::uint32, "catmUpPVclRangeEnd"},
    catmuppvclrangestart{YType::uint32, "catmUpPVclRangeStart"}
{
    yang_name = "catmUpPVclRangeEntry"; yang_parent_name = "catmUpPVclRangeTable";
}

CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::~Catmuppvclrangeentry()
{
}

bool CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmprevdownpvclrangeend.is_set
	|| catmprevdownpvclrangestart.is_set
	|| catmpvclrangerecoveryreason.is_set
	|| catmuppvclhigherrangevalue.is_set
	|| catmuppvcllowerrangevalue.is_set
	|| catmuppvclrangeend.is_set
	|| catmuppvclrangestart.is_set;
}

bool CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(catmstatuschangepvclrangeindex.operation)
	|| is_set(catmprevdownpvclrangeend.operation)
	|| is_set(catmprevdownpvclrangestart.operation)
	|| is_set(catmpvclrangerecoveryreason.operation)
	|| is_set(catmuppvclhigherrangevalue.operation)
	|| is_set(catmuppvcllowerrangevalue.operation)
	|| is_set(catmuppvclrangeend.operation)
	|| is_set(catmuppvclrangestart.operation);
}

std::string CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmUpPVclRangeEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[catmStatusChangePVclRangeIndex='" <<catmstatuschangepvclrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmUpPVclRangeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.operation)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmprevdownpvclrangeend.is_set || is_set(catmprevdownpvclrangeend.operation)) leaf_name_data.push_back(catmprevdownpvclrangeend.get_name_leafdata());
    if (catmprevdownpvclrangestart.is_set || is_set(catmprevdownpvclrangestart.operation)) leaf_name_data.push_back(catmprevdownpvclrangestart.get_name_leafdata());
    if (catmpvclrangerecoveryreason.is_set || is_set(catmpvclrangerecoveryreason.operation)) leaf_name_data.push_back(catmpvclrangerecoveryreason.get_name_leafdata());
    if (catmuppvclhigherrangevalue.is_set || is_set(catmuppvclhigherrangevalue.operation)) leaf_name_data.push_back(catmuppvclhigherrangevalue.get_name_leafdata());
    if (catmuppvcllowerrangevalue.is_set || is_set(catmuppvcllowerrangevalue.operation)) leaf_name_data.push_back(catmuppvcllowerrangevalue.get_name_leafdata());
    if (catmuppvclrangeend.is_set || is_set(catmuppvclrangeend.operation)) leaf_name_data.push_back(catmuppvclrangeend.get_name_leafdata());
    if (catmuppvclrangestart.is_set || is_set(catmuppvclrangestart.operation)) leaf_name_data.push_back(catmuppvclrangestart.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmPvctrapExtnMib::Catmuppvclrangetable::Catmuppvclrangeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
    }
    if(value_path == "catmPrevDownPVclRangeEnd")
    {
        catmprevdownpvclrangeend = value;
    }
    if(value_path == "catmPrevDownPVclRangeStart")
    {
        catmprevdownpvclrangestart = value;
    }
    if(value_path == "catmPVclRangeRecoveryReason")
    {
        catmpvclrangerecoveryreason = value;
    }
    if(value_path == "catmUpPVclHigherRangeValue")
    {
        catmuppvclhigherrangevalue = value;
    }
    if(value_path == "catmUpPVclLowerRangeValue")
    {
        catmuppvcllowerrangevalue = value;
    }
    if(value_path == "catmUpPVclRangeEnd")
    {
        catmuppvclrangeend = value;
    }
    if(value_path == "catmUpPVclRangeStart")
    {
        catmuppvclrangestart = value;
    }
}

const Enum::YLeaf CatmoamrecoverytypeEnum::catmLoopbackOAMRecover {1, "catmLoopbackOAMRecover"};
const Enum::YLeaf CatmoamrecoverytypeEnum::catmSegmentCCOAMRecover {2, "catmSegmentCCOAMRecover"};
const Enum::YLeaf CatmoamrecoverytypeEnum::catmEndCCOAMRecover {4, "catmEndCCOAMRecover"};
const Enum::YLeaf CatmoamrecoverytypeEnum::catmAISRDIOAMRecover {8, "catmAISRDIOAMRecover"};

const Enum::YLeaf CatmoamfailuretypeEnum::catmLoopbackOAMFailure {1, "catmLoopbackOAMFailure"};
const Enum::YLeaf CatmoamfailuretypeEnum::catmSegmentCCOAMFailure {2, "catmSegmentCCOAMFailure"};
const Enum::YLeaf CatmoamfailuretypeEnum::catmEndCCOAMFailure {4, "catmEndCCOAMFailure"};
const Enum::YLeaf CatmoamfailuretypeEnum::catmAISRDIOAMFailure {8, "catmAISRDIOAMFailure"};


}
}

