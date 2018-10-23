
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IGMP_FILTER_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IGMP_FILTER_MIB {

CISCOIGMPFILTERMIB::CISCOIGMPFILTERMIB()
    :
    cigmpfiltergeneral(std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterGeneral>())
    , cigmpfiltereditor(std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterEditor>())
    , cigmpfiltertable(std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterTable>())
    , cigmpfilterinterfacetable(std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable>())
{
    cigmpfiltergeneral->parent = this;
    cigmpfiltereditor->parent = this;
    cigmpfiltertable->parent = this;
    cigmpfilterinterfacetable->parent = this;

    yang_name = "CISCO-IGMP-FILTER-MIB"; yang_parent_name = "CISCO-IGMP-FILTER-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::~CISCOIGMPFILTERMIB()
{
}

bool CISCOIGMPFILTERMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cigmpfiltergeneral !=  nullptr && cigmpfiltergeneral->has_data())
	|| (cigmpfiltereditor !=  nullptr && cigmpfiltereditor->has_data())
	|| (cigmpfiltertable !=  nullptr && cigmpfiltertable->has_data())
	|| (cigmpfilterinterfacetable !=  nullptr && cigmpfilterinterfacetable->has_data());
}

bool CISCOIGMPFILTERMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cigmpfiltergeneral !=  nullptr && cigmpfiltergeneral->has_operation())
	|| (cigmpfiltereditor !=  nullptr && cigmpfiltereditor->has_operation())
	|| (cigmpfiltertable !=  nullptr && cigmpfiltertable->has_operation())
	|| (cigmpfilterinterfacetable !=  nullptr && cigmpfilterinterfacetable->has_operation());
}

std::string CISCOIGMPFILTERMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIgmpFilterGeneral")
    {
        if(cigmpfiltergeneral == nullptr)
        {
            cigmpfiltergeneral = std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterGeneral>();
        }
        return cigmpfiltergeneral;
    }

    if(child_yang_name == "cIgmpFilterEditor")
    {
        if(cigmpfiltereditor == nullptr)
        {
            cigmpfiltereditor = std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterEditor>();
        }
        return cigmpfiltereditor;
    }

    if(child_yang_name == "cIgmpFilterTable")
    {
        if(cigmpfiltertable == nullptr)
        {
            cigmpfiltertable = std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterTable>();
        }
        return cigmpfiltertable;
    }

    if(child_yang_name == "cIgmpFilterInterfaceTable")
    {
        if(cigmpfilterinterfacetable == nullptr)
        {
            cigmpfilterinterfacetable = std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable>();
        }
        return cigmpfilterinterfacetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cigmpfiltergeneral != nullptr)
    {
        _children["cIgmpFilterGeneral"] = cigmpfiltergeneral;
    }

    if(cigmpfiltereditor != nullptr)
    {
        _children["cIgmpFilterEditor"] = cigmpfiltereditor;
    }

    if(cigmpfiltertable != nullptr)
    {
        _children["cIgmpFilterTable"] = cigmpfiltertable;
    }

    if(cigmpfilterinterfacetable != nullptr)
    {
        _children["cIgmpFilterInterfaceTable"] = cigmpfilterinterfacetable;
    }

    return _children;
}

void CISCOIGMPFILTERMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIGMPFILTERMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::clone_ptr() const
{
    return std::make_shared<CISCOIGMPFILTERMIB>();
}

std::string CISCOIGMPFILTERMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIGMPFILTERMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIGMPFILTERMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIGMPFILTERMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIGMPFILTERMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterGeneral" || name == "cIgmpFilterEditor" || name == "cIgmpFilterTable" || name == "cIgmpFilterInterfaceTable")
        return true;
    return false;
}

