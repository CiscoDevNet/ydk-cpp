
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_vty_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_vty_cfg {

Vty::Vty()
    :
    vty_pools(std::make_shared<Vty::VtyPools>())
{
    vty_pools->parent = this;

    yang_name = "vty"; yang_parent_name = "Cisco-IOS-XR-tty-vty-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Vty::~Vty()
{
}

bool Vty::has_data() const
{
    return (vty_pools !=  nullptr && vty_pools->has_data());
}

bool Vty::has_operation() const
{
    return is_set(yfilter)
	|| (vty_pools !=  nullptr && vty_pools->has_operation());
}

std::string Vty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-vty-cfg:vty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vty-pools")
    {
        if(vty_pools == nullptr)
        {
            vty_pools = std::make_shared<Vty::VtyPools>();
        }
        return vty_pools;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vty_pools != nullptr)
    {
        children["vty-pools"] = vty_pools;
    }

    return children;
}

void Vty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vty::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Vty::clone_ptr() const
{
    return std::make_shared<Vty>();
}

std::string Vty::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vty::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vty::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vty::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vty-pools")
        return true;
    return false;
}

Vty::VtyPools::VtyPools()
{

    yang_name = "vty-pools"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = false;
}

Vty::VtyPools::~VtyPools()
{
}

bool Vty::VtyPools::has_data() const
{
    for (std::size_t index=0; index<vty_pool.size(); index++)
    {
        if(vty_pool[index]->has_data())
            return true;
    }
    return false;
}

bool Vty::VtyPools::has_operation() const
{
    for (std::size_t index=0; index<vty_pool.size(); index++)
    {
        if(vty_pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vty::VtyPools::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-vty-cfg:vty/" << get_segment_path();
    return path_buffer.str();
}

std::string Vty::VtyPools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vty::VtyPools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Vty::VtyPools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vty-pool")
    {
        for(auto const & c : vty_pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Vty::VtyPools::VtyPool>();
        c->parent = this;
        vty_pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vty::VtyPools::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vty_pool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Vty::VtyPools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vty::VtyPools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vty::VtyPools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vty-pool")
        return true;
    return false;
}

Vty::VtyPools::VtyPool::VtyPool()
    :
    pool_name{YType::str, "pool-name"},
    first_vty{YType::int32, "first-vty"},
    last_vty{YType::int32, "last-vty"},
    line_template{YType::str, "line-template"},
    none{YType::str, "none"}
{

    yang_name = "vty-pool"; yang_parent_name = "vty-pools"; is_top_level_class = false; has_list_ancestor = false;
}

Vty::VtyPools::VtyPool::~VtyPool()
{
}

bool Vty::VtyPools::VtyPool::has_data() const
{
    return pool_name.is_set
	|| first_vty.is_set
	|| last_vty.is_set
	|| line_template.is_set
	|| none.is_set;
}

bool Vty::VtyPools::VtyPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(first_vty.yfilter)
	|| ydk::is_set(last_vty.yfilter)
	|| ydk::is_set(line_template.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Vty::VtyPools::VtyPool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-vty-cfg:vty/vty-pools/" << get_segment_path();
    return path_buffer.str();
}

std::string Vty::VtyPools::VtyPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-pool" <<"[pool-name='" <<pool_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vty::VtyPools::VtyPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (first_vty.is_set || is_set(first_vty.yfilter)) leaf_name_data.push_back(first_vty.get_name_leafdata());
    if (last_vty.is_set || is_set(last_vty.yfilter)) leaf_name_data.push_back(last_vty.get_name_leafdata());
    if (line_template.is_set || is_set(line_template.yfilter)) leaf_name_data.push_back(line_template.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Vty::VtyPools::VtyPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Vty::VtyPools::VtyPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Vty::VtyPools::VtyPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-vty")
    {
        first_vty = value;
        first_vty.value_namespace = name_space;
        first_vty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-vty")
    {
        last_vty = value;
        last_vty.value_namespace = name_space;
        last_vty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-template")
    {
        line_template = value;
        line_template.value_namespace = name_space;
        line_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Vty::VtyPools::VtyPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "first-vty")
    {
        first_vty.yfilter = yfilter;
    }
    if(value_path == "last-vty")
    {
        last_vty.yfilter = yfilter;
    }
    if(value_path == "line-template")
    {
        line_template.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Vty::VtyPools::VtyPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name" || name == "first-vty" || name == "last-vty" || name == "line-template" || name == "none")
        return true;
    return false;
}


}
}

