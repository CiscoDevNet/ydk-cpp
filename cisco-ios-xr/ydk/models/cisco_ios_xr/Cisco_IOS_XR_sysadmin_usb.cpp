
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_usb.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_usb {

Usb::Usb()
{

    yang_name = "usb"; yang_parent_name = "Cisco-IOS-XR-sysadmin-usb"; is_top_level_class = true; has_list_ancestor = false; 
}

Usb::~Usb()
{
}

bool Usb::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Usb::has_operation() const
{
    return is_set(yfilter);
}

std::string Usb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-usb:usb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Usb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Usb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Usb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Usb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Usb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Usb::clone_ptr() const
{
    return std::make_shared<Usb>();
}

std::string Usb::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Usb::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Usb::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Usb::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Usb::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

