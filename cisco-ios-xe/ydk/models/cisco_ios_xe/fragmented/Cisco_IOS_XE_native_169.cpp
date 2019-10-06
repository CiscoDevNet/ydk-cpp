
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_169.hpp"
#include "Cisco_IOS_XE_native_174.hpp"
#include "Cisco_IOS_XE_native_172.hpp"
#include "Cisco_IOS_XE_native_173.hpp"
#include "Cisco_IOS_XE_native_170.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::Network()
    :
    with_mask(this, {"number", "mask"})
    , no_mask(this, {"number"})
{

    yang_name = "network"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::~Network()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<with_mask.len(); index++)
    {
        if(with_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<no_mask.len(); index++)
    {
        if(no_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::has_operation() const
{
    for (std::size_t index=0; index<with_mask.len(); index++)
    {
        if(with_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<no_mask.len(); index++)
    {
        if(no_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "with-mask")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask>();
        ent_->parent = this;
        with_mask.append(ent_);
        return ent_;
    }

    if(child_yang_name == "no-mask")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask>();
        ent_->parent = this;
        no_mask.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : with_mask.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : no_mask.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "with-mask" || name == "no-mask")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::WithMask()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"},
    route_map{YType::str, "route-map"},
    backdoor{YType::empty, "backdoor"}
{

    yang_name = "with-mask"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::~WithMask()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set
	|| route_map.is_set
	|| backdoor.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(backdoor.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "with-mask";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::WithMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask" || name == "route-map" || name == "backdoor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::NoMask()
    :
    number{YType::str, "number"},
    route_map{YType::str, "route-map"},
    backdoor{YType::empty, "backdoor"}
{

    yang_name = "no-mask"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::~NoMask()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| route_map.is_set
	|| backdoor.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(backdoor.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-mask";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network::NoMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "route-map" || name == "backdoor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(context != nullptr)
    {
        _children["context"] = context;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::Context()
    :
    context_word(this, {"context_word"})
{

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord>();
        ent_->parent = this;
        context_word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::L2vpnVpls()
    :
    bgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_>())
    , default_information(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation>())
    , peer_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup>())
    , neighbor(this, {"id"})
    , snmp(nullptr) // presence node
{
    bgp->parent = this;
    default_information->parent = this;
    peer_group->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::~L2vpnVpls()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "default-information" || name == "peer-group" || name == "neighbor" || name == "snmp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Bgp_()
    :
    scan_time{YType::uint8, "scan-time"}
        ,
    default_(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default>())
    , nexthop(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop>())
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer>())
{
    default_->parent = this;
    nexthop->parent = this;
    slow_peer->parent = this;

    yang_name = "bgp"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return scan_time.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default>();
        }
        return default_;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "nexthop" || name == "slow-peer" || name == "scan-time")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::Default()
    :
    route_target{YType::enumeration, "route-target"}
{

    yang_name = "default"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::~Default()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::has_data() const
{
    if (is_presence_container) return true;
    return route_target.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
        ,
    trigger(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger != nullptr)
    {
        _children["trigger"] = trigger;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{

    yang_name = "trigger"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return originate.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability>())
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer>())
{
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
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
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "capability" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability>())
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer>())
{
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
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
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "capability" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(context != nullptr)
    {
        _children["context"] = context;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::Context()
    :
    context_word(this, {"context_word"})
{

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord>();
        ent_->parent = this;
        context_word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    rtfilter(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_>())
{
    rtfilter->parent = this;

    yang_name = "rtfilter"; yang_parent_name = "no-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::~Rtfilter()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (rtfilter !=  nullptr && rtfilter->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (rtfilter !=  nullptr && rtfilter->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfilter";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfilter")
    {
        if(rtfilter == nullptr)
        {
            rtfilter = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_>();
        }
        return rtfilter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfilter != nullptr)
    {
        _children["rtfilter"] = rtfilter;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfilter" || name == "af-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Rtfilter_()
    :
    bgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_>())
    , maximum_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths>())
    , peer_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup>())
    , neighbor(this, {"id"})
    , snmp(nullptr) // presence node
{
    bgp->parent = this;
    maximum_paths->parent = this;
    peer_group->parent = this;

    yang_name = "rtfilter"; yang_parent_name = "rtfilter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::~Rtfilter_()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(maximum_paths != nullptr)
    {
        _children["maximum-paths"] = maximum_paths;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "maximum-paths" || name == "peer-group" || name == "neighbor" || name == "snmp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Bgp_()
    :
    nexthop(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop>())
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer>())
{
    nexthop->parent = this;
    slow_peer->parent = this;

    yang_name = "bgp"; yang_parent_name = "rtfilter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return (nexthop !=  nullptr && nexthop->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "slow-peer")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
        ,
    trigger(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger != nullptr)
    {
        _children["trigger"] = trigger;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{

    yang_name = "trigger"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::MaximumPaths()
    :
    ebgp{YType::uint16, "ebgp"},
    eibgp{YType::uint16, "eibgp"}
        ,
    ibgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp>())
    , external_rtfilter(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter>())
{
    ibgp->parent = this;
    external_rtfilter->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "rtfilter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::has_data() const
{
    if (is_presence_container) return true;
    return ebgp.is_set
	|| eibgp.is_set
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ebgp.yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ebgp.is_set || is_set(ebgp.yfilter)) leaf_name_data.push_back(ebgp.get_name_leafdata());
    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    if(external_rtfilter != nullptr)
    {
        _children["external-rtfilter"] = external_rtfilter;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ebgp")
    {
        ebgp = value;
        ebgp.value_namespace = name_space;
        ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ebgp")
    {
        ebgp.yfilter = yfilter;
    }
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ibgp" || name == "external-rtfilter" || name == "ebgp" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::Ibgp()
    :
    unequal_cost{YType::uint16, "unequal-cost"},
    max{YType::uint16, "max"}
{

    yang_name = "ibgp"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return unequal_cost.is_set
	|| max.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unequal-cost" || name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{

    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "rtfilter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability>())
    , default_originate(nullptr) // presence node
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer>())
{
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "capability" || name == "default-originate" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability>())
    , default_originate(nullptr) // presence node
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer>())
{
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "rtfilter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "capability" || name == "default-originate" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "rtfilter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(context != nullptr)
    {
        _children["context"] = context;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::Context()
    :
    context_word(this, {"context_word"})
{

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord>();
        ent_->parent = this;
        context_word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::Vrf()
    :
    id{YType::str, "id"}
        ,
    peer_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::PeerGroup>())
    , neighbor(this, {"id"})
    , address_family(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily>())
{
    peer_group->parent = this;
    address_family->parent = this;

    yang_name = "vrf"; yang_parent_name = "scope"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::~Vrf()
{
}

bool Native::Router::Bgp::Scope::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group" || name == "neighbor" || name == "address-family" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    remote_as{YType::str, "remote-as"}
        ,
    peer_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_>())
{
    peer_group->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| remote_as.is_set
	|| (peer_group !=  nullptr && peer_group->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| (peer_group !=  nullptr && peer_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_>();
        }
        return peer_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group" || name == "id" || name == "remote-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::PeerGroup_()
    :
    peer_group_name{YType::str, "peer-group-name"}
{

    yang_name = "peer-group"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::~PeerGroup_()
{
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::PeerGroup::Neighbor::PeerGroup_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    remote_as{YType::str, "remote-as"}
        ,
    peer_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup>())
{
    peer_group->parent = this;

    yang_name = "neighbor"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Vrf::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| remote_as.is_set
	|| (peer_group !=  nullptr && peer_group->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| (peer_group !=  nullptr && peer_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group" || name == "id" || name == "remote-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{

    yang_name = "peer-group"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::Neighbor::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::AddressFamily()
    :
    no_vrf(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf>())
{
    no_vrf->parent = this;

    yang_name = "address-family"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::~AddressFamily()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (no_vrf !=  nullptr && no_vrf->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (no_vrf !=  nullptr && no_vrf->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-vrf")
    {
        if(no_vrf == nullptr)
        {
            no_vrf = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf>();
        }
        return no_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(no_vrf != nullptr)
    {
        _children["no-vrf"] = no_vrf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-vrf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::NoVrf()
    :
    ipv4(this, {"af_name"})
    , ipv6(this, {"af_name"})
    , vpnv4(this, {"af_name"})
    , vpnv6(this, {"af_name"})
    , nsap(this, {"af_name"})
    , l2vpn(this, {"af_name"})
    , rtfilter(this, {"af_name"})
{

    yang_name = "no-vrf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::~NoVrf()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpnv4.len(); index++)
    {
        if(vpnv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpnv6.len(); index++)
    {
        if(vpnv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nsap.len(); index++)
    {
        if(nsap[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2vpn.len(); index++)
    {
        if(l2vpn[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rtfilter.len(); index++)
    {
        if(rtfilter[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpnv4.len(); index++)
    {
        if(vpnv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpnv6.len(); index++)
    {
        if(vpnv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nsap.len(); index++)
    {
        if(nsap[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2vpn.len(); index++)
    {
        if(l2vpn[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rtfilter.len(); index++)
    {
        if(rtfilter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vpnv4")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv4>();
        ent_->parent = this;
        vpnv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vpnv6")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Vpnv6>();
        ent_->parent = this;
        vpnv6.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nsap")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Nsap>();
        ent_->parent = this;
        nsap.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2vpn")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::L2vpn>();
        ent_->parent = this;
        l2vpn.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rtfilter")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter>();
        ent_->parent = this;
        rtfilter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vpnv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vpnv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : nsap.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2vpn.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rtfilter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "vpnv4" || name == "vpnv6" || name == "nsap" || name == "l2vpn" || name == "rtfilter")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    ipv4_unicast(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast>())
{
    ipv4_unicast->parent = this;

    yang_name = "ipv4"; yang_parent_name = "no-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_unicast != nullptr)
    {
        _children["ipv4-unicast"] = ipv4_unicast;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "af-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Ipv4Unicast()
    :
    auto_summary{YType::empty, "auto-summary"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
        ,
    aggregate_address(this, {"ipv4_address", "ipv4_mask"})
    , bgp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_>())
    , default_information(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation>())
    , distance(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance>())
    , distribute_list(this, {"id"})
    , maximum_paths(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::MaximumPaths>())
    , peer_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::PeerGroup>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network>())
    , redistribute(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute>())
    , segment_routing(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting>())
    , snmp(nullptr) // presence node
    , table_map(nullptr) // presence node
{
    bgp->parent = this;
    default_information->parent = this;
    distance->parent = this;
    maximum_paths->parent = this;
    peer_group->parent = this;
    network->parent = this;
    redistribute->parent = this;
    segment_routing->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::~Ipv4Unicast()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return auto_summary.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress>();
        ent_->parent = this;
        aggregate_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DistributeList>();
        ent_->parent = this;
        distribute_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Network>();
        }
        return network;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::TableMap>();
        }
        return table_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggregate_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    count_ = 0;
    for (auto ent_ : distribute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(maximum_paths != nullptr)
    {
        _children["maximum-paths"] = maximum_paths;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        _children["table-map"] = table_map;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-address" || name == "bgp" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "maximum-paths" || name == "peer-group" || name == "neighbor" || name == "network" || name == "redistribute" || name == "segment-routing" || name == "snmp" || name == "table-map" || name == "auto-summary" || name == "default-metric" || name == "synchronization")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::AggregateAddress()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"},
    advertise_map{YType::str, "advertise-map"},
    as_set{YType::empty, "as-set"},
    attribute_map{YType::str, "attribute-map"},
    as_override{YType::empty, "as-override"},
    route_map{YType::str, "route-map"},
    summary_only{YType::empty, "summary-only"},
    suppress_map{YType::str, "suppress-map"}
{

    yang_name = "aggregate-address"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::~AggregateAddress()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| ipv4_mask.is_set
	|| advertise_map.is_set
	|| as_set.is_set
	|| attribute_map.is_set
	|| as_override.is_set
	|| route_map.is_set
	|| summary_only.is_set
	|| suppress_map.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter)
	|| ydk::is_set(advertise_map.yfilter)
	|| ydk::is_set(as_set.yfilter)
	|| ydk::is_set(attribute_map.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(summary_only.yfilter)
	|| ydk::is_set(suppress_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address";
    ADD_KEY_TOKEN(ipv4_address, "ipv4-address");
    ADD_KEY_TOKEN(ipv4_mask, "ipv4-mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (advertise_map.is_set || is_set(advertise_map.yfilter)) leaf_name_data.push_back(advertise_map.get_name_leafdata());
    if (as_set.is_set || is_set(as_set.yfilter)) leaf_name_data.push_back(as_set.get_name_leafdata());
    if (attribute_map.is_set || is_set(attribute_map.yfilter)) leaf_name_data.push_back(attribute_map.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());
    if (suppress_map.is_set || is_set(suppress_map.yfilter)) leaf_name_data.push_back(suppress_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-map")
    {
        advertise_map = value;
        advertise_map.value_namespace = name_space;
        advertise_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-set")
    {
        as_set = value;
        as_set.value_namespace = name_space;
        as_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-map")
    {
        attribute_map = value;
        attribute_map.value_namespace = name_space;
        attribute_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-map")
    {
        suppress_map = value;
        suppress_map.value_namespace = name_space;
        suppress_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
    if(value_path == "advertise-map")
    {
        advertise_map.yfilter = yfilter;
    }
    if(value_path == "as-set")
    {
        as_set.yfilter = yfilter;
    }
    if(value_path == "attribute-map")
    {
        attribute_map.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
    if(value_path == "suppress-map")
    {
        suppress_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv4-mask" || name == "advertise-map" || name == "as-set" || name == "attribute-map" || name == "as-override" || name == "route-map" || name == "summary-only" || name == "suppress-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bgp_()
    :
    advertise_best_external{YType::empty, "advertise-best-external"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"},
    suppress_inactive{YType::empty, "suppress-inactive"}
        ,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths>())
    , aggregate_timer(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer>())
    , bestpath(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath>())
    , dampening(nullptr) // presence node
    , inject_map(this, {"name"})
    , nexthop(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop>())
    , recursion(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion>())
    , route_map(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap>())
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer>())
    , update_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup>())
{
    additional_paths->parent = this;
    aggregate_timer->parent = this;
    bestpath->parent = this;
    nexthop->parent = this;
    recursion->parent = this;
    route_map->parent = this;
    slow_peer->parent = this;
    update_group->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inject_map.len(); index++)
    {
        if(inject_map[index]->has_data())
            return true;
    }
    return advertise_best_external.is_set
	|| dmzlink_bw.is_set
	|| redistribute_internal.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| suppress_inactive.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (aggregate_timer !=  nullptr && aggregate_timer->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (update_group !=  nullptr && update_group->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::has_operation() const
{
    for (std::size_t index=0; index<inject_map.len(); index++)
    {
        if(inject_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise_best_external.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(redistribute_internal.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(soft_reconfig_backup.yfilter)
	|| ydk::is_set(suppress_inactive.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (aggregate_timer !=  nullptr && aggregate_timer->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (update_group !=  nullptr && update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_best_external.is_set || is_set(advertise_best_external.yfilter)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.yfilter)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.yfilter)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.yfilter)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "aggregate-timer")
    {
        if(aggregate_timer == nullptr)
        {
            aggregate_timer = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer>();
        }
        return aggregate_timer;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "inject-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap>();
        ent_->parent = this;
        inject_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "update-group")
    {
        if(update_group == nullptr)
        {
            update_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup>();
        }
        return update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(aggregate_timer != nullptr)
    {
        _children["aggregate-timer"] = aggregate_timer;
    }

    if(bestpath != nullptr)
    {
        _children["bestpath"] = bestpath;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    count_ = 0;
    for (auto ent_ : inject_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(recursion != nullptr)
    {
        _children["recursion"] = recursion;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    if(update_group != nullptr)
    {
        _children["update-group"] = update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
        advertise_best_external.value_namespace = name_space;
        advertise_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
        redistribute_internal.value_namespace = name_space;
        redistribute_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
        soft_reconfig_backup.value_namespace = name_space;
        soft_reconfig_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
        suppress_inactive.value_namespace = name_space;
        suppress_inactive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup.yfilter = yfilter;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "aggregate-timer" || name == "bestpath" || name == "dampening" || name == "inject-map" || name == "nexthop" || name == "recursion" || name == "route-map" || name == "slow-peer" || name == "update-group" || name == "advertise-best-external" || name == "dmzlink-bw" || name == "redistribute-internal" || name == "scan-time" || name == "soft-reconfig-backup" || name == "suppress-inactive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
        ,
    select(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select>())
    , send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(select != nullptr)
    {
        _children["select"] = select;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "send" || name == "install" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
    , backup(nullptr) // presence node
    , best(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best>())
    , best_external(nullptr) // presence node
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(best_external != nullptr)
    {
        _children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "backup" || name == "best" || name == "best-external" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    if (is_presence_container) return true;
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Best()
    :
    range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{

    yang_name = "backup"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    if (is_presence_container) return true;
    return best_external.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Best()
    :
    range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{

    yang_name = "best-external"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    if (is_presence_container) return true;
    return backup.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::BestExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Select::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::AggregateTimer()
    :
    aggregate_timer{YType::uint8, "aggregate-timer"},
    disable_timer{YType::enumeration, "disable-timer"}
{

    yang_name = "aggregate-timer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::~AggregateTimer()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::has_data() const
{
    if (is_presence_container) return true;
    return aggregate_timer.is_set
	|| disable_timer.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_timer.yfilter)
	|| ydk::is_set(disable_timer.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_timer.is_set || is_set(aggregate_timer.yfilter)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (disable_timer.is_set || is_set(disable_timer.yfilter)) leaf_name_data.push_back(disable_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
        aggregate_timer.value_namespace = name_space;
        aggregate_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-timer")
    {
        disable_timer = value;
        disable_timer.value_namespace = name_space;
        disable_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-timer")
    {
        aggregate_timer.yfilter = yfilter;
    }
    if(value_path == "disable-timer")
    {
        disable_timer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-timer" || name == "disable-timer")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::Bestpath()
    :
    igp_metric(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric>())
    , prefix_validate(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate>())
{
    igp_metric->parent = this;
    prefix_validate->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::has_data() const
{
    if (is_presence_container) return true;
    return (igp_metric !=  nullptr && igp_metric->has_data())
	|| (prefix_validate !=  nullptr && prefix_validate->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::has_operation() const
{
    return is_set(yfilter)
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (prefix_validate !=  nullptr && prefix_validate->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "prefix-validate")
    {
        if(prefix_validate == nullptr)
        {
            prefix_validate = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate>();
        }
        return prefix_validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp_metric != nullptr)
    {
        _children["igp-metric"] = igp_metric;
    }

    if(prefix_validate != nullptr)
    {
        _children["prefix-validate"] = prefix_validate;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-metric" || name == "prefix-validate")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "igp-metric"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::IgpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::PrefixValidate()
    :
    allow_invalid{YType::empty, "allow-invalid"},
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-validate"; yang_parent_name = "bestpath"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::~PrefixValidate()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::has_data() const
{
    if (is_presence_container) return true;
    return allow_invalid.is_set
	|| disable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_invalid.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_invalid.is_set || is_set(allow_invalid.yfilter)) leaf_name_data.push_back(allow_invalid.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-invalid")
    {
        allow_invalid = value;
        allow_invalid.value_namespace = name_space;
        allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-invalid")
    {
        allow_invalid.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Bestpath::PrefixValidate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-invalid" || name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
        ,
    dampen(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dampen != nullptr)
    {
        _children["dampen"] = dampen;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"}
{

    yang_name = "dampen"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::has_data() const
{
    if (is_presence_container) return true;
    return half_life_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set
	|| max_suppress_time.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "reuse-time" || name == "suppress-time" || name == "max-suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    exist_map{YType::str, "exist-map"},
    copy_attributes{YType::empty, "copy-attributes"}
{

    yang_name = "inject-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| exist_map.is_set
	|| copy_attributes.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(exist_map.yfilter)
	|| ydk::is_set(copy_attributes.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.yfilter)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
        copy_attributes.value_namespace = name_space;
        copy_attributes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::InjectMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "exist-map" || name == "copy-attributes")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
        ,
    trigger(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger != nullptr)
    {
        _children["trigger"] = trigger;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{

    yang_name = "trigger"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::Recursion()
    :
    host{YType::empty, "host"}
{

    yang_name = "recursion"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::~Recursion()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::Recursion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{

    yang_name = "route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split != nullptr)
    {
        _children["split"] = split;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{

    yang_name = "split"; yang_parent_name = "update-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::has_data() const
{
    if (is_presence_container) return true;
    return as_override.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_override.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::UpdateGroup::Split::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-override")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return originate.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_>())
    , adm_distance(this, {"distance", "srcip", "wildbits"})
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::~Distance()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adm_distance.len(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.len(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "adm-distance")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::AdmDistance>();
        ent_->parent = this;
        adm_distance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    count_ = 0;
    for (auto ent_ : adm_distance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "adm-distance")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{

    yang_name = "bgp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extern_as.yfilter)
	|| ydk::is_set(internal_as.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.yfilter)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.yfilter)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Distance::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extern-as" || name == "internal-as" || name == "local")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Bgp_::Default::RouteTarget::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::AfName::unicast {0, "unicast"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Rtfilter::Rtfilter_::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Ipv4::Ipv4Unicast::Bgp_::AggregateTimer::DisableTimer::Y_0 {0, "0"};


}
}

