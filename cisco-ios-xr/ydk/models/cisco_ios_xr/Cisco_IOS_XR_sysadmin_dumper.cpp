
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_dumper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_dumper {

Exception::Exception()
    :
    choice(this, {"order"})
{

    yang_name = "exception"; yang_parent_name = "Cisco-IOS-XR-sysadmin-dumper"; is_top_level_class = true; has_list_ancestor = false; 
}

Exception::~Exception()
{
}

bool Exception::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<choice.len(); index++)
    {
        if(choice[index]->has_data())
            return true;
    }
    return false;
}

bool Exception::has_operation() const
{
    for (std::size_t index=0; index<choice.len(); index++)
    {
        if(choice[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-dumper:exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "choice")
    {
        auto ent_ = std::make_shared<Exception::Choice>();
        ent_->parent = this;
        choice.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : choice.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Exception::clone_ptr() const
{
    return std::make_shared<Exception>();
}

std::string Exception::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Exception::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Exception::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Exception::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Exception::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "choice")
        return true;
    return false;
}

Exception::Choice::Choice()
    :
    order{YType::int32, "order"},
    filepath{YType::str, "filepath"}
{

    yang_name = "choice"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false; 
}

Exception::Choice::~Choice()
{
}

bool Exception::Choice::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| filepath.is_set;
}

bool Exception::Choice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(filepath.yfilter);
}

std::string Exception::Choice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-dumper:exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Exception::Choice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "choice";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Exception::Choice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (filepath.is_set || is_set(filepath.yfilter)) leaf_name_data.push_back(filepath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Exception::Choice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Exception::Choice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Exception::Choice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filepath")
    {
        filepath = value;
        filepath.value_namespace = name_space;
        filepath.value_namespace_prefix = name_space_prefix;
    }
}

void Exception::Choice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "filepath")
    {
        filepath.yfilter = yfilter;
    }
}

bool Exception::Choice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "filepath")
        return true;
    return false;
}


}
}

