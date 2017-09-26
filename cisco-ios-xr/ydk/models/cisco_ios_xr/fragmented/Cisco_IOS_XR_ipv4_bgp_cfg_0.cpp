
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Bgp()
{

    yang_name = "bgp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Bgp::~Bgp()
{
}

bool Bgp::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Bgp::clone_ptr() const
{
    return std::make_shared<Bgp>();
}

std::string Bgp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bgp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bgp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Bgp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Bgp::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "instance"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Instance::~Instance()
{
}

bool Bgp::Instance::has_data() const
{
    for (std::size_t index=0; index<instance_as.size(); index++)
    {
        if(instance_as[index]->has_data())
            return true;
    }
    return instance_name.is_set;
}

bool Bgp::Instance::has_operation() const
{
    for (std::size_t index=0; index<instance_as.size(); index++)
    {
        if(instance_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string Bgp::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-as")
    {
        for(auto const & c : instance_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs>();
        c->parent = this;
        instance_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-as" || name == "instance-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::InstanceAs()
    :
    as{YType::uint32, "as"}
{

    yang_name = "instance-as"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::~InstanceAs()
{
}

bool Bgp::Instance::InstanceAs::has_data() const
{
    for (std::size_t index=0; index<four_byte_as.size(); index++)
    {
        if(four_byte_as[index]->has_data())
            return true;
    }
    return as.is_set;
}

bool Bgp::Instance::InstanceAs::has_operation() const
{
    for (std::size_t index=0; index<four_byte_as.size(); index++)
    {
        if(four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter);
}

std::string Bgp::Instance::InstanceAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-as" <<"[as='" <<as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "four-byte-as")
    {
        for(auto const & c : four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs>();
        c->parent = this;
        four_byte_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : four_byte_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::FourByteAs()
    :
    as{YType::uint32, "as"},
    bgp_running{YType::empty, "bgp-running"}
    	,
    default_vrf(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf>())
	,vrfs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs>())
{
    default_vrf->parent = this;
    vrfs->parent = this;

    yang_name = "four-byte-as"; yang_parent_name = "instance-as"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::~FourByteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_data() const
{
    return as.is_set
	|| bgp_running.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(bgp_running.yfilter)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as" <<"[as='" <<as <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (bgp_running.is_set || is_set(bgp_running.yfilter)) leaf_name_data.push_back(bgp_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-running")
    {
        bgp_running = value;
        bgp_running.value_namespace = name_space;
        bgp_running.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "bgp-running")
    {
        bgp_running.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-vrf" || name == "vrfs" || name == "as" || name == "bgp-running")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::DefaultVrf()
    :
    bgp_entity(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity>())
	,global(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global>())
{
    bgp_entity->parent = this;
    global->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "four-byte-as"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::~DefaultVrf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_data() const
{
    return (bgp_entity !=  nullptr && bgp_entity->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_entity !=  nullptr && bgp_entity->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-entity")
    {
        if(bgp_entity == nullptr)
        {
            bgp_entity = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity>();
        }
        return bgp_entity;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_entity != nullptr)
    {
        children["bgp-entity"] = bgp_entity;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-entity" || name == "global")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::BgpEntity()
    :
    af_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups>())
	,neighbor_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups>())
	,neighbors(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors>())
	,session_groups(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups>())
{
    af_groups->parent = this;
    neighbor_groups->parent = this;
    neighbors->parent = this;
    session_groups->parent = this;

    yang_name = "bgp-entity"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::~BgpEntity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_data() const
{
    return (af_groups !=  nullptr && af_groups->has_data())
	|| (neighbor_groups !=  nullptr && neighbor_groups->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (session_groups !=  nullptr && session_groups->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_operation() const
{
    return is_set(yfilter)
	|| (af_groups !=  nullptr && af_groups->has_operation())
	|| (neighbor_groups !=  nullptr && neighbor_groups->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (session_groups !=  nullptr && session_groups->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-entity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-groups")
    {
        if(af_groups == nullptr)
        {
            af_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups>();
        }
        return af_groups;
    }

    if(child_yang_name == "neighbor-groups")
    {
        if(neighbor_groups == nullptr)
        {
            neighbor_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups>();
        }
        return neighbor_groups;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "session-groups")
    {
        if(session_groups == nullptr)
        {
            session_groups = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups>();
        }
        return session_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af_groups != nullptr)
    {
        children["af-groups"] = af_groups;
    }

    if(neighbor_groups != nullptr)
    {
        children["neighbor-groups"] = neighbor_groups;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(session_groups != nullptr)
    {
        children["session-groups"] = session_groups;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-groups" || name == "neighbor-groups" || name == "neighbors" || name == "session-groups")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroups()
{

    yang_name = "af-groups"; yang_parent_name = "bgp-entity"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::~AfGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::has_data() const
{
    for (std::size_t index=0; index<af_group.size(); index++)
    {
        if(af_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::has_operation() const
{
    for (std::size_t index=0; index<af_group.size(); index++)
    {
        if(af_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-group")
    {
        for(auto const & c : af_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup>();
        c->parent = this;
        af_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroup()
    :
    af_group_name{YType::str, "af-group-name"}
    	,
    af_group_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs>())
{
    af_group_afs->parent = this;

    yang_name = "af-group"; yang_parent_name = "af-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::~AfGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::has_data() const
{
    return af_group_name.is_set
	|| (af_group_afs !=  nullptr && af_group_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_group_name.yfilter)
	|| (af_group_afs !=  nullptr && af_group_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-group" <<"[af-group-name='" <<af_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_group_name.is_set || is_set(af_group_name.yfilter)) leaf_name_data.push_back(af_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-group-afs")
    {
        if(af_group_afs == nullptr)
        {
            af_group_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs>();
        }
        return af_group_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af_group_afs != nullptr)
    {
        children["af-group-afs"] = af_group_afs;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-group-name")
    {
        af_group_name = value;
        af_group_name.value_namespace = name_space;
        af_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-group-name")
    {
        af_group_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-group-afs" || name == "af-group-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAfs()
{

    yang_name = "af-group-afs"; yang_parent_name = "af-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::~AfGroupAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::has_data() const
{
    for (std::size_t index=0; index<af_group_af.size(); index++)
    {
        if(af_group_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::has_operation() const
{
    for (std::size_t index=0; index<af_group_af.size(); index++)
    {
        if(af_group_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-group-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-group-af")
    {
        for(auto const & c : af_group_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf>();
        c->parent = this;
        af_group_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_group_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-group-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AfGroupAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    create{YType::empty, "create"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable>())
	,advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn>())
	,advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    advertise_local_v4->parent = this;
    advertise_local_v6->parent = this;
    advertise_v4->parent = this;
    advertise_v6->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    default_originate->parent = this;
    import->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    site_of_origin->parent = this;
    soft_reconfiguration->parent = this;

    yang_name = "af-group-af"; yang_parent_name = "af-group-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::~AfGroupAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| create.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| enforce_multiple_labels.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(l2vpn_signalling.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(send_multicast_attr.yfilter)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-group-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.yfilter)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.yfilter)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_def_imp_disable_v4 != nullptr)
    {
        children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        children["advertise-disable"] = advertise_disable;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(advertise_local_v4 != nullptr)
    {
        children["advertise-local-v4"] = advertise_local_v4;
    }

    if(advertise_local_v6 != nullptr)
    {
        children["advertise-local-v6"] = advertise_local_v6;
    }

    if(advertise_v4 != nullptr)
    {
        children["advertise-v4"] = advertise_v4;
    }

    if(advertise_v6 != nullptr)
    {
        children["advertise-v6"] = advertise_v6;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(aigp_cost_community != nullptr)
    {
        children["aigp-cost-community"] = aigp_cost_community;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_prefixes != nullptr)
    {
        children["maximum-prefixes"] = maximum_prefixes;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(site_of_origin != nullptr)
    {
        children["site-of-origin"] = site_of_origin;
    }

    if(soft_reconfiguration != nullptr)
    {
        children["soft-reconfiguration"] = soft_reconfiguration;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
        l2vpn_signalling.value_namespace = name_space;
        l2vpn_signalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
        send_multicast_attr.value_namespace = name_space;
        send_multicast_attr.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-def-imp-disable-v4" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "advertise-local-v4" || name == "advertise-local-v6" || name == "advertise-v4" || name == "advertise-v6" || name == "advertise-vrf-imp-disable-v4" || name == "advertise-vrf-imp-disable-v6" || name == "aigp-cost-community" || name == "default-originate" || name == "import" || name == "maximum-prefixes" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "remove-private-as-entire-as-path" || name == "remove-private-as-entire-as-path-inbound" || name == "site-of-origin" || name == "soft-reconfiguration" || name == "af-name" || name == "accept-own" || name == "accept-route-legacy-rt" || name == "advertise-local-labeled-route" || name == "advertise-orf" || name == "advertise-permanent-network" || name == "af-group" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "as-override" || name == "create" || name == "default-weight" || name == "encapsulation-type" || name == "enforce-multiple-labels" || name == "flowspec-validation" || name == "l2vpn-signalling" || name == "multipath" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "next-hop-unchanged-multipath" || name == "prefix-orf-policy" || name == "route-policy-in" || name == "route-policy-out" || name == "route-reflector-client" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "send-community-ebgp" || name == "send-community-ebgp-graceful-shutdown" || name == "send-ext-community-ebgp" || name == "send-multicast-attr")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::AdvertiseL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::~AdvertiseL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::AdvertiseLocalL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::~AdvertiseLocalL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community-id" || name == "cost-community-poi-type" || name == "enable" || name == "transitive")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{

    yang_name = "import"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(import_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "import-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_percentage.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-extra-paths" || name == "prefix-limit" || name == "restart-time" || name == "warning-only" || name == "warning-percentage")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_accept.yfilter)
	|| ydk::is_set(stale_time_send.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-accept" || name == "stale-time-send")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{

    yang_name = "site-of-origin"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as" || name == "as-index" || name == "as-xx" || name == "type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "af-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroups()
{

    yang_name = "neighbor-groups"; yang_parent_name = "bgp-entity"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::~NeighborGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::has_data() const
{
    for (std::size_t index=0; index<neighbor_group.size(); index++)
    {
        if(neighbor_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::has_operation() const
{
    for (std::size_t index=0; index<neighbor_group.size(); index++)
    {
        if(neighbor_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-group")
    {
        for(auto const & c : neighbor_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup>();
        c->parent = this;
        neighbor_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-group")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroup()
    :
    neighbor_group_name{YType::str, "neighbor-group-name"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId>())
	,neighbor_group_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    graceful_maintenance->parent = this;
    keychain->parent = this;
    local_address->parent = this;
    local_as->parent = this;
    msg_log_in->parent = this;
    msg_log_out->parent = this;
    neighbor_cluster_id->parent = this;
    neighbor_group_afs->parent = this;
    password->parent = this;
    receive_buffer_size->parent = this;
    remote_as->parent = this;
    send_buffer_size->parent = this;
    tcpmss->parent = this;
    timers->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;

    yang_name = "neighbor-group"; yang_parent_name = "neighbor-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::~NeighborGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::has_data() const
{
    return neighbor_group_name.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| create.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (neighbor_group_afs !=  nullptr && neighbor_group_afs->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_group_name.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(create.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (neighbor_group_afs !=  nullptr && neighbor_group_afs->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-group" <<"[neighbor-group-name='" <<neighbor_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_group_name.is_set || is_set(neighbor_group_name.yfilter)) leaf_name_data.push_back(neighbor_group_name.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "neighbor-group-afs")
    {
        if(neighbor_group_afs == nullptr)
        {
            neighbor_group_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs>();
        }
        return neighbor_group_afs;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password>();
        }
        return password;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement_interval != nullptr)
    {
        children["advertisement-interval"] = advertisement_interval;
    }

    if(bmp_activates != nullptr)
    {
        children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(msg_log_in != nullptr)
    {
        children["msg-log-in"] = msg_log_in;
    }

    if(msg_log_out != nullptr)
    {
        children["msg-log-out"] = msg_log_out;
    }

    if(neighbor_cluster_id != nullptr)
    {
        children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(neighbor_group_afs != nullptr)
    {
        children["neighbor-group-afs"] = neighbor_group_afs;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(receive_buffer_size != nullptr)
    {
        children["receive-buffer-size"] = receive_buffer_size;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(send_buffer_size != nullptr)
    {
        children["send-buffer-size"] = send_buffer_size;
    }

    if(tcpmss != nullptr)
    {
        children["tcpmss"] = tcpmss;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        children["update-in-filtering"] = update_in_filtering;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-group-name")
    {
        neighbor_group_name = value;
        neighbor_group_name.value_namespace = name_space;
        neighbor_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-group-name")
    {
        neighbor_group_name.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval" || name == "bmp-activates" || name == "ebgp-multihop" || name == "graceful-maintenance" || name == "keychain" || name == "local-address" || name == "local-as" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-cluster-id" || name == "neighbor-group-afs" || name == "password" || name == "receive-buffer-size" || name == "remote-as" || name == "send-buffer-size" || name == "tcpmss" || name == "timers" || name == "tos" || name == "update-in-filtering" || name == "neighbor-group-name" || name == "additional-paths-receive-capability" || name == "additional-paths-send-capability" || name == "bfd-enable-modes" || name == "bfd-minimum-interval" || name == "bfd-multiplier" || name == "create" || name == "description" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-enable-modes" || name == "egress-peer-engineering" || name == "enforce-first-as" || name == "idle-watch-time" || name == "ignore-connected-check-ebgp" || name == "internal-vpn-client-ibgp-ce" || name == "max-peers" || name == "neighbor-graceful-restart" || name == "neighbor-graceful-restart-stalepath-time" || name == "neighbor-graceful-restart-time" || name == "neighbor-group-add-member" || name == "propagate-dmz-link-bandwidth" || name == "remote-as-list" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "session-group-add-member" || name == "session-open-mode" || name == "shutdown" || name == "suppress-all-capabilities" || name == "suppress-four-byte-as-capability" || name == "ttl-security" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivates()
{

    yang_name = "bmp-activates"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_activate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    graceful_maintenance_local_preference->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_maintenance_as_prepends != nullptr)
    {
        children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    if(graceful_maintenance_local_preference != nullptr)
    {
        children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-as-prepends" || name == "graceful-maintenance-local-preference" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_prepends.yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-prepends" || name == "gshut-prepends-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "disable" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAfs()
{

    yang_name = "neighbor-group-afs"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::~NeighborGroupAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::has_data() const
{
    for (std::size_t index=0; index<neighbor_group_af.size(); index++)
    {
        if(neighbor_group_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_group_af.size(); index++)
    {
        if(neighbor_group_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-group-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-group-af")
    {
        for(auto const & c : neighbor_group_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf>();
        c->parent = this;
        neighbor_group_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_group_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-group-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborGroupAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable>())
	,advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn>())
	,advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    advertise_local_v4->parent = this;
    advertise_local_v6->parent = this;
    advertise_v4->parent = this;
    advertise_v6->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    default_originate->parent = this;
    import->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    site_of_origin->parent = this;
    soft_reconfiguration->parent = this;

    yang_name = "neighbor-group-af"; yang_parent_name = "neighbor-group-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::~NeighborGroupAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| enforce_multiple_labels.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(l2vpn_signalling.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(send_multicast_attr.yfilter)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-group-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.yfilter)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.yfilter)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin == nullptr)
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin>();
        }
        return site_of_origin;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_def_imp_disable_v4 != nullptr)
    {
        children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        children["advertise-disable"] = advertise_disable;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(advertise_local_v4 != nullptr)
    {
        children["advertise-local-v4"] = advertise_local_v4;
    }

    if(advertise_local_v6 != nullptr)
    {
        children["advertise-local-v6"] = advertise_local_v6;
    }

    if(advertise_v4 != nullptr)
    {
        children["advertise-v4"] = advertise_v4;
    }

    if(advertise_v6 != nullptr)
    {
        children["advertise-v6"] = advertise_v6;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(aigp_cost_community != nullptr)
    {
        children["aigp-cost-community"] = aigp_cost_community;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_prefixes != nullptr)
    {
        children["maximum-prefixes"] = maximum_prefixes;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(site_of_origin != nullptr)
    {
        children["site-of-origin"] = site_of_origin;
    }

    if(soft_reconfiguration != nullptr)
    {
        children["soft-reconfiguration"] = soft_reconfiguration;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
        l2vpn_signalling.value_namespace = name_space;
        l2vpn_signalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
        send_multicast_attr.value_namespace = name_space;
        send_multicast_attr.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-def-imp-disable-v4" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "advertise-local-v4" || name == "advertise-local-v6" || name == "advertise-v4" || name == "advertise-v6" || name == "advertise-vrf-imp-disable-v4" || name == "advertise-vrf-imp-disable-v6" || name == "aigp-cost-community" || name == "default-originate" || name == "import" || name == "maximum-prefixes" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "remove-private-as-entire-as-path" || name == "remove-private-as-entire-as-path-inbound" || name == "site-of-origin" || name == "soft-reconfiguration" || name == "af-name" || name == "accept-own" || name == "accept-route-legacy-rt" || name == "activate" || name == "advertise-local-labeled-route" || name == "advertise-orf" || name == "advertise-permanent-network" || name == "af-group" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "as-override" || name == "default-weight" || name == "encapsulation-type" || name == "enforce-multiple-labels" || name == "flowspec-validation" || name == "l2vpn-signalling" || name == "multipath" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "next-hop-unchanged-multipath" || name == "prefix-orf-policy" || name == "route-policy-in" || name == "route-policy-out" || name == "route-reflector-client" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "send-community-ebgp" || name == "send-community-ebgp-graceful-shutdown" || name == "send-ext-community-ebgp" || name == "send-multicast-attr")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::AdvertiseL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::~AdvertiseL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::AdvertiseLocalL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::~AdvertiseLocalL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community-id" || name == "cost-community-poi-type" || name == "enable" || name == "transitive")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{

    yang_name = "import"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(import_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "import-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_percentage.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-extra-paths" || name == "prefix-limit" || name == "restart-time" || name == "warning-only" || name == "warning-percentage")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_accept.yfilter)
	|| ydk::is_set(stale_time_send.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-accept" || name == "stale-time-send")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{

    yang_name = "site-of-origin"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "address-index" || name == "as" || name == "as-index" || name == "as-xx" || name == "type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "neighbor-group-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{

    yang_name = "password"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "password-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{

    yang_name = "tcpmss"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mss" || name == "tcpmss-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "neighbor-group"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_in_filtering_message_buffers != nullptr)
    {
        children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter)
	|| ydk::is_set(number_of_buffers.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-circular-buffer" || name == "number-of-buffers")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "bgp-entity"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::~Neighbors()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor_prefix_length.size(); index++)
    {
        if(neighbor_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor_prefix_length.size(); index++)
    {
        if(neighbor_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-prefix-length")
    {
        for(auto const & c : neighbor_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength>();
        c->parent = this;
        neighbor_prefix_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : neighbor_prefix_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "neighbor-prefix-length")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut>())
	,neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    graceful_maintenance->parent = this;
    keychain->parent = this;
    local_address->parent = this;
    local_as->parent = this;
    msg_log_in->parent = this;
    msg_log_out->parent = this;
    neighbor_afs->parent = this;
    neighbor_cluster_id->parent = this;
    password->parent = this;
    receive_buffer_size->parent = this;
    remote_as->parent = this;
    send_buffer_size->parent = this;
    tcpmss->parent = this;
    timers->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::~Neighbor()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "neighbor-afs")
    {
        if(neighbor_afs == nullptr)
        {
            neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs>();
        }
        return neighbor_afs;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement_interval != nullptr)
    {
        children["advertisement-interval"] = advertisement_interval;
    }

    if(bmp_activates != nullptr)
    {
        children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(msg_log_in != nullptr)
    {
        children["msg-log-in"] = msg_log_in;
    }

    if(msg_log_out != nullptr)
    {
        children["msg-log-out"] = msg_log_out;
    }

    if(neighbor_afs != nullptr)
    {
        children["neighbor-afs"] = neighbor_afs;
    }

    if(neighbor_cluster_id != nullptr)
    {
        children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(receive_buffer_size != nullptr)
    {
        children["receive-buffer-size"] = receive_buffer_size;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(send_buffer_size != nullptr)
    {
        children["send-buffer-size"] = send_buffer_size;
    }

    if(tcpmss != nullptr)
    {
        children["tcpmss"] = tcpmss;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        children["update-in-filtering"] = update_in_filtering;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval" || name == "bmp-activates" || name == "ebgp-multihop" || name == "graceful-maintenance" || name == "keychain" || name == "local-address" || name == "local-as" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-afs" || name == "neighbor-cluster-id" || name == "password" || name == "receive-buffer-size" || name == "remote-as" || name == "send-buffer-size" || name == "tcpmss" || name == "timers" || name == "tos" || name == "update-in-filtering" || name == "neighbor-address" || name == "additional-paths-receive-capability" || name == "additional-paths-send-capability" || name == "bfd-enable-modes" || name == "bfd-minimum-interval" || name == "bfd-multiplier" || name == "description" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-enable-modes" || name == "egress-peer-engineering" || name == "enforce-first-as" || name == "idle-watch-time" || name == "ignore-connected-check-ebgp" || name == "internal-vpn-client-ibgp-ce" || name == "max-peers" || name == "neighbor-graceful-restart" || name == "neighbor-graceful-restart-stalepath-time" || name == "neighbor-graceful-restart-time" || name == "neighbor-group-add-member" || name == "propagate-dmz-link-bandwidth" || name == "remote-as-list" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "session-group-add-member" || name == "session-open-mode" || name == "shutdown" || name == "suppress-all-capabilities" || name == "suppress-four-byte-as-capability" || name == "ttl-security" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivates()
{

    yang_name = "bmp-activates"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_activate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    graceful_maintenance_local_preference->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_maintenance_as_prepends != nullptr)
    {
        children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    if(graceful_maintenance_local_preference != nullptr)
    {
        children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-as-prepends" || name == "graceful-maintenance-local-preference" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_prepends.yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-prepends" || name == "gshut-prepends-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "disable" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAfs()
{

    yang_name = "neighbor-afs"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::~NeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable>())
	,advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn>())
	,advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    advertise_local_v4->parent = this;
    advertise_local_v6->parent = this;
    advertise_v4->parent = this;
    advertise_v6->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    default_originate->parent = this;
    import->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    soft_reconfiguration->parent = this;

    yang_name = "neighbor-af"; yang_parent_name = "neighbor-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| enforce_multiple_labels.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(l2vpn_signalling.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(send_multicast_attr.yfilter)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.yfilter)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.yfilter)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_def_imp_disable_v4 != nullptr)
    {
        children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        children["advertise-disable"] = advertise_disable;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(advertise_local_v4 != nullptr)
    {
        children["advertise-local-v4"] = advertise_local_v4;
    }

    if(advertise_local_v6 != nullptr)
    {
        children["advertise-local-v6"] = advertise_local_v6;
    }

    if(advertise_v4 != nullptr)
    {
        children["advertise-v4"] = advertise_v4;
    }

    if(advertise_v6 != nullptr)
    {
        children["advertise-v6"] = advertise_v6;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(aigp_cost_community != nullptr)
    {
        children["aigp-cost-community"] = aigp_cost_community;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_prefixes != nullptr)
    {
        children["maximum-prefixes"] = maximum_prefixes;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(soft_reconfiguration != nullptr)
    {
        children["soft-reconfiguration"] = soft_reconfiguration;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
        l2vpn_signalling.value_namespace = name_space;
        l2vpn_signalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
        send_multicast_attr.value_namespace = name_space;
        send_multicast_attr.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-def-imp-disable-v4" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "advertise-local-v4" || name == "advertise-local-v6" || name == "advertise-v4" || name == "advertise-v6" || name == "advertise-vrf-imp-disable-v4" || name == "advertise-vrf-imp-disable-v6" || name == "aigp-cost-community" || name == "default-originate" || name == "import" || name == "maximum-prefixes" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "remove-private-as-entire-as-path" || name == "remove-private-as-entire-as-path-inbound" || name == "soft-reconfiguration" || name == "af-name" || name == "accept-own" || name == "accept-route-legacy-rt" || name == "activate" || name == "advertise-local-labeled-route" || name == "advertise-orf" || name == "advertise-permanent-network" || name == "af-group" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "as-override" || name == "default-weight" || name == "encapsulation-type" || name == "enforce-multiple-labels" || name == "flowspec-validation" || name == "l2vpn-signalling" || name == "multipath" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "next-hop-unchanged-multipath" || name == "prefix-orf-policy" || name == "route-policy-in" || name == "route-policy-out" || name == "route-reflector-client" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "send-community-ebgp" || name == "send-community-ebgp-graceful-shutdown" || name == "send-ext-community-ebgp" || name == "send-multicast-attr")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::AdvertiseL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::~AdvertiseL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::AdvertiseLocalL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::~AdvertiseLocalL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community-id" || name == "cost-community-poi-type" || name == "enable" || name == "transitive")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{

    yang_name = "import"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(import_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "import-stitching")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{

    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard_extra_paths.yfilter)
	|| ydk::is_set(prefix_limit.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(warning_percentage.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.yfilter)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.yfilter)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.yfilter)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
        discard_extra_paths.value_namespace = name_space;
        discard_extra_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
        prefix_limit.value_namespace = name_space;
        prefix_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
        warning_percentage.value_namespace = name_space;
        warning_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths.yfilter = yfilter;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard-extra-paths" || name == "prefix-limit" || name == "restart-time" || name == "warning-only" || name == "warning-percentage")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{

    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stale_time_accept.yfilter)
	|| ydk::is_set(stale_time_send.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.yfilter)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.yfilter)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
        stale_time_accept.value_namespace = name_space;
        stale_time_accept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
        stale_time_send.value_namespace = name_space;
        stale_time_send.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept.yfilter = yfilter;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stale-time-accept" || name == "stale-time-send")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{

    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(entire.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.yfilter)) leaf_name_data.push_back(entire.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entire")
    {
        entire = value;
        entire.value_namespace = name_space;
        entire.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "entire")
    {
        entire.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entire")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{

    yang_name = "soft-reconfiguration"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound_soft.yfilter)
	|| ydk::is_set(soft_always.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.yfilter)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.yfilter)) leaf_name_data.push_back(soft_always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
        inbound_soft.value_namespace = name_space;
        inbound_soft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
        soft_always.value_namespace = name_space;
        soft_always.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft.yfilter = yfilter;
    }
    if(value_path == "soft-always")
    {
        soft_always.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound-soft" || name == "soft-always")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{

    yang_name = "neighbor-cluster-id"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_address.yfilter)
	|| ydk::is_set(cluster_id_number.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.yfilter)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.yfilter)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
        cluster_id_address.value_namespace = name_space;
        cluster_id_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
        cluster_id_number.value_namespace = name_space;
        cluster_id_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address.yfilter = yfilter;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-address" || name == "cluster-id-number")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(password_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.yfilter)) leaf_name_data.push_back(password_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
        password_disable.value_namespace = name_space;
        password_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "password-disable")
    {
        password_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "password-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{

    yang_name = "receive-buffer-size"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_receive_size.yfilter)
	|| ydk::is_set(socket_receive_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.yfilter)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.yfilter)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
        bgp_receive_size.value_namespace = name_space;
        bgp_receive_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
        socket_receive_size.value_namespace = name_space;
        socket_receive_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size.yfilter = yfilter;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-receive-size" || name == "socket-receive-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{

    yang_name = "remote-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{

    yang_name = "send-buffer-size"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_send_size.yfilter)
	|| ydk::is_set(socket_send_size.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.yfilter)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.yfilter)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
        bgp_send_size.value_namespace = name_space;
        bgp_send_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
        socket_send_size.value_namespace = name_space;
        socket_send_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size.yfilter = yfilter;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-send-size" || name == "socket-send-size")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{

    yang_name = "tcpmss"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mss.yfilter)
	|| ydk::is_set(tcpmss_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.yfilter)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
        tcpmss_disable.value_namespace = name_space;
        tcpmss_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mss" || name == "tcpmss-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(min_accept_hold_time.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.yfilter)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
        min_accept_hold_time.value_namespace = name_space;
        min_accept_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval" || name == "min-accept-hold-time")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{

    yang_name = "tos"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "value")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{

    yang_name = "update-in-filtering"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(update_in_filtering_attribute_filter_group.yfilter)
	|| ydk::is_set(update_in_filtering_syslog_disable.yfilter)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.yfilter)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.yfilter)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers == nullptr)
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
        }
        return update_in_filtering_message_buffers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_in_filtering_message_buffers != nullptr)
    {
        children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
        update_in_filtering_attribute_filter_group.value_namespace = name_space;
        update_in_filtering_attribute_filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
        update_in_filtering_syslog_disable.value_namespace = name_space;
        update_in_filtering_syslog_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group.yfilter = yfilter;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-in-filtering-message-buffers" || name == "enable" || name == "update-in-filtering-attribute-filter-group" || name == "update-in-filtering-syslog-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{

    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_circular_buffer.yfilter)
	|| ydk::is_set(number_of_buffers.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.yfilter)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.yfilter)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
        non_circular_buffer.value_namespace = name_space;
        non_circular_buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
        number_of_buffers.value_namespace = name_space;
        number_of_buffers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer.yfilter = yfilter;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-circular-buffer" || name == "number-of-buffers")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    neighbor_address{YType::str, "neighbor-address"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgp_ce{YType::boolean, "internal-vpn-client-ibgp-ce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut>())
	,neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    ebgp_multihop->parent = this;
    graceful_maintenance->parent = this;
    keychain->parent = this;
    local_address->parent = this;
    local_as->parent = this;
    msg_log_in->parent = this;
    msg_log_out->parent = this;
    neighbor_afs->parent = this;
    neighbor_cluster_id->parent = this;
    password->parent = this;
    receive_buffer_size->parent = this;
    remote_as->parent = this;
    send_buffer_size->parent = this;
    tcpmss->parent = this;
    timers->parent = this;
    tos->parent = this;
    update_in_filtering->parent = this;

    yang_name = "neighbor-prefix-length"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::~NeighborPrefixLength()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| neighbor_address.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgp_ce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(additional_paths_receive_capability.yfilter)
	|| ydk::is_set(additional_paths_send_capability.yfilter)
	|| ydk::is_set(bfd_enable_modes.yfilter)
	|| ydk::is_set(bfd_minimum_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(ebgp_recv_dmz.yfilter)
	|| ydk::is_set(ebgp_send_dmz_enable_modes.yfilter)
	|| ydk::is_set(egress_peer_engineering.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(idle_watch_time.yfilter)
	|| ydk::is_set(ignore_connected_check_ebgp.yfilter)
	|| ydk::is_set(internal_vpn_client_ibgp_ce.yfilter)
	|| ydk::is_set(max_peers.yfilter)
	|| ydk::is_set(neighbor_graceful_restart.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_stalepath_time.yfilter)
	|| ydk::is_set(neighbor_graceful_restart_time.yfilter)
	|| ydk::is_set(neighbor_group_add_member.yfilter)
	|| ydk::is_set(propagate_dmz_link_bandwidth.yfilter)
	|| ydk::is_set(remote_as_list.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(session_group_add_member.yfilter)
	|| ydk::is_set(session_open_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(suppress_all_capabilities.yfilter)
	|| ydk::is_set(suppress_four_byte_as_capability.yfilter)
	|| ydk::is_set(ttl_security.yfilter)
	|| ydk::is_set(update_source_interface.yfilter)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-prefix-length" <<"[prefix-length='" <<prefix_length <<"']" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.yfilter)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.yfilter)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.yfilter)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.yfilter)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.yfilter)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.yfilter)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.yfilter)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.yfilter)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.yfilter)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgp_ce.is_set || is_set(internal_vpn_client_ibgp_ce.yfilter)) leaf_name_data.push_back(internal_vpn_client_ibgp_ce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.yfilter)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.yfilter)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.yfilter)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.yfilter)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.yfilter)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.yfilter)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.yfilter)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.yfilter)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.yfilter)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.yfilter)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.yfilter)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval == nullptr)
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval>();
        }
        return advertisement_interval;
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates == nullptr)
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates>();
        }
        return bmp_activates;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "keychain")
    {
        if(keychain == nullptr)
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain>();
        }
        return keychain;
    }

    if(child_yang_name == "local-address")
    {
        if(local_address == nullptr)
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress>();
        }
        return local_address;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in == nullptr)
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn>();
        }
        return msg_log_in;
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out == nullptr)
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut>();
        }
        return msg_log_out;
    }

    if(child_yang_name == "neighbor-afs")
    {
        if(neighbor_afs == nullptr)
        {
            neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs>();
        }
        return neighbor_afs;
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id == nullptr)
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId>();
        }
        return neighbor_cluster_id;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password>();
        }
        return password;
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size == nullptr)
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize>();
        }
        return receive_buffer_size;
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as == nullptr)
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs>();
        }
        return remote_as;
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size == nullptr)
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize>();
        }
        return send_buffer_size;
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss == nullptr)
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss>();
        }
        return tcpmss;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering == nullptr)
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering>();
        }
        return update_in_filtering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement_interval != nullptr)
    {
        children["advertisement-interval"] = advertisement_interval;
    }

    if(bmp_activates != nullptr)
    {
        children["bmp-activates"] = bmp_activates;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(keychain != nullptr)
    {
        children["keychain"] = keychain;
    }

    if(local_address != nullptr)
    {
        children["local-address"] = local_address;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(msg_log_in != nullptr)
    {
        children["msg-log-in"] = msg_log_in;
    }

    if(msg_log_out != nullptr)
    {
        children["msg-log-out"] = msg_log_out;
    }

    if(neighbor_afs != nullptr)
    {
        children["neighbor-afs"] = neighbor_afs;
    }

    if(neighbor_cluster_id != nullptr)
    {
        children["neighbor-cluster-id"] = neighbor_cluster_id;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(receive_buffer_size != nullptr)
    {
        children["receive-buffer-size"] = receive_buffer_size;
    }

    if(remote_as != nullptr)
    {
        children["remote-as"] = remote_as;
    }

    if(send_buffer_size != nullptr)
    {
        children["send-buffer-size"] = send_buffer_size;
    }

    if(tcpmss != nullptr)
    {
        children["tcpmss"] = tcpmss;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(update_in_filtering != nullptr)
    {
        children["update-in-filtering"] = update_in_filtering;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
        additional_paths_receive_capability.value_namespace = name_space;
        additional_paths_receive_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
        additional_paths_send_capability.value_namespace = name_space;
        additional_paths_send_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
        bfd_enable_modes.value_namespace = name_space;
        bfd_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
        bfd_minimum_interval.value_namespace = name_space;
        bfd_minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
        ebgp_recv_dmz.value_namespace = name_space;
        ebgp_recv_dmz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
        ebgp_send_dmz_enable_modes.value_namespace = name_space;
        ebgp_send_dmz_enable_modes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
        egress_peer_engineering.value_namespace = name_space;
        egress_peer_engineering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
        idle_watch_time.value_namespace = name_space;
        idle_watch_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
        ignore_connected_check_ebgp.value_namespace = name_space;
        ignore_connected_check_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce = value;
        internal_vpn_client_ibgp_ce.value_namespace = name_space;
        internal_vpn_client_ibgp_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
        max_peers.value_namespace = name_space;
        max_peers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
        neighbor_graceful_restart.value_namespace = name_space;
        neighbor_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
        neighbor_graceful_restart_stalepath_time.value_namespace = name_space;
        neighbor_graceful_restart_stalepath_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
        neighbor_graceful_restart_time.value_namespace = name_space;
        neighbor_graceful_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
        neighbor_group_add_member.value_namespace = name_space;
        neighbor_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
        propagate_dmz_link_bandwidth.value_namespace = name_space;
        propagate_dmz_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
        remote_as_list.value_namespace = name_space;
        remote_as_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
        session_group_add_member.value_namespace = name_space;
        session_group_add_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
        session_open_mode.value_namespace = name_space;
        session_open_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
        suppress_all_capabilities.value_namespace = name_space;
        suppress_all_capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
        suppress_four_byte_as_capability.value_namespace = name_space;
        suppress_four_byte_as_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
        ttl_security.value_namespace = name_space;
        ttl_security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
        update_source_interface.value_namespace = name_space;
        update_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability.yfilter = yfilter;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability.yfilter = yfilter;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes.yfilter = yfilter;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz.yfilter = yfilter;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes.yfilter = yfilter;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time.yfilter = yfilter;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp.yfilter = yfilter;
    }
    if(value_path == "internal-vpn-client-ibgp-ce")
    {
        internal_vpn_client_ibgp_ce.yfilter = yfilter;
    }
    if(value_path == "max-peers")
    {
        max_peers.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member.yfilter = yfilter;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member.yfilter = yfilter;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities.yfilter = yfilter;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability.yfilter = yfilter;
    }
    if(value_path == "ttl-security")
    {
        ttl_security.yfilter = yfilter;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement-interval" || name == "bmp-activates" || name == "ebgp-multihop" || name == "graceful-maintenance" || name == "keychain" || name == "local-address" || name == "local-as" || name == "msg-log-in" || name == "msg-log-out" || name == "neighbor-afs" || name == "neighbor-cluster-id" || name == "password" || name == "receive-buffer-size" || name == "remote-as" || name == "send-buffer-size" || name == "tcpmss" || name == "timers" || name == "tos" || name == "update-in-filtering" || name == "prefix-length" || name == "neighbor-address" || name == "additional-paths-receive-capability" || name == "additional-paths-send-capability" || name == "bfd-enable-modes" || name == "bfd-minimum-interval" || name == "bfd-multiplier" || name == "description" || name == "ebgp-recv-dmz" || name == "ebgp-send-dmz-enable-modes" || name == "egress-peer-engineering" || name == "enforce-first-as" || name == "idle-watch-time" || name == "ignore-connected-check-ebgp" || name == "internal-vpn-client-ibgp-ce" || name == "max-peers" || name == "neighbor-graceful-restart" || name == "neighbor-graceful-restart-stalepath-time" || name == "neighbor-graceful-restart-time" || name == "neighbor-group-add-member" || name == "propagate-dmz-link-bandwidth" || name == "remote-as-list" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "session-group-add-member" || name == "session-open-mode" || name == "shutdown" || name == "suppress-all-capabilities" || name == "suppress-four-byte-as-capability" || name == "ttl-security" || name == "update-source-interface")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{

    yang_name = "advertisement-interval"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(minimum_interval_msecs.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.yfilter)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
        minimum_interval_msecs.value_namespace = name_space;
        minimum_interval_msecs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-interval" || name == "minimum-interval-msecs")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivates()
{

    yang_name = "bmp-activates"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_activate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{

    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-id")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop_count.yfilter)
	|| ydk::is_set(mpls_deactivation.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.yfilter)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.yfilter)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
        max_hop_count.value_namespace = name_space;
        max_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
        mpls_deactivation.value_namespace = name_space;
        mpls_deactivation.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count.yfilter = yfilter;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop-count" || name == "mpls-deactivation")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    graceful_maintenance_local_preference->parent = this;

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(graceful_maintenance_activate.yfilter)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.yfilter)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends == nullptr)
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
        }
        return graceful_maintenance_as_prepends;
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference == nullptr)
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
        }
        return graceful_maintenance_local_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_maintenance_as_prepends != nullptr)
    {
        children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
    }

    if(graceful_maintenance_local_preference != nullptr)
    {
        children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
        graceful_maintenance_activate.value_namespace = name_space;
        graceful_maintenance_activate.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-maintenance-as-prepends" || name == "graceful-maintenance-local-preference" || name == "enable" || name == "graceful-maintenance-activate")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{

    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_prepends.yfilter)
	|| ydk::is_set(gshut_prepends_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.yfilter)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.yfilter)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
        as_prepends.value_namespace = name_space;
        as_prepends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
        gshut_prepends_disable.value_namespace = name_space;
        gshut_prepends_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-prepends")
    {
        as_prepends.yfilter = yfilter;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-prepends" || name == "gshut-prepends-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{

    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gshut_loc_pref_disable.yfilter)
	|| ydk::is_set(local_preference.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.yfilter)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
        gshut_loc_pref_disable.value_namespace = name_space;
        gshut_loc_pref_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gshut-loc-pref-disable" || name == "local-preference")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{

    yang_name = "keychain"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keychain_disable.yfilter)
	|| ydk::is_set(keychain_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.yfilter)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.yfilter)) leaf_name_data.push_back(keychain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
        keychain_disable.value_namespace = name_space;
        keychain_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
        keychain_name.value_namespace = name_space;
        keychain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable.yfilter = yfilter;
    }
    if(value_path == "keychain-name")
    {
        keychain_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain-disable" || name == "keychain-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{

    yang_name = "local-address"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address_disable.yfilter)
	|| ydk::is_set(local_ip_address.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.yfilter)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.yfilter)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
        local_address_disable.value_namespace = name_space;
        local_address_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
        local_ip_address.value_namespace = name_space;
        local_ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable.yfilter = yfilter;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address-disable" || name == "local-ip-address")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "disable" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-in"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{

    yang_name = "msg-log-out"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msg_buf_count.yfilter)
	|| ydk::is_set(msg_log_disable.yfilter)
	|| ydk::is_set(msg_log_inherit_disable.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.yfilter)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.yfilter)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.yfilter)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
        msg_buf_count.value_namespace = name_space;
        msg_buf_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
        msg_log_disable.value_namespace = name_space;
        msg_log_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
        msg_log_inherit_disable.value_namespace = name_space;
        msg_log_inherit_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count.yfilter = yfilter;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable.yfilter = yfilter;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-buf-count" || name == "msg-log-disable" || name == "msg-log-inherit-disable")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAfs()
{

    yang_name = "neighbor-afs"; yang_parent_name = "neighbor-prefix-length"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::~NeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-af")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    enforce_multiple_labels{YType::boolean, "enforce-multiple-labels"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable>())
	,advertise_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn>())
	,advertise_local_l2vpn_evpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    advertise_def_imp_disable_v6->parent = this;
    advertise_disable->parent = this;
    advertise_l2vpn_evpn->parent = this;
    advertise_local_l2vpn_evpn->parent = this;
    advertise_local_v4->parent = this;
    advertise_local_v6->parent = this;
    advertise_v4->parent = this;
    advertise_v6->parent = this;
    advertise_vrf_imp_disable_v4->parent = this;
    advertise_vrf_imp_disable_v6->parent = this;
    default_originate->parent = this;
    import->parent = this;
    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    soft_reconfiguration->parent = this;

    yang_name = "neighbor-af"; yang_parent_name = "neighbor-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| enforce_multiple_labels.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_data())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(accept_own.yfilter)
	|| ydk::is_set(accept_route_legacy_rt.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertise_local_labeled_route.yfilter)
	|| ydk::is_set(advertise_orf.yfilter)
	|| ydk::is_set(advertise_permanent_network.yfilter)
	|| ydk::is_set(af_group.yfilter)
	|| ydk::is_set(aigp.yfilter)
	|| ydk::is_set(aigp_send_med.yfilter)
	|| ydk::is_set(allow_as_in.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(default_weight.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(enforce_multiple_labels.yfilter)
	|| ydk::is_set(flowspec_validation.yfilter)
	|| ydk::is_set(l2vpn_signalling.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(next_hop_unchanged_multipath.yfilter)
	|| ydk::is_set(prefix_orf_policy.yfilter)
	|| ydk::is_set(route_policy_in.yfilter)
	|| ydk::is_set(route_policy_out.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disable.yfilter)
	|| ydk::is_set(send_community_ebgp.yfilter)
	|| ydk::is_set(send_community_ebgp_graceful_shutdown.yfilter)
	|| ydk::is_set(send_ext_community_ebgp.yfilter)
	|| ydk::is_set(send_multicast_attr.yfilter)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpn_evpn !=  nullptr && advertise_l2vpn_evpn->has_operation())
	|| (advertise_local_l2vpn_evpn !=  nullptr && advertise_local_l2vpn_evpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.yfilter)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.yfilter)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.yfilter)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.yfilter)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.yfilter)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.yfilter)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.yfilter)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.yfilter)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.yfilter)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.yfilter)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (enforce_multiple_labels.is_set || is_set(enforce_multiple_labels.yfilter)) leaf_name_data.push_back(enforce_multiple_labels.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.yfilter)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.yfilter)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.yfilter)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.yfilter)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.yfilter)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.yfilter)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.yfilter)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.yfilter)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.yfilter)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.yfilter)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.yfilter)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 == nullptr)
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>();
        }
        return advertise_def_imp_disable_v4;
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 == nullptr)
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>();
        }
        return advertise_def_imp_disable_v6;
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable == nullptr)
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable>();
        }
        return advertise_disable;
    }

    if(child_yang_name == "advertise-l2vpn-evpn")
    {
        if(advertise_l2vpn_evpn == nullptr)
        {
            advertise_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn>();
        }
        return advertise_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-l2vpn-evpn")
    {
        if(advertise_local_l2vpn_evpn == nullptr)
        {
            advertise_local_l2vpn_evpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn>();
        }
        return advertise_local_l2vpn_evpn;
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 == nullptr)
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4>();
        }
        return advertise_local_v4;
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 == nullptr)
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6>();
        }
        return advertise_local_v6;
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 == nullptr)
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4>();
        }
        return advertise_v4;
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 == nullptr)
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6>();
        }
        return advertise_v6;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 == nullptr)
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>();
        }
        return advertise_vrf_imp_disable_v4;
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 == nullptr)
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>();
        }
        return advertise_vrf_imp_disable_v6;
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community == nullptr)
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity>();
        }
        return aigp_cost_community;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes == nullptr)
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes>();
        }
        return maximum_prefixes;
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time == nullptr)
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
        }
        return neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path == nullptr)
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath>();
        }
        return remove_private_as_entire_as_path;
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound == nullptr)
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound>();
        }
        return remove_private_as_entire_as_path_inbound;
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration == nullptr)
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration>();
        }
        return soft_reconfiguration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_def_imp_disable_v4 != nullptr)
    {
        children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
    }

    if(advertise_def_imp_disable_v6 != nullptr)
    {
        children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
    }

    if(advertise_disable != nullptr)
    {
        children["advertise-disable"] = advertise_disable;
    }

    if(advertise_l2vpn_evpn != nullptr)
    {
        children["advertise-l2vpn-evpn"] = advertise_l2vpn_evpn;
    }

    if(advertise_local_l2vpn_evpn != nullptr)
    {
        children["advertise-local-l2vpn-evpn"] = advertise_local_l2vpn_evpn;
    }

    if(advertise_local_v4 != nullptr)
    {
        children["advertise-local-v4"] = advertise_local_v4;
    }

    if(advertise_local_v6 != nullptr)
    {
        children["advertise-local-v6"] = advertise_local_v6;
    }

    if(advertise_v4 != nullptr)
    {
        children["advertise-v4"] = advertise_v4;
    }

    if(advertise_v6 != nullptr)
    {
        children["advertise-v6"] = advertise_v6;
    }

    if(advertise_vrf_imp_disable_v4 != nullptr)
    {
        children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
    }

    if(advertise_vrf_imp_disable_v6 != nullptr)
    {
        children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
    }

    if(aigp_cost_community != nullptr)
    {
        children["aigp-cost-community"] = aigp_cost_community;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_prefixes != nullptr)
    {
        children["maximum-prefixes"] = maximum_prefixes;
    }

    if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
    {
        children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
    }

    if(remove_private_as_entire_as_path != nullptr)
    {
        children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
    }

    if(remove_private_as_entire_as_path_inbound != nullptr)
    {
        children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
    }

    if(soft_reconfiguration != nullptr)
    {
        children["soft-reconfiguration"] = soft_reconfiguration;
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
        accept_own.value_namespace = name_space;
        accept_own.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
        accept_route_legacy_rt.value_namespace = name_space;
        accept_route_legacy_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
        advertise_local_labeled_route.value_namespace = name_space;
        advertise_local_labeled_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
        advertise_orf.value_namespace = name_space;
        advertise_orf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
        advertise_permanent_network.value_namespace = name_space;
        advertise_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-group")
    {
        af_group = value;
        af_group.value_namespace = name_space;
        af_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp")
    {
        aigp = value;
        aigp.value_namespace = name_space;
        aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
        aigp_send_med.value_namespace = name_space;
        aigp_send_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
        allow_as_in.value_namespace = name_space;
        allow_as_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
        default_weight.value_namespace = name_space;
        default_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels = value;
        enforce_multiple_labels.value_namespace = name_space;
        enforce_multiple_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
        flowspec_validation.value_namespace = name_space;
        flowspec_validation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
        l2vpn_signalling.value_namespace = name_space;
        l2vpn_signalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace = name_space;
        neighbor_af_long_lived_graceful_restart_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
        next_hop_self.value_namespace = name_space;
        next_hop_self.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
        next_hop_unchanged_multipath.value_namespace = name_space;
        next_hop_unchanged_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
        prefix_orf_policy.value_namespace = name_space;
        prefix_orf_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
        route_policy_in.value_namespace = name_space;
        route_policy_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
        route_policy_out.value_namespace = name_space;
        route_policy_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
        rpki_bestpath_origin_as_allow_invalid.value_namespace = name_space;
        rpki_bestpath_origin_as_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
        rpki_origin_as_validation_disable.value_namespace = name_space;
        rpki_origin_as_validation_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
        send_community_ebgp.value_namespace = name_space;
        send_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
        send_community_ebgp_graceful_shutdown.value_namespace = name_space;
        send_community_ebgp_graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
        send_ext_community_ebgp.value_namespace = name_space;
        send_ext_community_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
        send_multicast_attr.value_namespace = name_space;
        send_multicast_attr.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "accept-own")
    {
        accept_own.yfilter = yfilter;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route.yfilter = yfilter;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf.yfilter = yfilter;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network.yfilter = yfilter;
    }
    if(value_path == "af-group")
    {
        af_group.yfilter = yfilter;
    }
    if(value_path == "aigp")
    {
        aigp.yfilter = yfilter;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med.yfilter = yfilter;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "default-weight")
    {
        default_weight.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "enforce-multiple-labels")
    {
        enforce_multiple_labels.yfilter = yfilter;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation.yfilter = yfilter;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath.yfilter = yfilter;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy.yfilter = yfilter;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in.yfilter = yfilter;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp.yfilter = yfilter;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-def-imp-disable-v4" || name == "advertise-def-imp-disable-v6" || name == "advertise-disable" || name == "advertise-l2vpn-evpn" || name == "advertise-local-l2vpn-evpn" || name == "advertise-local-v4" || name == "advertise-local-v6" || name == "advertise-v4" || name == "advertise-v6" || name == "advertise-vrf-imp-disable-v4" || name == "advertise-vrf-imp-disable-v6" || name == "aigp-cost-community" || name == "default-originate" || name == "import" || name == "maximum-prefixes" || name == "neighbor-af-long-lived-graceful-restart-stale-time" || name == "remove-private-as-entire-as-path" || name == "remove-private-as-entire-as-path-inbound" || name == "soft-reconfiguration" || name == "af-name" || name == "accept-own" || name == "accept-route-legacy-rt" || name == "activate" || name == "advertise-local-labeled-route" || name == "advertise-orf" || name == "advertise-permanent-network" || name == "af-group" || name == "aigp" || name == "aigp-send-med" || name == "allow-as-in" || name == "as-override" || name == "default-weight" || name == "encapsulation-type" || name == "enforce-multiple-labels" || name == "flowspec-validation" || name == "l2vpn-signalling" || name == "multipath" || name == "neighbor-af-long-lived-graceful-restart-capable" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "next-hop-unchanged-multipath" || name == "prefix-orf-policy" || name == "route-policy-in" || name == "route-policy-out" || name == "route-reflector-client" || name == "rpki-bestpath-origin-as-allow-invalid" || name == "rpki-origin-as-validation-disable" || name == "send-community-ebgp" || name == "send-community-ebgp-graceful-shutdown" || name == "send-ext-community-ebgp" || name == "send-multicast-attr")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-disable"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::AdvertiseL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-l2vpn-evpn"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::~AdvertiseL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::AdvertiseLocalL2VpnEvpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-l2vpn-evpn"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::~AdvertiseLocalL2VpnEvpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-local-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(reorg_option.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.yfilter)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
        reorg_option.value_namespace = name_space;
        reorg_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "reorg-option")
    {
        reorg_option.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "reorg-option" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{

    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adv_option.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(rt_type.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.yfilter)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
        adv_option.value_namespace = name_space;
        adv_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adv-option")
    {
        adv_option.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adv-option" || name == "af-name" || name == "rt-type")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{

    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_community_id.yfilter)
	|| ydk::is_set(cost_community_poi_type.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.yfilter)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.yfilter)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
        cost_community_id.value_namespace = name_space;
        cost_community_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
        cost_community_poi_type.value_namespace = name_space;
        cost_community_poi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id.yfilter = yfilter;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community-id" || name == "cost-community-poi-type" || name == "enable" || name == "transitive")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "route-policy-name")
        return true;
    return false;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{

    yang_name = "import"; yang_parent_name = "neighbor-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(import_reoriginate.yfilter)
	|| ydk::is_set(import_reoriginate_stitching.yfilter)
	|| ydk::is_set(import_stitching.yfilter);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.yfilter)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.yfilter)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.yfilter)) leaf_name_data.push_back(import_stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
        import_reoriginate.value_namespace = name_space;
        import_reoriginate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
        import_reoriginate_stitching.value_namespace = name_space;
        import_reoriginate_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
        import_stitching.value_namespace = name_space;
        import_stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate.yfilter = yfilter;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching.yfilter = yfilter;
    }
    if(value_path == "import-stitching")
    {
        import_stitching.yfilter = yfilter;
    }
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "import-reoriginate" || name == "import-reoriginate-stitching" || name == "import-stitching")
        return true;
    return false;
}

const Enum::YLeaf BgpRpkiTransport::tcp {0, "tcp"};
const Enum::YLeaf BgpRpkiTransport::ssh {1, "ssh"};

const Enum::YLeaf BgpSendMcastAttrCfg::enable {1, "enable"};
const Enum::YLeaf BgpSendMcastAttrCfg::disable {2, "disable"};

const Enum::YLeaf BgpRouteDistinguisher::auto_ {1, "auto"};
const Enum::YLeaf BgpRouteDistinguisher::as {2, "as"};
const Enum::YLeaf BgpRouteDistinguisher::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpRouteDistinguisher::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf BgpAfEncapsulation::vx_lan {1, "vx-lan"};

const Enum::YLeaf BgpVrfRouteTarget::as {0, "as"};
const Enum::YLeaf BgpVrfRouteTarget::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf BgpVrfRouteTarget::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf BgpAigpCfgPoi::pre_best_path {1, "pre-best-path"};
const Enum::YLeaf BgpAigpCfgPoi::igp_cost {2, "igp-cost"};

const Enum::YLeaf BmpPolicySelect::post_policy {2, "post-policy"};

const Enum::YLeaf BgpOrf::none {0, "none"};
const Enum::YLeaf BgpOrf::receive {1, "receive"};
const Enum::YLeaf BgpOrf::send {2, "send"};
const Enum::YLeaf BgpOrf::both {3, "both"};

const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv {1, "bgp-cfg-adv"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_reorg {2, "bgp-cfg-adv-reorg"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_disable {3, "bgp-cfg-adv-disable"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_local {4, "bgp-cfg-adv-local"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_def_vrf_imp_disable {5, "bgp-cfg-adv-def-vrf-imp-disable"};
const Enum::YLeaf BgpReorgOpt::bgp_cfg_adv_vrf_re_imp_disable {6, "bgp-cfg-adv-vrf-re-imp-disable"};

const Enum::YLeaf BgpAigpCfg::enable {1, "enable"};
const Enum::YLeaf BgpAigpCfg::disable {2, "disable"};

const Enum::YLeaf BgpEbgpSendDmzEnableMode::disable {0, "disable"};
const Enum::YLeaf BgpEbgpSendDmzEnableMode::default_ {1, "default"};
const Enum::YLeaf BgpEbgpSendDmzEnableMode::cumulative {2, "cumulative"};

const Enum::YLeaf BgpTcpMode::either {0, "either"};
const Enum::YLeaf BgpTcpMode::active_only {1, "active-only"};
const Enum::YLeaf BgpTcpMode::passive_only {2, "passive-only"};

const Enum::YLeaf BgpRnhInstallFormat::ext_comm {0, "ext-comm"};
const Enum::YLeaf BgpRnhInstallFormat::ext_comm_only {1, "ext-comm-only"};

const Enum::YLeaf BmpRouteDirection::inbound {1, "inbound"};

const Enum::YLeaf BgpAdvRt::bgp_regular_rt {0, "bgp-regular-rt"};
const Enum::YLeaf BgpAdvRt::bgp_stitching_rt {1, "bgp-stitching-rt"};

const Enum::YLeaf BgpFlowspecValidationCfg::enable {1, "enable"};
const Enum::YLeaf BgpFlowspecValidationCfg::disable {2, "disable"};
const Enum::YLeaf BgpFlowspecValidationCfg::redirect_nexhop_disable {3, "redirect-nexhop-disable"};

const Enum::YLeaf BgpMvpnSfsSelect::all_paths {1, "all-paths"};
const Enum::YLeaf BgpMvpnSfsSelect::highest_ip_address {2, "highest-ip-address"};

const Enum::YLeaf BgpSiteOfOrigin::as {0, "as"};
const Enum::YLeaf BgpSiteOfOrigin::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf BgpSiteOfOrigin::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf BgpSignal::bgp_disable {1, "bgp-disable"};
const Enum::YLeaf BgpSignal::ldp_disable {2, "ldp-disable"};

const Enum::YLeaf BgpClusterId::number {1, "number"};
const Enum::YLeaf BgpClusterId::ipv4_address {2, "ipv4-address"};

const Enum::YLeaf BgpBfdEnableMode::disable {0, "disable"};
const Enum::YLeaf BgpBfdEnableMode::default_ {1, "default"};
const Enum::YLeaf BgpBfdEnableMode::strict {2, "strict"};


}
}

