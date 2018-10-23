
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_PVCTRAP_EXTN_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ATM_PVCTRAP_EXTN_MIB {

CISCOATMPVCTRAPEXTNMIB::CISCOATMPVCTRAPEXTNMIB()
    :
    catmcurstatchangepvcltable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable>())
    , catmstatuschangepvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable>())
    , catmsegccstatuschpvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable>())
    , catmendccstatuschpvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable>())
    , catmaisrdistatuschpvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable>())
    , catmdownpvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable>())
    , catmcurstatusuppvcltable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable>())
    , catmstatusuppvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable>())
    , catmsegccstatusuppvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable>())
    , catmendccstatusuppvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable>())
    , catmaisrdistatusuppvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable>())
    , catmuppvclrangetable(std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable>())
{
    catmcurstatchangepvcltable->parent = this;
    catmstatuschangepvclrangetable->parent = this;
    catmsegccstatuschpvclrangetable->parent = this;
    catmendccstatuschpvclrangetable->parent = this;
    catmaisrdistatuschpvclrangetable->parent = this;
    catmdownpvclrangetable->parent = this;
    catmcurstatusuppvcltable->parent = this;
    catmstatusuppvclrangetable->parent = this;
    catmsegccstatusuppvclrangetable->parent = this;
    catmendccstatusuppvclrangetable->parent = this;
    catmaisrdistatusuppvclrangetable->parent = this;
    catmuppvclrangetable->parent = this;

    yang_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::~CISCOATMPVCTRAPEXTNMIB()
{
}

bool CISCOATMPVCTRAPEXTNMIB::has_data() const
{
    if (is_presence_container) return true;
    return (catmcurstatchangepvcltable !=  nullptr && catmcurstatchangepvcltable->has_data())
	|| (catmstatuschangepvclrangetable !=  nullptr && catmstatuschangepvclrangetable->has_data())
	|| (catmsegccstatuschpvclrangetable !=  nullptr && catmsegccstatuschpvclrangetable->has_data())
	|| (catmendccstatuschpvclrangetable !=  nullptr && catmendccstatuschpvclrangetable->has_data())
	|| (catmaisrdistatuschpvclrangetable !=  nullptr && catmaisrdistatuschpvclrangetable->has_data())
	|| (catmdownpvclrangetable !=  nullptr && catmdownpvclrangetable->has_data())
	|| (catmcurstatusuppvcltable !=  nullptr && catmcurstatusuppvcltable->has_data())
	|| (catmstatusuppvclrangetable !=  nullptr && catmstatusuppvclrangetable->has_data())
	|| (catmsegccstatusuppvclrangetable !=  nullptr && catmsegccstatusuppvclrangetable->has_data())
	|| (catmendccstatusuppvclrangetable !=  nullptr && catmendccstatusuppvclrangetable->has_data())
	|| (catmaisrdistatusuppvclrangetable !=  nullptr && catmaisrdistatusuppvclrangetable->has_data())
	|| (catmuppvclrangetable !=  nullptr && catmuppvclrangetable->has_data());
}

bool CISCOATMPVCTRAPEXTNMIB::has_operation() const
{
    return is_set(yfilter)
	|| (catmcurstatchangepvcltable !=  nullptr && catmcurstatchangepvcltable->has_operation())
	|| (catmstatuschangepvclrangetable !=  nullptr && catmstatuschangepvclrangetable->has_operation())
	|| (catmsegccstatuschpvclrangetable !=  nullptr && catmsegccstatuschpvclrangetable->has_operation())
	|| (catmendccstatuschpvclrangetable !=  nullptr && catmendccstatuschpvclrangetable->has_operation())
	|| (catmaisrdistatuschpvclrangetable !=  nullptr && catmaisrdistatuschpvclrangetable->has_operation())
	|| (catmdownpvclrangetable !=  nullptr && catmdownpvclrangetable->has_operation())
	|| (catmcurstatusuppvcltable !=  nullptr && catmcurstatusuppvcltable->has_operation())
	|| (catmstatusuppvclrangetable !=  nullptr && catmstatusuppvclrangetable->has_operation())
	|| (catmsegccstatusuppvclrangetable !=  nullptr && catmsegccstatusuppvclrangetable->has_operation())
	|| (catmendccstatusuppvclrangetable !=  nullptr && catmendccstatusuppvclrangetable->has_operation())
	|| (catmaisrdistatusuppvclrangetable !=  nullptr && catmaisrdistatusuppvclrangetable->has_operation())
	|| (catmuppvclrangetable !=  nullptr && catmuppvclrangetable->has_operation());
}

std::string CISCOATMPVCTRAPEXTNMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmCurStatChangePVclTable")
    {
        if(catmcurstatchangepvcltable == nullptr)
        {
            catmcurstatchangepvcltable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable>();
        }
        return catmcurstatchangepvcltable;
    }

    if(child_yang_name == "catmStatusChangePVclRangeTable")
    {
        if(catmstatuschangepvclrangetable == nullptr)
        {
            catmstatuschangepvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable>();
        }
        return catmstatuschangepvclrangetable;
    }

    if(child_yang_name == "catmSegCCStatusChPVclRangeTable")
    {
        if(catmsegccstatuschpvclrangetable == nullptr)
        {
            catmsegccstatuschpvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable>();
        }
        return catmsegccstatuschpvclrangetable;
    }

    if(child_yang_name == "catmEndCCStatusChPVclRangeTable")
    {
        if(catmendccstatuschpvclrangetable == nullptr)
        {
            catmendccstatuschpvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable>();
        }
        return catmendccstatuschpvclrangetable;
    }

    if(child_yang_name == "catmAISRDIStatusChPVclRangeTable")
    {
        if(catmaisrdistatuschpvclrangetable == nullptr)
        {
            catmaisrdistatuschpvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable>();
        }
        return catmaisrdistatuschpvclrangetable;
    }

    if(child_yang_name == "catmDownPVclRangeTable")
    {
        if(catmdownpvclrangetable == nullptr)
        {
            catmdownpvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable>();
        }
        return catmdownpvclrangetable;
    }

    if(child_yang_name == "catmCurStatusUpPVclTable")
    {
        if(catmcurstatusuppvcltable == nullptr)
        {
            catmcurstatusuppvcltable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable>();
        }
        return catmcurstatusuppvcltable;
    }

    if(child_yang_name == "catmStatusUpPVclRangeTable")
    {
        if(catmstatusuppvclrangetable == nullptr)
        {
            catmstatusuppvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable>();
        }
        return catmstatusuppvclrangetable;
    }

    if(child_yang_name == "catmSegCCStatusUpPVclRangeTable")
    {
        if(catmsegccstatusuppvclrangetable == nullptr)
        {
            catmsegccstatusuppvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable>();
        }
        return catmsegccstatusuppvclrangetable;
    }

    if(child_yang_name == "catmEndCCStatusUpPVclRangeTable")
    {
        if(catmendccstatusuppvclrangetable == nullptr)
        {
            catmendccstatusuppvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable>();
        }
        return catmendccstatusuppvclrangetable;
    }

    if(child_yang_name == "catmAISRDIStatusUpPVclRangeTable")
    {
        if(catmaisrdistatusuppvclrangetable == nullptr)
        {
            catmaisrdistatusuppvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable>();
        }
        return catmaisrdistatusuppvclrangetable;
    }

    if(child_yang_name == "catmUpPVclRangeTable")
    {
        if(catmuppvclrangetable == nullptr)
        {
            catmuppvclrangetable = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable>();
        }
        return catmuppvclrangetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(catmcurstatchangepvcltable != nullptr)
    {
        _children["catmCurStatChangePVclTable"] = catmcurstatchangepvcltable;
    }

    if(catmstatuschangepvclrangetable != nullptr)
    {
        _children["catmStatusChangePVclRangeTable"] = catmstatuschangepvclrangetable;
    }

    if(catmsegccstatuschpvclrangetable != nullptr)
    {
        _children["catmSegCCStatusChPVclRangeTable"] = catmsegccstatuschpvclrangetable;
    }

    if(catmendccstatuschpvclrangetable != nullptr)
    {
        _children["catmEndCCStatusChPVclRangeTable"] = catmendccstatuschpvclrangetable;
    }

    if(catmaisrdistatuschpvclrangetable != nullptr)
    {
        _children["catmAISRDIStatusChPVclRangeTable"] = catmaisrdistatuschpvclrangetable;
    }

    if(catmdownpvclrangetable != nullptr)
    {
        _children["catmDownPVclRangeTable"] = catmdownpvclrangetable;
    }

    if(catmcurstatusuppvcltable != nullptr)
    {
        _children["catmCurStatusUpPVclTable"] = catmcurstatusuppvcltable;
    }

    if(catmstatusuppvclrangetable != nullptr)
    {
        _children["catmStatusUpPVclRangeTable"] = catmstatusuppvclrangetable;
    }

    if(catmsegccstatusuppvclrangetable != nullptr)
    {
        _children["catmSegCCStatusUpPVclRangeTable"] = catmsegccstatusuppvclrangetable;
    }

    if(catmendccstatusuppvclrangetable != nullptr)
    {
        _children["catmEndCCStatusUpPVclRangeTable"] = catmendccstatusuppvclrangetable;
    }

    if(catmaisrdistatusuppvclrangetable != nullptr)
    {
        _children["catmAISRDIStatusUpPVclRangeTable"] = catmaisrdistatusuppvclrangetable;
    }

    if(catmuppvclrangetable != nullptr)
    {
        _children["catmUpPVclRangeTable"] = catmuppvclrangetable;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::clone_ptr() const
{
    return std::make_shared<CISCOATMPVCTRAPEXTNMIB>();
}

std::string CISCOATMPVCTRAPEXTNMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOATMPVCTRAPEXTNMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOATMPVCTRAPEXTNMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOATMPVCTRAPEXTNMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOATMPVCTRAPEXTNMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmCurStatChangePVclTable" || name == "catmStatusChangePVclRangeTable" || name == "catmSegCCStatusChPVclRangeTable" || name == "catmEndCCStatusChPVclRangeTable" || name == "catmAISRDIStatusChPVclRangeTable" || name == "catmDownPVclRangeTable" || name == "catmCurStatusUpPVclTable" || name == "catmStatusUpPVclRangeTable" || name == "catmSegCCStatusUpPVclRangeTable" || name == "catmEndCCStatusUpPVclRangeTable" || name == "catmAISRDIStatusUpPVclRangeTable" || name == "catmUpPVclRangeTable")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclTable()
    :
    catmcurstatchangepvclentry(this, {"ifindex", "atmvclvpi", "atmvclvci"})
{

    yang_name = "catmCurStatChangePVclTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::~CatmCurStatChangePVclTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmcurstatchangepvclentry.len(); index++)
    {
        if(catmcurstatchangepvclentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::has_operation() const
{
    for (std::size_t index=0; index<catmcurstatchangepvclentry.len(); index++)
    {
        if(catmcurstatchangepvclentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatChangePVclTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmCurStatChangePVclEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry>();
        ent_->parent = this;
        catmcurstatchangepvclentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmcurstatchangepvclentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmCurStatChangePVclEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::CatmCurStatChangePVclEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    catmpvclstatustransition{YType::uint32, "catmPVclStatusTransition"},
    catmpvclstatuschangestart{YType::uint32, "catmPVclStatusChangeStart"},
    catmpvclstatuschangeend{YType::uint32, "catmPVclStatusChangeEnd"},
    catmpvclsegccstatustransition{YType::uint32, "catmPVclSegCCStatusTransition"},
    catmpvclsegccstatuschangestart{YType::uint32, "catmPVclSegCCStatusChangeStart"},
    catmpvclsegccstatuschangeend{YType::uint32, "catmPVclSegCCStatusChangeEnd"},
    catmpvclendccstatustransition{YType::uint32, "catmPVclEndCCStatusTransition"},
    catmpvclendccstatuschangestart{YType::uint32, "catmPVclEndCCStatusChangeStart"},
    catmpvclendccstatuschangeend{YType::uint32, "catmPVclEndCCStatusChangeEnd"},
    catmpvclaisrdistatustransition{YType::uint32, "catmPVclAISRDIStatusTransition"},
    catmpvclaisrdistatuschangestart{YType::uint32, "catmPVclAISRDIStatusChangeStart"},
    catmpvclaisrdistatuschangeend{YType::uint32, "catmPVclAISRDIStatusChangeEnd"},
    catmpvclcurfailtime{YType::uint32, "catmPVclCurFailTime"},
    catmpvclprevrecovertime{YType::uint32, "catmPVclPrevRecoverTime"},
    catmpvclfailurereason{YType::enumeration, "catmPVclFailureReason"}
{

    yang_name = "catmCurStatChangePVclEntry"; yang_parent_name = "catmCurStatChangePVclTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::~CatmCurStatChangePVclEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| catmpvclstatustransition.is_set
	|| catmpvclstatuschangestart.is_set
	|| catmpvclstatuschangeend.is_set
	|| catmpvclsegccstatustransition.is_set
	|| catmpvclsegccstatuschangestart.is_set
	|| catmpvclsegccstatuschangeend.is_set
	|| catmpvclendccstatustransition.is_set
	|| catmpvclendccstatuschangestart.is_set
	|| catmpvclendccstatuschangeend.is_set
	|| catmpvclaisrdistatustransition.is_set
	|| catmpvclaisrdistatuschangestart.is_set
	|| catmpvclaisrdistatuschangeend.is_set
	|| catmpvclcurfailtime.is_set
	|| catmpvclprevrecovertime.is_set
	|| catmpvclfailurereason.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(catmpvclstatustransition.yfilter)
	|| ydk::is_set(catmpvclstatuschangestart.yfilter)
	|| ydk::is_set(catmpvclstatuschangeend.yfilter)
	|| ydk::is_set(catmpvclsegccstatustransition.yfilter)
	|| ydk::is_set(catmpvclsegccstatuschangestart.yfilter)
	|| ydk::is_set(catmpvclsegccstatuschangeend.yfilter)
	|| ydk::is_set(catmpvclendccstatustransition.yfilter)
	|| ydk::is_set(catmpvclendccstatuschangestart.yfilter)
	|| ydk::is_set(catmpvclendccstatuschangeend.yfilter)
	|| ydk::is_set(catmpvclaisrdistatustransition.yfilter)
	|| ydk::is_set(catmpvclaisrdistatuschangestart.yfilter)
	|| ydk::is_set(catmpvclaisrdistatuschangeend.yfilter)
	|| ydk::is_set(catmpvclcurfailtime.yfilter)
	|| ydk::is_set(catmpvclprevrecovertime.yfilter)
	|| ydk::is_set(catmpvclfailurereason.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmCurStatChangePVclTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatChangePVclEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(atmvclvci, "atmVclVci");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (catmpvclstatustransition.is_set || is_set(catmpvclstatustransition.yfilter)) leaf_name_data.push_back(catmpvclstatustransition.get_name_leafdata());
    if (catmpvclstatuschangestart.is_set || is_set(catmpvclstatuschangestart.yfilter)) leaf_name_data.push_back(catmpvclstatuschangestart.get_name_leafdata());
    if (catmpvclstatuschangeend.is_set || is_set(catmpvclstatuschangeend.yfilter)) leaf_name_data.push_back(catmpvclstatuschangeend.get_name_leafdata());
    if (catmpvclsegccstatustransition.is_set || is_set(catmpvclsegccstatustransition.yfilter)) leaf_name_data.push_back(catmpvclsegccstatustransition.get_name_leafdata());
    if (catmpvclsegccstatuschangestart.is_set || is_set(catmpvclsegccstatuschangestart.yfilter)) leaf_name_data.push_back(catmpvclsegccstatuschangestart.get_name_leafdata());
    if (catmpvclsegccstatuschangeend.is_set || is_set(catmpvclsegccstatuschangeend.yfilter)) leaf_name_data.push_back(catmpvclsegccstatuschangeend.get_name_leafdata());
    if (catmpvclendccstatustransition.is_set || is_set(catmpvclendccstatustransition.yfilter)) leaf_name_data.push_back(catmpvclendccstatustransition.get_name_leafdata());
    if (catmpvclendccstatuschangestart.is_set || is_set(catmpvclendccstatuschangestart.yfilter)) leaf_name_data.push_back(catmpvclendccstatuschangestart.get_name_leafdata());
    if (catmpvclendccstatuschangeend.is_set || is_set(catmpvclendccstatuschangeend.yfilter)) leaf_name_data.push_back(catmpvclendccstatuschangeend.get_name_leafdata());
    if (catmpvclaisrdistatustransition.is_set || is_set(catmpvclaisrdistatustransition.yfilter)) leaf_name_data.push_back(catmpvclaisrdistatustransition.get_name_leafdata());
    if (catmpvclaisrdistatuschangestart.is_set || is_set(catmpvclaisrdistatuschangestart.yfilter)) leaf_name_data.push_back(catmpvclaisrdistatuschangestart.get_name_leafdata());
    if (catmpvclaisrdistatuschangeend.is_set || is_set(catmpvclaisrdistatuschangeend.yfilter)) leaf_name_data.push_back(catmpvclaisrdistatuschangeend.get_name_leafdata());
    if (catmpvclcurfailtime.is_set || is_set(catmpvclcurfailtime.yfilter)) leaf_name_data.push_back(catmpvclcurfailtime.get_name_leafdata());
    if (catmpvclprevrecovertime.is_set || is_set(catmpvclprevrecovertime.yfilter)) leaf_name_data.push_back(catmpvclprevrecovertime.get_name_leafdata());
    if (catmpvclfailurereason.is_set || is_set(catmpvclfailurereason.yfilter)) leaf_name_data.push_back(catmpvclfailurereason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmPVclStatusTransition")
    {
        catmpvclstatustransition = value;
        catmpvclstatustransition.value_namespace = name_space;
        catmpvclstatustransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclStatusChangeStart")
    {
        catmpvclstatuschangestart = value;
        catmpvclstatuschangestart.value_namespace = name_space;
        catmpvclstatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclStatusChangeEnd")
    {
        catmpvclstatuschangeend = value;
        catmpvclstatuschangeend.value_namespace = name_space;
        catmpvclstatuschangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCStatusTransition")
    {
        catmpvclsegccstatustransition = value;
        catmpvclsegccstatustransition.value_namespace = name_space;
        catmpvclsegccstatustransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCStatusChangeStart")
    {
        catmpvclsegccstatuschangestart = value;
        catmpvclsegccstatuschangestart.value_namespace = name_space;
        catmpvclsegccstatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCStatusChangeEnd")
    {
        catmpvclsegccstatuschangeend = value;
        catmpvclsegccstatuschangeend.value_namespace = name_space;
        catmpvclsegccstatuschangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCStatusTransition")
    {
        catmpvclendccstatustransition = value;
        catmpvclendccstatustransition.value_namespace = name_space;
        catmpvclendccstatustransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCStatusChangeStart")
    {
        catmpvclendccstatuschangestart = value;
        catmpvclendccstatuschangestart.value_namespace = name_space;
        catmpvclendccstatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCStatusChangeEnd")
    {
        catmpvclendccstatuschangeend = value;
        catmpvclendccstatuschangeend.value_namespace = name_space;
        catmpvclendccstatuschangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIStatusTransition")
    {
        catmpvclaisrdistatustransition = value;
        catmpvclaisrdistatustransition.value_namespace = name_space;
        catmpvclaisrdistatustransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIStatusChangeStart")
    {
        catmpvclaisrdistatuschangestart = value;
        catmpvclaisrdistatuschangestart.value_namespace = name_space;
        catmpvclaisrdistatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIStatusChangeEnd")
    {
        catmpvclaisrdistatuschangeend = value;
        catmpvclaisrdistatuschangeend.value_namespace = name_space;
        catmpvclaisrdistatuschangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclCurFailTime")
    {
        catmpvclcurfailtime = value;
        catmpvclcurfailtime.value_namespace = name_space;
        catmpvclcurfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclPrevRecoverTime")
    {
        catmpvclprevrecovertime = value;
        catmpvclprevrecovertime.value_namespace = name_space;
        catmpvclprevrecovertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclFailureReason")
    {
        catmpvclfailurereason = value;
        catmpvclfailurereason.value_namespace = name_space;
        catmpvclfailurereason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "catmPVclStatusTransition")
    {
        catmpvclstatustransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclStatusChangeStart")
    {
        catmpvclstatuschangestart.yfilter = yfilter;
    }
    if(value_path == "catmPVclStatusChangeEnd")
    {
        catmpvclstatuschangeend.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCStatusTransition")
    {
        catmpvclsegccstatustransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCStatusChangeStart")
    {
        catmpvclsegccstatuschangestart.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCStatusChangeEnd")
    {
        catmpvclsegccstatuschangeend.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCStatusTransition")
    {
        catmpvclendccstatustransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCStatusChangeStart")
    {
        catmpvclendccstatuschangestart.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCStatusChangeEnd")
    {
        catmpvclendccstatuschangeend.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIStatusTransition")
    {
        catmpvclaisrdistatustransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIStatusChangeStart")
    {
        catmpvclaisrdistatuschangestart.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIStatusChangeEnd")
    {
        catmpvclaisrdistatuschangeend.yfilter = yfilter;
    }
    if(value_path == "catmPVclCurFailTime")
    {
        catmpvclcurfailtime.yfilter = yfilter;
    }
    if(value_path == "catmPVclPrevRecoverTime")
    {
        catmpvclprevrecovertime.yfilter = yfilter;
    }
    if(value_path == "catmPVclFailureReason")
    {
        catmpvclfailurereason.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatChangePVclTable::CatmCurStatChangePVclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "catmPVclStatusTransition" || name == "catmPVclStatusChangeStart" || name == "catmPVclStatusChangeEnd" || name == "catmPVclSegCCStatusTransition" || name == "catmPVclSegCCStatusChangeStart" || name == "catmPVclSegCCStatusChangeEnd" || name == "catmPVclEndCCStatusTransition" || name == "catmPVclEndCCStatusChangeStart" || name == "catmPVclEndCCStatusChangeEnd" || name == "catmPVclAISRDIStatusTransition" || name == "catmPVclAISRDIStatusChangeStart" || name == "catmPVclAISRDIStatusChangeEnd" || name == "catmPVclCurFailTime" || name == "catmPVclPrevRecoverTime" || name == "catmPVclFailureReason")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeTable()
    :
    catmstatuschangepvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmStatusChangePVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::~CatmStatusChangePVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmstatuschangepvclrangeentry.len(); index++)
    {
        if(catmstatuschangepvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmstatuschangepvclrangeentry.len(); index++)
    {
        if(catmstatuschangepvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusChangePVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmStatusChangePVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry>();
        ent_->parent = this;
        catmstatuschangepvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmstatuschangepvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmStatusChangePVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::CatmStatusChangePVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::int32, "catmStatusChangePVclRangeIndex"},
    catmpvcllowerrangevalue{YType::int32, "catmPVclLowerRangeValue"},
    catmpvclhigherrangevalue{YType::int32, "catmPVclHigherRangeValue"},
    catmpvclrangestatuschangestart{YType::uint32, "catmPVclRangeStatusChangeStart"},
    catmpvclrangestatuschangeend{YType::uint32, "catmPVclRangeStatusChangeEnd"}
{

    yang_name = "catmStatusChangePVclRangeEntry"; yang_parent_name = "catmStatusChangePVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::~CatmStatusChangePVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvcllowerrangevalue.is_set
	|| catmpvclhigherrangevalue.is_set
	|| catmpvclrangestatuschangestart.is_set
	|| catmpvclrangestatuschangeend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvcllowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclhigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclrangestatuschangestart.yfilter)
	|| ydk::is_set(catmpvclrangestatuschangeend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmStatusChangePVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusChangePVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvcllowerrangevalue.is_set || is_set(catmpvcllowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvcllowerrangevalue.get_name_leafdata());
    if (catmpvclhigherrangevalue.is_set || is_set(catmpvclhigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclhigherrangevalue.get_name_leafdata());
    if (catmpvclrangestatuschangestart.is_set || is_set(catmpvclrangestatuschangestart.yfilter)) leaf_name_data.push_back(catmpvclrangestatuschangestart.get_name_leafdata());
    if (catmpvclrangestatuschangeend.is_set || is_set(catmpvclrangestatuschangeend.yfilter)) leaf_name_data.push_back(catmpvclrangestatuschangeend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclLowerRangeValue")
    {
        catmpvcllowerrangevalue = value;
        catmpvcllowerrangevalue.value_namespace = name_space;
        catmpvcllowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclHigherRangeValue")
    {
        catmpvclhigherrangevalue = value;
        catmpvclhigherrangevalue.value_namespace = name_space;
        catmpvclhigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRangeStatusChangeStart")
    {
        catmpvclrangestatuschangestart = value;
        catmpvclrangestatuschangestart.value_namespace = name_space;
        catmpvclrangestatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRangeStatusChangeEnd")
    {
        catmpvclrangestatuschangeend = value;
        catmpvclrangestatuschangeend.value_namespace = name_space;
        catmpvclrangestatuschangeend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclLowerRangeValue")
    {
        catmpvcllowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclHigherRangeValue")
    {
        catmpvclhigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclRangeStatusChangeStart")
    {
        catmpvclrangestatuschangestart.yfilter = yfilter;
    }
    if(value_path == "catmPVclRangeStatusChangeEnd")
    {
        catmpvclrangestatuschangeend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusChangePVclRangeTable::CatmStatusChangePVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclLowerRangeValue" || name == "catmPVclHigherRangeValue" || name == "catmPVclRangeStatusChangeStart" || name == "catmPVclRangeStatusChangeEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeTable()
    :
    catmsegccstatuschpvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmSegCCStatusChPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::~CatmSegCCStatusChPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmsegccstatuschpvclrangeentry.len(); index++)
    {
        if(catmsegccstatuschpvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmsegccstatuschpvclrangeentry.len(); index++)
    {
        if(catmsegccstatuschpvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusChPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmSegCCStatusChPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry>();
        ent_->parent = this;
        catmsegccstatuschpvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmsegccstatuschpvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmSegCCStatusChPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::CatmSegCCStatusChPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclsegcclowerrangevalue{YType::int32, "catmPVclSegCCLowerRangeValue"},
    catmpvclsegcchigherrangevalue{YType::int32, "catmPVclSegCCHigherRangeValue"},
    catmpvclsegccrangestatuschstart{YType::uint32, "catmPVclSegCCRangeStatusChStart"},
    catmpvclsegccrangestatuschend{YType::uint32, "catmPVclSegCCRangeStatusChEnd"}
{

    yang_name = "catmSegCCStatusChPVclRangeEntry"; yang_parent_name = "catmSegCCStatusChPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::~CatmSegCCStatusChPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclsegcclowerrangevalue.is_set
	|| catmpvclsegcchigherrangevalue.is_set
	|| catmpvclsegccrangestatuschstart.is_set
	|| catmpvclsegccrangestatuschend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvclsegcclowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclsegcchigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclsegccrangestatuschstart.yfilter)
	|| ydk::is_set(catmpvclsegccrangestatuschend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmSegCCStatusChPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusChPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclsegcclowerrangevalue.is_set || is_set(catmpvclsegcclowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvclsegcclowerrangevalue.get_name_leafdata());
    if (catmpvclsegcchigherrangevalue.is_set || is_set(catmpvclsegcchigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclsegcchigherrangevalue.get_name_leafdata());
    if (catmpvclsegccrangestatuschstart.is_set || is_set(catmpvclsegccrangestatuschstart.yfilter)) leaf_name_data.push_back(catmpvclsegccrangestatuschstart.get_name_leafdata());
    if (catmpvclsegccrangestatuschend.is_set || is_set(catmpvclsegccrangestatuschend.yfilter)) leaf_name_data.push_back(catmpvclsegccrangestatuschend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCLowerRangeValue")
    {
        catmpvclsegcclowerrangevalue = value;
        catmpvclsegcclowerrangevalue.value_namespace = name_space;
        catmpvclsegcclowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCHigherRangeValue")
    {
        catmpvclsegcchigherrangevalue = value;
        catmpvclsegcchigherrangevalue.value_namespace = name_space;
        catmpvclsegcchigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCRangeStatusChStart")
    {
        catmpvclsegccrangestatuschstart = value;
        catmpvclsegccrangestatuschstart.value_namespace = name_space;
        catmpvclsegccrangestatuschstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCRangeStatusChEnd")
    {
        catmpvclsegccrangestatuschend = value;
        catmpvclsegccrangestatuschend.value_namespace = name_space;
        catmpvclsegccrangestatuschend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCLowerRangeValue")
    {
        catmpvclsegcclowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCHigherRangeValue")
    {
        catmpvclsegcchigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCRangeStatusChStart")
    {
        catmpvclsegccrangestatuschstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCRangeStatusChEnd")
    {
        catmpvclsegccrangestatuschend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusChPVclRangeTable::CatmSegCCStatusChPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclSegCCLowerRangeValue" || name == "catmPVclSegCCHigherRangeValue" || name == "catmPVclSegCCRangeStatusChStart" || name == "catmPVclSegCCRangeStatusChEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeTable()
    :
    catmendccstatuschpvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmEndCCStatusChPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::~CatmEndCCStatusChPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmendccstatuschpvclrangeentry.len(); index++)
    {
        if(catmendccstatuschpvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmendccstatuschpvclrangeentry.len(); index++)
    {
        if(catmendccstatuschpvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusChPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmEndCCStatusChPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry>();
        ent_->parent = this;
        catmendccstatuschpvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmendccstatuschpvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmEndCCStatusChPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::CatmEndCCStatusChPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclendcclowerrangevalue{YType::int32, "catmPVclEndCCLowerRangeValue"},
    catmpvclendcchigherrangevalue{YType::int32, "catmPVclEndCCHigherRangeValue"},
    catmpvclendccrangestatuschstart{YType::uint32, "catmPVclEndCCRangeStatusChStart"},
    catmpvclendccrangestatuschend{YType::uint32, "catmPVclEndCCRangeStatusChEnd"}
{

    yang_name = "catmEndCCStatusChPVclRangeEntry"; yang_parent_name = "catmEndCCStatusChPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::~CatmEndCCStatusChPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclendcclowerrangevalue.is_set
	|| catmpvclendcchigherrangevalue.is_set
	|| catmpvclendccrangestatuschstart.is_set
	|| catmpvclendccrangestatuschend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvclendcclowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclendcchigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclendccrangestatuschstart.yfilter)
	|| ydk::is_set(catmpvclendccrangestatuschend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmEndCCStatusChPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusChPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclendcclowerrangevalue.is_set || is_set(catmpvclendcclowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvclendcclowerrangevalue.get_name_leafdata());
    if (catmpvclendcchigherrangevalue.is_set || is_set(catmpvclendcchigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclendcchigherrangevalue.get_name_leafdata());
    if (catmpvclendccrangestatuschstart.is_set || is_set(catmpvclendccrangestatuschstart.yfilter)) leaf_name_data.push_back(catmpvclendccrangestatuschstart.get_name_leafdata());
    if (catmpvclendccrangestatuschend.is_set || is_set(catmpvclendccrangestatuschend.yfilter)) leaf_name_data.push_back(catmpvclendccrangestatuschend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCLowerRangeValue")
    {
        catmpvclendcclowerrangevalue = value;
        catmpvclendcclowerrangevalue.value_namespace = name_space;
        catmpvclendcclowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCHigherRangeValue")
    {
        catmpvclendcchigherrangevalue = value;
        catmpvclendcchigherrangevalue.value_namespace = name_space;
        catmpvclendcchigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCRangeStatusChStart")
    {
        catmpvclendccrangestatuschstart = value;
        catmpvclendccrangestatuschstart.value_namespace = name_space;
        catmpvclendccrangestatuschstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCRangeStatusChEnd")
    {
        catmpvclendccrangestatuschend = value;
        catmpvclendccrangestatuschend.value_namespace = name_space;
        catmpvclendccrangestatuschend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCLowerRangeValue")
    {
        catmpvclendcclowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCHigherRangeValue")
    {
        catmpvclendcchigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCRangeStatusChStart")
    {
        catmpvclendccrangestatuschstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCRangeStatusChEnd")
    {
        catmpvclendccrangestatuschend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusChPVclRangeTable::CatmEndCCStatusChPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclEndCCLowerRangeValue" || name == "catmPVclEndCCHigherRangeValue" || name == "catmPVclEndCCRangeStatusChStart" || name == "catmPVclEndCCRangeStatusChEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeTable()
    :
    catmaisrdistatuschpvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmAISRDIStatusChPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::~CatmAISRDIStatusChPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmaisrdistatuschpvclrangeentry.len(); index++)
    {
        if(catmaisrdistatuschpvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmaisrdistatuschpvclrangeentry.len(); index++)
    {
        if(catmaisrdistatuschpvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusChPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmAISRDIStatusChPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry>();
        ent_->parent = this;
        catmaisrdistatuschpvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmaisrdistatuschpvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmAISRDIStatusChPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::CatmAISRDIStatusChPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclaisrdilowerrangevalue{YType::int32, "catmPVclAISRDILowerRangeValue"},
    catmpvclaisrdihigherrangevalue{YType::int32, "catmPVclAISRDIHigherRangeValue"},
    catmpvclaisrdirangestatuschstart{YType::uint32, "catmPVclAISRDIRangeStatusChStart"},
    catmpvclaisrdirangestatuschend{YType::uint32, "catmPVclAISRDIRangeStatusChEnd"}
{

    yang_name = "catmAISRDIStatusChPVclRangeEntry"; yang_parent_name = "catmAISRDIStatusChPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::~CatmAISRDIStatusChPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclaisrdilowerrangevalue.is_set
	|| catmpvclaisrdihigherrangevalue.is_set
	|| catmpvclaisrdirangestatuschstart.is_set
	|| catmpvclaisrdirangestatuschend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvclaisrdilowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclaisrdihigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclaisrdirangestatuschstart.yfilter)
	|| ydk::is_set(catmpvclaisrdirangestatuschend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmAISRDIStatusChPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusChPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclaisrdilowerrangevalue.is_set || is_set(catmpvclaisrdilowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvclaisrdilowerrangevalue.get_name_leafdata());
    if (catmpvclaisrdihigherrangevalue.is_set || is_set(catmpvclaisrdihigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclaisrdihigherrangevalue.get_name_leafdata());
    if (catmpvclaisrdirangestatuschstart.is_set || is_set(catmpvclaisrdirangestatuschstart.yfilter)) leaf_name_data.push_back(catmpvclaisrdirangestatuschstart.get_name_leafdata());
    if (catmpvclaisrdirangestatuschend.is_set || is_set(catmpvclaisrdirangestatuschend.yfilter)) leaf_name_data.push_back(catmpvclaisrdirangestatuschend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDILowerRangeValue")
    {
        catmpvclaisrdilowerrangevalue = value;
        catmpvclaisrdilowerrangevalue.value_namespace = name_space;
        catmpvclaisrdilowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIHigherRangeValue")
    {
        catmpvclaisrdihigherrangevalue = value;
        catmpvclaisrdihigherrangevalue.value_namespace = name_space;
        catmpvclaisrdihigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIRangeStatusChStart")
    {
        catmpvclaisrdirangestatuschstart = value;
        catmpvclaisrdirangestatuschstart.value_namespace = name_space;
        catmpvclaisrdirangestatuschstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIRangeStatusChEnd")
    {
        catmpvclaisrdirangestatuschend = value;
        catmpvclaisrdirangestatuschend.value_namespace = name_space;
        catmpvclaisrdirangestatuschend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDILowerRangeValue")
    {
        catmpvclaisrdilowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIHigherRangeValue")
    {
        catmpvclaisrdihigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIRangeStatusChStart")
    {
        catmpvclaisrdirangestatuschstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIRangeStatusChEnd")
    {
        catmpvclaisrdirangestatuschend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusChPVclRangeTable::CatmAISRDIStatusChPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclAISRDILowerRangeValue" || name == "catmPVclAISRDIHigherRangeValue" || name == "catmPVclAISRDIRangeStatusChStart" || name == "catmPVclAISRDIRangeStatusChEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeTable()
    :
    catmdownpvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmDownPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::~CatmDownPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmdownpvclrangeentry.len(); index++)
    {
        if(catmdownpvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmdownpvclrangeentry.len(); index++)
    {
        if(catmdownpvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmDownPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmDownPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry>();
        ent_->parent = this;
        catmdownpvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmdownpvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmDownPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::CatmDownPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmdownpvcllowerrangevalue{YType::int32, "catmDownPVclLowerRangeValue"},
    catmdownpvclhigherrangevalue{YType::int32, "catmDownPVclHigherRangeValue"},
    catmdownpvclrangestart{YType::uint32, "catmDownPVclRangeStart"},
    catmdownpvclrangeend{YType::uint32, "catmDownPVclRangeEnd"},
    catmprevuppvclrangestart{YType::uint32, "catmPrevUpPVclRangeStart"},
    catmprevuppvclrangeend{YType::uint32, "catmPrevUpPVclRangeEnd"},
    catmpvclrangefailurereason{YType::enumeration, "catmPVclRangeFailureReason"}
{

    yang_name = "catmDownPVclRangeEntry"; yang_parent_name = "catmDownPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::~CatmDownPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmdownpvcllowerrangevalue.is_set
	|| catmdownpvclhigherrangevalue.is_set
	|| catmdownpvclrangestart.is_set
	|| catmdownpvclrangeend.is_set
	|| catmprevuppvclrangestart.is_set
	|| catmprevuppvclrangeend.is_set
	|| catmpvclrangefailurereason.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmdownpvcllowerrangevalue.yfilter)
	|| ydk::is_set(catmdownpvclhigherrangevalue.yfilter)
	|| ydk::is_set(catmdownpvclrangestart.yfilter)
	|| ydk::is_set(catmdownpvclrangeend.yfilter)
	|| ydk::is_set(catmprevuppvclrangestart.yfilter)
	|| ydk::is_set(catmprevuppvclrangeend.yfilter)
	|| ydk::is_set(catmpvclrangefailurereason.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmDownPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmDownPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmdownpvcllowerrangevalue.is_set || is_set(catmdownpvcllowerrangevalue.yfilter)) leaf_name_data.push_back(catmdownpvcllowerrangevalue.get_name_leafdata());
    if (catmdownpvclhigherrangevalue.is_set || is_set(catmdownpvclhigherrangevalue.yfilter)) leaf_name_data.push_back(catmdownpvclhigherrangevalue.get_name_leafdata());
    if (catmdownpvclrangestart.is_set || is_set(catmdownpvclrangestart.yfilter)) leaf_name_data.push_back(catmdownpvclrangestart.get_name_leafdata());
    if (catmdownpvclrangeend.is_set || is_set(catmdownpvclrangeend.yfilter)) leaf_name_data.push_back(catmdownpvclrangeend.get_name_leafdata());
    if (catmprevuppvclrangestart.is_set || is_set(catmprevuppvclrangestart.yfilter)) leaf_name_data.push_back(catmprevuppvclrangestart.get_name_leafdata());
    if (catmprevuppvclrangeend.is_set || is_set(catmprevuppvclrangeend.yfilter)) leaf_name_data.push_back(catmprevuppvclrangeend.get_name_leafdata());
    if (catmpvclrangefailurereason.is_set || is_set(catmpvclrangefailurereason.yfilter)) leaf_name_data.push_back(catmpvclrangefailurereason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmDownPVclLowerRangeValue")
    {
        catmdownpvcllowerrangevalue = value;
        catmdownpvcllowerrangevalue.value_namespace = name_space;
        catmdownpvcllowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmDownPVclHigherRangeValue")
    {
        catmdownpvclhigherrangevalue = value;
        catmdownpvclhigherrangevalue.value_namespace = name_space;
        catmdownpvclhigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmDownPVclRangeStart")
    {
        catmdownpvclrangestart = value;
        catmdownpvclrangestart.value_namespace = name_space;
        catmdownpvclrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmDownPVclRangeEnd")
    {
        catmdownpvclrangeend = value;
        catmdownpvclrangeend.value_namespace = name_space;
        catmdownpvclrangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPrevUpPVclRangeStart")
    {
        catmprevuppvclrangestart = value;
        catmprevuppvclrangestart.value_namespace = name_space;
        catmprevuppvclrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPrevUpPVclRangeEnd")
    {
        catmprevuppvclrangeend = value;
        catmprevuppvclrangeend.value_namespace = name_space;
        catmprevuppvclrangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRangeFailureReason")
    {
        catmpvclrangefailurereason = value;
        catmpvclrangefailurereason.value_namespace = name_space;
        catmpvclrangefailurereason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmDownPVclLowerRangeValue")
    {
        catmdownpvcllowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmDownPVclHigherRangeValue")
    {
        catmdownpvclhigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmDownPVclRangeStart")
    {
        catmdownpvclrangestart.yfilter = yfilter;
    }
    if(value_path == "catmDownPVclRangeEnd")
    {
        catmdownpvclrangeend.yfilter = yfilter;
    }
    if(value_path == "catmPrevUpPVclRangeStart")
    {
        catmprevuppvclrangestart.yfilter = yfilter;
    }
    if(value_path == "catmPrevUpPVclRangeEnd")
    {
        catmprevuppvclrangeend.yfilter = yfilter;
    }
    if(value_path == "catmPVclRangeFailureReason")
    {
        catmpvclrangefailurereason.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmDownPVclRangeTable::CatmDownPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmDownPVclLowerRangeValue" || name == "catmDownPVclHigherRangeValue" || name == "catmDownPVclRangeStart" || name == "catmDownPVclRangeEnd" || name == "catmPrevUpPVclRangeStart" || name == "catmPrevUpPVclRangeEnd" || name == "catmPVclRangeFailureReason")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclTable()
    :
    catmcurstatusuppvclentry(this, {"ifindex", "atmvclvpi", "atmvclvci"})
{

    yang_name = "catmCurStatusUpPVclTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::~CatmCurStatusUpPVclTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmcurstatusuppvclentry.len(); index++)
    {
        if(catmcurstatusuppvclentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::has_operation() const
{
    for (std::size_t index=0; index<catmcurstatusuppvclentry.len(); index++)
    {
        if(catmcurstatusuppvclentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatusUpPVclTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmCurStatusUpPVclEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry>();
        ent_->parent = this;
        catmcurstatusuppvclentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmcurstatusuppvclentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmCurStatusUpPVclEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::CatmCurStatusUpPVclEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    catmpvclstatusuptransition{YType::uint32, "catmPVclStatusUpTransition"},
    catmpvclstatusupstart{YType::uint32, "catmPVclStatusUpStart"},
    catmpvclstatusupend{YType::uint32, "catmPVclStatusUpEnd"},
    catmpvclsegccstatusuptransition{YType::uint32, "catmPVclSegCCStatusUpTransition"},
    catmpvclsegccstatusupstart{YType::uint32, "catmPVclSegCCStatusUpStart"},
    catmpvclsegccstatusupend{YType::uint32, "catmPVclSegCCStatusUpEnd"},
    catmpvclendccstatusuptransition{YType::uint32, "catmPVclEndCCStatusUpTransition"},
    catmpvclendccstatusupstart{YType::uint32, "catmPVclEndCCStatusUpStart"},
    catmpvclendccstatusupend{YType::uint32, "catmPVclEndCCStatusUpEnd"},
    catmpvclaisrdistatusuptransition{YType::uint32, "catmPVclAISRDIStatusUpTransition"},
    catmpvclaisrdistatusupstart{YType::uint32, "catmPVclAISRDIStatusUpStart"},
    catmpvclaisrdistatusupend{YType::uint32, "catmPVclAISRDIStatusUpEnd"},
    catmpvclcurrecovertime{YType::uint32, "catmPVclCurRecoverTime"},
    catmpvclprevfailtime{YType::uint32, "catmPVclPrevFailTime"},
    catmpvclrecoveryreason{YType::enumeration, "catmPVclRecoveryReason"}
{

    yang_name = "catmCurStatusUpPVclEntry"; yang_parent_name = "catmCurStatusUpPVclTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::~CatmCurStatusUpPVclEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| catmpvclstatusuptransition.is_set
	|| catmpvclstatusupstart.is_set
	|| catmpvclstatusupend.is_set
	|| catmpvclsegccstatusuptransition.is_set
	|| catmpvclsegccstatusupstart.is_set
	|| catmpvclsegccstatusupend.is_set
	|| catmpvclendccstatusuptransition.is_set
	|| catmpvclendccstatusupstart.is_set
	|| catmpvclendccstatusupend.is_set
	|| catmpvclaisrdistatusuptransition.is_set
	|| catmpvclaisrdistatusupstart.is_set
	|| catmpvclaisrdistatusupend.is_set
	|| catmpvclcurrecovertime.is_set
	|| catmpvclprevfailtime.is_set
	|| catmpvclrecoveryreason.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(catmpvclstatusuptransition.yfilter)
	|| ydk::is_set(catmpvclstatusupstart.yfilter)
	|| ydk::is_set(catmpvclstatusupend.yfilter)
	|| ydk::is_set(catmpvclsegccstatusuptransition.yfilter)
	|| ydk::is_set(catmpvclsegccstatusupstart.yfilter)
	|| ydk::is_set(catmpvclsegccstatusupend.yfilter)
	|| ydk::is_set(catmpvclendccstatusuptransition.yfilter)
	|| ydk::is_set(catmpvclendccstatusupstart.yfilter)
	|| ydk::is_set(catmpvclendccstatusupend.yfilter)
	|| ydk::is_set(catmpvclaisrdistatusuptransition.yfilter)
	|| ydk::is_set(catmpvclaisrdistatusupstart.yfilter)
	|| ydk::is_set(catmpvclaisrdistatusupend.yfilter)
	|| ydk::is_set(catmpvclcurrecovertime.yfilter)
	|| ydk::is_set(catmpvclprevfailtime.yfilter)
	|| ydk::is_set(catmpvclrecoveryreason.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmCurStatusUpPVclTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmCurStatusUpPVclEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(atmvclvci, "atmVclVci");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (catmpvclstatusuptransition.is_set || is_set(catmpvclstatusuptransition.yfilter)) leaf_name_data.push_back(catmpvclstatusuptransition.get_name_leafdata());
    if (catmpvclstatusupstart.is_set || is_set(catmpvclstatusupstart.yfilter)) leaf_name_data.push_back(catmpvclstatusupstart.get_name_leafdata());
    if (catmpvclstatusupend.is_set || is_set(catmpvclstatusupend.yfilter)) leaf_name_data.push_back(catmpvclstatusupend.get_name_leafdata());
    if (catmpvclsegccstatusuptransition.is_set || is_set(catmpvclsegccstatusuptransition.yfilter)) leaf_name_data.push_back(catmpvclsegccstatusuptransition.get_name_leafdata());
    if (catmpvclsegccstatusupstart.is_set || is_set(catmpvclsegccstatusupstart.yfilter)) leaf_name_data.push_back(catmpvclsegccstatusupstart.get_name_leafdata());
    if (catmpvclsegccstatusupend.is_set || is_set(catmpvclsegccstatusupend.yfilter)) leaf_name_data.push_back(catmpvclsegccstatusupend.get_name_leafdata());
    if (catmpvclendccstatusuptransition.is_set || is_set(catmpvclendccstatusuptransition.yfilter)) leaf_name_data.push_back(catmpvclendccstatusuptransition.get_name_leafdata());
    if (catmpvclendccstatusupstart.is_set || is_set(catmpvclendccstatusupstart.yfilter)) leaf_name_data.push_back(catmpvclendccstatusupstart.get_name_leafdata());
    if (catmpvclendccstatusupend.is_set || is_set(catmpvclendccstatusupend.yfilter)) leaf_name_data.push_back(catmpvclendccstatusupend.get_name_leafdata());
    if (catmpvclaisrdistatusuptransition.is_set || is_set(catmpvclaisrdistatusuptransition.yfilter)) leaf_name_data.push_back(catmpvclaisrdistatusuptransition.get_name_leafdata());
    if (catmpvclaisrdistatusupstart.is_set || is_set(catmpvclaisrdistatusupstart.yfilter)) leaf_name_data.push_back(catmpvclaisrdistatusupstart.get_name_leafdata());
    if (catmpvclaisrdistatusupend.is_set || is_set(catmpvclaisrdistatusupend.yfilter)) leaf_name_data.push_back(catmpvclaisrdistatusupend.get_name_leafdata());
    if (catmpvclcurrecovertime.is_set || is_set(catmpvclcurrecovertime.yfilter)) leaf_name_data.push_back(catmpvclcurrecovertime.get_name_leafdata());
    if (catmpvclprevfailtime.is_set || is_set(catmpvclprevfailtime.yfilter)) leaf_name_data.push_back(catmpvclprevfailtime.get_name_leafdata());
    if (catmpvclrecoveryreason.is_set || is_set(catmpvclrecoveryreason.yfilter)) leaf_name_data.push_back(catmpvclrecoveryreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmPVclStatusUpTransition")
    {
        catmpvclstatusuptransition = value;
        catmpvclstatusuptransition.value_namespace = name_space;
        catmpvclstatusuptransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclStatusUpStart")
    {
        catmpvclstatusupstart = value;
        catmpvclstatusupstart.value_namespace = name_space;
        catmpvclstatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclStatusUpEnd")
    {
        catmpvclstatusupend = value;
        catmpvclstatusupend.value_namespace = name_space;
        catmpvclstatusupend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCStatusUpTransition")
    {
        catmpvclsegccstatusuptransition = value;
        catmpvclsegccstatusuptransition.value_namespace = name_space;
        catmpvclsegccstatusuptransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCStatusUpStart")
    {
        catmpvclsegccstatusupstart = value;
        catmpvclsegccstatusupstart.value_namespace = name_space;
        catmpvclsegccstatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCStatusUpEnd")
    {
        catmpvclsegccstatusupend = value;
        catmpvclsegccstatusupend.value_namespace = name_space;
        catmpvclsegccstatusupend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCStatusUpTransition")
    {
        catmpvclendccstatusuptransition = value;
        catmpvclendccstatusuptransition.value_namespace = name_space;
        catmpvclendccstatusuptransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCStatusUpStart")
    {
        catmpvclendccstatusupstart = value;
        catmpvclendccstatusupstart.value_namespace = name_space;
        catmpvclendccstatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCStatusUpEnd")
    {
        catmpvclendccstatusupend = value;
        catmpvclendccstatusupend.value_namespace = name_space;
        catmpvclendccstatusupend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIStatusUpTransition")
    {
        catmpvclaisrdistatusuptransition = value;
        catmpvclaisrdistatusuptransition.value_namespace = name_space;
        catmpvclaisrdistatusuptransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIStatusUpStart")
    {
        catmpvclaisrdistatusupstart = value;
        catmpvclaisrdistatusupstart.value_namespace = name_space;
        catmpvclaisrdistatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIStatusUpEnd")
    {
        catmpvclaisrdistatusupend = value;
        catmpvclaisrdistatusupend.value_namespace = name_space;
        catmpvclaisrdistatusupend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclCurRecoverTime")
    {
        catmpvclcurrecovertime = value;
        catmpvclcurrecovertime.value_namespace = name_space;
        catmpvclcurrecovertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclPrevFailTime")
    {
        catmpvclprevfailtime = value;
        catmpvclprevfailtime.value_namespace = name_space;
        catmpvclprevfailtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRecoveryReason")
    {
        catmpvclrecoveryreason = value;
        catmpvclrecoveryreason.value_namespace = name_space;
        catmpvclrecoveryreason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "catmPVclStatusUpTransition")
    {
        catmpvclstatusuptransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclStatusUpStart")
    {
        catmpvclstatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclStatusUpEnd")
    {
        catmpvclstatusupend.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCStatusUpTransition")
    {
        catmpvclsegccstatusuptransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCStatusUpStart")
    {
        catmpvclsegccstatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCStatusUpEnd")
    {
        catmpvclsegccstatusupend.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCStatusUpTransition")
    {
        catmpvclendccstatusuptransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCStatusUpStart")
    {
        catmpvclendccstatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCStatusUpEnd")
    {
        catmpvclendccstatusupend.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIStatusUpTransition")
    {
        catmpvclaisrdistatusuptransition.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIStatusUpStart")
    {
        catmpvclaisrdistatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIStatusUpEnd")
    {
        catmpvclaisrdistatusupend.yfilter = yfilter;
    }
    if(value_path == "catmPVclCurRecoverTime")
    {
        catmpvclcurrecovertime.yfilter = yfilter;
    }
    if(value_path == "catmPVclPrevFailTime")
    {
        catmpvclprevfailtime.yfilter = yfilter;
    }
    if(value_path == "catmPVclRecoveryReason")
    {
        catmpvclrecoveryreason.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmCurStatusUpPVclTable::CatmCurStatusUpPVclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "catmPVclStatusUpTransition" || name == "catmPVclStatusUpStart" || name == "catmPVclStatusUpEnd" || name == "catmPVclSegCCStatusUpTransition" || name == "catmPVclSegCCStatusUpStart" || name == "catmPVclSegCCStatusUpEnd" || name == "catmPVclEndCCStatusUpTransition" || name == "catmPVclEndCCStatusUpStart" || name == "catmPVclEndCCStatusUpEnd" || name == "catmPVclAISRDIStatusUpTransition" || name == "catmPVclAISRDIStatusUpStart" || name == "catmPVclAISRDIStatusUpEnd" || name == "catmPVclCurRecoverTime" || name == "catmPVclPrevFailTime" || name == "catmPVclRecoveryReason")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeTable()
    :
    catmstatusuppvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::~CatmStatusUpPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmstatusuppvclrangeentry.len(); index++)
    {
        if(catmstatusuppvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmstatusuppvclrangeentry.len(); index++)
    {
        if(catmstatusuppvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusUpPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmStatusUpPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry>();
        ent_->parent = this;
        catmstatusuppvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmstatusuppvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmStatusUpPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::CatmStatusUpPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvcluplowerrangevalue{YType::int32, "catmPVclUpLowerRangeValue"},
    catmpvcluphigherrangevalue{YType::int32, "catmPVclUpHigherRangeValue"},
    catmpvclrangestatusupstart{YType::uint32, "catmPVclRangeStatusUpStart"},
    catmpvclrangestatusupend{YType::uint32, "catmPVclRangeStatusUpEnd"}
{

    yang_name = "catmStatusUpPVclRangeEntry"; yang_parent_name = "catmStatusUpPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::~CatmStatusUpPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvcluplowerrangevalue.is_set
	|| catmpvcluphigherrangevalue.is_set
	|| catmpvclrangestatusupstart.is_set
	|| catmpvclrangestatusupend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvcluplowerrangevalue.yfilter)
	|| ydk::is_set(catmpvcluphigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclrangestatusupstart.yfilter)
	|| ydk::is_set(catmpvclrangestatusupend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmStatusUpPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmStatusUpPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvcluplowerrangevalue.is_set || is_set(catmpvcluplowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvcluplowerrangevalue.get_name_leafdata());
    if (catmpvcluphigherrangevalue.is_set || is_set(catmpvcluphigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvcluphigherrangevalue.get_name_leafdata());
    if (catmpvclrangestatusupstart.is_set || is_set(catmpvclrangestatusupstart.yfilter)) leaf_name_data.push_back(catmpvclrangestatusupstart.get_name_leafdata());
    if (catmpvclrangestatusupend.is_set || is_set(catmpvclrangestatusupend.yfilter)) leaf_name_data.push_back(catmpvclrangestatusupend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclUpLowerRangeValue")
    {
        catmpvcluplowerrangevalue = value;
        catmpvcluplowerrangevalue.value_namespace = name_space;
        catmpvcluplowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclUpHigherRangeValue")
    {
        catmpvcluphigherrangevalue = value;
        catmpvcluphigherrangevalue.value_namespace = name_space;
        catmpvcluphigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRangeStatusUpStart")
    {
        catmpvclrangestatusupstart = value;
        catmpvclrangestatusupstart.value_namespace = name_space;
        catmpvclrangestatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRangeStatusUpEnd")
    {
        catmpvclrangestatusupend = value;
        catmpvclrangestatusupend.value_namespace = name_space;
        catmpvclrangestatusupend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclUpLowerRangeValue")
    {
        catmpvcluplowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclUpHigherRangeValue")
    {
        catmpvcluphigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclRangeStatusUpStart")
    {
        catmpvclrangestatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclRangeStatusUpEnd")
    {
        catmpvclrangestatusupend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmStatusUpPVclRangeTable::CatmStatusUpPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclUpLowerRangeValue" || name == "catmPVclUpHigherRangeValue" || name == "catmPVclRangeStatusUpStart" || name == "catmPVclRangeStatusUpEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeTable()
    :
    catmsegccstatusuppvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmSegCCStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::~CatmSegCCStatusUpPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmsegccstatusuppvclrangeentry.len(); index++)
    {
        if(catmsegccstatusuppvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmsegccstatusuppvclrangeentry.len(); index++)
    {
        if(catmsegccstatusuppvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusUpPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmSegCCStatusUpPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry>();
        ent_->parent = this;
        catmsegccstatusuppvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmsegccstatusuppvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmSegCCStatusUpPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::CatmSegCCStatusUpPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclsegccuplowerrangevalue{YType::int32, "catmPVclSegCCUpLowerRangeValue"},
    catmpvclsegccuphigherrangevalue{YType::int32, "catmPVclSegCCUpHigherRangeValue"},
    catmpvclsegccrangestatusupstart{YType::uint32, "catmPVclSegCCRangeStatusUpStart"},
    catmpvclsegccrangestatusupend{YType::uint32, "catmPVclSegCCRangeStatusUpEnd"}
{

    yang_name = "catmSegCCStatusUpPVclRangeEntry"; yang_parent_name = "catmSegCCStatusUpPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::~CatmSegCCStatusUpPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclsegccuplowerrangevalue.is_set
	|| catmpvclsegccuphigherrangevalue.is_set
	|| catmpvclsegccrangestatusupstart.is_set
	|| catmpvclsegccrangestatusupend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvclsegccuplowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclsegccuphigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclsegccrangestatusupstart.yfilter)
	|| ydk::is_set(catmpvclsegccrangestatusupend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmSegCCStatusUpPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmSegCCStatusUpPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclsegccuplowerrangevalue.is_set || is_set(catmpvclsegccuplowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvclsegccuplowerrangevalue.get_name_leafdata());
    if (catmpvclsegccuphigherrangevalue.is_set || is_set(catmpvclsegccuphigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclsegccuphigherrangevalue.get_name_leafdata());
    if (catmpvclsegccrangestatusupstart.is_set || is_set(catmpvclsegccrangestatusupstart.yfilter)) leaf_name_data.push_back(catmpvclsegccrangestatusupstart.get_name_leafdata());
    if (catmpvclsegccrangestatusupend.is_set || is_set(catmpvclsegccrangestatusupend.yfilter)) leaf_name_data.push_back(catmpvclsegccrangestatusupend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCUpLowerRangeValue")
    {
        catmpvclsegccuplowerrangevalue = value;
        catmpvclsegccuplowerrangevalue.value_namespace = name_space;
        catmpvclsegccuplowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCUpHigherRangeValue")
    {
        catmpvclsegccuphigherrangevalue = value;
        catmpvclsegccuphigherrangevalue.value_namespace = name_space;
        catmpvclsegccuphigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCRangeStatusUpStart")
    {
        catmpvclsegccrangestatusupstart = value;
        catmpvclsegccrangestatusupstart.value_namespace = name_space;
        catmpvclsegccrangestatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclSegCCRangeStatusUpEnd")
    {
        catmpvclsegccrangestatusupend = value;
        catmpvclsegccrangestatusupend.value_namespace = name_space;
        catmpvclsegccrangestatusupend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCUpLowerRangeValue")
    {
        catmpvclsegccuplowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCUpHigherRangeValue")
    {
        catmpvclsegccuphigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCRangeStatusUpStart")
    {
        catmpvclsegccrangestatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclSegCCRangeStatusUpEnd")
    {
        catmpvclsegccrangestatusupend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmSegCCStatusUpPVclRangeTable::CatmSegCCStatusUpPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclSegCCUpLowerRangeValue" || name == "catmPVclSegCCUpHigherRangeValue" || name == "catmPVclSegCCRangeStatusUpStart" || name == "catmPVclSegCCRangeStatusUpEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeTable()
    :
    catmendccstatusuppvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmEndCCStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::~CatmEndCCStatusUpPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmendccstatusuppvclrangeentry.len(); index++)
    {
        if(catmendccstatusuppvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmendccstatusuppvclrangeentry.len(); index++)
    {
        if(catmendccstatusuppvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusUpPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmEndCCStatusUpPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry>();
        ent_->parent = this;
        catmendccstatusuppvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmendccstatusuppvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmEndCCStatusUpPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::CatmEndCCStatusUpPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclendccuplowerrangevalue{YType::int32, "catmPVclEndCCUpLowerRangeValue"},
    catmpvclendccuphigherrangevalue{YType::int32, "catmPVclEndCCUpHigherRangeValue"},
    catmpvclendccrangestatusupstart{YType::uint32, "catmPVclEndCCRangeStatusUpStart"},
    catmpvclendccrangestatusupend{YType::uint32, "catmPVclEndCCRangeStatusUpEnd"}
{

    yang_name = "catmEndCCStatusUpPVclRangeEntry"; yang_parent_name = "catmEndCCStatusUpPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::~CatmEndCCStatusUpPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclendccuplowerrangevalue.is_set
	|| catmpvclendccuphigherrangevalue.is_set
	|| catmpvclendccrangestatusupstart.is_set
	|| catmpvclendccrangestatusupend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvclendccuplowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclendccuphigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclendccrangestatusupstart.yfilter)
	|| ydk::is_set(catmpvclendccrangestatusupend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmEndCCStatusUpPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmEndCCStatusUpPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclendccuplowerrangevalue.is_set || is_set(catmpvclendccuplowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvclendccuplowerrangevalue.get_name_leafdata());
    if (catmpvclendccuphigherrangevalue.is_set || is_set(catmpvclendccuphigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclendccuphigherrangevalue.get_name_leafdata());
    if (catmpvclendccrangestatusupstart.is_set || is_set(catmpvclendccrangestatusupstart.yfilter)) leaf_name_data.push_back(catmpvclendccrangestatusupstart.get_name_leafdata());
    if (catmpvclendccrangestatusupend.is_set || is_set(catmpvclendccrangestatusupend.yfilter)) leaf_name_data.push_back(catmpvclendccrangestatusupend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCUpLowerRangeValue")
    {
        catmpvclendccuplowerrangevalue = value;
        catmpvclendccuplowerrangevalue.value_namespace = name_space;
        catmpvclendccuplowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCUpHigherRangeValue")
    {
        catmpvclendccuphigherrangevalue = value;
        catmpvclendccuphigherrangevalue.value_namespace = name_space;
        catmpvclendccuphigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCRangeStatusUpStart")
    {
        catmpvclendccrangestatusupstart = value;
        catmpvclendccrangestatusupstart.value_namespace = name_space;
        catmpvclendccrangestatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclEndCCRangeStatusUpEnd")
    {
        catmpvclendccrangestatusupend = value;
        catmpvclendccrangestatusupend.value_namespace = name_space;
        catmpvclendccrangestatusupend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCUpLowerRangeValue")
    {
        catmpvclendccuplowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCUpHigherRangeValue")
    {
        catmpvclendccuphigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCRangeStatusUpStart")
    {
        catmpvclendccrangestatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclEndCCRangeStatusUpEnd")
    {
        catmpvclendccrangestatusupend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmEndCCStatusUpPVclRangeTable::CatmEndCCStatusUpPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclEndCCUpLowerRangeValue" || name == "catmPVclEndCCUpHigherRangeValue" || name == "catmPVclEndCCRangeStatusUpStart" || name == "catmPVclEndCCRangeStatusUpEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeTable()
    :
    catmaisrdistatusuppvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmAISRDIStatusUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::~CatmAISRDIStatusUpPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmaisrdistatusuppvclrangeentry.len(); index++)
    {
        if(catmaisrdistatusuppvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmaisrdistatusuppvclrangeentry.len(); index++)
    {
        if(catmaisrdistatusuppvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusUpPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmAISRDIStatusUpPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry>();
        ent_->parent = this;
        catmaisrdistatusuppvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmaisrdistatusuppvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmAISRDIStatusUpPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::CatmAISRDIStatusUpPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmpvclaisrdiuplowerrangevalue{YType::int32, "catmPVclAISRDIUpLowerRangeValue"},
    catmpvclaisrdiuphigherrangevalue{YType::int32, "catmPVclAISRDIUpHigherRangeValue"},
    catmpvclaisrdirangestatusupstart{YType::uint32, "catmPVclAISRDIRangeStatusUpStart"},
    catmpvclaisrdirangestatusupend{YType::uint32, "catmPVclAISRDIRangeStatusUpEnd"}
{

    yang_name = "catmAISRDIStatusUpPVclRangeEntry"; yang_parent_name = "catmAISRDIStatusUpPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::~CatmAISRDIStatusUpPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmpvclaisrdiuplowerrangevalue.is_set
	|| catmpvclaisrdiuphigherrangevalue.is_set
	|| catmpvclaisrdirangestatusupstart.is_set
	|| catmpvclaisrdirangestatusupend.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmpvclaisrdiuplowerrangevalue.yfilter)
	|| ydk::is_set(catmpvclaisrdiuphigherrangevalue.yfilter)
	|| ydk::is_set(catmpvclaisrdirangestatusupstart.yfilter)
	|| ydk::is_set(catmpvclaisrdirangestatusupend.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmAISRDIStatusUpPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmAISRDIStatusUpPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmpvclaisrdiuplowerrangevalue.is_set || is_set(catmpvclaisrdiuplowerrangevalue.yfilter)) leaf_name_data.push_back(catmpvclaisrdiuplowerrangevalue.get_name_leafdata());
    if (catmpvclaisrdiuphigherrangevalue.is_set || is_set(catmpvclaisrdiuphigherrangevalue.yfilter)) leaf_name_data.push_back(catmpvclaisrdiuphigherrangevalue.get_name_leafdata());
    if (catmpvclaisrdirangestatusupstart.is_set || is_set(catmpvclaisrdirangestatusupstart.yfilter)) leaf_name_data.push_back(catmpvclaisrdirangestatusupstart.get_name_leafdata());
    if (catmpvclaisrdirangestatusupend.is_set || is_set(catmpvclaisrdirangestatusupend.yfilter)) leaf_name_data.push_back(catmpvclaisrdirangestatusupend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIUpLowerRangeValue")
    {
        catmpvclaisrdiuplowerrangevalue = value;
        catmpvclaisrdiuplowerrangevalue.value_namespace = name_space;
        catmpvclaisrdiuplowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIUpHigherRangeValue")
    {
        catmpvclaisrdiuphigherrangevalue = value;
        catmpvclaisrdiuphigherrangevalue.value_namespace = name_space;
        catmpvclaisrdiuphigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIRangeStatusUpStart")
    {
        catmpvclaisrdirangestatusupstart = value;
        catmpvclaisrdirangestatusupstart.value_namespace = name_space;
        catmpvclaisrdirangestatusupstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclAISRDIRangeStatusUpEnd")
    {
        catmpvclaisrdirangestatusupend = value;
        catmpvclaisrdirangestatusupend.value_namespace = name_space;
        catmpvclaisrdirangestatusupend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIUpLowerRangeValue")
    {
        catmpvclaisrdiuplowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIUpHigherRangeValue")
    {
        catmpvclaisrdiuphigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIRangeStatusUpStart")
    {
        catmpvclaisrdirangestatusupstart.yfilter = yfilter;
    }
    if(value_path == "catmPVclAISRDIRangeStatusUpEnd")
    {
        catmpvclaisrdirangestatusupend.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmAISRDIStatusUpPVclRangeTable::CatmAISRDIStatusUpPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmPVclAISRDIUpLowerRangeValue" || name == "catmPVclAISRDIUpHigherRangeValue" || name == "catmPVclAISRDIRangeStatusUpStart" || name == "catmPVclAISRDIRangeStatusUpEnd")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeTable()
    :
    catmuppvclrangeentry(this, {"ifindex", "atmvclvpi", "catmstatuschangepvclrangeindex"})
{

    yang_name = "catmUpPVclRangeTable"; yang_parent_name = "CISCO-ATM-PVCTRAP-EXTN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::~CatmUpPVclRangeTable()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<catmuppvclrangeentry.len(); index++)
    {
        if(catmuppvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<catmuppvclrangeentry.len(); index++)
    {
        if(catmuppvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmUpPVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catmUpPVclRangeEntry")
    {
        auto ent_ = std::make_shared<CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry>();
        ent_->parent = this;
        catmuppvclrangeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : catmuppvclrangeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catmUpPVclRangeEntry")
        return true;
    return false;
}

CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::CatmUpPVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    catmstatuschangepvclrangeindex{YType::str, "catmStatusChangePVclRangeIndex"},
    catmuppvcllowerrangevalue{YType::int32, "catmUpPVclLowerRangeValue"},
    catmuppvclhigherrangevalue{YType::int32, "catmUpPVclHigherRangeValue"},
    catmuppvclrangestart{YType::uint32, "catmUpPVclRangeStart"},
    catmuppvclrangeend{YType::uint32, "catmUpPVclRangeEnd"},
    catmprevdownpvclrangestart{YType::uint32, "catmPrevDownPVclRangeStart"},
    catmprevdownpvclrangeend{YType::uint32, "catmPrevDownPVclRangeEnd"},
    catmpvclrangerecoveryreason{YType::enumeration, "catmPVclRangeRecoveryReason"}
{

    yang_name = "catmUpPVclRangeEntry"; yang_parent_name = "catmUpPVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::~CatmUpPVclRangeEntry()
{
}

bool CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| catmstatuschangepvclrangeindex.is_set
	|| catmuppvcllowerrangevalue.is_set
	|| catmuppvclhigherrangevalue.is_set
	|| catmuppvclrangestart.is_set
	|| catmuppvclrangeend.is_set
	|| catmprevdownpvclrangestart.is_set
	|| catmprevdownpvclrangeend.is_set
	|| catmpvclrangerecoveryreason.is_set;
}

bool CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(catmstatuschangepvclrangeindex.yfilter)
	|| ydk::is_set(catmuppvcllowerrangevalue.yfilter)
	|| ydk::is_set(catmuppvclhigherrangevalue.yfilter)
	|| ydk::is_set(catmuppvclrangestart.yfilter)
	|| ydk::is_set(catmuppvclrangeend.yfilter)
	|| ydk::is_set(catmprevdownpvclrangestart.yfilter)
	|| ydk::is_set(catmprevdownpvclrangeend.yfilter)
	|| ydk::is_set(catmpvclrangerecoveryreason.yfilter);
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-PVCTRAP-EXTN-MIB:CISCO-ATM-PVCTRAP-EXTN-MIB/catmUpPVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catmUpPVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(catmstatuschangepvclrangeindex, "catmStatusChangePVclRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (catmstatuschangepvclrangeindex.is_set || is_set(catmstatuschangepvclrangeindex.yfilter)) leaf_name_data.push_back(catmstatuschangepvclrangeindex.get_name_leafdata());
    if (catmuppvcllowerrangevalue.is_set || is_set(catmuppvcllowerrangevalue.yfilter)) leaf_name_data.push_back(catmuppvcllowerrangevalue.get_name_leafdata());
    if (catmuppvclhigherrangevalue.is_set || is_set(catmuppvclhigherrangevalue.yfilter)) leaf_name_data.push_back(catmuppvclhigherrangevalue.get_name_leafdata());
    if (catmuppvclrangestart.is_set || is_set(catmuppvclrangestart.yfilter)) leaf_name_data.push_back(catmuppvclrangestart.get_name_leafdata());
    if (catmuppvclrangeend.is_set || is_set(catmuppvclrangeend.yfilter)) leaf_name_data.push_back(catmuppvclrangeend.get_name_leafdata());
    if (catmprevdownpvclrangestart.is_set || is_set(catmprevdownpvclrangestart.yfilter)) leaf_name_data.push_back(catmprevdownpvclrangestart.get_name_leafdata());
    if (catmprevdownpvclrangeend.is_set || is_set(catmprevdownpvclrangeend.yfilter)) leaf_name_data.push_back(catmprevdownpvclrangeend.get_name_leafdata());
    if (catmpvclrangerecoveryreason.is_set || is_set(catmpvclrangerecoveryreason.yfilter)) leaf_name_data.push_back(catmpvclrangerecoveryreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex = value;
        catmstatuschangepvclrangeindex.value_namespace = name_space;
        catmstatuschangepvclrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmUpPVclLowerRangeValue")
    {
        catmuppvcllowerrangevalue = value;
        catmuppvcllowerrangevalue.value_namespace = name_space;
        catmuppvcllowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmUpPVclHigherRangeValue")
    {
        catmuppvclhigherrangevalue = value;
        catmuppvclhigherrangevalue.value_namespace = name_space;
        catmuppvclhigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmUpPVclRangeStart")
    {
        catmuppvclrangestart = value;
        catmuppvclrangestart.value_namespace = name_space;
        catmuppvclrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmUpPVclRangeEnd")
    {
        catmuppvclrangeend = value;
        catmuppvclrangeend.value_namespace = name_space;
        catmuppvclrangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPrevDownPVclRangeStart")
    {
        catmprevdownpvclrangestart = value;
        catmprevdownpvclrangestart.value_namespace = name_space;
        catmprevdownpvclrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPrevDownPVclRangeEnd")
    {
        catmprevdownpvclrangeend = value;
        catmprevdownpvclrangeend.value_namespace = name_space;
        catmprevdownpvclrangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "catmPVclRangeRecoveryReason")
    {
        catmpvclrangerecoveryreason = value;
        catmpvclrangerecoveryreason.value_namespace = name_space;
        catmpvclrangerecoveryreason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "catmStatusChangePVclRangeIndex")
    {
        catmstatuschangepvclrangeindex.yfilter = yfilter;
    }
    if(value_path == "catmUpPVclLowerRangeValue")
    {
        catmuppvcllowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmUpPVclHigherRangeValue")
    {
        catmuppvclhigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "catmUpPVclRangeStart")
    {
        catmuppvclrangestart.yfilter = yfilter;
    }
    if(value_path == "catmUpPVclRangeEnd")
    {
        catmuppvclrangeend.yfilter = yfilter;
    }
    if(value_path == "catmPrevDownPVclRangeStart")
    {
        catmprevdownpvclrangestart.yfilter = yfilter;
    }
    if(value_path == "catmPrevDownPVclRangeEnd")
    {
        catmprevdownpvclrangeend.yfilter = yfilter;
    }
    if(value_path == "catmPVclRangeRecoveryReason")
    {
        catmpvclrangerecoveryreason.yfilter = yfilter;
    }
}

bool CISCOATMPVCTRAPEXTNMIB::CatmUpPVclRangeTable::CatmUpPVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "catmStatusChangePVclRangeIndex" || name == "catmUpPVclLowerRangeValue" || name == "catmUpPVclHigherRangeValue" || name == "catmUpPVclRangeStart" || name == "catmUpPVclRangeEnd" || name == "catmPrevDownPVclRangeStart" || name == "catmPrevDownPVclRangeEnd" || name == "catmPVclRangeRecoveryReason")
        return true;
    return false;
}

const Enum::YLeaf CatmOAMRecoveryType::catmLoopbackOAMRecover {1, "catmLoopbackOAMRecover"};
const Enum::YLeaf CatmOAMRecoveryType::catmSegmentCCOAMRecover {2, "catmSegmentCCOAMRecover"};
const Enum::YLeaf CatmOAMRecoveryType::catmEndCCOAMRecover {4, "catmEndCCOAMRecover"};
const Enum::YLeaf CatmOAMRecoveryType::catmAISRDIOAMRecover {8, "catmAISRDIOAMRecover"};

const Enum::YLeaf CatmOAMFailureType::catmLoopbackOAMFailure {1, "catmLoopbackOAMFailure"};
const Enum::YLeaf CatmOAMFailureType::catmSegmentCCOAMFailure {2, "catmSegmentCCOAMFailure"};
const Enum::YLeaf CatmOAMFailureType::catmEndCCOAMFailure {4, "catmEndCCOAMFailure"};
const Enum::YLeaf CatmOAMFailureType::catmAISRDIOAMFailure {8, "catmAISRDIOAMFailure"};


}
}

