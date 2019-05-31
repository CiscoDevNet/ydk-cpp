
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_common_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_common_cfg {

Sr::Sr()
{

    yang_name = "sr"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-common-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Sr::~Sr()
{
}

bool Sr::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Sr::has_operation() const
{
    return is_set(yfilter);
}

std::string Sr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-common-cfg:sr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Sr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Sr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Sr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Sr::clone_ptr() const
{
    return std::make_shared<Sr>();
}

std::string Sr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Sr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Sr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Sr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Sr::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