CISCOIGMPFILTERMIB::CIgmpFilterGeneral::CIgmpFilterGeneral()
    :
    cigmpfilterenable{YType::boolean, "cIgmpFilterEnable"},
    cigmpfiltermaxprofiles{YType::uint32, "cIgmpFilterMaxProfiles"}
{

    yang_name = "cIgmpFilterGeneral"; yang_parent_name = "CISCO-IGMP-FILTER-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::CIgmpFilterGeneral::~CIgmpFilterGeneral()
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterGeneral::has_data() const
{
    if (is_presence_container) return true;
    return cigmpfilterenable.is_set
	|| cigmpfiltermaxprofiles.is_set;
}

bool CISCOIGMPFILTERMIB::CIgmpFilterGeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cigmpfilterenable.yfilter)
	|| ydk::is_set(cigmpfiltermaxprofiles.yfilter);
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterGeneral::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterGeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterGeneral";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::CIgmpFilterGeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cigmpfilterenable.is_set || is_set(cigmpfilterenable.yfilter)) leaf_name_data.push_back(cigmpfilterenable.get_name_leafdata());
    if (cigmpfiltermaxprofiles.is_set || is_set(cigmpfiltermaxprofiles.yfilter)) leaf_name_data.push_back(cigmpfiltermaxprofiles.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::CIgmpFilterGeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::CIgmpFilterGeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIGMPFILTERMIB::CIgmpFilterGeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIgmpFilterEnable")
    {
        cigmpfilterenable = value;
        cigmpfilterenable.value_namespace = name_space;
        cigmpfilterenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterMaxProfiles")
    {
        cigmpfiltermaxprofiles = value;
        cigmpfiltermaxprofiles.value_namespace = name_space;
        cigmpfiltermaxprofiles.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIGMPFILTERMIB::CIgmpFilterGeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIgmpFilterEnable")
    {
        cigmpfilterenable.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterMaxProfiles")
    {
        cigmpfiltermaxprofiles.yfilter = yfilter;
    }
}

bool CISCOIGMPFILTERMIB::CIgmpFilterGeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterEnable" || name == "cIgmpFilterMaxProfiles")
        return true;
    return false;
}

CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditor()
    :
    cigmpfiltereditspinlock{YType::int32, "cIgmpFilterEditSpinLock"},
    cigmpfiltereditprofileindex{YType::uint32, "cIgmpFilterEditProfileIndex"},
    cigmpfiltereditstartaddresstype{YType::enumeration, "cIgmpFilterEditStartAddressType"},
    cigmpfiltereditstartaddress{YType::str, "cIgmpFilterEditStartAddress"},
    cigmpfiltereditendaddresstype{YType::enumeration, "cIgmpFilterEditEndAddressType"},
    cigmpfiltereditendaddress{YType::str, "cIgmpFilterEditEndAddress"},
    cigmpfiltereditprofileaction{YType::enumeration, "cIgmpFilterEditProfileAction"},
    cigmpfiltereditoperation{YType::enumeration, "cIgmpFilterEditOperation"},
    cigmpfilterapplystatus{YType::enumeration, "cIgmpFilterApplyStatus"}
{

    yang_name = "cIgmpFilterEditor"; yang_parent_name = "CISCO-IGMP-FILTER-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::CIgmpFilterEditor::~CIgmpFilterEditor()
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterEditor::has_data() const
{
    if (is_presence_container) return true;
    return cigmpfiltereditspinlock.is_set
	|| cigmpfiltereditprofileindex.is_set
	|| cigmpfiltereditstartaddresstype.is_set
	|| cigmpfiltereditstartaddress.is_set
	|| cigmpfiltereditendaddresstype.is_set
	|| cigmpfiltereditendaddress.is_set
	|| cigmpfiltereditprofileaction.is_set
	|| cigmpfiltereditoperation.is_set
	|| cigmpfilterapplystatus.is_set;
}

bool CISCOIGMPFILTERMIB::CIgmpFilterEditor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cigmpfiltereditspinlock.yfilter)
	|| ydk::is_set(cigmpfiltereditprofileindex.yfilter)
	|| ydk::is_set(cigmpfiltereditstartaddresstype.yfilter)
	|| ydk::is_set(cigmpfiltereditstartaddress.yfilter)
	|| ydk::is_set(cigmpfiltereditendaddresstype.yfilter)
	|| ydk::is_set(cigmpfiltereditendaddress.yfilter)
	|| ydk::is_set(cigmpfiltereditprofileaction.yfilter)
	|| ydk::is_set(cigmpfiltereditoperation.yfilter)
	|| ydk::is_set(cigmpfilterapplystatus.yfilter);
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterEditor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterEditor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterEditor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::CIgmpFilterEditor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cigmpfiltereditspinlock.is_set || is_set(cigmpfiltereditspinlock.yfilter)) leaf_name_data.push_back(cigmpfiltereditspinlock.get_name_leafdata());
    if (cigmpfiltereditprofileindex.is_set || is_set(cigmpfiltereditprofileindex.yfilter)) leaf_name_data.push_back(cigmpfiltereditprofileindex.get_name_leafdata());
    if (cigmpfiltereditstartaddresstype.is_set || is_set(cigmpfiltereditstartaddresstype.yfilter)) leaf_name_data.push_back(cigmpfiltereditstartaddresstype.get_name_leafdata());
    if (cigmpfiltereditstartaddress.is_set || is_set(cigmpfiltereditstartaddress.yfilter)) leaf_name_data.push_back(cigmpfiltereditstartaddress.get_name_leafdata());
    if (cigmpfiltereditendaddresstype.is_set || is_set(cigmpfiltereditendaddresstype.yfilter)) leaf_name_data.push_back(cigmpfiltereditendaddresstype.get_name_leafdata());
    if (cigmpfiltereditendaddress.is_set || is_set(cigmpfiltereditendaddress.yfilter)) leaf_name_data.push_back(cigmpfiltereditendaddress.get_name_leafdata());
    if (cigmpfiltereditprofileaction.is_set || is_set(cigmpfiltereditprofileaction.yfilter)) leaf_name_data.push_back(cigmpfiltereditprofileaction.get_name_leafdata());
    if (cigmpfiltereditoperation.is_set || is_set(cigmpfiltereditoperation.yfilter)) leaf_name_data.push_back(cigmpfiltereditoperation.get_name_leafdata());
    if (cigmpfilterapplystatus.is_set || is_set(cigmpfilterapplystatus.yfilter)) leaf_name_data.push_back(cigmpfilterapplystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::CIgmpFilterEditor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::CIgmpFilterEditor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIGMPFILTERMIB::CIgmpFilterEditor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIgmpFilterEditSpinLock")
    {
        cigmpfiltereditspinlock = value;
        cigmpfiltereditspinlock.value_namespace = name_space;
        cigmpfiltereditspinlock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditProfileIndex")
    {
        cigmpfiltereditprofileindex = value;
        cigmpfiltereditprofileindex.value_namespace = name_space;
        cigmpfiltereditprofileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditStartAddressType")
    {
        cigmpfiltereditstartaddresstype = value;
        cigmpfiltereditstartaddresstype.value_namespace = name_space;
        cigmpfiltereditstartaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditStartAddress")
    {
        cigmpfiltereditstartaddress = value;
        cigmpfiltereditstartaddress.value_namespace = name_space;
        cigmpfiltereditstartaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditEndAddressType")
    {
        cigmpfiltereditendaddresstype = value;
        cigmpfiltereditendaddresstype.value_namespace = name_space;
        cigmpfiltereditendaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditEndAddress")
    {
        cigmpfiltereditendaddress = value;
        cigmpfiltereditendaddress.value_namespace = name_space;
        cigmpfiltereditendaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditProfileAction")
    {
        cigmpfiltereditprofileaction = value;
        cigmpfiltereditprofileaction.value_namespace = name_space;
        cigmpfiltereditprofileaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEditOperation")
    {
        cigmpfiltereditoperation = value;
        cigmpfiltereditoperation.value_namespace = name_space;
        cigmpfiltereditoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterApplyStatus")
    {
        cigmpfilterapplystatus = value;
        cigmpfilterapplystatus.value_namespace = name_space;
        cigmpfilterapplystatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIGMPFILTERMIB::CIgmpFilterEditor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIgmpFilterEditSpinLock")
    {
        cigmpfiltereditspinlock.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditProfileIndex")
    {
        cigmpfiltereditprofileindex.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditStartAddressType")
    {
        cigmpfiltereditstartaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditStartAddress")
    {
        cigmpfiltereditstartaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditEndAddressType")
    {
        cigmpfiltereditendaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditEndAddress")
    {
        cigmpfiltereditendaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditProfileAction")
    {
        cigmpfiltereditprofileaction.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEditOperation")
    {
        cigmpfiltereditoperation.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterApplyStatus")
    {
        cigmpfilterapplystatus.yfilter = yfilter;
    }
}

bool CISCOIGMPFILTERMIB::CIgmpFilterEditor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterEditSpinLock" || name == "cIgmpFilterEditProfileIndex" || name == "cIgmpFilterEditStartAddressType" || name == "cIgmpFilterEditStartAddress" || name == "cIgmpFilterEditEndAddressType" || name == "cIgmpFilterEditEndAddress" || name == "cIgmpFilterEditProfileAction" || name == "cIgmpFilterEditOperation" || name == "cIgmpFilterApplyStatus")
        return true;
    return false;
}

CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterTable()
    :
    cigmpfilterentry(this, {"cigmpfilterprofileindex", "cigmpfilterstartaddresstype", "cigmpfilterstartaddress"})
{

    yang_name = "cIgmpFilterTable"; yang_parent_name = "CISCO-IGMP-FILTER-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::CIgmpFilterTable::~CIgmpFilterTable()
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cigmpfilterentry.len(); index++)
    {
        if(cigmpfilterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIGMPFILTERMIB::CIgmpFilterTable::has_operation() const
{
    for (std::size_t index=0; index<cigmpfilterentry.len(); index++)
    {
        if(cigmpfilterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::CIgmpFilterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::CIgmpFilterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIgmpFilterEntry")
    {
        auto ent_ = std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry>();
        ent_->parent = this;
        cigmpfilterentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::CIgmpFilterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cigmpfilterentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIGMPFILTERMIB::CIgmpFilterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIGMPFILTERMIB::CIgmpFilterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterEntry")
        return true;
    return false;
}

CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::CIgmpFilterEntry()
    :
    cigmpfilterprofileindex{YType::uint32, "cIgmpFilterProfileIndex"},
    cigmpfilterstartaddresstype{YType::enumeration, "cIgmpFilterStartAddressType"},
    cigmpfilterstartaddress{YType::str, "cIgmpFilterStartAddress"},
    cigmpfilterendaddresstype{YType::enumeration, "cIgmpFilterEndAddressType"},
    cigmpfilterendaddress{YType::str, "cIgmpFilterEndAddress"},
    cigmpfilterprofileaction{YType::enumeration, "cIgmpFilterProfileAction"}
{

    yang_name = "cIgmpFilterEntry"; yang_parent_name = "cIgmpFilterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::~CIgmpFilterEntry()
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::has_data() const
{
    if (is_presence_container) return true;
    return cigmpfilterprofileindex.is_set
	|| cigmpfilterstartaddresstype.is_set
	|| cigmpfilterstartaddress.is_set
	|| cigmpfilterendaddresstype.is_set
	|| cigmpfilterendaddress.is_set
	|| cigmpfilterprofileaction.is_set;
}

bool CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cigmpfilterprofileindex.yfilter)
	|| ydk::is_set(cigmpfilterstartaddresstype.yfilter)
	|| ydk::is_set(cigmpfilterstartaddress.yfilter)
	|| ydk::is_set(cigmpfilterendaddresstype.yfilter)
	|| ydk::is_set(cigmpfilterendaddress.yfilter)
	|| ydk::is_set(cigmpfilterprofileaction.yfilter);
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/cIgmpFilterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterEntry";
    ADD_KEY_TOKEN(cigmpfilterprofileindex, "cIgmpFilterProfileIndex");
    ADD_KEY_TOKEN(cigmpfilterstartaddresstype, "cIgmpFilterStartAddressType");
    ADD_KEY_TOKEN(cigmpfilterstartaddress, "cIgmpFilterStartAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cigmpfilterprofileindex.is_set || is_set(cigmpfilterprofileindex.yfilter)) leaf_name_data.push_back(cigmpfilterprofileindex.get_name_leafdata());
    if (cigmpfilterstartaddresstype.is_set || is_set(cigmpfilterstartaddresstype.yfilter)) leaf_name_data.push_back(cigmpfilterstartaddresstype.get_name_leafdata());
    if (cigmpfilterstartaddress.is_set || is_set(cigmpfilterstartaddress.yfilter)) leaf_name_data.push_back(cigmpfilterstartaddress.get_name_leafdata());
    if (cigmpfilterendaddresstype.is_set || is_set(cigmpfilterendaddresstype.yfilter)) leaf_name_data.push_back(cigmpfilterendaddresstype.get_name_leafdata());
    if (cigmpfilterendaddress.is_set || is_set(cigmpfilterendaddress.yfilter)) leaf_name_data.push_back(cigmpfilterendaddress.get_name_leafdata());
    if (cigmpfilterprofileaction.is_set || is_set(cigmpfilterprofileaction.yfilter)) leaf_name_data.push_back(cigmpfilterprofileaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cIgmpFilterProfileIndex")
    {
        cigmpfilterprofileindex = value;
        cigmpfilterprofileindex.value_namespace = name_space;
        cigmpfilterprofileindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterStartAddressType")
    {
        cigmpfilterstartaddresstype = value;
        cigmpfilterstartaddresstype.value_namespace = name_space;
        cigmpfilterstartaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterStartAddress")
    {
        cigmpfilterstartaddress = value;
        cigmpfilterstartaddress.value_namespace = name_space;
        cigmpfilterstartaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEndAddressType")
    {
        cigmpfilterendaddresstype = value;
        cigmpfilterendaddresstype.value_namespace = name_space;
        cigmpfilterendaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterEndAddress")
    {
        cigmpfilterendaddress = value;
        cigmpfilterendaddress.value_namespace = name_space;
        cigmpfilterendaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterProfileAction")
    {
        cigmpfilterprofileaction = value;
        cigmpfilterprofileaction.value_namespace = name_space;
        cigmpfilterprofileaction.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cIgmpFilterProfileIndex")
    {
        cigmpfilterprofileindex.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterStartAddressType")
    {
        cigmpfilterstartaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterStartAddress")
    {
        cigmpfilterstartaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEndAddressType")
    {
        cigmpfilterendaddresstype.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterEndAddress")
    {
        cigmpfilterendaddress.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterProfileAction")
    {
        cigmpfilterprofileaction.yfilter = yfilter;
    }
}

bool CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterProfileIndex" || name == "cIgmpFilterStartAddressType" || name == "cIgmpFilterStartAddress" || name == "cIgmpFilterEndAddressType" || name == "cIgmpFilterEndAddress" || name == "cIgmpFilterProfileAction")
        return true;
    return false;
}

CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceTable()
    :
    cigmpfilterinterfaceentry(this, {"ifindex"})
{

    yang_name = "cIgmpFilterInterfaceTable"; yang_parent_name = "CISCO-IGMP-FILTER-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::~CIgmpFilterInterfaceTable()
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cigmpfilterinterfaceentry.len(); index++)
    {
        if(cigmpfilterinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<cigmpfilterinterfaceentry.len(); index++)
    {
        if(cigmpfilterinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cIgmpFilterInterfaceEntry")
    {
        auto ent_ = std::make_shared<CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry>();
        ent_->parent = this;
        cigmpfilterinterfaceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cigmpfilterinterfaceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cIgmpFilterInterfaceEntry")
        return true;
    return false;
}

CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::CIgmpFilterInterfaceEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cigmpfilterinterfaceprofileindex{YType::uint32, "cIgmpFilterInterfaceProfileIndex"}
{

    yang_name = "cIgmpFilterInterfaceEntry"; yang_parent_name = "cIgmpFilterInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::~CIgmpFilterInterfaceEntry()
{
}

bool CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cigmpfilterinterfaceprofileindex.is_set;
}

bool CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cigmpfilterinterfaceprofileindex.yfilter);
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IGMP-FILTER-MIB:CISCO-IGMP-FILTER-MIB/cIgmpFilterInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cIgmpFilterInterfaceEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cigmpfilterinterfaceprofileindex.is_set || is_set(cigmpfilterinterfaceprofileindex.yfilter)) leaf_name_data.push_back(cigmpfilterinterfaceprofileindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cIgmpFilterInterfaceProfileIndex")
    {
        cigmpfilterinterfaceprofileindex = value;
        cigmpfilterinterfaceprofileindex.value_namespace = name_space;
        cigmpfilterinterfaceprofileindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cIgmpFilterInterfaceProfileIndex")
    {
        cigmpfilterinterfaceprofileindex.yfilter = yfilter;
    }
}

bool CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cIgmpFilterInterfaceProfileIndex")
        return true;
    return false;
}

const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditProfileAction::unSpecified {0, "unSpecified"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditProfileAction::permit {1, "permit"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditProfileAction::deny {2, "deny"};

const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditOperation::none {1, "none"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditOperation::add {2, "add"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditOperation::delete_ {3, "delete"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditOperation::modify {4, "modify"};

const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterApplyStatus::someOtherError {1, "someOtherError"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterApplyStatus::succeeded {2, "succeeded"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterApplyStatus::inconsistentEdit {3, "inconsistentEdit"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterApplyStatus::entryPresentError {4, "entryPresentError"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterApplyStatus::entryNotPresentError {5, "entryNotPresentError"};

const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::CIgmpFilterProfileAction::permit {1, "permit"};
const Enum::YLeaf CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::CIgmpFilterProfileAction::deny {2, "deny"};


}
}

