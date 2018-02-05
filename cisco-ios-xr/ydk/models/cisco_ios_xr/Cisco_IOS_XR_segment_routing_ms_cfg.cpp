
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_segment_routing_ms_cfg {

Sr::Sr()
    :
    enable{YType::empty, "enable"}
    	,
    global_block(nullptr) // presence node
	,local_block(nullptr) // presence node
	,mappings(std::make_shared<Sr::Mappings>())
{
    mappings->parent = this;

    yang_name = "sr"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Sr::~Sr()
{
}

bool Sr::has_data() const
{
    return enable.is_set
	|| (global_block !=  nullptr && global_block->has_data())
	|| (local_block !=  nullptr && local_block->has_data())
	|| (mappings !=  nullptr && mappings->has_data());
}

bool Sr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (local_block !=  nullptr && local_block->has_operation())
	|| (mappings !=  nullptr && mappings->has_operation());
}

std::string Sr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-block")
    {
        if(global_block == nullptr)
        {
            global_block = std::make_shared<Sr::GlobalBlock>();
        }
        return global_block;
    }

    if(child_yang_name == "local-block")
    {
        if(local_block == nullptr)
        {
            local_block = std::make_shared<Sr::LocalBlock>();
        }
        return local_block;
    }

    if(child_yang_name == "mappings")
    {
        if(mappings == nullptr)
        {
            mappings = std::make_shared<Sr::Mappings>();
        }
        return mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_block != nullptr)
    {
        children["global-block"] = global_block;
    }

    if(local_block != nullptr)
    {
        children["local-block"] = local_block;
    }

    if(mappings != nullptr)
    {
        children["mappings"] = mappings;
    }

    return children;
}

void Sr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Sr::clone_ptr() const
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
    if(name == "global-block" || name == "local-block" || name == "mappings" || name == "enable")
        return true;
    return false;
}

Sr::GlobalBlock::GlobalBlock()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "global-block"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false;
}

Sr::GlobalBlock::~GlobalBlock()
{
}

bool Sr::GlobalBlock::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Sr::GlobalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Sr::GlobalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::GlobalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sr::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sr::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Sr::GlobalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::GlobalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Sr::GlobalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Sr::LocalBlock::LocalBlock()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "local-block"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false;
}

Sr::LocalBlock::~LocalBlock()
{
}

bool Sr::LocalBlock::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Sr::LocalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Sr::LocalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::LocalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::LocalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sr::LocalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sr::LocalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Sr::LocalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::LocalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Sr::LocalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Sr::Mappings::Mappings()
{

    yang_name = "mappings"; yang_parent_name = "sr"; is_top_level_class = false; has_list_ancestor = false;
}

Sr::Mappings::~Mappings()
{
}

bool Sr::Mappings::has_data() const
{
    for (std::size_t index=0; index<mapping.size(); index++)
    {
        if(mapping[index]->has_data())
            return true;
    }
    return false;
}

bool Sr::Mappings::has_operation() const
{
    for (std::size_t index=0; index<mapping.size(); index++)
    {
        if(mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Sr::Mappings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Mappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Mappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Sr::Mappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mapping")
    {
        auto c = std::make_shared<Sr::Mappings::Mapping>();
        c->parent = this;
        mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sr::Mappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mapping)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Sr::Mappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Sr::Mappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Sr::Mappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Sr::Mappings::Mapping::Mapping()
    :
    af{YType::str, "af"},
    ip{YType::str, "ip"},
    mask{YType::int32, "mask"},
    sid_start{YType::uint32, "sid-start"},
    sid_range{YType::int32, "sid-range"},
    flag_attached{YType::enumeration, "flag-attached"}
{

    yang_name = "mapping"; yang_parent_name = "mappings"; is_top_level_class = false; has_list_ancestor = false;
}

Sr::Mappings::Mapping::~Mapping()
{
}

bool Sr::Mappings::Mapping::has_data() const
{
    return af.is_set
	|| ip.is_set
	|| mask.is_set
	|| sid_start.is_set
	|| sid_range.is_set
	|| flag_attached.is_set;
}

bool Sr::Mappings::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_range.yfilter)
	|| ydk::is_set(flag_attached.yfilter);
}

std::string Sr::Mappings::Mapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-cfg:sr/mappings/" << get_segment_path();
    return path_buffer.str();
}

std::string Sr::Mappings::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping" <<"[af='" <<af <<"']" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Sr::Mappings::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_range.is_set || is_set(sid_range.yfilter)) leaf_name_data.push_back(sid_range.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Sr::Mappings::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Sr::Mappings::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Sr::Mappings::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-range")
    {
        sid_range = value;
        sid_range.value_namespace = name_space;
        sid_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Sr::Mappings::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-range")
    {
        sid_range.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Sr::Mappings::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ip" || name == "mask" || name == "sid-start" || name == "sid-range" || name == "flag-attached")
        return true;
    return false;
}

const Enum::YLeaf SrmsMiFlag::disable {0, "disable"};
const Enum::YLeaf SrmsMiFlag::enable {1, "enable"};


}
}

