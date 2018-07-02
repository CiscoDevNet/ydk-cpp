
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_li_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_li_cfg {

LawfulIntercept::LawfulIntercept()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "lawful-intercept"; yang_parent_name = "Cisco-IOS-XR-li-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

LawfulIntercept::~LawfulIntercept()
{
}

bool LawfulIntercept::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool LawfulIntercept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string LawfulIntercept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-li-cfg:lawful-intercept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LawfulIntercept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LawfulIntercept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LawfulIntercept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LawfulIntercept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void LawfulIntercept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> LawfulIntercept::clone_ptr() const
{
    return std::make_shared<LawfulIntercept>();
}

std::string LawfulIntercept::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LawfulIntercept::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LawfulIntercept::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LawfulIntercept::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LawfulIntercept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}


}
}

