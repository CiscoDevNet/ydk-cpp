
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Msdp::Msdp()
    :
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    peer(std::make_shared<Native::Ip::Msdp::Peer>())
	,default_peer(std::make_shared<Native::Ip::Msdp::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Password>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::TtlThreshold>())
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "msdp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::~Msdp()
{
}

bool Native::Ip::Msdp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:msdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::TtlThreshold>();
        }
        return ttl_threshold;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Msdp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        children["ttl-threshold"] = ttl_threshold;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Msdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "vrf" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Peer::has_data() const
{
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::DefaultPeer::has_data() const
{
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::DefaultPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Description::~Description()
{
}

bool Native::Ip::Msdp::Description::has_data() const
{
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Description::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::FilterSaRequest::has_data() const
{
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::FilterSaRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Keepalive::has_data() const
{
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Keepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::MeshGroup::has_data() const
{
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Password::~Password()
{
}

bool Native::Ip::Msdp::Password::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Ip::Msdp::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Password::Peer::has_data() const
{
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Password::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Redistribute::has_data() const
{
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Redistribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::SaFilter::In>())
	,out(std::make_shared<Native::Ip::Msdp::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::SaFilter::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::SaFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Ip::Msdp::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::SaFilter::In::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::In::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::SaFilter::Out::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::SaFilter::Out::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::SaLimit::has_data() const
{
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::SaLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Shutdown::has_data() const
{
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Shutdown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::TtlThreshold::has_data() const
{
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::TtlThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Peer>())
	,default_peer(std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Vrf::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Vrf::Password>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>())
{
    peer->parent = this;
    default_peer->parent = this;
    description->parent = this;
    filter_sa_request->parent = this;
    keepalive->parent = this;
    mesh_group->parent = this;
    password->parent = this;
    redistribute->parent = this;
    sa_filter->parent = this;
    sa_limit->parent = this;
    shutdown->parent = this;
    ttl_threshold->parent = this;

    yang_name = "vrf"; yang_parent_name = "msdp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Msdp::Vrf::~Vrf()
{
}

bool Native::Ip::Msdp::Vrf::has_data() const
{
    return name.is_set
	|| cache_rejected_sa.is_set
	|| cache_sa_state.is_set
	|| originator_id.is_set
	|| rpf.is_set
	|| timer.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (sa_filter !=  nullptr && sa_filter->has_data())
	|| (sa_limit !=  nullptr && sa_limit->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_data());
}

bool Native::Ip::Msdp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cache_rejected_sa.yfilter)
	|| ydk::is_set(cache_sa_state.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(rpf.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Msdp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "default-peer")
    {
        if(default_peer == nullptr)
        {
            default_peer = std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>();
        }
        return default_peer;
    }

    if(child_yang_name == "description")
    {
        if(description == nullptr)
        {
            description = std::make_shared<Native::Ip::Msdp::Vrf::Description>();
        }
        return description;
    }

    if(child_yang_name == "filter-sa-request")
    {
        if(filter_sa_request == nullptr)
        {
            filter_sa_request = std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>();
        }
        return filter_sa_request;
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>();
        }
        return mesh_group;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Msdp::Vrf::Password>();
        }
        return password;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "sa-filter")
    {
        if(sa_filter == nullptr)
        {
            sa_filter = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>();
        }
        return sa_filter;
    }

    if(child_yang_name == "sa-limit")
    {
        if(sa_limit == nullptr)
        {
            sa_limit = std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>();
        }
        return sa_limit;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>();
        }
        return shutdown;
    }

    if(child_yang_name == "ttl-threshold")
    {
        if(ttl_threshold == nullptr)
        {
            ttl_threshold = std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>();
        }
        return ttl_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(default_peer != nullptr)
    {
        children["default-peer"] = default_peer;
    }

    if(description != nullptr)
    {
        children["description"] = description;
    }

    if(filter_sa_request != nullptr)
    {
        children["filter-sa-request"] = filter_sa_request;
    }

    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(sa_filter != nullptr)
    {
        children["sa-filter"] = sa_filter;
    }

    if(sa_limit != nullptr)
    {
        children["sa-limit"] = sa_limit;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    if(ttl_threshold != nullptr)
    {
        children["ttl-threshold"] = ttl_threshold;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa = value;
        cache_rejected_sa.value_namespace = name_space;
        cache_rejected_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state = value;
        cache_sa_state.value_namespace = name_space;
        cache_sa_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cache-rejected-sa")
    {
        cache_rejected_sa.yfilter = yfilter;
    }
    if(value_path == "cache-sa-state")
    {
        cache_sa_state.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "name" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{

    yang_name = "peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Peer::has_data() const
{
    return addr.is_set
	|| connect_source.is_set
	|| remote_as.is_set;
}

bool Native::Ip::Msdp::Vrf::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(connect_source.yfilter)
	|| ydk::is_set(remote_as.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-source")
    {
        connect_source = value;
        connect_source.value_namespace = name_space;
        connect_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "connect-source")
    {
        connect_source.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "connect-source" || name == "remote-as")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::DefaultPeer::DefaultPeer()
    :
    name_addr{YType::str, "name-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "default-peer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::DefaultPeer::~DefaultPeer()
{
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_data() const
{
    return name_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::DefaultPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::DefaultPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::DefaultPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Description::Description()
    :
    name_addr{YType::str, "name-addr"},
    description{YType::str, "description"}
{

    yang_name = "description"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Description::~Description()
{
}

bool Native::Ip::Msdp::Vrf::Description::has_data() const
{
    return name_addr.is_set
	|| description.is_set;
}

bool Native::Ip::Msdp::Vrf::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Description::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "description")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::FilterSaRequest()
    :
    name_addr{YType::str, "name-addr"},
    list{YType::str, "list"}
{

    yang_name = "filter-sa-request"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_data() const
{
    return name_addr.is_set
	|| list.is_set;
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Msdp::Vrf::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::FilterSaRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "list")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Keepalive::Keepalive()
    :
    name_addr{YType::str, "name-addr"},
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"}
{

    yang_name = "keepalive"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_data() const
{
    return name_addr.is_set
	|| keepalive.is_set
	|| max_wait.is_set;
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-wait")
    {
        max_wait = value;
        max_wait.value_namespace = name_space;
        max_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "keepalive" || name == "max-wait")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::MeshGroup::MeshGroup()
    :
    name{YType::str, "name"},
    addr{YType::str, "addr"}
{

    yang_name = "mesh-group"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_data() const
{
    return name.is_set
	|| addr.is_set;
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Password::~Password()
{
}

bool Native::Ip::Msdp::Vrf::Password::has_data() const
{
    return (peer !=  nullptr && peer->has_data());
}

bool Native::Ip::Msdp::Vrf::Password::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Ip::Msdp::Vrf::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Ip::Msdp::Vrf::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Peer::Peer()
    :
    addr{YType::str, "addr"},
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{

    yang_name = "peer"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Password::Peer::~Peer()
{
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_data() const
{
    return addr.is_set
	|| encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Password::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Password::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Password::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "encryption" || name == "password")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Redistribute::Redistribute()
    :
    list{YType::str, "list"},
    asn{YType::uint16, "asn"},
    route_map{YType::str, "route-map"}
{

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_data() const
{
    return list.is_set
	|| asn.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "asn" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::SaFilter()
    :
    in(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>())
	,out(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "sa-filter"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaFilter::~SaFilter()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Ip::Msdp::Vrf::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Ip::Msdp::Vrf::SaFilter::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Ip::Msdp::Vrf::SaFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Msdp::Vrf::SaFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::In::In()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "in"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaFilter::In::~In()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaFilter::Out::Out()
    :
    addr{YType::str, "addr"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"},
    rp_list{YType::str, "rp-list"},
    rp_route_map{YType::str, "rp-route-map"}
{

    yang_name = "out"; yang_parent_name = "sa-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaFilter::Out::~Out()
{
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_data() const
{
    return addr.is_set
	|| list.is_set
	|| route_map.is_set
	|| rp_list.is_set
	|| rp_route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rp_list.yfilter)
	|| ydk::is_set(rp_route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaFilter::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-list")
    {
        rp_list = value;
        rp_list.value_namespace = name_space;
        rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map = value;
        rp_route_map.value_namespace = name_space;
        rp_route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaFilter::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rp-list")
    {
        rp_list.yfilter = yfilter;
    }
    if(value_path == "rp-route-map")
    {
        rp_route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaFilter::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "list" || name == "route-map" || name == "rp-list" || name == "rp-route-map")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::SaLimit::SaLimit()
    :
    name_addr{YType::str, "name-addr"},
    limit{YType::uint32, "limit"}
{

    yang_name = "sa-limit"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_data() const
{
    return name_addr.is_set
	|| limit.is_set;
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::SaLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "limit")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{

    yang_name = "shutdown"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::Shutdown::~Shutdown()
{
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_data() const
{
    return name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::TtlThreshold::TtlThreshold()
    :
    name_addr{YType::str, "name-addr"},
    threshold{YType::uint8, "threshold"}
{

    yang_name = "ttl-threshold"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Msdp::Vrf::TtlThreshold::~TtlThreshold()
{
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_data() const
{
    return name_addr.is_set
	|| threshold.is_set;
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_addr.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::Msdp::Vrf::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Msdp::Vrf::TtlThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::TtlThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::TtlThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-addr" || name == "threshold")
        return true;
    return false;
}

Native::Ip::McrConf::McrConf()
    :
    multicast_routing{YType::empty, "multicast-routing"}
{

    yang_name = "mcr-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::McrConf::~McrConf()
{
}

bool Native::Ip::McrConf::has_data() const
{
    return multicast_routing.is_set;
}

bool Native::Ip::McrConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_routing.yfilter);
}

std::string Native::Ip::McrConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::McrConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mcr-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::McrConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_routing.is_set || is_set(multicast_routing.yfilter)) leaf_name_data.push_back(multicast_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::McrConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::McrConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::McrConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing = value;
        multicast_routing.value_namespace = name_space;
        multicast_routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::McrConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-routing")
    {
        multicast_routing.yfilter = yfilter;
    }
}

bool Native::Ip::McrConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-routing")
        return true;
    return false;
}

Native::Ip::MulticastRouting::MulticastRouting()
    :
    distributed{YType::empty, "distributed"}
{

    yang_name = "multicast-routing"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ip::MulticastRouting::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return distributed.is_set;
}

bool Native::Ip::MulticastRouting::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::MulticastRouting::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "distributed")
        return true;
    return false;
}

Native::Ip::MulticastRouting::Vrf::Vrf()
    :
    name{YType::str, "name"},
    distributed{YType::empty, "distributed"}
{

    yang_name = "vrf"; yang_parent_name = "multicast-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::MulticastRouting::Vrf::~Vrf()
{
}

bool Native::Ip::MulticastRouting::Vrf::has_data() const
{
    return name.is_set
	|| distributed.is_set;
}

bool Native::Ip::MulticastRouting::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(distributed.yfilter);
}

std::string Native::Ip::MulticastRouting::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::MulticastRouting::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::MulticastRouting::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::MulticastRouting::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::MulticastRouting::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Mroute::Mroute()
    :
    source_address{YType::str, "source-address"},
    subnet_mask{YType::str, "subnet-mask"},
    tunnel{YType::int32, "Tunnel"}
{

    yang_name = "mroute"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Mroute::~Mroute()
{
}

bool Native::Ip::Mroute::has_data() const
{
    return source_address.is_set
	|| subnet_mask.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Mroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(subnet_mask.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Mroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Mroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Mroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Mroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Mroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Mroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask = value;
        subnet_mask.value_namespace = name_space;
        subnet_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Mroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "subnet-mask")
    {
        subnet_mask.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Mroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "subnet-mask" || name == "Tunnel")
        return true;
    return false;
}

Native::Ip::Nat::Nat()
    :
    inside(std::make_shared<Native::Ip::Nat::Inside>())
	,outside(std::make_shared<Native::Ip::Nat::Outside>())
{
    inside->parent = this;
    outside->parent = this;

    yang_name = "nat"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::~Nat()
{
}

bool Native::Ip::Nat::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return (inside !=  nullptr && inside->has_data())
	|| (outside !=  nullptr && outside->has_data());
}

bool Native::Ip::Nat::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inside !=  nullptr && inside->has_operation())
	|| (outside !=  nullptr && outside->has_operation());
}

std::string Native::Ip::Nat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto c = std::make_shared<Native::Ip::Nat::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Ip::Nat::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "outside")
    {
        if(outside == nullptr)
        {
            outside = std::make_shared<Native::Ip::Nat::Outside>();
        }
        return outside;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        children["outside"] = outside;
    }

    return children;
}

void Native::Ip::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "inside" || name == "outside")
        return true;
    return false;
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    accounting{YType::str, "accounting"},
    arp_ping{YType::empty, "arp-ping"},
    type{YType::enumeration, "type"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "pool"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    return id.is_set
	|| start_address.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| accounting.is_set
	|| arp_ping.is_set
	|| type.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(arp_ping.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.yfilter)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
        arp_ping.value_namespace = name_space;
        arp_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "arp-ping")
    {
        arp_ping.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "start-address" || name == "end-address" || name == "netmask" || name == "prefix-length" || name == "accounting" || name == "arp-ping" || name == "type" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Inside()
    :
    source(std::make_shared<Native::Ip::Nat::Inside::Source>())
	,destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
{
    source->parent = this;
    destination->parent = this;

    yang_name = "inside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Nat::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Ip::Nat::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::~Source()
{
}

bool Native::Ip::Nat::Inside::Source::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Inside::Source::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : route_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "route-map" || name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"},
    no_payload{YType::empty, "no-payload"},
    reversible{YType::empty, "reversible"},
    vrf{YType::str, "vrf"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    overload{YType::empty, "overload"},
    oer{YType::empty, "oer"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>())
{
    interface->parent = this;

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| mapping_id.is_set
	|| no_payload.is_set
	|| reversible.is_set
	|| vrf.is_set
	|| match_in_vrf.is_set
	|| overload.is_set
	|| oer.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "id" || name == "pool" || name == "redundancy" || name == "mapping-id" || name == "no-payload" || name == "reversible" || name == "vrf" || name == "match-in-vrf" || name == "overload" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::Ip::Nat::Inside::Source::List::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Nat::Inside::Source::List::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::RouteMap()
    :
    route_map_name{YType::str, "route-map-name"}
    	,
    pool(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>())
	,interface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>())
	,oer(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>())
	,overload(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>())
{
    pool->parent = this;
    interface->parent = this;
    oer->parent = this;
    overload->parent = this;

    yang_name = "route-map"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_map_name.is_set
	|| (pool !=  nullptr && pool->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (pool !=  nullptr && pool->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[route-map-name='" <<route_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>();
        }
        return overload;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool" || name == "interface" || name == "oer" || name == "overload" || name == "vrf" || name == "route-map-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"},
    vrf{YType::str, "vrf"},
    match_in_vrf{YType::empty, "match-in-vrf"}
{

    yang_name = "pool"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_data() const
{
    return pool_name.is_set
	|| vrf.is_set
	|| match_in_vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name" || name == "vrf" || name == "match-in-vrf")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::Oer()
    :
    overload{YType::empty, "overload"},
    extended{YType::empty, "extended"}
{

    yang_name = "oer"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_data() const
{
    return overload.is_set
	|| extended.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(extended.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload" || name == "extended")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::Overload()
    :
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{

    yang_name = "overload"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_data() const
{
    return extended.is_set
	|| oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    oer(nullptr) // presence node
	,overload(nullptr) // presence node
{

    yang_name = "vrf"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::~Vrf()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oer")
    {
        if(oer == nullptr)
        {
            oer = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer>();
        }
        return oer;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oer != nullptr)
    {
        children["oer"] = oer;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oer" || name == "overload" || name == "vrf-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::Oer()
    :
    overload{YType::empty, "overload"}
{

    yang_name = "oer"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_data() const
{
    return overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::Overload()
    :
    oer{YType::empty, "oer"}
{

    yang_name = "overload"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::~Overload()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_data() const
{
    return oer.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oer.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oer")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::Static()
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static::~Static()
{
}

bool Native::Ip::Nat::Inside::Source::Static::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::Static::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nat-static-transport-interface-list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList>();
        c->parent = this;
        nat_static_transport_interface_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nat_static_transport_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : nat_static_transport_interface_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list" || name == "nat-static-transport-interface-list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::NatStaticTransportList()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    proto{YType::enumeration, "proto"},
    network{YType::empty, "network"},
    local_port{YType::uint16, "local-port"},
    mask{YType::str, "mask"},
    global_port{YType::uint16, "global-port"},
    vrf{YType::str, "vrf"},
    extendable{YType::empty, "extendable"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    route_map{YType::str, "route-map"},
    reversible{YType::empty, "reversible"},
    redundancy{YType::str, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    forced{YType::empty, "forced"},
    overload{YType::empty, "overload"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_data() const
{
    return local_ip.is_set
	|| global_ip.is_set
	|| proto.is_set
	|| network.is_set
	|| local_port.is_set
	|| mask.is_set
	|| global_port.is_set
	|| vrf.is_set
	|| extendable.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| route_map.is_set
	|| reversible.is_set
	|| redundancy.is_set
	|| mapping_id.is_set
	|| match_in_vrf.is_set
	|| forced.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_alias.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[local-ip='" <<local_ip <<"']" <<"[global-ip='" <<global_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.yfilter)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-alias")
    {
        no_alias = value;
        no_alias.value_namespace = name_space;
        no_alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-alias")
    {
        no_alias.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "global-ip" || name == "proto" || name == "network" || name == "local-port" || name == "mask" || name == "global-port" || name == "vrf" || name == "extendable" || name == "no-alias" || name == "no-payload" || name == "route-map" || name == "reversible" || name == "redundancy" || name == "mapping-id" || name == "match-in-vrf" || name == "forced" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::NatStaticTransportInterfaceList()
    :
    proto{YType::enumeration, "proto"},
    local_ip{YType::str, "local-ip"},
    local_port{YType::uint16, "local-port"},
    global_port{YType::uint16, "global-port"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-transport-interface-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::~NatStaticTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_data() const
{
    return proto.is_set
	|| local_ip.is_set
	|| local_port.is_set
	|| global_port.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-interface-list" <<"[proto='" <<proto <<"']" <<"[local-ip='" <<local_ip <<"']" <<"[local-port='" <<local_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "proto" || name == "local-ip" || name == "local-port" || name == "global-port")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-transport-interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::Destination()
{

    yang_name = "destination"; yang_parent_name = "inside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Destination::~Destination()
{
}

bool Native::Ip::Nat::Inside::Destination::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Destination::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Inside::Destination::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    mapping_id{YType::uint32, "mapping-id"}
{

    yang_name = "list"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Inside::Destination::List::~List()
{
}

bool Native::Ip::Nat::Inside::Destination::List::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| mapping_id.is_set;
}

bool Native::Ip::Nat::Inside::Destination::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(mapping_id.yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Inside::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Inside::Destination::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Inside::Destination::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Destination::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Destination::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "redundancy" || name == "mapping-id")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Outside()
    :
    source(std::make_shared<Native::Ip::Nat::Outside::Source>())
{
    source->parent = this;

    yang_name = "outside"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::~Outside()
{
}

bool Native::Ip::Nat::Outside::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Outside::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Outside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Outside::Source>();
        }
        return source;
    }

    if(child_yang_name == "list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Outside::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Ip::Nat::Outside::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    count = 0;
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : route_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "list" || name == "route-map")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Outside::Source::Static>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::~Source()
{
}

bool Native::Ip::Nat::Outside::Source::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Nat::Outside::Source::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Nat::Outside::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Outside::Source::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static::Static()
{

    yang_name = "static"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::Static::~Static()
{
}

bool Native::Ip::Nat::Outside::Source::Static::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Outside::Source::Static::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        auto c = std::make_shared<Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nat_static_transport_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::NatStaticTransportList()
    :
    global_ip{YType::str, "global-ip"},
    local_ip{YType::str, "local-ip"},
    vrf{YType::str, "vrf"},
    extendable{YType::empty, "extendable"},
    no_payload{YType::empty, "no-payload"}
{

    yang_name = "nat-static-transport-list"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_data() const
{
    return global_ip.is_set
	|| local_ip.is_set
	|| vrf.is_set
	|| extendable.is_set
	|| no_payload.is_set;
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_payload.yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[global-ip='" <<global_ip <<"']" <<"[local-ip='" <<local_ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-ip")
    {
        global_ip = value;
        global_ip.value_namespace = name_space;
        global_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::Source::Static::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ip" || name == "local-ip" || name == "vrf" || name == "extendable" || name == "no-payload")
        return true;
    return false;
}

Native::Ip::Nat::Outside::List::List()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    mapping_id{YType::uint32, "mapping-id"},
    vrf{YType::str, "vrf"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "list"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::List::~List()
{
}

bool Native::Ip::Nat::Outside::List::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| mapping_id.is_set
	|| vrf.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Outside::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Outside::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Outside::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "mapping-id" || name == "vrf" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nat::Outside::RouteMap::RouteMap()
    :
    id{YType::str, "id"},
    pool{YType::str, "pool"},
    mapping_id{YType::uint32, "mapping-id"},
    vrf{YType::str, "vrf"},
    add_route{YType::empty, "add-route"}
{

    yang_name = "route-map"; yang_parent_name = "outside"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Outside::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Outside::RouteMap::has_data() const
{
    return id.is_set
	|| pool.is_set
	|| mapping_id.is_set
	|| vrf.is_set
	|| add_route.is_set;
}

bool Native::Ip::Nat::Outside::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(add_route.yfilter);
}

std::string Native::Ip::Nat::Outside::RouteMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Outside::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Outside::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Outside::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "pool" || name == "mapping-id" || name == "vrf" || name == "add-route")
        return true;
    return false;
}

Native::Ip::Nbar::Nbar()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
	,classification(std::make_shared<Native::Ip::Nbar::Classification>())
	,protocol_pack(std::make_shared<Native::Ip::Nbar::ProtocolPack>())
{
    attribute->parent = this;
    classification->parent = this;
    protocol_pack->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::~Nbar()
{
}

bool Native::Ip::Nbar::has_data() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data())
	|| (classification !=  nullptr && classification->has_data())
	|| (protocol_pack !=  nullptr && protocol_pack->has_data());
}

bool Native::Ip::Nbar::has_operation() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (classification !=  nullptr && classification->has_operation())
	|| (protocol_pack !=  nullptr && protocol_pack->has_operation());
}

std::string Native::Ip::Nbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "attribute-map")
    {
        auto c = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        c->parent = this;
        attribute_map.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute-set")
    {
        auto c = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        c->parent = this;
        attribute_set.push_back(c);
        return c;
    }

    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Ip::Nbar::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    if(child_yang_name == "protocol-pack")
    {
        if(protocol_pack == nullptr)
        {
            protocol_pack = std::make_shared<Native::Ip::Nbar::ProtocolPack>();
        }
        return protocol_pack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    count = 0;
    for (auto const & c : attribute_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : attribute_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(protocol_pack != nullptr)
    {
        children["protocol-pack"] = protocol_pack;
    }

    return children;
}

void Native::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "attribute-map" || name == "attribute-set" || name == "classification" || name == "custom" || name == "protocol-pack")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
	,application_set(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>())
	,category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
	,sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;
    application_set->parent = this;
    category->parent = this;
    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (application_set !=  nullptr && application_set->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (application_set !=  nullptr && application_set->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "application-set")
    {
        if(application_set == nullptr)
        {
            application_set = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>();
        }
        return application_set;
    }

    if(child_yang_name == "category")
    {
        if(category == nullptr)
        {
            category = std::make_shared<Native::Ip::Nbar::Attribute::Category>();
        }
        return category;
    }

    if(child_yang_name == "sub-category")
    {
        if(sub_category == nullptr)
        {
            sub_category = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>();
        }
        return sub_category;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(application_set != nullptr)
    {
        children["application-set"] = application_set;
    }

    if(category != nullptr)
    {
        children["category"] = category;
    }

    if(sub_category != nullptr)
    {
        children["sub-category"] = sub_category;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "category" || name == "sub-category")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::ApplicationSet()
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-set"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-set/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationSet::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Ip::Nbar::Attribute::ApplicationSet::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Category()
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Attribute::Category::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::Category::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::Category::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "category"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::Category::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::SubCategory()
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "sub-category"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/sub-category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::AttributeMap()
    :
    name{YType::str, "name"}
    	,
    attribute(std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>())
{
    attribute->parent = this;

    yang_name = "attribute-map"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::AttributeMap::~AttributeMap()
{
}

bool Native::Ip::Nbar::AttributeMap::has_data() const
{
    return name.is_set
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::AttributeMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::AttributeMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Ip::Nbar::AttributeMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::Attribute::Attribute()
    :
    application_group{YType::str, "application-group"},
    application_set{YType::str, "application-set"},
    business_relevance{YType::str, "business-relevance"},
    category{YType::str, "category"},
    encrypted{YType::str, "encrypted"},
    sub_category{YType::str, "sub-category"},
    traffic_class{YType::str, "traffic-class"},
    tunnel{YType::str, "tunnel"}
{

    yang_name = "attribute"; yang_parent_name = "attribute-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::AttributeMap::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_data() const
{
    return application_group.is_set
	|| application_set.is_set
	|| business_relevance.is_set
	|| category.is_set
	|| encrypted.is_set
	|| sub_category.is_set
	|| traffic_class.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_group.yfilter)
	|| ydk::is_set(application_set.yfilter)
	|| ydk::is_set(business_relevance.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| ydk::is_set(sub_category.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Nbar::AttributeMap::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_group.is_set || is_set(application_group.yfilter)) leaf_name_data.push_back(application_group.get_name_leafdata());
    if (application_set.is_set || is_set(application_set.yfilter)) leaf_name_data.push_back(application_set.get_name_leafdata());
    if (business_relevance.is_set || is_set(business_relevance.yfilter)) leaf_name_data.push_back(business_relevance.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (sub_category.is_set || is_set(sub_category.yfilter)) leaf_name_data.push_back(sub_category.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-group")
    {
        application_group = value;
        application_group.value_namespace = name_space;
        application_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-set")
    {
        application_set = value;
        application_set.value_namespace = name_space;
        application_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "business-relevance")
    {
        business_relevance = value;
        business_relevance.value_namespace = name_space;
        business_relevance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-category")
    {
        sub_category = value;
        sub_category.value_namespace = name_space;
        sub_category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-group")
    {
        application_group.yfilter = yfilter;
    }
    if(value_path == "application-set")
    {
        application_set.yfilter = yfilter;
    }
    if(value_path == "business-relevance")
    {
        business_relevance.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
    if(value_path == "sub-category")
    {
        sub_category.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeSet::AttributeSet()
    :
    protocol_name{YType::str, "protocol-name"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "attribute-set"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::AttributeSet::~AttributeSet()
{
}

bool Native::Ip::Nbar::AttributeSet::has_data() const
{
    return protocol_name.is_set
	|| profile_name.is_set;
}

bool Native::Ip::Nbar::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Native::Ip::Nbar::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "profile-name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Classification()
    :
    auto_learn(nullptr) // presence node
	,dns(std::make_shared<Native::Ip::Nbar::Classification::Dns>())
	,granularity(std::make_shared<Native::Ip::Nbar::Classification::Granularity>())
	,tunneled_traffic(std::make_shared<Native::Ip::Nbar::Classification::TunneledTraffic>())
{
    dns->parent = this;
    granularity->parent = this;
    tunneled_traffic->parent = this;

    yang_name = "classification"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::~Classification()
{
}

bool Native::Ip::Nbar::Classification::has_data() const
{
    return (auto_learn !=  nullptr && auto_learn->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (granularity !=  nullptr && granularity->has_data())
	|| (tunneled_traffic !=  nullptr && tunneled_traffic->has_data());
}

bool Native::Ip::Nbar::Classification::has_operation() const
{
    return is_set(yfilter)
	|| (auto_learn !=  nullptr && auto_learn->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (granularity !=  nullptr && granularity->has_operation())
	|| (tunneled_traffic !=  nullptr && tunneled_traffic->has_operation());
}

std::string Native::Ip::Nbar::Classification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-learn")
    {
        if(auto_learn == nullptr)
        {
            auto_learn = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn>();
        }
        return auto_learn;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Nbar::Classification::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Ip::Nbar::Classification::Granularity>();
        }
        return granularity;
    }

    if(child_yang_name == "tunneled-traffic")
    {
        if(tunneled_traffic == nullptr)
        {
            tunneled_traffic = std::make_shared<Native::Ip::Nbar::Classification::TunneledTraffic>();
        }
        return tunneled_traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_learn != nullptr)
    {
        children["auto-learn"] = auto_learn;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(granularity != nullptr)
    {
        children["granularity"] = granularity;
    }

    if(tunneled_traffic != nullptr)
    {
        children["tunneled-traffic"] = tunneled_traffic;
    }

    return children;
}

void Native::Ip::Nbar::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-learn" || name == "dns" || name == "granularity" || name == "tunneled-traffic")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::AutoLearn()
    :
    top_asymmetric_socket{YType::empty, "top-asymmetric-socket"}
    	,
    top_hosts(nullptr) // presence node
	,top_ports(nullptr) // presence node
{

    yang_name = "auto-learn"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::AutoLearn::~AutoLearn()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_data() const
{
    return top_asymmetric_socket.is_set
	|| (top_hosts !=  nullptr && top_hosts->has_data())
	|| (top_ports !=  nullptr && top_ports->has_data());
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(top_asymmetric_socket.yfilter)
	|| (top_hosts !=  nullptr && top_hosts->has_operation())
	|| (top_ports !=  nullptr && top_ports->has_operation());
}

std::string Native::Ip::Nbar::Classification::AutoLearn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (top_asymmetric_socket.is_set || is_set(top_asymmetric_socket.yfilter)) leaf_name_data.push_back(top_asymmetric_socket.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::AutoLearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "top-hosts")
    {
        if(top_hosts == nullptr)
        {
            top_hosts = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn::TopHosts>();
        }
        return top_hosts;
    }

    if(child_yang_name == "top-ports")
    {
        if(top_ports == nullptr)
        {
            top_ports = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn::TopPorts>();
        }
        return top_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::AutoLearn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(top_hosts != nullptr)
    {
        children["top-hosts"] = top_hosts;
    }

    if(top_ports != nullptr)
    {
        children["top-ports"] = top_ports;
    }

    return children;
}

void Native::Ip::Nbar::Classification::AutoLearn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "top-asymmetric-socket")
    {
        top_asymmetric_socket = value;
        top_asymmetric_socket.value_namespace = name_space;
        top_asymmetric_socket.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "top-asymmetric-socket")
    {
        top_asymmetric_socket.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "top-hosts" || name == "top-ports" || name == "top-asymmetric-socket")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopHosts::TopHosts()
    :
    sample_rate{YType::uint16, "sample-rate"}
{

    yang_name = "top-hosts"; yang_parent_name = "auto-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopHosts::~TopHosts()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_data() const
{
    return sample_rate.is_set;
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_rate.yfilter);
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/auto-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_rate.is_set || is_set(sample_rate.yfilter)) leaf_name_data.push_back(sample_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::AutoLearn::TopHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-rate")
    {
        sample_rate = value;
        sample_rate.value_namespace = name_space;
        sample_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::TopHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-rate")
    {
        sample_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-rate")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopPorts::TopPorts()
    :
    sample_rate{YType::uint16, "sample-rate"}
{

    yang_name = "top-ports"; yang_parent_name = "auto-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopPorts::~TopPorts()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_data() const
{
    return sample_rate.is_set;
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_rate.yfilter);
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/auto-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_rate.is_set || is_set(sample_rate.yfilter)) leaf_name_data.push_back(sample_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::AutoLearn::TopPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-rate")
    {
        sample_rate = value;
        sample_rate.value_namespace = name_space;
        sample_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::TopPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-rate")
    {
        sample_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-rate")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Dns::Dns()
    :
    classify_by_domain{YType::empty, "classify-by-domain"}
    	,
    learning(nullptr) // presence node
{

    yang_name = "dns"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Dns::~Dns()
{
}

bool Native::Ip::Nbar::Classification::Dns::has_data() const
{
    return classify_by_domain.is_set
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::Ip::Nbar::Classification::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classify_by_domain.yfilter)
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::Ip::Nbar::Classification::Dns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classify_by_domain.is_set || is_set(classify_by_domain.yfilter)) leaf_name_data.push_back(classify_by_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Ip::Nbar::Classification::Dns::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classify-by-domain")
    {
        classify_by_domain = value;
        classify_by_domain.value_namespace = name_space;
        classify_by_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classify-by-domain")
    {
        classify_by_domain.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learning" || name == "classify-by-domain")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Dns::Learning::Learning()
    :
    guard{YType::empty, "guard"}
{

    yang_name = "learning"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Dns::Learning::~Learning()
{
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_data() const
{
    return guard.is_set;
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(guard.yfilter);
}

std::string Native::Ip::Nbar::Classification::Dns::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/dns/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Dns::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Dns::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Dns::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Dns::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Dns::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Dns::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::Granularity()
    :
    coarse_grain{YType::empty, "coarse-grain"}
    	,
    fine_grain(nullptr) // presence node
{

    yang_name = "granularity"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::~Granularity()
{
}

bool Native::Ip::Nbar::Classification::Granularity::has_data() const
{
    return coarse_grain.is_set
	|| (fine_grain !=  nullptr && fine_grain->has_data());
}

bool Native::Ip::Nbar::Classification::Granularity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coarse_grain.yfilter)
	|| (fine_grain !=  nullptr && fine_grain->has_operation());
}

std::string Native::Ip::Nbar::Classification::Granularity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "granularity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coarse_grain.is_set || is_set(coarse_grain.yfilter)) leaf_name_data.push_back(coarse_grain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fine-grain")
    {
        if(fine_grain == nullptr)
        {
            fine_grain = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain>();
        }
        return fine_grain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fine_grain != nullptr)
    {
        children["fine-grain"] = fine_grain;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coarse-grain")
    {
        coarse_grain = value;
        coarse_grain.value_namespace = name_space;
        coarse_grain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coarse-grain")
    {
        coarse_grain.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fine-grain" || name == "coarse-grain")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::FineGrain()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute>())
	,protocol(std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol>())
{
    attribute->parent = this;
    protocol->parent = this;

    yang_name = "fine-grain"; yang_parent_name = "granularity"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::~FineGrain()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fine-grain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "protocol")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Attribute()
{

    yang_name = "attribute"; yang_parent_name = "fine-grain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_data() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup>();
        c->parent = this;
        application_group.push_back(c);
        return c;
    }

    if(child_yang_name == "application-set")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet>();
        c->parent = this;
        application_set.push_back(c);
        return c;
    }

    if(child_yang_name == "business-relevance")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance>();
        c->parent = this;
        business_relevance.push_back(c);
        return c;
    }

    if(child_yang_name == "category")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    if(child_yang_name == "encrypted")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted>();
        c->parent = this;
        encrypted.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-category")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory>();
        c->parent = this;
        sub_category.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-class")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass>();
        c->parent = this;
        traffic_class.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : application_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : business_relevance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : encrypted)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sub_category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : traffic_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::Protocol()
{

    yang_name = "protocol"; yang_parent_name = "fine-grain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::~Protocol()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_data() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList>();
        c->parent = this;
        protocols_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocols_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::ProtocolsList()
    :
    name{YType::str, "name"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::TunneledTraffic::TunneledTraffic()
    :
    capwap{YType::empty, "capwap"},
    ipv6inip{YType::empty, "ipv6inip"},
    teredo{YType::empty, "teredo"}
{

    yang_name = "tunneled-traffic"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::TunneledTraffic::~TunneledTraffic()
{
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_data() const
{
    return capwap.is_set
	|| ipv6inip.is_set
	|| teredo.is_set;
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capwap.yfilter)
	|| ydk::is_set(ipv6inip.yfilter)
	|| ydk::is_set(teredo.yfilter);
}

std::string Native::Ip::Nbar::Classification::TunneledTraffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::TunneledTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunneled-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::TunneledTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capwap.is_set || is_set(capwap.yfilter)) leaf_name_data.push_back(capwap.get_name_leafdata());
    if (ipv6inip.is_set || is_set(ipv6inip.yfilter)) leaf_name_data.push_back(ipv6inip.get_name_leafdata());
    if (teredo.is_set || is_set(teredo.yfilter)) leaf_name_data.push_back(teredo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::TunneledTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::TunneledTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::TunneledTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capwap")
    {
        capwap = value;
        capwap.value_namespace = name_space;
        capwap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6inip")
    {
        ipv6inip = value;
        ipv6inip.value_namespace = name_space;
        ipv6inip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teredo")
    {
        teredo = value;
        teredo.value_namespace = name_space;
        teredo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::TunneledTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capwap")
    {
        capwap.yfilter = yfilter;
    }
    if(value_path == "ipv6inip")
    {
        ipv6inip.yfilter = yfilter;
    }
    if(value_path == "teredo")
    {
        teredo.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap" || name == "ipv6inip" || name == "teredo")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Custom()
    :
    name{YType::str, "name"}
    	,
    composite(std::make_shared<Native::Ip::Nbar::Custom::Composite>())
	,dns(std::make_shared<Native::Ip::Nbar::Custom::Dns>())
	,http(std::make_shared<Native::Ip::Nbar::Custom::Http>())
	,ssl(std::make_shared<Native::Ip::Nbar::Custom::Ssl>())
	,transport(std::make_shared<Native::Ip::Nbar::Custom::Transport>())
{
    composite->parent = this;
    dns->parent = this;
    http->parent = this;
    ssl->parent = this;
    transport->parent = this;

    yang_name = "custom"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Custom::has_data() const
{
    return name.is_set
	|| (composite !=  nullptr && composite->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Ip::Nbar::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (composite !=  nullptr && composite->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Ip::Nbar::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "composite")
    {
        if(composite == nullptr)
        {
            composite = std::make_shared<Native::Ip::Nbar::Custom::Composite>();
        }
        return composite;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Nbar::Custom::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Nbar::Custom::Http>();
        }
        return http;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Ip::Nbar::Custom::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Ip::Nbar::Custom::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(composite != nullptr)
    {
        children["composite"] = composite;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Ip::Nbar::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "composite" || name == "dns" || name == "http" || name == "ssl" || name == "transport" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Composite::Composite()
{

    yang_name = "composite"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Composite::~Composite()
{
}

bool Native::Ip::Nbar::Custom::Composite::has_data() const
{
    for (std::size_t index=0; index<server_name.size(); index++)
    {
        if(server_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Composite::has_operation() const
{
    for (std::size_t index=0; index<server_name.size(); index++)
    {
        if(server_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Composite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "composite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Composite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Composite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-name")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Composite::ServerName>();
        c->parent = this;
        server_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Composite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : server_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Composite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Composite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Composite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Composite::ServerName::ServerName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"},
    extends{YType::str, "extends"}
{

    yang_name = "server-name"; yang_parent_name = "composite"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Composite::ServerName::~ServerName()
{
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_data() const
{
    return name.is_set
	|| id.is_set
	|| extends.is_set;
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extends.yfilter);
}

std::string Native::Ip::Nbar::Custom::Composite::ServerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Composite::ServerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extends.is_set || is_set(extends.yfilter)) leaf_name_data.push_back(extends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Composite::ServerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Composite::ServerName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Composite::ServerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extends")
    {
        extends = value;
        extends.value_namespace = name_space;
        extends.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Composite::ServerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extends")
    {
        extends.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "extends")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Dns::Dns()
{

    yang_name = "dns"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Dns::~Dns()
{
}

bool Native::Ip::Nbar::Custom::Dns::has_data() const
{
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Dns::has_operation() const
{
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Dns::DomainName>();
        c->parent = this;
        domain_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Dns::DomainName::DomainName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"},
    extends{YType::str, "extends"}
{

    yang_name = "domain-name"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Dns::DomainName::~DomainName()
{
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_data() const
{
    return name.is_set
	|| id.is_set
	|| extends.is_set;
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extends.yfilter);
}

std::string Native::Ip::Nbar::Custom::Dns::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Dns::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extends.is_set || is_set(extends.yfilter)) leaf_name_data.push_back(extends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Dns::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Dns::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Dns::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extends")
    {
        extends = value;
        extends.value_namespace = name_space;
        extends.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Dns::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extends")
    {
        extends.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "extends")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Http::Http()
    :
    cookie{YType::str, "cookie"},
    host{YType::str, "host"},
    method{YType::str, "method"},
    referer{YType::str, "referer"},
    url{YType::str, "url"},
    user_agent{YType::str, "user-agent"},
    version{YType::str, "version"},
    via{YType::str, "via"},
    id{YType::uint16, "id"}
{

    yang_name = "http"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Http::~Http()
{
}

bool Native::Ip::Nbar::Custom::Http::has_data() const
{
    return cookie.is_set
	|| host.is_set
	|| method.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| version.is_set
	|| via.is_set
	|| id.is_set;
}

bool Native::Ip::Nbar::Custom::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(via.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Nbar::Custom::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (via.is_set || is_set(via.yfilter)) leaf_name_data.push_back(via.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie")
    {
        cookie = value;
        cookie.value_namespace = name_space;
        cookie.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "via")
    {
        via = value;
        via.value_namespace = name_space;
        via.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie")
    {
        cookie.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "via")
    {
        via.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie" || name == "host" || name == "method" || name == "referer" || name == "url" || name == "user-agent" || name == "version" || name == "via" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ssl::Ssl()
{

    yang_name = "ssl"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ssl::~Ssl()
{
}

bool Native::Ip::Nbar::Custom::Ssl::has_data() const
{
    for (std::size_t index=0; index<unique_name.size(); index++)
    {
        if(unique_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Ssl::has_operation() const
{
    for (std::size_t index=0; index<unique_name.size(); index++)
    {
        if(unique_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unique-name")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Ssl::UniqueName>();
        c->parent = this;
        unique_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : unique_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unique-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ssl::UniqueName::UniqueName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"}
{

    yang_name = "unique-name"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ssl::UniqueName::~UniqueName()
{
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_data() const
{
    return name.is_set
	|| id.is_set;
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ssl::UniqueName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unique-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ssl::UniqueName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ssl::UniqueName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ssl::UniqueName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ssl::UniqueName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ssl::UniqueName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Transport()
    :
    tcp(nullptr) // presence node
	,udp(nullptr) // presence node
	,udp_tcp(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::~Transport()
{
}

bool Native::Ip::Nbar::Custom::Transport::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (udp_tcp !=  nullptr && udp_tcp->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (udp_tcp !=  nullptr && udp_tcp->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udp-tcp")
    {
        if(udp_tcp == nullptr)
        {
            udp_tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp>();
        }
        return udp_tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(udp_tcp != nullptr)
    {
        children["udp-tcp"] = udp_tcp;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp" || name == "udp-tcp")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Tcp()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::~Tcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_data() const
{
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers" <<"[port-number0='" <<port_number0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_data() const
{
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Udp()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::~Udp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_data() const
{
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers" <<"[port-number0='" <<port_number0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_data() const
{
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::UdpTcp()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp-tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::~UdpTcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Msdp::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Msdp::Vrf::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Nat::Pool::Type::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::Type::rotary {1, "rotary"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static::NatStaticTransportInterfaceList::Proto::udp {1, "udp"};


}
}

