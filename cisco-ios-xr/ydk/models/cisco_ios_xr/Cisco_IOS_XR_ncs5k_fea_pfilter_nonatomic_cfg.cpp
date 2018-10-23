
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg {

Hardware::Hardware()
    :
    access_list(std::make_shared<Hardware::AccessList>())
{
    access_list->parent = this;

    yang_name = "hardware"; yang_parent_name = "Cisco-IOS-XR-ncs5k-fea-pfilter-nonatomic-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Hardware::~Hardware()
{
}

bool Hardware::has_data() const
{
    if (is_presence_container) return true;
    return (access_list !=  nullptr && access_list->has_data());
}

bool Hardware::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation());
}

std::string Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5k-fea-pfilter-nonatomic-cfg:hardware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Hardware::AccessList>();
        }
        return access_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    return _children;
}

void Hardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Hardware::clone_ptr() const
{
    return std::make_shared<Hardware>();
}

std::string Hardware::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Hardware::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Hardware::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Hardware::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Hardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Hardware::AccessList::AccessList()
    :
    atomic_disable{YType::enumeration, "atomic-disable"}
{

    yang_name = "access-list"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false; 
}

Hardware::AccessList::~AccessList()
{
}

bool Hardware::AccessList::has_data() const
{
    if (is_presence_container) return true;
    return atomic_disable.is_set;
}

bool Hardware::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atomic_disable.yfilter);
}

std::string Hardware::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5k-fea-pfilter-nonatomic-cfg:hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Hardware::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hardware::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atomic_disable.is_set || is_set(atomic_disable.yfilter)) leaf_name_data.push_back(atomic_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hardware::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hardware::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hardware::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atomic-disable")
    {
        atomic_disable = value;
        atomic_disable.value_namespace = name_space;
        atomic_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Hardware::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atomic-disable")
    {
        atomic_disable.yfilter = yfilter;
    }
}

bool Hardware::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atomic-disable")
        return true;
    return false;
}

const Enum::YLeaf AtomicDisableDfltActn::default_action_deny {1, "default-action-deny"};
const Enum::YLeaf AtomicDisableDfltActn::default_action_permit {2, "default-action-permit"};


}
}

