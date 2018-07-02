
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_cef_lba_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fib_cef_lba_cfg {

Fiblb::Fiblb()
    :
    fields{YType::uint32, "fields"},
    payload{YType::boolean, "payload"}
{

    yang_name = "fiblb"; yang_parent_name = "Cisco-IOS-XR-fib-cef-lba-cfg"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

Fiblb::~Fiblb()
{
}

bool Fiblb::has_data() const
{
    if (is_presence_container) return true;
    return fields.is_set
	|| payload.is_set;
}

bool Fiblb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fields.yfilter)
	|| ydk::is_set(payload.yfilter);
}

std::string Fiblb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-cef-lba-cfg:fiblb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fiblb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fields.is_set || is_set(fields.yfilter)) leaf_name_data.push_back(fields.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fiblb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fiblb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fiblb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fields")
    {
        fields = value;
        fields.value_namespace = name_space;
        fields.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Fiblb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fields")
    {
        fields.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Fiblb::clone_ptr() const
{
    return std::make_shared<Fiblb>();
}

std::string Fiblb::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fiblb::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fiblb::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fiblb::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fiblb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fields" || name == "payload")
        return true;
    return false;
}


}
}

