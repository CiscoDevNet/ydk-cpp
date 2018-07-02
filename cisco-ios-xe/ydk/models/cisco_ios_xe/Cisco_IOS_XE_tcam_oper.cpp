
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_tcam_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_tcam_oper {

TcamDetails::TcamDetails()
    :
    tcam_detail(this, {"asic_no", "name"})
{

    yang_name = "tcam-details"; yang_parent_name = "Cisco-IOS-XE-tcam-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

TcamDetails::~TcamDetails()
{
}

bool TcamDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcam_detail.len(); index++)
    {
        if(tcam_detail[index]->has_data())
            return true;
    }
    return false;
}

bool TcamDetails::has_operation() const
{
    for (std::size_t index=0; index<tcam_detail.len(); index++)
    {
        if(tcam_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TcamDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tcam-oper:tcam-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcamDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TcamDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-detail")
    {
        auto c = std::make_shared<TcamDetails::TcamDetail>();
        c->parent = this;
        tcam_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcamDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tcam_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TcamDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TcamDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TcamDetails::clone_ptr() const
{
    return std::make_shared<TcamDetails>();
}

std::string TcamDetails::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TcamDetails::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TcamDetails::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TcamDetails::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TcamDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-detail")
        return true;
    return false;
}

TcamDetails::TcamDetail::TcamDetail()
    :
    asic_no{YType::uint8, "asic-no"},
    name{YType::str, "name"},
    hash_entries_max{YType::uint32, "hash-entries-max"},
    tcam_entries_max{YType::uint32, "tcam-entries-max"},
    hash_entries_used{YType::uint32, "hash-entries-used"},
    tcam_entries_used{YType::uint32, "tcam-entries-used"}
{

    yang_name = "tcam-detail"; yang_parent_name = "tcam-details"; is_top_level_class = false; has_list_ancestor = false; 
}

TcamDetails::TcamDetail::~TcamDetail()
{
}

bool TcamDetails::TcamDetail::has_data() const
{
    if (is_presence_container) return true;
    return asic_no.is_set
	|| name.is_set
	|| hash_entries_max.is_set
	|| tcam_entries_max.is_set
	|| hash_entries_used.is_set
	|| tcam_entries_used.is_set;
}

bool TcamDetails::TcamDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_no.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hash_entries_max.yfilter)
	|| ydk::is_set(tcam_entries_max.yfilter)
	|| ydk::is_set(hash_entries_used.yfilter)
	|| ydk::is_set(tcam_entries_used.yfilter);
}

std::string TcamDetails::TcamDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tcam-oper:tcam-details/" << get_segment_path();
    return path_buffer.str();
}

std::string TcamDetails::TcamDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-detail";
    ADD_KEY_TOKEN(asic_no, "asic-no");
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TcamDetails::TcamDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_no.is_set || is_set(asic_no.yfilter)) leaf_name_data.push_back(asic_no.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hash_entries_max.is_set || is_set(hash_entries_max.yfilter)) leaf_name_data.push_back(hash_entries_max.get_name_leafdata());
    if (tcam_entries_max.is_set || is_set(tcam_entries_max.yfilter)) leaf_name_data.push_back(tcam_entries_max.get_name_leafdata());
    if (hash_entries_used.is_set || is_set(hash_entries_used.yfilter)) leaf_name_data.push_back(hash_entries_used.get_name_leafdata());
    if (tcam_entries_used.is_set || is_set(tcam_entries_used.yfilter)) leaf_name_data.push_back(tcam_entries_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TcamDetails::TcamDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TcamDetails::TcamDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TcamDetails::TcamDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-no")
    {
        asic_no = value;
        asic_no.value_namespace = name_space;
        asic_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-entries-max")
    {
        hash_entries_max = value;
        hash_entries_max.value_namespace = name_space;
        hash_entries_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcam-entries-max")
    {
        tcam_entries_max = value;
        tcam_entries_max.value_namespace = name_space;
        tcam_entries_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-entries-used")
    {
        hash_entries_used = value;
        hash_entries_used.value_namespace = name_space;
        hash_entries_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcam-entries-used")
    {
        tcam_entries_used = value;
        tcam_entries_used.value_namespace = name_space;
        tcam_entries_used.value_namespace_prefix = name_space_prefix;
    }
}

void TcamDetails::TcamDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-no")
    {
        asic_no.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hash-entries-max")
    {
        hash_entries_max.yfilter = yfilter;
    }
    if(value_path == "tcam-entries-max")
    {
        tcam_entries_max.yfilter = yfilter;
    }
    if(value_path == "hash-entries-used")
    {
        hash_entries_used.yfilter = yfilter;
    }
    if(value_path == "tcam-entries-used")
    {
        tcam_entries_used.yfilter = yfilter;
    }
}

bool TcamDetails::TcamDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic-no" || name == "name" || name == "hash-entries-max" || name == "tcam-entries-max" || name == "hash-entries-used" || name == "tcam-entries-used")
        return true;
    return false;
}


}
}

