
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_113.hpp"
#include "Cisco_IOS_XE_native_115.hpp"
#include "Cisco_IOS_XE_native_116.hpp"
#include "Cisco_IOS_XE_native_114.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    copy_attributes{YType::empty, "copy-attributes"},
    exist_map{YType::str, "exist-map"}
{
    yang_name = "inject-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::has_data() const
{
    return name.is_set
	|| copy_attributes.is_set
	|| exist_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(copy_attributes.yfilter)
	|| ydk::is_set(exist_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InjectMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.yfilter)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
        copy_attributes.value_namespace = name_space;
        copy_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "copy-attributes" || name == "exist-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{
    yang_name = "route-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::has_data() const
{
    return priority.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::has_data() const
{
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::has_data() const
{
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split != nullptr)
    {
        children["split"] = split;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{
    yang_name = "split"; yang_parent_name = "update-group";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::has_data() const
{
    return as_override.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_override.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Split' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-override")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
    	,
    trigger(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::has_data() const
{
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{
    yang_name = "trigger"; yang_parent_name = "nexthop";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::has_data() const
{
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::empty, "deterministic"}
{
    yang_name = "regexp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::has_data() const
{
    return deterministic.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deterministic.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Regexp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.yfilter)) leaf_name_data.push_back(deterministic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
        deterministic.value_namespace = name_space;
        deterministic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deterministic")
    {
        deterministic.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{
    yang_name = "transport"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::has_data() const
{
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{
    yang_name = "default-information"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_>())
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::~Distance()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::has_data() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adm-distance")
    {
        for(auto const & c : adm_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance>();
        c->parent = this;
        adm_distance.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adm_distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adm-distance" || name == "bgp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{
    yang_name = "bgp"; yang_parent_name = "distance";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::has_data() const
{
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extern_as.yfilter)
	|| ydk::is_set(internal_as.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.yfilter)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.yfilter)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
        extern_as.value_namespace = name_space;
        extern_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
        internal_as.value_namespace = name_space;
        internal_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extern-as")
    {
        extern_as.yfilter = yfilter;
    }
    if(value_path == "internal-as")
    {
        internal_as.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extern-as" || name == "internal-as" || name == "local")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{
    yang_name = "adm-distance"; yang_parent_name = "distance";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::has_data() const
{
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(wildbits.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance" <<"[distance='" <<distance <<"']" <<"[srcip='" <<srcip <<"']" <<"[wildbits='" <<wildbits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdmDistance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.yfilter)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
        wildbits.value_namespace = name_space;
        wildbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "wildbits")
    {
        wildbits.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "srcip" || name == "wildbits" || name == "acl")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::DistributeList()
    :
    id{YType::str, "id"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "distribute-list"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::has_data() const
{
    return id.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::In()
    :
    interface{YType::str, "interface"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::~In()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::Out()
    :
    interface{YType::str, "interface"}
{
    yang_name = "out"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::~Out()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaximumPaths()
    :
    eibgp{YType::uint16, "eibgp"}
    	,
    external_rtfilter(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter>())
	,ibgp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp>())
	,max_path(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath>())
{
    external_rtfilter->parent = this;

    ibgp->parent = this;

    max_path->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::has_data() const
{
    return eibgp.is_set
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-rtfilter" || name == "ibgp" || name == "max-path" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::Ibgp()
    :
    max{YType::uint16, "max"},
    unequal_cost{YType::uint16, "unequal-cost"}
{
    yang_name = "ibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::has_data() const
{
    return max.is_set
	|| unequal_cost.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "unequal-cost")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_self{YType::empty, "next-hop-self"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    remote_as{YType::str, "remote-as"},
    remove_private_as{YType::empty, "remove-private-as"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths>())
	,advertise(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise>())
	,advertise_map(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap>())
	,aigp(nullptr) // presence node
	,allowas_in(nullptr) // presence node
	,announce(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce>())
	,as_override(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability>())
	,default_originate(nullptr) // presence node
	,ebgp_multihop(nullptr) // presence node
	,fall_over(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver>())
	,ha_mode(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode>())
	,inherit(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit>())
	,local_as(nullptr) // presence node
	,log_neighbor_changes(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix>())
	,password(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password>())
	,path_attribute(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute>())
	,peer_group(nullptr) // presence node
	,send_community(nullptr) // presence node
	,send_label(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel>())
	,slow_peer(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer>())
	,timers(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers>())
	,translate_update(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate>())
	,transport(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport>())
	,ttl_security(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity>())
	,update_source(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource>())
{
    additional_paths->parent = this;

    advertise->parent = this;

    advertise_map->parent = this;

    announce->parent = this;

    capability->parent = this;

    fall_over->parent = this;

    ha_mode->parent = this;

    inherit->parent = this;

    maximum_prefix->parent = this;

    password->parent = this;

    path_attribute->parent = this;

    send_label->parent = this;

    slow_peer->parent = this;

    timers->parent = this;

    translate_update->parent = this;

    transport->parent = this;

    ttl_security->parent = this;

    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| remote_as.is_set
	|| remove_private_as.is_set
	|| route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (advertise_map !=  nullptr && advertise_map->has_data())
	|| (aigp !=  nullptr && aigp->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (announce !=  nullptr && announce->has_data())
	|| (as_override !=  nullptr && as_override->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_self.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (advertise_map !=  nullptr && advertise_map->has_operation())
	|| (aigp !=  nullptr && aigp->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (announce !=  nullptr && announce->has_operation())
	|| (as_override !=  nullptr && as_override->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.yfilter)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(advertise_map != nullptr)
    {
        children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        children["aigp"] = aigp;
    }

    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(as_override != nullptr)
    {
        children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "advertise" || name == "advertise-map" || name == "aigp" || name == "allowas-in" || name == "announce" || name == "as-override" || name == "capability" || name == "default-originate" || name == "distribute-list" || name == "ebgp-multihop" || name == "fall-over" || name == "filter-list" || name == "ha-mode" || name == "inherit" || name == "local-as" || name == "log-neighbor-changes" || name == "maximum-prefix" || name == "password" || name == "path-attribute" || name == "peer-group" || name == "prefix-list" || name == "route-map" || name == "send-community" || name == "send-label" || name == "slow-peer" || name == "timers" || name == "translate-update" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "dmzlink-bw" || name == "next-hop-self" || name == "next-hop-unchanged" || name == "remote-as" || name == "remove-private-as" || name == "route-reflector-client" || name == "route-reflector-cluster-id" || name == "shutdown" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "version" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{
    yang_name = "peer-group"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::has_data() const
{
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::has_data() const
{
    return as_no.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(dual_as.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "dual-as" || name == "no-prepend" || name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::AdditionalPaths()
    :
    disable{YType::empty, "disable"},
    receive{YType::empty, "receive"}
    	,
    send(nullptr) // presence node
{
    yang_name = "additional-paths"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::has_data() const
{
    return disable.is_set
	|| receive.is_set
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send" || name == "disable" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::Advertise()
    :
    best_external{YType::empty, "best-external"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths>())
	,diverse_path(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath>())
{
    additional_paths->parent = this;

    diverse_path->parent = this;

    yang_name = "advertise"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::has_data() const
{
    return best_external.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (diverse_path !=  nullptr && diverse_path->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (diverse_path !=  nullptr && diverse_path->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "diverse-path")
    {
        if(diverse_path == nullptr)
        {
            diverse_path = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath>();
        }
        return diverse_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(diverse_path != nullptr)
    {
        children["diverse-path"] = diverse_path;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "diverse-path" || name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::AdditionalPaths()
    :
    all(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "advertise";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::~All()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::Best()
{
    yang_name = "best"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "best-range";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::DiversePath()
    :
    mpath{YType::empty, "mpath"}
    	,
    backup(nullptr) // presence node
{
    yang_name = "diverse-path"; yang_parent_name = "advertise";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::~DiversePath()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::has_data() const
{
    return mpath.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::Backup()
    :
    mpath{YType::empty, "mpath"}
{
    yang_name = "backup"; yang_parent_name = "diverse-path";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::~Backup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::has_data() const
{
    return mpath.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::AdvertiseMap()
{
    yang_name = "advertise-map"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::~AdvertiseMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::Name()
    :
    word{YType::str, "word"},
    exist_map{YType::str, "exist-map"},
    non_exist_map{YType::str, "non-exist-map"}
{
    yang_name = "name"; yang_parent_name = "advertise-map";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::~Name()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::has_data() const
{
    return word.is_set
	|| exist_map.is_set
	|| non_exist_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(exist_map.yfilter)
	|| ydk::is_set(non_exist_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (non_exist_map.is_set || is_set(non_exist_map.yfilter)) leaf_name_data.push_back(non_exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map = value;
        non_exist_map.value_namespace = name_space;
        non_exist_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "exist-map" || name == "non-exist-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Aigp()
    :
    send(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send>())
{
    send->parent = this;

    yang_name = "aigp"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::~Aigp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aigp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::Send()
    :
    med{YType::empty, "med"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity>())
{
    cost_community->parent = this;

    yang_name = "send"; yang_parent_name = "aigp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::~Send()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::has_data() const
{
    return med.is_set
	|| (cost_community !=  nullptr && cost_community->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(med.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med.is_set || is_set(med.yfilter)) leaf_name_data.push_back(med.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity>();
        }
        return cost_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "med")
    {
        med = value;
        med.value_namespace = name_space;
        med.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "med")
    {
        med.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "med")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CostCommunity()
{
    yang_name = "cost-community"; yang_parent_name = "send";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::has_data() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::has_operation() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc-range")
    {
        for(auto const & c : cc_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange>();
        c->parent = this;
        cc_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cc_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cc-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::CcRange()
    :
    range{YType::uint8, "range"}
    	,
    poi(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>())
{
    poi->parent = this;

    yang_name = "cc-range"; yang_parent_name = "cost-community";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::~CcRange()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::has_data() const
{
    return range.is_set
	|| (poi !=  nullptr && poi->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (poi !=  nullptr && poi->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CcRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poi")
    {
        if(poi == nullptr)
        {
            poi = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>();
        }
        return poi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(poi != nullptr)
    {
        children["poi"] = poi;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poi" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::Poi()
    :
    igp_cost(nullptr) // presence node
	,pre_bestpath(nullptr) // presence node
{
    yang_name = "poi"; yang_parent_name = "cc-range";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::~Poi()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_data() const
{
    return (igp_cost !=  nullptr && igp_cost->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_operation() const
{
    return is_set(yfilter)
	|| (igp_cost !=  nullptr && igp_cost->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poi";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Poi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-cost")
    {
        if(igp_cost == nullptr)
        {
            igp_cost = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost>();
        }
        return igp_cost;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_cost != nullptr)
    {
        children["igp-cost"] = igp_cost;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-cost" || name == "pre-bestpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::IgpCost()
    :
    transitive{YType::empty, "transitive"}
{
    yang_name = "igp-cost"; yang_parent_name = "poi";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::~IgpCost()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-cost";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpCost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::PreBestpath()
    :
    transitive{YType::empty, "transitive"}
{
    yang_name = "pre-bestpath"; yang_parent_name = "poi";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::~PreBestpath()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitive.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreBestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.yfilter)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitive")
    {
        transitive = value;
        transitive.value_namespace = name_space;
        transitive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitive")
    {
        transitive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Announce()
    :
    rpki(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki>())
{
    rpki->parent = this;

    yang_name = "announce"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::~Announce()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::has_data() const
{
    return (rpki !=  nullptr && rpki->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::has_operation() const
{
    return is_set(yfilter)
	|| (rpki !=  nullptr && rpki->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Announce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki>();
        }
        return rpki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::Rpki()
    :
    state{YType::empty, "state"}
{
    yang_name = "rpki"; yang_parent_name = "announce";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::~Rpki()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::has_data() const
{
    return state.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpki' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{
    yang_name = "allowas-in"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::has_data() const
{
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllowasIn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::AsOverride()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "as-override"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::~AsOverride()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-override";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsOverride' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::has_data() const
{
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(orf != nullptr)
    {
        children["orf"] = orf;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{
    yang_name = "orf"; yang_parent_name = "capability";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::has_data() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Orf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "default-originate"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::DistributeList()
    :
    inout{YType::enumeration, "inout"},
    accesslist{YType::str, "accesslist"}
{
    yang_name = "distribute-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::has_data() const
{
    return inout.is_set
	|| accesslist.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(accesslist.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.yfilter)) leaf_name_data.push_back(accesslist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
        accesslist.value_namespace = name_space;
        accesslist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "accesslist")
    {
        accesslist.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "accesslist")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::has_data() const
{
    return max_hop.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::FallOver()
    :
    bfd(nullptr) // presence node
{
    yang_name = "fall-over"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FallOver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::Bfd()
{
    yang_name = "bfd"; yang_parent_name = "fall-over";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::has_data() const
{
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{
    yang_name = "filter-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::has_data() const
{
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{
    yang_name = "inherit"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::has_data() const
{
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inherit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogNeighborChanges' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    restart{YType::uint16, "restart"},
    threshold{YType::uint8, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::has_data() const
{
    return max_prefix_no.is_set
	|| restart.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "restart" || name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{
    yang_name = "password"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{
    yang_name = "prefix-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::has_data() const
{
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard>())
	,treat_as_withdraw(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;

    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::has_data() const
{
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathAttribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discard != nullptr)
    {
        children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type>())
	,range(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;

    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::Attibute_Type()
    :
    in{YType::empty, "in"},
    type{YType::uint8, "type"}
{
    yang_name = "attibute_type"; yang_parent_name = "discard";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::~Attibute_Type()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::has_data() const
{
    return in.is_set
	|| type.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attibute_Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Attibute_Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "type")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::Range()
    :
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"},
    start_value{YType::uint8, "start_value"}
{
    yang_name = "range"; yang_parent_name = "discard";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    return end_value.is_set
	|| in.is_set
	|| start_value.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(start_value.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end_value" || name == "in" || name == "start_value")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type>())
	,range(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;

    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TreatAsWithdraw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::Attibute_Type()
    :
    in{YType::empty, "in"},
    type{YType::uint8, "type"}
{
    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::~Attibute_Type()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_data() const
{
    return in.is_set
	|| type.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attibute_Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "type")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"},
    start_value{YType::uint8, "start_value"}
{
    yang_name = "range"; yang_parent_name = "treat-as-withdraw";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    return end_value.is_set
	|| in.is_set
	|| start_value.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(start_value.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end_value" || name == "in" || name == "start_value")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{
    yang_name = "route-map"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::has_data() const
{
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{
    yang_name = "send-community"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::has_data() const
{
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::SendLabel()
    :
    send_label_explicit{YType::enumeration, "send-label-explicit"}
{
    yang_name = "send-label"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::~SendLabel()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::has_data() const
{
    return send_label_explicit.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_label_explicit.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-label";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendLabel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_label_explicit.is_set || is_set(send_label_explicit.yfilter)) leaf_name_data.push_back(send_label_explicit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit = value;
        send_label_explicit.value_namespace = name_space;
        send_label_explicit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-label-explicit")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::has_data() const
{
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::Timers()
    :
    holdtime{YType::uint16, "holdtime"},
    keepalive_interval{YType::uint16, "keepalive-interval"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{
    yang_name = "timers"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::has_data() const
{
    return holdtime.is_set
	|| keepalive_interval.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "keepalive-interval" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::TranslateUpdate()
    :
    ipv4(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "translate-update"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::~TranslateUpdate()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate-update";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TranslateUpdate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Ipv4()
    :
    multicast(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "translate-update";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::has_data() const
{
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::Multicast()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "multicast"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::~Multicast()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::has_data() const
{
    return unicast.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
    	,
    path_mtu_discovery(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::has_data() const
{
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(multi_session.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.yfilter)) leaf_name_data.push_back(multi_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
        multi_session.value_namespace = name_space;
        multi_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "multi-session")
    {
        multi_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "connection-mode" || name == "multi-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "path-mtu-discovery"; yang_parent_name = "transport";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathMtuDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::UpdateSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateSource' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
	,sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::has_data() const
{
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "graceful-restart"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::Network()
    :
    number{YType::str, "number"},
    backdoor{YType::empty, "backdoor"},
    mask{YType::str, "mask"},
    route_map{YType::str, "route-map"}
{
    yang_name = "network"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::~Network()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::has_data() const
{
    return number.is_set
	|| backdoor.is_set
	|| mask.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "backdoor" || name == "mask" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Redistribute()
    :
    application(nullptr) // presence node
	,bgp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_>())
	,connected(nullptr) // presence node
	,dvmrp(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp>())
	,isis(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis>())
	,iso_igrp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp>())
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    iso_igrp->parent = this;

    yang_name = "redistribute"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::~Redistribute()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::has_data() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (dvmrp !=  nullptr && dvmrp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (dvmrp !=  nullptr && dvmrp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "dvmrp")
    {
        if(dvmrp == nullptr)
        {
            dvmrp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp>();
        }
        return dvmrp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(dvmrp != nullptr)
    {
        children["dvmrp"] = dvmrp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "dvmrp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Application()
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::~Application()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::Name()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "name"; yang_parent_name = "application";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::~Name()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::has_data() const
{
    return name.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::Bgp_()
    :
    as_no{YType::str, "as-no"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::has_data() const
{
    return as_no.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::Connected()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::Dvmrp()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "dvmrp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::~Dvmrp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvmrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dvmrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::Eigrp()
    :
    as_no{YType::uint16, "as-no"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::has_data() const
{
    return as_no.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Isis()
    :
    default_(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_>())
{
    default_->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "isis-area")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"},
    routes{YType::enumeration, "routes"}
{
    yang_name = "isis-area"; yang_parent_name = "isis";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| clns.is_set
	|| ip.is_set
	|| metric.is_set
	|| route_map.is_set
	|| routes.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(routes.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "clns" || name == "ip" || name == "metric" || name == "route-map" || name == "routes")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::Default_()
    :
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"},
    routes{YType::enumeration, "routes"}
{
    yang_name = "default"; yang_parent_name = "isis";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::~Default_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::has_data() const
{
    return clns.is_set
	|| ip.is_set
	|| metric.is_set
	|| route_map.is_set
	|| routes.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(routes.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "metric" || name == "route-map" || name == "routes")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrp()
    :
    default_(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_>())
{
    default_->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_igrp_area.size(); index++)
    {
        if(iso_igrp_area[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_igrp_area.size(); index++)
    {
        if(iso_igrp_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "iso-igrp-area")
    {
        for(auto const & c : iso_igrp_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea>();
        c->parent = this;
        iso_igrp_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : iso_igrp_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "iso-igrp-area")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::IsoIgrpArea()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "iso-igrp-area"; yang_parent_name = "iso-igrp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::~IsoIgrpArea()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::has_data() const
{
    return name.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-area" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrpArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::Default_()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "default"; yang_parent_name = "iso-igrp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::~Default_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::Mobile()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::Odr()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    non_vrf(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf>())
{
    non_vrf->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return id.is_set
	|| (non_vrf !=  nullptr && non_vrf->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (non_vrf !=  nullptr && non_vrf->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-vrf")
    {
        if(non_vrf == nullptr)
        {
            non_vrf = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf>();
        }
        return non_vrf;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(non_vrf != nullptr)
    {
        children["non-vrf"] = non_vrf;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-vrf" || name == "vrf" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
    	,
    match(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match>())
{
    match->parent = this;

    yang_name = "vrf"; yang_parent_name = "ospf";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::~Vrf_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::has_data() const
{
    return name.is_set
	|| metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::Match()
{
    yang_name = "match"; yang_parent_name = "vrf";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::~Match()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::has_data() const
{
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::NonVrf()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
    	,
    match(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match>())
{
    match->parent = this;

    yang_name = "non-vrf"; yang_parent_name = "ospf";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::~NonVrf()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::has_data() const
{
    return metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::Match()
    :
    external{YType::enumeration, "external"},
    external2{YType::enumeration, "external2"},
    internal{YType::empty, "internal"},
    metric{YType::uint32, "metric"},
    nssa_external{YType::enumeration, "nssa-external"},
    route_map{YType::str, "route-map"}
{
    yang_name = "match"; yang_parent_name = "non-vrf";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::~Match()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::has_data() const
{
    return external.is_set
	|| external2.is_set
	|| internal.is_set
	|| metric.is_set
	|| nssa_external.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(external2.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(nssa_external.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external2.is_set || is_set(external2.yfilter)) leaf_name_data.push_back(external2.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.yfilter)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external2")
    {
        external2 = value;
        external2.value_namespace = name_space;
        external2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
        nssa_external.value_namespace = name_space;
        nssa_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "external2")
    {
        external2.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "nssa-external")
    {
        nssa_external.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "external2" || name == "internal" || name == "metric" || name == "nssa-external" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::Rip()
    :
    metric{YType::uint32, "metric"},
    name{YType::str, "name"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::has_data() const
{
    return metric.is_set
	|| name.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "name" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Static_()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::has_data() const
{
    return metric.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::Clns()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::~Clns()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::Ip()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::~Ip()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::TableMap()
    :
    filter{YType::empty, "filter"},
    name{YType::str, "name"}
{
    yang_name = "table-map"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::~TableMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::has_data() const
{
    return filter.is_set
	|| name.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "rtfilter";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::has_data() const
{
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(context != nullptr)
    {
        children["context"] = context;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context()
{
    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::has_data() const
{
    for (std::size_t index=0; index<context_word.size(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.size(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        for(auto const & c : context_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word>();
        c->parent = this;
        context_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::Context_Word()
    :
    context_word{YType::str, "context_word"}
{
    yang_name = "context_word"; yang_parent_name = "context";
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::~Context_Word()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::has_data() const
{
    return context_word.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word" <<"[context_word='" <<context_word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context_Word' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::Context_Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Isis::Isis()
    :
    adjacency_check{YType::empty, "adjacency-check"},
    help{YType::empty, "help"},
    ignore_lsp_errors{YType::empty, "ignore-lsp-errors"},
    is_type{YType::enumeration, "is-type"},
    lsp_mtu{YType::uint32, "lsp-mtu"},
    lsp_refresh_interval{YType::uint32, "lsp-refresh-interval"},
    max_area_addresses{YType::uint32, "max-area-addresses"},
    max_lsp_lifetime{YType::uint32, "max-lsp-lifetime"},
    maximum_paths{YType::uint32, "maximum-paths"},
    priority{YType::uint8, "priority"},
    router_id{YType::str, "router-id"},
    update_queue_depth{YType::uint32, "update-queue-depth"},
    vrf{YType::str, "vrf"}
    	,
    address_family(std::make_shared<Native::Router::Isis::AddressFamily>())
	,advertise(std::make_shared<Native::Router::Isis::Advertise>())
	,area_password(std::make_shared<Native::Router::Isis::AreaPassword>())
	,authentication(std::make_shared<Native::Router::Isis::Authentication>())
	,bfd(std::make_shared<Native::Router::Isis::Bfd>())
	,default_information(std::make_shared<Native::Router::Isis::DefaultInformation>())
	,disable(std::make_shared<Native::Router::Isis::Disable>())
	,distribute_list(std::make_shared<Native::Router::Isis::DistributeList>())
	,domain_password(std::make_shared<Native::Router::Isis::DomainPassword>())
	,fast_flood(nullptr) // presence node
	,fast_reroute(std::make_shared<Native::Router::Isis::FastReroute>())
	,hello(std::make_shared<Native::Router::Isis::Hello>())
	,hostname(std::make_shared<Native::Router::Isis::Hostname>())
	,ip(std::make_shared<Native::Router::Isis::Ip>())
	,ispf(std::make_shared<Native::Router::Isis::Ispf>())
	,log_adjacency_changes(nullptr) // presence node
	,lsp_full(std::make_shared<Native::Router::Isis::LspFull>())
	,lsp_gen_interval(std::make_shared<Native::Router::Isis::LspGenInterval>())
	,metric(std::make_shared<Native::Router::Isis::Metric>())
	,metric_style(std::make_shared<Native::Router::Isis::MetricStyle>())
	,microloop(std::make_shared<Native::Router::Isis::Microloop>())
	,mpls(std::make_shared<Native::Router::Isis::Mpls>())
	,nsf(std::make_shared<Native::Router::Isis::Nsf>())
	,partition(std::make_shared<Native::Router::Isis::Partition>())
	,passive_interface(std::make_shared<Native::Router::Isis::PassiveInterface>())
	,prc_interval(std::make_shared<Native::Router::Isis::PrcInterval>())
	,protocol(std::make_shared<Native::Router::Isis::Protocol>())
	,redistribute(std::make_shared<Native::Router::Isis::Redistribute>())
	,segment_routing(std::make_shared<Native::Router::Isis::SegmentRouting>())
	,set_attached_bit(std::make_shared<Native::Router::Isis::SetAttachedBit>())
	,set_overload_bit(nullptr) // presence node
	,skeptical(std::make_shared<Native::Router::Isis::Skeptical>())
	,snmp(std::make_shared<Native::Router::Isis::Snmp>())
	,spf_interval(std::make_shared<Native::Router::Isis::SpfInterval>())
	,ti_lfa(std::make_shared<Native::Router::Isis::TiLfa>())
	,traffic_share(std::make_shared<Native::Router::Isis::TrafficShare>())
	,use(std::make_shared<Native::Router::Isis::Use>())
{
    address_family->parent = this;

    advertise->parent = this;

    area_password->parent = this;

    authentication->parent = this;

    bfd->parent = this;

    default_information->parent = this;

    disable->parent = this;

    distribute_list->parent = this;

    domain_password->parent = this;

    fast_reroute->parent = this;

    hello->parent = this;

    hostname->parent = this;

    ip->parent = this;

    ispf->parent = this;

    lsp_full->parent = this;

    lsp_gen_interval->parent = this;

    metric->parent = this;

    metric_style->parent = this;

    microloop->parent = this;

    mpls->parent = this;

    nsf->parent = this;

    partition->parent = this;

    passive_interface->parent = this;

    prc_interval->parent = this;

    protocol->parent = this;

    redistribute->parent = this;

    segment_routing->parent = this;

    set_attached_bit->parent = this;

    skeptical->parent = this;

    snmp->parent = this;

    spf_interval->parent = this;

    ti_lfa->parent = this;

    traffic_share->parent = this;

    use->parent = this;

    yang_name = "isis"; yang_parent_name = "router";
}

Native::Router::Isis::~Isis()
{
}

bool Native::Router::Isis::has_data() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return adjacency_check.is_set
	|| help.is_set
	|| ignore_lsp_errors.is_set
	|| is_type.is_set
	|| lsp_mtu.is_set
	|| lsp_refresh_interval.is_set
	|| max_area_addresses.is_set
	|| max_lsp_lifetime.is_set
	|| maximum_paths.is_set
	|| priority.is_set
	|| router_id.is_set
	|| update_queue_depth.is_set
	|| vrf.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (area_password !=  nullptr && area_password->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (domain_password !=  nullptr && domain_password->has_data())
	|| (fast_flood !=  nullptr && fast_flood->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (lsp_full !=  nullptr && lsp_full->has_data())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (metric_style !=  nullptr && metric_style->has_data())
	|| (microloop !=  nullptr && microloop->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (partition !=  nullptr && partition->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (skeptical !=  nullptr && skeptical->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (ti_lfa !=  nullptr && ti_lfa->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (use !=  nullptr && use->has_data());
}

bool Native::Router::Isis::has_operation() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(ignore_lsp_errors.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(lsp_mtu.yfilter)
	|| ydk::is_set(lsp_refresh_interval.yfilter)
	|| ydk::is_set(max_area_addresses.yfilter)
	|| ydk::is_set(max_lsp_lifetime.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(update_queue_depth.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (area_password !=  nullptr && area_password->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (domain_password !=  nullptr && domain_password->has_operation())
	|| (fast_flood !=  nullptr && fast_flood->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (lsp_full !=  nullptr && lsp_full->has_operation())
	|| (lsp_gen_interval !=  nullptr && lsp_gen_interval->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (metric_style !=  nullptr && metric_style->has_operation())
	|| (microloop !=  nullptr && microloop->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (partition !=  nullptr && partition->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (skeptical !=  nullptr && skeptical->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (ti_lfa !=  nullptr && ti_lfa->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (use !=  nullptr && use->has_operation());
}

std::string Native::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (ignore_lsp_errors.is_set || is_set(ignore_lsp_errors.yfilter)) leaf_name_data.push_back(ignore_lsp_errors.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());
    if (lsp_refresh_interval.is_set || is_set(lsp_refresh_interval.yfilter)) leaf_name_data.push_back(lsp_refresh_interval.get_name_leafdata());
    if (max_area_addresses.is_set || is_set(max_area_addresses.yfilter)) leaf_name_data.push_back(max_area_addresses.get_name_leafdata());
    if (max_lsp_lifetime.is_set || is_set(max_lsp_lifetime.yfilter)) leaf_name_data.push_back(max_lsp_lifetime.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (update_queue_depth.is_set || is_set(update_queue_depth.yfilter)) leaf_name_data.push_back(update_queue_depth.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Isis::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "area-password")
    {
        if(area_password == nullptr)
        {
            area_password = std::make_shared<Native::Router::Isis::AreaPassword>();
        }
        return area_password;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Isis::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Isis::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Isis::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "distance")
    {
        for(auto const & c : distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Distance>();
        c->parent = this;
        distance.push_back(c);
        return c;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Isis::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "domain-password")
    {
        if(domain_password == nullptr)
        {
            domain_password = std::make_shared<Native::Router::Isis::DomainPassword>();
        }
        return domain_password;
    }

    if(child_yang_name == "fast-flood")
    {
        if(fast_flood == nullptr)
        {
            fast_flood = std::make_shared<Native::Router::Isis::FastFlood>();
        }
        return fast_flood;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Router::Isis::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Router::Isis::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ispf")
    {
        if(ispf == nullptr)
        {
            ispf = std::make_shared<Native::Router::Isis::Ispf>();
        }
        return ispf;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Isis::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "lsp-full")
    {
        if(lsp_full == nullptr)
        {
            lsp_full = std::make_shared<Native::Router::Isis::LspFull>();
        }
        return lsp_full;
    }

    if(child_yang_name == "lsp-gen-interval")
    {
        if(lsp_gen_interval == nullptr)
        {
            lsp_gen_interval = std::make_shared<Native::Router::Isis::LspGenInterval>();
        }
        return lsp_gen_interval;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "metric-style")
    {
        if(metric_style == nullptr)
        {
            metric_style = std::make_shared<Native::Router::Isis::MetricStyle>();
        }
        return metric_style;
    }

    if(child_yang_name == "microloop")
    {
        if(microloop == nullptr)
        {
            microloop = std::make_shared<Native::Router::Isis::Microloop>();
        }
        return microloop;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Router::Isis::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "net")
    {
        for(auto const & c : net)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::Net>();
        c->parent = this;
        net.push_back(c);
        return c;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Isis::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "partition")
    {
        if(partition == nullptr)
        {
            partition = std::make_shared<Native::Router::Isis::Partition>();
        }
        return partition;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Isis::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::Isis::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Router::Isis::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Isis::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Router::Isis::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "set-attached-bit")
    {
        if(set_attached_bit == nullptr)
        {
            set_attached_bit = std::make_shared<Native::Router::Isis::SetAttachedBit>();
        }
        return set_attached_bit;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::Isis::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "skeptical")
    {
        if(skeptical == nullptr)
        {
            skeptical = std::make_shared<Native::Router::Isis::Skeptical>();
        }
        return skeptical;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Isis::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::Isis::SpfInterval>();
        }
        return spf_interval;
    }

    if(child_yang_name == "summary-address")
    {
        for(auto const & c : summary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::SummaryAddress>();
        c->parent = this;
        summary_address.push_back(c);
        return c;
    }

    if(child_yang_name == "ti-lfa")
    {
        if(ti_lfa == nullptr)
        {
            ti_lfa = std::make_shared<Native::Router::Isis::TiLfa>();
        }
        return ti_lfa;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Isis::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "use")
    {
        if(use == nullptr)
        {
            use = std::make_shared<Native::Router::Isis::Use>();
        }
        return use;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(area_password != nullptr)
    {
        children["area-password"] = area_password;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    for (auto const & c : distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(domain_password != nullptr)
    {
        children["domain-password"] = domain_password;
    }

    if(fast_flood != nullptr)
    {
        children["fast-flood"] = fast_flood;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ispf != nullptr)
    {
        children["ispf"] = ispf;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(lsp_full != nullptr)
    {
        children["lsp-full"] = lsp_full;
    }

    if(lsp_gen_interval != nullptr)
    {
        children["lsp-gen-interval"] = lsp_gen_interval;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(metric_style != nullptr)
    {
        children["metric-style"] = metric_style;
    }

    if(microloop != nullptr)
    {
        children["microloop"] = microloop;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    for (auto const & c : net)
    {
        children[c->get_segment_path()] = c;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(partition != nullptr)
    {
        children["partition"] = partition;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    if(set_attached_bit != nullptr)
    {
        children["set-attached-bit"] = set_attached_bit;
    }

    if(set_overload_bit != nullptr)
    {
        children["set-overload-bit"] = set_overload_bit;
    }

    if(skeptical != nullptr)
    {
        children["skeptical"] = skeptical;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(spf_interval != nullptr)
    {
        children["spf-interval"] = spf_interval;
    }

    for (auto const & c : summary_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(ti_lfa != nullptr)
    {
        children["ti-lfa"] = ti_lfa;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(use != nullptr)
    {
        children["use"] = use;
    }

    return children;
}

void Native::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors = value;
        ignore_lsp_errors.value_namespace = name_space;
        ignore_lsp_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
        lsp_mtu.value_namespace = name_space;
        lsp_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval = value;
        lsp_refresh_interval.value_namespace = name_space;
        lsp_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses = value;
        max_area_addresses.value_namespace = name_space;
        max_area_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime = value;
        max_lsp_lifetime.value_namespace = name_space;
        max_lsp_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth = value;
        update_queue_depth.value_namespace = name_space;
        update_queue_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
    if(value_path == "lsp-refresh-interval")
    {
        lsp_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "max-area-addresses")
    {
        max_area_addresses.yfilter = yfilter;
    }
    if(value_path == "max-lsp-lifetime")
    {
        max_lsp_lifetime.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "update-queue-depth")
    {
        update_queue_depth.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "advertise" || name == "area-password" || name == "authentication" || name == "bfd" || name == "default-information" || name == "disable" || name == "distance" || name == "distribute-list" || name == "domain-password" || name == "fast-flood" || name == "fast-reroute" || name == "hello" || name == "hostname" || name == "ip" || name == "ispf" || name == "log-adjacency-changes" || name == "lsp-full" || name == "lsp-gen-interval" || name == "metric" || name == "metric-style" || name == "microloop" || name == "mpls" || name == "net" || name == "nsf" || name == "partition" || name == "passive-interface" || name == "prc-interval" || name == "protocol" || name == "redistribute" || name == "segment-routing" || name == "set-attached-bit" || name == "set-overload-bit" || name == "skeptical" || name == "snmp" || name == "spf-interval" || name == "summary-address" || name == "ti-lfa" || name == "traffic-share" || name == "use" || name == "adjacency-check" || name == "help" || name == "ignore-lsp-errors" || name == "is-type" || name == "lsp-mtu" || name == "lsp-refresh-interval" || name == "max-area-addresses" || name == "max-lsp-lifetime" || name == "maximum-paths" || name == "priority" || name == "router-id" || name == "update-queue-depth" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::MetricStyle()
    :
    narrow(nullptr) // presence node
	,transition(nullptr) // presence node
	,wide(nullptr) // presence node
{
    yang_name = "metric-style"; yang_parent_name = "isis";
}

Native::Router::Isis::MetricStyle::~MetricStyle()
{
}

bool Native::Router::Isis::MetricStyle::has_data() const
{
    return (narrow !=  nullptr && narrow->has_data())
	|| (transition !=  nullptr && transition->has_data())
	|| (wide !=  nullptr && wide->has_data());
}

bool Native::Router::Isis::MetricStyle::has_operation() const
{
    return is_set(yfilter)
	|| (narrow !=  nullptr && narrow->has_operation())
	|| (transition !=  nullptr && transition->has_operation())
	|| (wide !=  nullptr && wide->has_operation());
}

std::string Native::Router::Isis::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::MetricStyle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "narrow")
    {
        if(narrow == nullptr)
        {
            narrow = std::make_shared<Native::Router::Isis::MetricStyle::Narrow>();
        }
        return narrow;
    }

    if(child_yang_name == "transition")
    {
        if(transition == nullptr)
        {
            transition = std::make_shared<Native::Router::Isis::MetricStyle::Transition>();
        }
        return transition;
    }

    if(child_yang_name == "wide")
    {
        if(wide == nullptr)
        {
            wide = std::make_shared<Native::Router::Isis::MetricStyle::Wide>();
        }
        return wide;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::MetricStyle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(narrow != nullptr)
    {
        children["narrow"] = narrow;
    }

    if(transition != nullptr)
    {
        children["transition"] = transition;
    }

    if(wide != nullptr)
    {
        children["wide"] = wide;
    }

    return children;
}

void Native::Router::Isis::MetricStyle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::MetricStyle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::MetricStyle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow" || name == "transition" || name == "wide")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::Narrow::Narrow()
    :
    narrow_wide{YType::enumeration, "narrow-wide"},
    transition{YType::enumeration, "transition"}
{
    yang_name = "narrow"; yang_parent_name = "metric-style";
}

Native::Router::Isis::MetricStyle::Narrow::~Narrow()
{
}

bool Native::Router::Isis::MetricStyle::Narrow::has_data() const
{
    return narrow_wide.is_set
	|| transition.is_set;
}

bool Native::Router::Isis::MetricStyle::Narrow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(narrow_wide.yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::MetricStyle::Narrow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "narrow";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::MetricStyle::Narrow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric-style/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (narrow_wide.is_set || is_set(narrow_wide.yfilter)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::MetricStyle::Narrow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::MetricStyle::Narrow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::MetricStyle::Narrow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
        narrow_wide.value_namespace = name_space;
        narrow_wide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::MetricStyle::Narrow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide.yfilter = yfilter;
    }
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::MetricStyle::Narrow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow-wide" || name == "transition")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::Transition::Transition()
    :
    transition{YType::enumeration, "transition"}
{
    yang_name = "transition"; yang_parent_name = "metric-style";
}

Native::Router::Isis::MetricStyle::Transition::~Transition()
{
}

bool Native::Router::Isis::MetricStyle::Transition::has_data() const
{
    return transition.is_set;
}

bool Native::Router::Isis::MetricStyle::Transition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::MetricStyle::Transition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transition";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::MetricStyle::Transition::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric-style/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::MetricStyle::Transition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::MetricStyle::Transition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::MetricStyle::Transition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::MetricStyle::Transition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::MetricStyle::Transition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transition")
        return true;
    return false;
}

Native::Router::Isis::MetricStyle::Wide::Wide()
    :
    narrow_wide{YType::enumeration, "narrow-wide"},
    transition{YType::enumeration, "transition"}
{
    yang_name = "wide"; yang_parent_name = "metric-style";
}

Native::Router::Isis::MetricStyle::Wide::~Wide()
{
}

bool Native::Router::Isis::MetricStyle::Wide::has_data() const
{
    return narrow_wide.is_set
	|| transition.is_set;
}

bool Native::Router::Isis::MetricStyle::Wide::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(narrow_wide.yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::MetricStyle::Wide::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wide";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::MetricStyle::Wide::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/metric-style/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (narrow_wide.is_set || is_set(narrow_wide.yfilter)) leaf_name_data.push_back(narrow_wide.get_name_leafdata());
    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::MetricStyle::Wide::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::MetricStyle::Wide::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::MetricStyle::Wide::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide = value;
        narrow_wide.value_namespace = name_space;
        narrow_wide.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::MetricStyle::Wide::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "narrow-wide")
    {
        narrow_wide.yfilter = yfilter;
    }
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::MetricStyle::Wide::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "narrow-wide" || name == "transition")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Isis::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Router::Isis::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Router::Isis::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Ipv4()
    :
    help{YType::empty, "help"},
    unicast_multicast{YType::enumeration, "unicast-multicast"}
    	,
    snmp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp>())
{
    snmp->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family";
}

Native::Router::Isis::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return help.is_set
	|| unicast_multicast.is_set
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(unicast_multicast.yfilter)
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (unicast_multicast.is_set || is_set(unicast_multicast.yfilter)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
        unicast_multicast.value_namespace = name_space;
        unicast_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "topology" || name == "help" || name == "unicast-multicast")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Snmp()
{
    yang_name = "snmp"; yang_parent_name = "ipv4";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::~Snmp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User>())
{
    community->parent = this;

    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::~Context()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv4/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    expanded_acl{YType::uint32, "expanded-acl"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "community";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_data() const
{
    return acl_name.is_set
	|| expanded_acl.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter)
	|| ydk::is_set(standard_acl.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.yfilter)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
        expanded_acl.value_namespace = name_space;
        expanded_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ro")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ro")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "rw")
    {
        rw.yfilter = yfilter;
    }
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "expanded-acl" || name == "ipv6" || name == "ro" || name == "rw" || name == "standard-acl")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::~User()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'User' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;

    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permisssion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "permisssion";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return acl_name.is_set
	|| ipv6.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(standard_acl.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "ipv6" || name == "standard-acl")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{
    yang_name = "auth"; yang_parent_name = "permisssion";
}

Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Topology()
    :
    name{YType::str, "name"},
    help{YType::empty, "help"},
    ignore_attached_bit{YType::empty, "ignore-attached-bit"},
    maximum_paths{YType::uint32, "maximum-paths"},
    priority{YType::uint8, "priority"},
    tid{YType::uint32, "tid"}
    	,
    advertise(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise>())
	,default_information(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation>())
	,ip(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip>())
	,metric(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric>())
	,prc_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval>())
	,redistribute(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute>())
	,set_attached_bit(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit>())
	,set_overload_bit(nullptr) // presence node
	,snmp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp>())
	,spf_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval>())
	,traffic_share(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare>())
{
    advertise->parent = this;

    default_information->parent = this;

    ip->parent = this;

    metric->parent = this;

    prc_interval->parent = this;

    redistribute->parent = this;

    set_attached_bit->parent = this;

    snmp->parent = this;

    spf_interval->parent = this;

    traffic_share->parent = this;

    yang_name = "topology"; yang_parent_name = "ipv4";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::~Topology()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::has_data() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_data())
            return true;
    }
    return name.is_set
	|| help.is_set
	|| ignore_attached_bit.is_set
	|| maximum_paths.is_set
	|| priority.is_set
	|| tid.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::has_operation() const
{
    for (std::size_t index=0; index<distance.size(); index++)
    {
        if(distance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_address.size(); index++)
    {
        if(summary_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(ignore_attached_bit.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(tid.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (set_attached_bit !=  nullptr && set_attached_bit->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.yfilter)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tid.is_set || is_set(tid.yfilter)) leaf_name_data.push_back(tid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        for(auto const & c : distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance>();
        c->parent = this;
        distance.push_back(c);
        return c;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "set-attached-bit")
    {
        if(set_attached_bit == nullptr)
        {
            set_attached_bit = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit>();
        }
        return set_attached_bit;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval>();
        }
        return spf_interval;
    }

    if(child_yang_name == "summary-address")
    {
        for(auto const & c : summary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress>();
        c->parent = this;
        summary_address.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    for (auto const & c : distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(set_attached_bit != nullptr)
    {
        children["set-attached-bit"] = set_attached_bit;
    }

    if(set_overload_bit != nullptr)
    {
        children["set-overload-bit"] = set_overload_bit;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(spf_interval != nullptr)
    {
        children["spf-interval"] = spf_interval;
    }

    for (auto const & c : summary_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
        ignore_attached_bit.value_namespace = name_space;
        ignore_attached_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tid")
    {
        tid = value;
        tid.value_namespace = name_space;
        tid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "tid")
    {
        tid.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "default-information" || name == "distance" || name == "ip" || name == "metric" || name == "prc-interval" || name == "redistribute" || name == "set-attached-bit" || name == "set-overload-bit" || name == "snmp" || name == "spf-interval" || name == "summary-address" || name == "traffic-share" || name == "name" || name == "help" || name == "ignore-attached-bit" || name == "maximum-paths" || name == "priority" || name == "tid")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::Distance()
    :
    number{YType::uint8, "number"},
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"}
{
    yang_name = "distance"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::~Distance()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::has_data() const
{
    for (std::size_t index=0; index<ip_list.size(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return number.is_set
	|| clns.is_set
	|| ip.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::has_operation() const
{
    for (std::size_t index=0; index<ip_list.size(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-list")
    {
        for(auto const & c : ip_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList>();
        c->parent = this;
        ip_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-list" || name == "number" || name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::IpList()
    :
    ip{YType::str, "ip"}
{
    yang_name = "ip-list"; yang_parent_name = "distance";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::~IpList()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_data() const
{
    for (std::size_t index=0; index<wildcard_bits.size(); index++)
    {
        if(wildcard_bits[index]->has_data())
            return true;
    }
    return ip.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_operation() const
{
    for (std::size_t index=0; index<wildcard_bits.size(); index++)
    {
        if(wildcard_bits[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-list" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wildcard-bits")
    {
        for(auto const & c : wildcard_bits)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits>();
        c->parent = this;
        wildcard_bits.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wildcard_bits)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wildcard-bits" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::WildcardBits()
    :
    w_bits{YType::str, "w-bits"},
    access_list{YType::str, "access-list"}
{
    yang_name = "wildcard-bits"; yang_parent_name = "ip-list";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::~WildcardBits()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_data() const
{
    return w_bits.is_set
	|| access_list.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(w_bits.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wildcard-bits" <<"[w-bits='" <<w_bits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WildcardBits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (w_bits.is_set || is_set(w_bits.yfilter)) leaf_name_data.push_back(w_bits.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "w-bits")
    {
        w_bits = value;
        w_bits.value_namespace = name_space;
        w_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "w-bits")
    {
        w_bits.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "w-bits" || name == "access-list")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Ip()
    :
    route(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Route()
    :
    priority(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority>())
{
    priority->parent = this;

    yang_name = "route"; yang_parent_name = "ip";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::~Route()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::Priority()
    :
    high(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High>())
{
    high->parent = this;

    yang_name = "priority"; yang_parent_name = "route";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::~Priority()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::High()
    :
    tag{YType::uint32, "tag"}
{
    yang_name = "high"; yang_parent_name = "priority";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::~High()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_data() const
{
    return tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::SendLabelExplicit::explicit_null {0, "explicit-null"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::ConnectionMode::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::ConnectionMode::passive {1, "passive"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::Routes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::Routes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::Routes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::Routes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::Routes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::Routes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Isis::IsType::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::IsType::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::Isis::IsType::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticast::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticast::multicast {1, "multicast"};


}
}

