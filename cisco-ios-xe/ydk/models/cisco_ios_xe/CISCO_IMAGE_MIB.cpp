
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IMAGE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IMAGE_MIB {

CISCOIMAGEMIB::CISCOIMAGEMIB()
    :
    ciscoimagetable(std::make_shared<CISCOIMAGEMIB::CiscoImageTable>())
{
    ciscoimagetable->parent = this;

    yang_name = "CISCO-IMAGE-MIB"; yang_parent_name = "CISCO-IMAGE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIMAGEMIB::~CISCOIMAGEMIB()
{
}

bool CISCOIMAGEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoimagetable !=  nullptr && ciscoimagetable->has_data());
}

bool CISCOIMAGEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoimagetable !=  nullptr && ciscoimagetable->has_operation());
}

std::string CISCOIMAGEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageTable")
    {
        if(ciscoimagetable == nullptr)
        {
            ciscoimagetable = std::make_shared<CISCOIMAGEMIB::CiscoImageTable>();
        }
        return ciscoimagetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoimagetable != nullptr)
    {
        children["ciscoImageTable"] = ciscoimagetable;
    }

    return children;
}

void CISCOIMAGEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIMAGEMIB::clone_ptr() const
{
    return std::make_shared<CISCOIMAGEMIB>();
}

std::string CISCOIMAGEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIMAGEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIMAGEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIMAGEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIMAGEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageTable")
        return true;
    return false;
}

CISCOIMAGEMIB::CiscoImageTable::CiscoImageTable()
    :
    ciscoimageentry(this, {"ciscoimageindex"})
{

    yang_name = "ciscoImageTable"; yang_parent_name = "CISCO-IMAGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGEMIB::CiscoImageTable::~CiscoImageTable()
{
}

bool CISCOIMAGEMIB::CiscoImageTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscoimageentry.len(); index++)
    {
        if(ciscoimageentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIMAGEMIB::CiscoImageTable::has_operation() const
{
    for (std::size_t index=0; index<ciscoimageentry.len(); index++)
    {
        if(ciscoimageentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIMAGEMIB::CiscoImageTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGEMIB::CiscoImageTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGEMIB::CiscoImageTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGEMIB::CiscoImageTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoImageEntry")
    {
        auto c = std::make_shared<CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry>();
        c->parent = this;
        ciscoimageentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGEMIB::CiscoImageTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ciscoimageentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIMAGEMIB::CiscoImageTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIMAGEMIB::CiscoImageTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIMAGEMIB::CiscoImageTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageEntry")
        return true;
    return false;
}

CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::CiscoImageEntry()
    :
    ciscoimageindex{YType::int32, "ciscoImageIndex"},
    ciscoimagestring{YType::str, "ciscoImageString"}
{

    yang_name = "ciscoImageEntry"; yang_parent_name = "ciscoImageTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::~CiscoImageEntry()
{
}

bool CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscoimageindex.is_set
	|| ciscoimagestring.is_set;
}

bool CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoimageindex.yfilter)
	|| ydk::is_set(ciscoimagestring.yfilter);
}

std::string CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IMAGE-MIB:CISCO-IMAGE-MIB/ciscoImageTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoImageEntry";
    ADD_KEY_TOKEN(ciscoimageindex, "ciscoImageIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoimageindex.is_set || is_set(ciscoimageindex.yfilter)) leaf_name_data.push_back(ciscoimageindex.get_name_leafdata());
    if (ciscoimagestring.is_set || is_set(ciscoimagestring.yfilter)) leaf_name_data.push_back(ciscoimagestring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoImageIndex")
    {
        ciscoimageindex = value;
        ciscoimageindex.value_namespace = name_space;
        ciscoimageindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoImageString")
    {
        ciscoimagestring = value;
        ciscoimagestring.value_namespace = name_space;
        ciscoimagestring.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoImageIndex")
    {
        ciscoimageindex.yfilter = yfilter;
    }
    if(value_path == "ciscoImageString")
    {
        ciscoimagestring.yfilter = yfilter;
    }
}

bool CISCOIMAGEMIB::CiscoImageTable::CiscoImageEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoImageIndex" || name == "ciscoImageString")
        return true;
    return false;
}


}
}

