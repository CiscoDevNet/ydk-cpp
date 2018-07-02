
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN {

CISCOIETFATM2PVCTRAPMIBEXTN::CISCOIETFATM2PVCTRAPMIBEXTN()
    :
    atmcurrentstatuschangepvcltable(std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable>())
    , atmstatuschangepvclrangetable(std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable>())
{
    atmcurrentstatuschangepvcltable->parent = this;
    atmstatuschangepvclrangetable->parent = this;

    yang_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFATM2PVCTRAPMIBEXTN::~CISCOIETFATM2PVCTRAPMIBEXTN()
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::has_data() const
{
    if (is_presence_container) return true;
    return (atmcurrentstatuschangepvcltable !=  nullptr && atmcurrentstatuschangepvcltable->has_data())
	|| (atmstatuschangepvclrangetable !=  nullptr && atmstatuschangepvclrangetable->has_data());
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::has_operation() const
{
    return is_set(yfilter)
	|| (atmcurrentstatuschangepvcltable !=  nullptr && atmcurrentstatuschangepvcltable->has_operation())
	|| (atmstatuschangepvclrangetable !=  nullptr && atmstatuschangepvclrangetable->has_operation());
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIBEXTN::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIBEXTN::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmCurrentStatusChangePVclTable")
    {
        if(atmcurrentstatuschangepvcltable == nullptr)
        {
            atmcurrentstatuschangepvcltable = std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable>();
        }
        return atmcurrentstatuschangepvcltable;
    }

    if(child_yang_name == "atmStatusChangePVclRangeTable")
    {
        if(atmstatuschangepvclrangetable == nullptr)
        {
            atmstatuschangepvclrangetable = std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable>();
        }
        return atmstatuschangepvclrangetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIBEXTN::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atmcurrentstatuschangepvcltable != nullptr)
    {
        children["atmCurrentStatusChangePVclTable"] = atmcurrentstatuschangepvcltable;
    }

    if(atmstatuschangepvclrangetable != nullptr)
    {
        children["atmStatusChangePVclRangeTable"] = atmstatuschangepvclrangetable;
    }

    return children;
}

void CISCOIETFATM2PVCTRAPMIBEXTN::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFATM2PVCTRAPMIBEXTN::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIBEXTN::clone_ptr() const
{
    return std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN>();
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFATM2PVCTRAPMIBEXTN::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFATM2PVCTRAPMIBEXTN::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmCurrentStatusChangePVclTable" || name == "atmStatusChangePVclRangeTable")
        return true;
    return false;
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclTable()
    :
    atmcurrentstatuschangepvclentry(this, {"ifindex", "atmvclvpi", "atmvclvci"})
{

    yang_name = "atmCurrentStatusChangePVclTable"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::~AtmCurrentStatusChangePVclTable()
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<atmcurrentstatuschangepvclentry.len(); index++)
    {
        if(atmcurrentstatuschangepvclentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::has_operation() const
{
    for (std::size_t index=0; index<atmcurrentstatuschangepvclentry.len(); index++)
    {
        if(atmcurrentstatuschangepvclentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmCurrentStatusChangePVclTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmCurrentStatusChangePVclEntry")
    {
        auto c = std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry>();
        c->parent = this;
        atmcurrentstatuschangepvclentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : atmcurrentstatuschangepvclentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmCurrentStatusChangePVclEntry")
        return true;
    return false;
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::AtmCurrentStatusChangePVclEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    atmpvclstatustransition{YType::uint32, "atmPVclStatusTransition"},
    atmpvclstatuschangestart{YType::uint32, "atmPVclStatusChangeStart"},
    atmpvclstatuschangeend{YType::uint32, "atmPVclStatusChangeEnd"}
{

    yang_name = "atmCurrentStatusChangePVclEntry"; yang_parent_name = "atmCurrentStatusChangePVclTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::~AtmCurrentStatusChangePVclEntry()
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| atmpvclstatustransition.is_set
	|| atmpvclstatuschangestart.is_set
	|| atmpvclstatuschangeend.is_set;
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(atmpvclstatustransition.yfilter)
	|| ydk::is_set(atmpvclstatuschangestart.yfilter)
	|| ydk::is_set(atmpvclstatuschangeend.yfilter);
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/atmCurrentStatusChangePVclTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmCurrentStatusChangePVclEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(atmvclvci, "atmVclVci");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (atmpvclstatustransition.is_set || is_set(atmpvclstatustransition.yfilter)) leaf_name_data.push_back(atmpvclstatustransition.get_name_leafdata());
    if (atmpvclstatuschangestart.is_set || is_set(atmpvclstatuschangestart.yfilter)) leaf_name_data.push_back(atmpvclstatuschangestart.get_name_leafdata());
    if (atmpvclstatuschangeend.is_set || is_set(atmpvclstatuschangeend.yfilter)) leaf_name_data.push_back(atmpvclstatuschangeend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "atmPVclStatusTransition")
    {
        atmpvclstatustransition = value;
        atmpvclstatustransition.value_namespace = name_space;
        atmpvclstatustransition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclStatusChangeStart")
    {
        atmpvclstatuschangestart = value;
        atmpvclstatuschangestart.value_namespace = name_space;
        atmpvclstatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclStatusChangeEnd")
    {
        atmpvclstatuschangeend = value;
        atmpvclstatuschangeend.value_namespace = name_space;
        atmpvclstatuschangeend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "atmPVclStatusTransition")
    {
        atmpvclstatustransition.yfilter = yfilter;
    }
    if(value_path == "atmPVclStatusChangeStart")
    {
        atmpvclstatuschangestart.yfilter = yfilter;
    }
    if(value_path == "atmPVclStatusChangeEnd")
    {
        atmpvclstatuschangeend.yfilter = yfilter;
    }
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmCurrentStatusChangePVclTable::AtmCurrentStatusChangePVclEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "atmPVclStatusTransition" || name == "atmPVclStatusChangeStart" || name == "atmPVclStatusChangeEnd")
        return true;
    return false;
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeTable()
    :
    atmstatuschangepvclrangeentry(this, {"ifindex", "atmvclvpi", "rangeindex"})
{

    yang_name = "atmStatusChangePVclRangeTable"; yang_parent_name = "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::~AtmStatusChangePVclRangeTable()
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<atmstatuschangepvclrangeentry.len(); index++)
    {
        if(atmstatuschangepvclrangeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::has_operation() const
{
    for (std::size_t index=0; index<atmstatuschangepvclrangeentry.len(); index++)
    {
        if(atmstatuschangepvclrangeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmStatusChangePVclRangeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atmStatusChangePVclRangeEntry")
    {
        auto c = std::make_shared<CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry>();
        c->parent = this;
        atmstatuschangepvclrangeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : atmstatuschangepvclrangeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atmStatusChangePVclRangeEntry")
        return true;
    return false;
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::AtmStatusChangePVclRangeEntry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    rangeindex{YType::uint32, "rangeIndex"},
    atmpvcllowerrangevalue{YType::int32, "atmPVclLowerRangeValue"},
    atmpvclhigherrangevalue{YType::int32, "atmPVclHigherRangeValue"},
    atmpvclrangestatuschangestart{YType::uint32, "atmPVclRangeStatusChangeStart"},
    atmpvclrangestatuschangeend{YType::uint32, "atmPVclRangeStatusChangeEnd"}
{

    yang_name = "atmStatusChangePVclRangeEntry"; yang_parent_name = "atmStatusChangePVclRangeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::~AtmStatusChangePVclRangeEntry()
{
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| rangeindex.is_set
	|| atmpvcllowerrangevalue.is_set
	|| atmpvclhigherrangevalue.is_set
	|| atmpvclrangestatuschangestart.is_set
	|| atmpvclrangestatuschangeend.is_set;
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(rangeindex.yfilter)
	|| ydk::is_set(atmpvcllowerrangevalue.yfilter)
	|| ydk::is_set(atmpvclhigherrangevalue.yfilter)
	|| ydk::is_set(atmpvclrangestatuschangestart.yfilter)
	|| ydk::is_set(atmpvclrangestatuschangeend.yfilter);
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN:CISCO-IETF-ATM2-PVCTRAP-MIB-EXTN/atmStatusChangePVclRangeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atmStatusChangePVclRangeEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(atmvclvpi, "atmVclVpi");
    ADD_KEY_TOKEN(rangeindex, "rangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (rangeindex.is_set || is_set(rangeindex.yfilter)) leaf_name_data.push_back(rangeindex.get_name_leafdata());
    if (atmpvcllowerrangevalue.is_set || is_set(atmpvcllowerrangevalue.yfilter)) leaf_name_data.push_back(atmpvcllowerrangevalue.get_name_leafdata());
    if (atmpvclhigherrangevalue.is_set || is_set(atmpvclhigherrangevalue.yfilter)) leaf_name_data.push_back(atmpvclhigherrangevalue.get_name_leafdata());
    if (atmpvclrangestatuschangestart.is_set || is_set(atmpvclrangestatuschangestart.yfilter)) leaf_name_data.push_back(atmpvclrangestatuschangestart.get_name_leafdata());
    if (atmpvclrangestatuschangeend.is_set || is_set(atmpvclrangestatuschangeend.yfilter)) leaf_name_data.push_back(atmpvclrangestatuschangeend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "rangeIndex")
    {
        rangeindex = value;
        rangeindex.value_namespace = name_space;
        rangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclLowerRangeValue")
    {
        atmpvcllowerrangevalue = value;
        atmpvcllowerrangevalue.value_namespace = name_space;
        atmpvcllowerrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclHigherRangeValue")
    {
        atmpvclhigherrangevalue = value;
        atmpvclhigherrangevalue.value_namespace = name_space;
        atmpvclhigherrangevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclRangeStatusChangeStart")
    {
        atmpvclrangestatuschangestart = value;
        atmpvclrangestatuschangestart.value_namespace = name_space;
        atmpvclrangestatuschangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmPVclRangeStatusChangeEnd")
    {
        atmpvclrangestatuschangeend = value;
        atmpvclrangestatuschangeend.value_namespace = name_space;
        atmpvclrangestatuschangeend.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "rangeIndex")
    {
        rangeindex.yfilter = yfilter;
    }
    if(value_path == "atmPVclLowerRangeValue")
    {
        atmpvcllowerrangevalue.yfilter = yfilter;
    }
    if(value_path == "atmPVclHigherRangeValue")
    {
        atmpvclhigherrangevalue.yfilter = yfilter;
    }
    if(value_path == "atmPVclRangeStatusChangeStart")
    {
        atmpvclrangestatuschangestart.yfilter = yfilter;
    }
    if(value_path == "atmPVclRangeStatusChangeEnd")
    {
        atmpvclrangestatuschangeend.yfilter = yfilter;
    }
}

bool CISCOIETFATM2PVCTRAPMIBEXTN::AtmStatusChangePVclRangeTable::AtmStatusChangePVclRangeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "rangeIndex" || name == "atmPVclLowerRangeValue" || name == "atmPVclHigherRangeValue" || name == "atmPVclRangeStatusChangeStart" || name == "atmPVclRangeStatusChangeEnd")
        return true;
    return false;
}


}
}

