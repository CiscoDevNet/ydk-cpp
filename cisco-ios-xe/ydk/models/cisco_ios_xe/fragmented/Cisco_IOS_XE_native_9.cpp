
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

Native::Ip::Igmp::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ip::Igmp::SsmMap::Query>())
	,static_(std::make_shared<Native::Ip::Igmp::SsmMap::Static_>())
{
    query->parent = this;

    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "igmp";
}

Native::Ip::Igmp::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Igmp::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Igmp::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Igmp::SsmMap::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ip::Igmp::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{
    yang_name = "query"; yang_parent_name = "ssm-map";
}

Native::Ip::Igmp::SsmMap::Query::~Query()
{
}

bool Native::Ip::Igmp::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ip::Igmp::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SsmMap::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ip::Igmp::SsmMap::Static_::Static_()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "static"; yang_parent_name = "ssm-map";
}

Native::Ip::Igmp::SsmMap::Static_::~Static_()
{
}

bool Native::Ip::Igmp::SsmMap::Static_::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Igmp::SsmMap::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Igmp::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SsmMap::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::SsmMap::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::SsmMap::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::SsmMap::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    ssm_map(std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "vrf"; yang_parent_name = "igmp";
}

Native::Ip::Igmp::Vrf::~Vrf()
{
}

bool Native::Ip::Igmp::Vrf::has_data() const
{
    return name.is_set
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ip::Igmp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map" || name == "name")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "ssm-map"; yang_parent_name = "vrf";
}

Native::Ip::Igmp::Vrf::SsmMap::~SsmMap()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return enable.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Vrf::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        for(auto const & c : static_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Igmp::Vrf::SsmMap::Static_>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ip::Igmp::Vrf::SsmMap::Static_::Static_()
    :
    srcaddress{YType::str, "srcaddress"},
    aclname{YType::str, "aclname"}
{
    yang_name = "static"; yang_parent_name = "ssm-map";
}

Native::Ip::Igmp::Vrf::SsmMap::Static_::~Static_()
{
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_data() const
{
    return srcaddress.is_set
	|| aclname.is_set;
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddress.yfilter)
	|| ydk::is_set(aclname.yfilter);
}

std::string Native::Ip::Igmp::Vrf::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[srcaddress='" <<srcaddress <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Vrf::SsmMap::Static_::get_entity_path(Entity* ancestor) const
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

    if (srcaddress.is_set || is_set(srcaddress.yfilter)) leaf_name_data.push_back(srcaddress.get_name_leafdata());
    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Vrf::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Vrf::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Vrf::SsmMap::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcaddress")
    {
        srcaddress = value;
        srcaddress.value_namespace = name_space;
        srcaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aclname")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Igmp::Vrf::SsmMap::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcaddress")
    {
        srcaddress.yfilter = yfilter;
    }
    if(value_path == "aclname")
    {
        aclname.yfilter = yfilter;
    }
}

bool Native::Ip::Igmp::Vrf::SsmMap::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcaddress" || name == "aclname")
        return true;
    return false;
}

Native::Ip::Msdp::Msdp()
    :
    cache_rejected_sa{YType::uint32, "cache-rejected-sa"},
    cache_sa_state{YType::empty, "cache-sa-state"},
    originator_id{YType::str, "originator-id"},
    rpf{YType::enumeration, "rpf"},
    timer{YType::uint8, "timer"}
    	,
    default_peer(std::make_shared<Native::Ip::Msdp::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Password>())
	,peer(std::make_shared<Native::Ip::Msdp::Peer>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::TtlThreshold>())
{
    default_peer->parent = this;

    description->parent = this;

    filter_sa_request->parent = this;

    keepalive->parent = this;

    mesh_group->parent = this;

    password->parent = this;

    peer->parent = this;

    redistribute->parent = this;

    sa_filter->parent = this;

    sa_limit->parent = this;

    shutdown->parent = this;

    ttl_threshold->parent = this;

    yang_name = "msdp"; yang_parent_name = "ip";
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
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (peer !=  nullptr && peer->has_data())
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
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:msdp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Peer>();
        }
        return peer;
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
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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

    if(peer != nullptr)
    {
        children["peer"] = peer;
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

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
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
    if(name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "peer" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "vrf" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{
    yang_name = "peer"; yang_parent_name = "msdp";
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

std::string Native::Ip::Msdp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "default-peer"; yang_parent_name = "msdp";
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

std::string Native::Ip::Msdp::DefaultPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::DefaultPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    description{YType::str, "description"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "description"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Description::~Description()
{
}

bool Native::Ip::Msdp::Description::has_data() const
{
    return description.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Description::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::FilterSaRequest::FilterSaRequest()
    :
    list{YType::str, "list"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "filter-sa-request"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::FilterSaRequest::has_data() const
{
    return list.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::FilterSaRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Keepalive::Keepalive()
    :
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "keepalive"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Keepalive::has_data() const
{
    return keepalive.is_set
	|| max_wait.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive" || name == "max-wait" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::MeshGroup::MeshGroup()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{
    yang_name = "mesh-group"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::MeshGroup::has_data() const
{
    return addr.is_set
	|| name.is_set;
}

bool Native::Ip::Msdp::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Msdp::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

Native::Ip::Msdp::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "msdp";
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

std::string Native::Ip::Msdp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "peer"; yang_parent_name = "password";
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

std::string Native::Ip::Msdp::Password::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Password::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    asn{YType::uint16, "asn"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"}
{
    yang_name = "redistribute"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Redistribute::has_data() const
{
    return asn.is_set
	|| list.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Msdp::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "list" || name == "route-map")
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

    yang_name = "sa-filter"; yang_parent_name = "msdp";
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

std::string Native::Ip::Msdp::SaFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-filter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "in"; yang_parent_name = "sa-filter";
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

std::string Native::Ip::Msdp::SaFilter::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaFilter::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "out"; yang_parent_name = "sa-filter";
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

std::string Native::Ip::Msdp::SaFilter::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaFilter::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/sa-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    limit{YType::uint32, "limit"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "sa-limit"; yang_parent_name = "msdp";
}

Native::Ip::Msdp::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::SaLimit::has_data() const
{
    return limit.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::SaLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{
    yang_name = "shutdown"; yang_parent_name = "msdp";
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

std::string Native::Ip::Msdp::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "ttl-threshold"; yang_parent_name = "msdp";
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

std::string Native::Ip::Msdp::TtlThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-threshold";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::TtlThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    default_peer(std::make_shared<Native::Ip::Msdp::Vrf::DefaultPeer>())
	,description(std::make_shared<Native::Ip::Msdp::Vrf::Description>())
	,filter_sa_request(std::make_shared<Native::Ip::Msdp::Vrf::FilterSaRequest>())
	,keepalive(std::make_shared<Native::Ip::Msdp::Vrf::Keepalive>())
	,mesh_group(std::make_shared<Native::Ip::Msdp::Vrf::MeshGroup>())
	,password(std::make_shared<Native::Ip::Msdp::Vrf::Password>())
	,peer(std::make_shared<Native::Ip::Msdp::Vrf::Peer>())
	,redistribute(std::make_shared<Native::Ip::Msdp::Vrf::Redistribute>())
	,sa_filter(std::make_shared<Native::Ip::Msdp::Vrf::SaFilter>())
	,sa_limit(std::make_shared<Native::Ip::Msdp::Vrf::SaLimit>())
	,shutdown(std::make_shared<Native::Ip::Msdp::Vrf::Shutdown>())
	,ttl_threshold(std::make_shared<Native::Ip::Msdp::Vrf::TtlThreshold>())
{
    default_peer->parent = this;

    description->parent = this;

    filter_sa_request->parent = this;

    keepalive->parent = this;

    mesh_group->parent = this;

    password->parent = this;

    peer->parent = this;

    redistribute->parent = this;

    sa_filter->parent = this;

    sa_limit->parent = this;

    shutdown->parent = this;

    ttl_threshold->parent = this;

    yang_name = "vrf"; yang_parent_name = "msdp";
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
	|| (default_peer !=  nullptr && default_peer->has_data())
	|| (description !=  nullptr && description->has_data())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_data())
	|| (keepalive !=  nullptr && keepalive->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (peer !=  nullptr && peer->has_data())
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
	|| (default_peer !=  nullptr && default_peer->has_operation())
	|| (description !=  nullptr && description->has_operation())
	|| (filter_sa_request !=  nullptr && filter_sa_request->has_operation())
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (sa_filter !=  nullptr && sa_filter->has_operation())
	|| (sa_limit !=  nullptr && sa_limit->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation())
	|| (ttl_threshold !=  nullptr && ttl_threshold->has_operation());
}

std::string Native::Ip::Msdp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:msdp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cache_rejected_sa.is_set || is_set(cache_rejected_sa.yfilter)) leaf_name_data.push_back(cache_rejected_sa.get_name_leafdata());
    if (cache_sa_state.is_set || is_set(cache_sa_state.yfilter)) leaf_name_data.push_back(cache_sa_state.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ip::Msdp::Vrf::Peer>();
        }
        return peer;
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

    if(peer != nullptr)
    {
        children["peer"] = peer;
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
    if(name == "default-peer" || name == "description" || name == "filter-sa-request" || name == "keepalive" || name == "mesh-group" || name == "password" || name == "peer" || name == "redistribute" || name == "sa-filter" || name == "sa-limit" || name == "shutdown" || name == "ttl-threshold" || name == "name" || name == "cache-rejected-sa" || name == "cache-sa-state" || name == "originator-id" || name == "rpf" || name == "timer")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Peer::Peer()
    :
    addr{YType::str, "addr"},
    connect_source{YType::str, "connect-source"},
    remote_as{YType::uint16, "remote-as"}
{
    yang_name = "peer"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Msdp::Vrf::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (connect_source.is_set || is_set(connect_source.yfilter)) leaf_name_data.push_back(connect_source.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "default-peer"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Msdp::Vrf::DefaultPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::DefaultPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::DefaultPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    description{YType::str, "description"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "description"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Description::~Description()
{
}

bool Native::Ip::Msdp::Vrf::Description::has_data() const
{
    return description.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Description::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Description::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Description::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Description' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Description::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Description::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Description::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Description::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Description::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::FilterSaRequest::FilterSaRequest()
    :
    list{YType::str, "list"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "filter-sa-request"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::FilterSaRequest::~FilterSaRequest()
{
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_data() const
{
    return list.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::FilterSaRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-sa-request";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::FilterSaRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterSaRequest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::FilterSaRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::FilterSaRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::FilterSaRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::FilterSaRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Keepalive::Keepalive()
    :
    keepalive{YType::uint8, "keepalive"},
    max_wait{YType::uint8, "max-wait"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "keepalive"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Keepalive::~Keepalive()
{
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_data() const
{
    return keepalive.is_set
	|| max_wait.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(max_wait.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (max_wait.is_set || is_set(max_wait.yfilter)) leaf_name_data.push_back(max_wait.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "max-wait")
    {
        max_wait.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive" || name == "max-wait" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::MeshGroup::MeshGroup()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{
    yang_name = "mesh-group"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::MeshGroup::~MeshGroup()
{
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_data() const
{
    return addr.is_set
	|| name.is_set;
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Msdp::Vrf::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Password::Password()
    :
    peer(std::make_shared<Native::Ip::Msdp::Vrf::Password::Peer>())
{
    peer->parent = this;

    yang_name = "password"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Msdp::Vrf::Password::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "peer"; yang_parent_name = "password";
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

const EntityPath Native::Ip::Msdp::Vrf::Password::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Password::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Password::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    asn{YType::uint16, "asn"},
    list{YType::str, "list"},
    route_map{YType::str, "route-map"}
{
    yang_name = "redistribute"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_data() const
{
    return asn.is_set
	|| list.is_set
	|| route_map.is_set;
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ip::Msdp::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::Redistribute::get_entity_path(Entity* ancestor) const
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

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Msdp::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "list" || name == "route-map")
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

    yang_name = "sa-filter"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Msdp::Vrf::SaFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "in"; yang_parent_name = "sa-filter";
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

const EntityPath Native::Ip::Msdp::Vrf::SaFilter::In::get_entity_path(Entity* ancestor) const
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

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "out"; yang_parent_name = "sa-filter";
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

const EntityPath Native::Ip::Msdp::Vrf::SaFilter::Out::get_entity_path(Entity* ancestor) const
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

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rp_list.is_set || is_set(rp_list.yfilter)) leaf_name_data.push_back(rp_list.get_name_leafdata());
    if (rp_route_map.is_set || is_set(rp_route_map.yfilter)) leaf_name_data.push_back(rp_route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaFilter::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaFilter::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    limit{YType::uint32, "limit"},
    name_addr{YType::str, "name-addr"}
{
    yang_name = "sa-limit"; yang_parent_name = "vrf";
}

Native::Ip::Msdp::Vrf::SaLimit::~SaLimit()
{
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_data() const
{
    return limit.is_set
	|| name_addr.is_set;
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(name_addr.yfilter);
}

std::string Native::Ip::Msdp::Vrf::SaLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa-limit";

    return path_buffer.str();

}

const EntityPath Native::Ip::Msdp::Vrf::SaLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SaLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::SaLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::SaLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Msdp::Vrf::SaLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-addr")
    {
        name_addr = value;
        name_addr.value_namespace = name_space;
        name_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Msdp::Vrf::SaLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "name-addr")
    {
        name_addr.yfilter = yfilter;
    }
}

bool Native::Ip::Msdp::Vrf::SaLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "name-addr")
        return true;
    return false;
}

Native::Ip::Msdp::Vrf::Shutdown::Shutdown()
    :
    name_addr{YType::str, "name-addr"}
{
    yang_name = "shutdown"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Msdp::Vrf::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "ttl-threshold"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Msdp::Vrf::TtlThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_addr.is_set || is_set(name_addr.yfilter)) leaf_name_data.push_back(name_addr.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Msdp::Vrf::TtlThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Msdp::Vrf::TtlThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "mcr-conf"; yang_parent_name = "ip";
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

std::string Native::Ip::McrConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mcr-conf";

    return path_buffer.str();

}

const EntityPath Native::Ip::McrConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_routing.is_set || is_set(multicast_routing.yfilter)) leaf_name_data.push_back(multicast_routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::McrConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::McrConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "multicast-routing"; yang_parent_name = "ip";
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

std::string Native::Ip::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";

    return path_buffer.str();

}

const EntityPath Native::Ip::MulticastRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "vrf"; yang_parent_name = "multicast-routing";
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

std::string Native::Ip::MulticastRouting::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::MulticastRouting::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-multicast:multicast-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::MulticastRouting::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::MulticastRouting::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "mroute"; yang_parent_name = "ip";
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

std::string Native::Ip::Mroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:mroute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Mroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (subnet_mask.is_set || is_set(subnet_mask.yfilter)) leaf_name_data.push_back(subnet_mask.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Mroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Mroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    yang_name = "nat"; yang_parent_name = "ip";
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

std::string Native::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(outside != nullptr)
    {
        children["outside"] = outside;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
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
    if(name == "inside" || name == "outside" || name == "pool")
        return true;
    return false;
}

Native::Ip::Nat::Pool::Pool()
    :
    id{YType::str, "id"},
    accounting{YType::str, "accounting"},
    add_route{YType::empty, "add-route"},
    arp_ping{YType::empty, "arp-ping"},
    end_address{YType::str, "end-address"},
    netmask{YType::str, "netmask"},
    prefix_length{YType::uint8, "prefix-length"},
    start_address{YType::str, "start-address"},
    type{YType::enumeration, "type"}
{
    yang_name = "pool"; yang_parent_name = "nat";
}

Native::Ip::Nat::Pool::~Pool()
{
}

bool Native::Ip::Nat::Pool::has_data() const
{
    return id.is_set
	|| accounting.is_set
	|| add_route.is_set
	|| arp_ping.is_set
	|| end_address.is_set
	|| netmask.is_set
	|| prefix_length.is_set
	|| start_address.is_set
	|| type.is_set;
}

bool Native::Ip::Nat::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(add_route.yfilter)
	|| ydk::is_set(arp_ping.yfilter)
	|| ydk::is_set(end_address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Ip::Nat::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (arp_ping.is_set || is_set(arp_ping.yfilter)) leaf_name_data.push_back(arp_ping.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-ping")
    {
        arp_ping = value;
        arp_ping.value_namespace = name_space;
        arp_ping.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
    if(value_path == "arp-ping")
    {
        arp_ping.yfilter = yfilter;
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
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "accounting" || name == "add-route" || name == "arp-ping" || name == "end-address" || name == "netmask" || name == "prefix-length" || name == "start-address" || name == "type")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Inside()
    :
    destination(std::make_shared<Native::Ip::Nat::Inside::Destination>())
	,source(std::make_shared<Native::Ip::Nat::Inside::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "inside"; yang_parent_name = "nat";
}

Native::Ip::Nat::Inside::~Inside()
{
}

bool Native::Ip::Nat::Inside::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Nat::Inside::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Nat::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Nat::Inside::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Inside::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
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
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Inside::Source::Static_>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "inside";
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

std::string Native::Ip::Nat::Inside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::List>();
        c->parent = this;
        list.push_back(c);
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
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Inside::Source::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
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
    mapping_id{YType::uint32, "mapping-id"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    no_payload{YType::empty, "no-payload"},
    oer{YType::empty, "oer"},
    overload{YType::empty, "overload"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"},
    reversible{YType::empty, "reversible"},
    vrf{YType::str, "vrf"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface>())
{
    interface->parent = this;

    yang_name = "list"; yang_parent_name = "source";
}

Native::Ip::Nat::Inside::Source::List::~List()
{
}

bool Native::Ip::Nat::Inside::Source::List::has_data() const
{
    return id.is_set
	|| mapping_id.is_set
	|| match_in_vrf.is_set
	|| no_payload.is_set
	|| oer.is_set
	|| overload.is_set
	|| pool.is_set
	|| redundancy.is_set
	|| reversible.is_set
	|| vrf.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(oer.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(value_path == "no-payload")
    {
        no_payload = value;
        no_payload.value_namespace = name_space;
        no_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oer")
    {
        oer = value;
        oer.value_namespace = name_space;
        oer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Nat::Inside::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "oer")
    {
        oer.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "id" || name == "mapping-id" || name == "match-in-vrf" || name == "no-payload" || name == "oer" || name == "overload" || name == "pool" || name == "redundancy" || name == "reversible" || name == "vrf")
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "list";
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

bool Native::Ip::Nat::Inside::Source::List::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::List::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface>();
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

bool Native::Ip::Nat::Inside::Source::List::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::List::Interface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
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

const EntityPath Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::List::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface>())
	,oer(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Oer>())
	,overload(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Overload>())
	,pool(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>())
{
    interface->parent = this;

    oer->parent = this;

    overload->parent = this;

    pool->parent = this;

    yang_name = "route-map"; yang_parent_name = "source";
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
	|| (interface !=  nullptr && interface->has_data())
	|| (oer !=  nullptr && oer->has_data())
	|| (overload !=  nullptr && overload->has_data())
	|| (pool !=  nullptr && pool->has_data());
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
	|| (interface !=  nullptr && interface->has_operation())
	|| (oer !=  nullptr && oer->has_operation())
	|| (overload !=  nullptr && overload->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[route-map-name='" <<route_map_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Pool>();
        }
        return pool;
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

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
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
    if(name == "interface" || name == "oer" || name == "overload" || name == "pool" || name == "vrf" || name == "route-map-name")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::Pool()
    :
    match_in_vrf{YType::empty, "match-in-vrf"},
    pool_name{YType::str, "pool-name"},
    vrf{YType::str, "vrf"}
{
    yang_name = "pool"; yang_parent_name = "route-map";
}

Native::Ip::Nat::Inside::Source::RouteMap::Pool::~Pool()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_data() const
{
    return match_in_vrf.is_set
	|| pool_name.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
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
}

void Native::Ip::Nat::Inside::Source::RouteMap::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-in-vrf" || name == "pool-name" || name == "vrf")
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "route-map";
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

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface>();
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

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Interface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
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

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    extended{YType::empty, "extended"},
    overload{YType::empty, "overload"}
{
    yang_name = "oer"; yang_parent_name = "route-map";
}

Native::Ip::Nat::Inside::Source::RouteMap::Oer::~Oer()
{
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_data() const
{
    return extended.is_set
	|| overload.is_set;
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(overload.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::RouteMap::Oer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::RouteMap::Oer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "overload")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::RouteMap::Overload::Overload()
    :
    extended{YType::empty, "extended"},
    oer{YType::empty, "oer"}
{
    yang_name = "overload"; yang_parent_name = "route-map";
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

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overload' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "vrf"; yang_parent_name = "route-map";
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

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "oer"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Oer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "overload"; yang_parent_name = "vrf";
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

const EntityPath Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Overload' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oer.is_set || is_set(oer.yfilter)) leaf_name_data.push_back(oer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::RouteMap::Vrf::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

Native::Ip::Nat::Inside::Source::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "source";
}

Native::Ip::Nat::Inside::Source::Static_::~Static_()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Inside::Source::Static_::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_interface_list.size(); index++)
    {
        if(nat_static_transport_interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-interface-list")
    {
        for(auto const & c : nat_static_transport_interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList>();
        c->parent = this;
        nat_static_transport_interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "nat-static-transport-list")
    {
        for(auto const & c : nat_static_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nat_static_transport_interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nat_static_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Inside::Source::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Inside::Source::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-interface-list" || name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::NatStaticTransportList()
    :
    local_ip{YType::str, "local-ip"},
    global_ip{YType::str, "global-ip"},
    extendable{YType::empty, "extendable"},
    forced{YType::empty, "forced"},
    global_port{YType::uint16, "global-port"},
    local_port{YType::uint16, "local-port"},
    mapping_id{YType::uint32, "mapping-id"},
    mask{YType::str, "mask"},
    match_in_vrf{YType::empty, "match-in-vrf"},
    network{YType::empty, "network"},
    no_alias{YType::empty, "no-alias"},
    no_payload{YType::empty, "no-payload"},
    overload{YType::empty, "overload"},
    proto{YType::enumeration, "proto"},
    redundancy{YType::str, "redundancy"},
    reversible{YType::empty, "reversible"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
{
    yang_name = "nat-static-transport-list"; yang_parent_name = "static";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_data() const
{
    return local_ip.is_set
	|| global_ip.is_set
	|| extendable.is_set
	|| forced.is_set
	|| global_port.is_set
	|| local_port.is_set
	|| mapping_id.is_set
	|| mask.is_set
	|| match_in_vrf.is_set
	|| network.is_set
	|| no_alias.is_set
	|| no_payload.is_set
	|| overload.is_set
	|| proto.is_set
	|| redundancy.is_set
	|| reversible.is_set
	|| route_map.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(forced.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(match_in_vrf.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(no_alias.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(reversible.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[local-ip='" <<local_ip <<"']" <<"[global-ip='" <<global_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (match_in_vrf.is_set || is_set(match_in_vrf.yfilter)) leaf_name_data.push_back(match_in_vrf.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (no_alias.is_set || is_set(no_alias.yfilter)) leaf_name_data.push_back(no_alias.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (reversible.is_set || is_set(reversible.yfilter)) leaf_name_data.push_back(reversible.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "extendable")
    {
        extendable = value;
        extendable.value_namespace = name_space;
        extendable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-port")
    {
        global_port = value;
        global_port.value_namespace = name_space;
        global_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf = value;
        match_in_vrf.value_namespace = name_space;
        match_in_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversible")
    {
        reversible = value;
        reversible.value_namespace = name_space;
        reversible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
    if(value_path == "global-port")
    {
        global_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "match-in-vrf")
    {
        match_in_vrf.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "no-alias")
    {
        no_alias.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "reversible")
    {
        reversible.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-ip" || name == "global-ip" || name == "extendable" || name == "forced" || name == "global-port" || name == "local-port" || name == "mapping-id" || name == "mask" || name == "match-in-vrf" || name == "network" || name == "no-alias" || name == "no-payload" || name == "overload" || name == "proto" || name == "redundancy" || name == "reversible" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::NatStaticTransportInterfaceList()
    :
    proto{YType::enumeration, "proto"},
    local_ip{YType::str, "local-ip"},
    local_port{YType::uint16, "local-port"},
    global_port{YType::uint16, "global-port"}
    	,
    interface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface>())
{
    interface->parent = this;

    yang_name = "nat-static-transport-interface-list"; yang_parent_name = "static";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::~NatStaticTransportInterfaceList()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_data() const
{
    return proto.is_set
	|| local_ip.is_set
	|| local_port.is_set
	|| global_port.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(global_port.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-interface-list" <<"[proto='" <<proto <<"']" <<"[local-ip='" <<local_ip <<"']" <<"[local-port='" <<local_port <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/source/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (global_port.is_set || is_set(global_port.yfilter)) leaf_name_data.push_back(global_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "proto" || name == "local-ip" || name == "local-port" || name == "global-port")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::Interface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "nat-static-transport-interface-list";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::~Interface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_data() const
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

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_operation() const
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

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::get_children() const
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

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Nat::Inside::Destination::Destination()
{
    yang_name = "destination"; yang_parent_name = "inside";
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

std::string Native::Ip::Nat::Inside::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
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
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    redundancy{YType::uint8, "redundancy"}
{
    yang_name = "list"; yang_parent_name = "destination";
}

Native::Ip::Nat::Inside::Destination::List::~List()
{
}

bool Native::Ip::Nat::Inside::Destination::List::has_data() const
{
    return id.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| redundancy.is_set;
}

bool Native::Ip::Nat::Inside::Destination::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(redundancy.yfilter);
}

std::string Native::Ip::Nat::Inside::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Inside::Destination::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/inside/destination/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Inside::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Inside::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Nat::Inside::Destination::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Inside::Destination::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "mapping-id" || name == "pool" || name == "redundancy")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Outside()
    :
    source(std::make_shared<Native::Ip::Nat::Outside::Source>())
{
    source->parent = this;

    yang_name = "outside"; yang_parent_name = "nat";
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

std::string Native::Ip::Nat::Outside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outside";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Outside::List>();
        c->parent = this;
        list.push_back(c);
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
        auto c = std::make_shared<Native::Ip::Nat::Outside::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Nat::Outside::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(source != nullptr)
    {
        children["source"] = source;
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
    if(name == "list" || name == "route-map" || name == "source")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Source()
    :
    static_(std::make_shared<Native::Ip::Nat::Outside::Source::Static_>())
{
    static_->parent = this;

    yang_name = "source"; yang_parent_name = "outside";
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

std::string Native::Ip::Nat::Outside::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Nat::Outside::Source::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

Native::Ip::Nat::Outside::Source::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "source";
}

Native::Ip::Nat::Outside::Source::Static_::~Static_()
{
}

bool Native::Ip::Nat::Outside::Source::Static_::has_data() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nat::Outside::Source::Static_::has_operation() const
{
    for (std::size_t index=0; index<nat_static_transport_list.size(); index++)
    {
        if(nat_static_transport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::Source::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nat-static-transport-list")
    {
        for(auto const & c : nat_static_transport_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList>();
        c->parent = this;
        nat_static_transport_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nat_static_transport_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Nat::Outside::Source::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Outside::Source::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Outside::Source::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat-static-transport-list")
        return true;
    return false;
}

Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::NatStaticTransportList()
    :
    global_ip{YType::str, "global-ip"},
    local_ip{YType::str, "local-ip"},
    extendable{YType::empty, "extendable"},
    no_payload{YType::empty, "no-payload"},
    vrf{YType::str, "vrf"}
{
    yang_name = "nat-static-transport-list"; yang_parent_name = "static";
}

Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::~NatStaticTransportList()
{
}

bool Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::has_data() const
{
    return global_ip.is_set
	|| local_ip.is_set
	|| extendable.is_set
	|| no_payload.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_ip.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(extendable.yfilter)
	|| ydk::is_set(no_payload.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-static-transport-list" <<"[global-ip='" <<global_ip <<"']" <<"[local-ip='" <<local_ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/source/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_ip.is_set || is_set(global_ip.yfilter)) leaf_name_data.push_back(global_ip.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (extendable.is_set || is_set(extendable.yfilter)) leaf_name_data.push_back(extendable.get_name_leafdata());
    if (no_payload.is_set || is_set(no_payload.yfilter)) leaf_name_data.push_back(no_payload.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-ip")
    {
        global_ip.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "extendable")
    {
        extendable.yfilter = yfilter;
    }
    if(value_path == "no-payload")
    {
        no_payload.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::Source::Static_::NatStaticTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-ip" || name == "local-ip" || name == "extendable" || name == "no-payload" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Outside::List::List()
    :
    id{YType::str, "id"},
    add_route{YType::empty, "add-route"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    vrf{YType::str, "vrf"}
{
    yang_name = "list"; yang_parent_name = "outside";
}

Native::Ip::Nat::Outside::List::~List()
{
}

bool Native::Ip::Nat::Outside::List::has_data() const
{
    return id.is_set
	|| add_route.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(add_route.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Outside::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "add-route" || name == "mapping-id" || name == "pool" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nat::Outside::RouteMap::RouteMap()
    :
    id{YType::str, "id"},
    add_route{YType::empty, "add-route"},
    mapping_id{YType::uint32, "mapping-id"},
    pool{YType::str, "pool"},
    vrf{YType::str, "vrf"}
{
    yang_name = "route-map"; yang_parent_name = "outside";
}

Native::Ip::Nat::Outside::RouteMap::~RouteMap()
{
}

bool Native::Ip::Nat::Outside::RouteMap::has_data() const
{
    return id.is_set
	|| add_route.is_set
	|| mapping_id.is_set
	|| pool.is_set
	|| vrf.is_set;
}

bool Native::Ip::Nat::Outside::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(add_route.yfilter)
	|| ydk::is_set(mapping_id.yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Nat::Outside::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nat::Outside::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/outside/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (add_route.is_set || is_set(add_route.yfilter)) leaf_name_data.push_back(add_route.get_name_leafdata());
    if (mapping_id.is_set || is_set(mapping_id.yfilter)) leaf_name_data.push_back(mapping_id.get_name_leafdata());
    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nat::Outside::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Outside::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "add-route")
    {
        add_route = value;
        add_route.value_namespace = name_space;
        add_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-id")
    {
        mapping_id = value;
        mapping_id.value_namespace = name_space;
        mapping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Outside::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "add-route")
    {
        add_route.yfilter = yfilter;
    }
    if(value_path == "mapping-id")
    {
        mapping_id.yfilter = yfilter;
    }
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Outside::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "add-route" || name == "mapping-id" || name == "pool" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Nbar::Nbar()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
{
    attribute->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip";
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
    return (attribute !=  nullptr && attribute->has_data());
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
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        for(auto const & c : attribute_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        c->parent = this;
        attribute_map.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute-set")
    {
        for(auto const & c : attribute_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        c->parent = this;
        attribute_set.push_back(c);
        return c;
    }

    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Nbar::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    for (auto const & c : attribute_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : attribute_set)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
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
    if(name == "attribute" || name == "attribute-map" || name == "attribute-set" || name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
	,category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
	,sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;

    category->parent = this;

    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar";
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
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
    if(name == "application-group" || name == "category" || name == "sub-category")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
{
    yang_name = "application-group"; yang_parent_name = "attribute";
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

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::ApplicationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "custom"; yang_parent_name = "application-group";
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

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

Native::Ip::Nbar::Attribute::Category::Category()
{
    yang_name = "category"; yang_parent_name = "attribute";
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

std::string Native::Ip::Nbar::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::Category::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "custom"; yang_parent_name = "category";
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

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::Category::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/category/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "sub-category"; yang_parent_name = "attribute";
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

std::string Native::Ip::Nbar::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::SubCategory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        for(auto const & c : custom)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : custom)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "custom"; yang_parent_name = "sub-category";
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

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Attribute::SubCategory::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/sub-category/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    yang_name = "attribute-map"; yang_parent_name = "nbar";
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

std::string Native::Ip::Nbar::AttributeMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::AttributeMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
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
    business_relevance{YType::enumeration, "business-relevance"},
    category{YType::str, "category"},
    encrypted{YType::enumeration, "encrypted"},
    sub_category{YType::str, "sub-category"},
    traffic_class{YType::enumeration, "traffic-class"},
    tunnel{YType::enumeration, "tunnel"}
{
    yang_name = "attribute"; yang_parent_name = "attribute-map";
}

Native::Ip::Nbar::AttributeMap::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_data() const
{
    return application_group.is_set
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

const EntityPath Native::Ip::Nbar::AttributeMap::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_group.is_set || is_set(application_group.yfilter)) leaf_name_data.push_back(application_group.get_name_leafdata());
    if (business_relevance.is_set || is_set(business_relevance.yfilter)) leaf_name_data.push_back(business_relevance.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (sub_category.is_set || is_set(sub_category.yfilter)) leaf_name_data.push_back(sub_category.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(name == "application-group" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeSet::AttributeSet()
    :
    protocol_name{YType::str, "protocol-name"},
    profile_name{YType::str, "profile-name"}
{
    yang_name = "attribute-set"; yang_parent_name = "nbar";
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

std::string Native::Ip::Nbar::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::AttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

Native::Ip::Nbar::Custom::Custom()
    :
    name{YType::str, "name"}
    	,
    http(std::make_shared<Native::Ip::Nbar::Custom::Http>())
{
    http->parent = this;

    yang_name = "custom"; yang_parent_name = "nbar";
}

Native::Ip::Nbar::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Custom::has_data() const
{
    return name.is_set
	|| (http !=  nullptr && http->has_data());
}

bool Native::Ip::Nbar::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Ip::Nbar::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Custom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Nbar::Custom::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http != nullptr)
    {
        children["http"] = http;
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
    if(name == "http" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Http::Http()
    :
    cookie{YType::str, "cookie"},
    host{YType::str, "host"},
    id{YType::uint16, "id"},
    method{YType::str, "method"},
    referer{YType::str, "referer"},
    url{YType::str, "url"},
    user_agent{YType::str, "user-agent"},
    version{YType::str, "version"},
    via{YType::str, "via"}
{
    yang_name = "http"; yang_parent_name = "custom";
}

Native::Ip::Nbar::Custom::Http::~Http()
{
}

bool Native::Ip::Nbar::Custom::Http::has_data() const
{
    return cookie.is_set
	|| host.is_set
	|| id.is_set
	|| method.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| version.is_set
	|| via.is_set;
}

bool Native::Ip::Nbar::Custom::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(via.yfilter);
}

std::string Native::Ip::Nbar::Custom::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Ip::Nbar::Custom::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Http' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (via.is_set || is_set(via.yfilter)) leaf_name_data.push_back(via.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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
}

bool Native::Ip::Nbar::Custom::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie" || name == "host" || name == "id" || name == "method" || name == "referer" || name == "url" || name == "user-agent" || name == "version" || name == "via")
        return true;
    return false;
}

Native::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
	,signalling(std::make_shared<Native::Ip::Rsvp::Signalling>())
{
    signalling->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip";
}

Native::Ip::Rsvp::~Rsvp()
{
}

bool Native::Ip::Rsvp::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Native::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string Native::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    return children;
}

void Native::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "signalling")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Authentication()
    :
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>())
	,neighbor(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>())
{
    lifetime->parent = this;

    neighbor->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp";
}

Native::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Ip::Rsvp::Authentication::has_data() const
{
    return challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool Native::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "neighbor" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Neighbor()
    :
    access_list(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>())
	,address(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>())
{
    access_list->parent = this;

    address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "authentication";
}

Native::Ip::Rsvp::Authentication::Neighbor::~Neighbor()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data())
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "address")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::AccessList()
{
    yang_name = "access-list"; yang_parent_name = "neighbor";
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::~AccessList()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    if(child_yang_name == "number")
    {
        for(auto const & c : number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number>();
        c->parent = this;
        number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "number")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Number()
    :
    acl_number{YType::uint8, "acl-number"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "number"; yang_parent_name = "access-list";
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::~Number()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_data() const
{
    return acl_number.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number" <<"[acl-number='" <<acl_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-number" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{
    yang_name = "lifetime"; yang_parent_name = "number";
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Name()
    :
    acl_name{YType::str, "acl-name"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "name"; yang_parent_name = "access-list";
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::~Name()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_data() const
{
    return acl_name.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[acl-name='" <<acl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-name" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{
    yang_name = "lifetime"; yang_parent_name = "name";
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Address()
{
    yang_name = "address"; yang_parent_name = "neighbor";
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::~Address()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address";
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::~Ipv4()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-address='" <<ipv4_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/address/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "ipv4-address" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{
    yang_name = "lifetime"; yang_parent_name = "ipv4";
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{
    yang_name = "lifetime"; yang_parent_name = "authentication";
}

Native::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Authentication::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Signalling()
    :
    initial_retransmit_delay{YType::uint16, "initial-retransmit-delay"}
    	,
    fast_local_repair(std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>())
	,hello(nullptr) // presence node
	,patherr(std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>())
	,rate_limit(nullptr) // presence node
	,refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>())
{
    fast_local_repair->parent = this;

    patherr->parent = this;

    refresh->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp";
}

Native::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Ip::Rsvp::Signalling::has_data() const
{
    return initial_retransmit_delay.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (patherr !=  nullptr && patherr->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_retransmit_delay.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (patherr !=  nullptr && patherr->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_retransmit_delay.is_set || is_set(initial_retransmit_delay.yfilter)) leaf_name_data.push_back(initial_retransmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "patherr")
    {
        if(patherr == nullptr)
        {
            patherr = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>();
        }
        return patherr;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Rsvp::Signalling::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_local_repair != nullptr)
    {
        children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(patherr != nullptr)
    {
        children["patherr"] = patherr;
    }

    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay = value;
        initial_retransmit_delay.value_namespace = name_space;
        initial_retransmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "patherr" || name == "rate-limit" || name == "refresh" || name == "initial-retransmit-delay")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    notifications{YType::uint16, "notifications"},
    rate{YType::uint16, "rate"}
{
    yang_name = "fast-local-repair"; yang_parent_name = "signalling";
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    return notifications.is_set
	|| rate.is_set;
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::FastLocalRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifications" || name == "rate")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    statistics{YType::empty, "statistics"}
    	,
    graceful_restart(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>())
{
    graceful_restart->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling";
}

Native::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::has_data() const
{
    return bfd.is_set
	|| statistics.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(statistics.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Hello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "bfd" || name == "statistics")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::GracefulRestart()
    :
    dscp{YType::uint8, "dscp"}
    	,
    mode(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>())
	,refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>())
	,send(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>())
{
    mode->parent = this;

    refresh->parent = this;

    send->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "hello";
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::~GracefulRestart()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_data() const
{
    return dscp.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (refresh !=  nullptr && refresh->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "refresh" || name == "send" || name == "dscp")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::Mode()
    :
    full{YType::empty, "full"},
    help_neighbor{YType::empty, "help-neighbor"}
{
    yang_name = "mode"; yang_parent_name = "graceful-restart";
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::~Mode()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_data() const
{
    return full.is_set
	|| help_neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full.yfilter)
	|| ydk::is_set(help_neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full.is_set || is_set(full.yfilter)) leaf_name_data.push_back(full.get_name_leafdata());
    if (help_neighbor.is_set || is_set(help_neighbor.yfilter)) leaf_name_data.push_back(help_neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full")
    {
        full = value;
        full.value_namespace = name_space;
        full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor = value;
        help_neighbor.value_namespace = name_space;
        help_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full")
    {
        full.yfilter = yfilter;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full" || name == "help-neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{
    yang_name = "refresh"; yang_parent_name = "graceful-restart";
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::Send()
    :
    recovery_time{YType::uint32, "recovery-time"}
{
    yang_name = "send"; yang_parent_name = "graceful-restart";
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::~Send()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_data() const
{
    return recovery_time.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::Patherr()
    :
    state_removal(nullptr) // presence node
{
    yang_name = "patherr"; yang_parent_name = "signalling";
}

Native::Ip::Rsvp::Signalling::Patherr::~Patherr()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_data() const
{
    return (state_removal !=  nullptr && state_removal->has_data());
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_operation() const
{
    return is_set(yfilter)
	|| (state_removal !=  nullptr && state_removal->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "patherr";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Patherr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Patherr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-removal")
    {
        if(state_removal == nullptr)
        {
            state_removal = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr::StateRemoval>();
        }
        return state_removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Patherr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(state_removal != nullptr)
    {
        children["state-removal"] = state_removal;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Patherr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Signalling::Patherr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-removal")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::StateRemoval()
    :
    neighbor{YType::uint8, "neighbor"}
{
    yang_name = "state-removal"; yang_parent_name = "patherr";
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::~StateRemoval()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_data() const
{
    return neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-removal";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/patherr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::RateLimit::RateLimit()
    :
    burst{YType::uint16, "burst"},
    limit{YType::uint16, "limit"},
    maxsize{YType::uint16, "maxsize"},
    period{YType::uint16, "period"}
{
    yang_name = "rate-limit"; yang_parent_name = "signalling";
}

Native::Ip::Rsvp::Signalling::RateLimit::~RateLimit()
{
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_data() const
{
    return burst.is_set
	|| limit.is_set
	|| maxsize.is_set
	|| period.is_set;
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxsize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "maxsize")
    {
        maxsize.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "limit" || name == "maxsize" || name == "period")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Refresh()
    :
    interval{YType::uint32, "interval"},
    misses{YType::uint8, "misses"}
    	,
    reduction(nullptr) // presence node
{
    yang_name = "refresh"; yang_parent_name = "signalling";
}

Native::Ip::Rsvp::Signalling::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set
	|| (reduction !=  nullptr && reduction->has_data());
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter)
	|| (reduction !=  nullptr && reduction->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Refresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reduction")
    {
        if(reduction == nullptr)
        {
            reduction = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh::Reduction>();
        }
        return reduction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reduction != nullptr)
    {
        children["reduction"] = reduction;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reduction" || name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::Reduction()
    :
    ack_delay{YType::uint16, "ack-delay"}
{
    yang_name = "reduction"; yang_parent_name = "refresh";
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::~Reduction()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_data() const
{
    return ack_delay.is_set;
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_delay.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reduction";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/refresh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_delay.is_set || is_set(ack_delay.yfilter)) leaf_name_data.push_back(ack_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-delay")
    {
        ack_delay = value;
        ack_delay.value_namespace = name_space;
        ack_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-delay")
    {
        ack_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-delay")
        return true;
    return false;
}

Native::Ip::Sla::Sla()
    :
    enable(std::make_shared<Native::Ip::Sla::Enable>())
	,group(std::make_shared<Native::Ip::Sla::Group>())
	,logging(std::make_shared<Native::Ip::Sla::Logging>())
	,responder(nullptr) // presence node
	,server(std::make_shared<Native::Ip::Sla::Server>())
{
    enable->parent = this;

    group->parent = this;

    logging->parent = this;

    server->parent = this;

    yang_name = "sla"; yang_parent_name = "ip";
}

Native::Ip::Sla::~Sla()
{
}

bool Native::Ip::Sla::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return (enable !=  nullptr && enable->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Sla::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sla:sla";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Ip::Sla::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Ip::Sla::Group>();
        }
        return group;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Sla::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "reaction-configuration")
    {
        for(auto const & c : reaction_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::ReactionConfiguration>();
        c->parent = this;
        reaction_configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Ip::Sla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "schedule")
    {
        for(auto const & c : schedule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Sla::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    for (auto const & c : entry)
    {
        children[c->get_segment_path()] = c;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : reaction_configuration)
    {
        children[c->get_segment_path()] = c;
    }

    if(responder != nullptr)
    {
        children["responder"] = responder;
    }

    for (auto const & c : schedule)
    {
        children[c->get_segment_path()] = c;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "entry" || name == "group" || name == "logging" || name == "reaction-configuration" || name == "responder" || name == "schedule" || name == "server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Entry()
    :
    number{YType::uint32, "number"}
    	,
    dhcp(std::make_shared<Native::Ip::Sla::Entry::Dhcp>())
	,http(std::make_shared<Native::Ip::Sla::Entry::Http>())
	,icmp_echo(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>())
	,path_echo(std::make_shared<Native::Ip::Sla::Entry::PathEcho>())
	,path_jitter(std::make_shared<Native::Ip::Sla::Entry::PathJitter>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Entry::UdpEcho>())
	,udp_jitter(std::make_shared<Native::Ip::Sla::Entry::UdpJitter>())
{
    dhcp->parent = this;

    http->parent = this;

    icmp_echo->parent = this;

    path_echo->parent = this;

    path_jitter->parent = this;

    udp_echo->parent = this;

    udp_jitter->parent = this;

    yang_name = "entry"; yang_parent_name = "sla";
}

Native::Ip::Sla::Entry::~Entry()
{
}

bool Native::Ip::Sla::Entry::has_data() const
{
    return number.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (icmp_echo !=  nullptr && icmp_echo->has_data())
	|| (path_echo !=  nullptr && path_echo->has_data())
	|| (path_jitter !=  nullptr && path_jitter->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data())
	|| (udp_jitter !=  nullptr && udp_jitter->has_data());
}

bool Native::Ip::Sla::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (icmp_echo !=  nullptr && icmp_echo->has_operation())
	|| (path_echo !=  nullptr && path_echo->has_operation())
	|| (path_jitter !=  nullptr && path_jitter->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (udp_jitter !=  nullptr && udp_jitter->has_operation());
}

std::string Native::Ip::Sla::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Sla::Entry::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Sla::Entry::Http>();
        }
        return http;
    }

    if(child_yang_name == "icmp-echo")
    {
        if(icmp_echo == nullptr)
        {
            icmp_echo = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>();
        }
        return icmp_echo;
    }

    if(child_yang_name == "path-echo")
    {
        if(path_echo == nullptr)
        {
            path_echo = std::make_shared<Native::Ip::Sla::Entry::PathEcho>();
        }
        return path_echo;
    }

    if(child_yang_name == "path-jitter")
    {
        if(path_jitter == nullptr)
        {
            path_jitter = std::make_shared<Native::Ip::Sla::Entry::PathJitter>();
        }
        return path_jitter;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Entry::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "udp-jitter")
    {
        if(udp_jitter == nullptr)
        {
            udp_jitter = std::make_shared<Native::Ip::Sla::Entry::UdpJitter>();
        }
        return udp_jitter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(icmp_echo != nullptr)
    {
        children["icmp-echo"] = icmp_echo;
    }

    if(path_echo != nullptr)
    {
        children["path-echo"] = path_echo;
    }

    if(path_jitter != nullptr)
    {
        children["path-jitter"] = path_jitter;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    if(udp_jitter != nullptr)
    {
        children["udp-jitter"] = udp_jitter;
    }

    return children;
}

void Native::Ip::Sla::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "http" || name == "icmp-echo" || name == "path-echo" || name == "path-jitter" || name == "udp-echo" || name == "udp-jitter" || name == "number")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::IcmpEcho()
    :
    data_pattern{YType::str, "data-pattern"},
    destination{YType::str, "destination"},
    frequency{YType::uint32, "frequency"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    source_interface{YType::str, "source-interface"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint64, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>())
{
    history->parent = this;

    yang_name = "icmp-echo"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::IcmpEcho::~IcmpEcho()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_data() const
{
    return data_pattern.is_set
	|| destination.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| source_interface.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_pattern.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::IcmpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IcmpEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_pattern.is_set || is_set(data_pattern.yfilter)) leaf_name_data.push_back(data_pattern.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-pattern")
    {
        data_pattern = value;
        data_pattern.value_namespace = name_space;
        data_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-pattern")
    {
        data_pattern.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "data-pattern" || name == "destination" || name == "frequency" || name == "owner" || name == "request-data-size" || name == "source-interface" || name == "source-ip" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::History()
    :
    buckets_kept{YType::uint8, "buckets-kept"},
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    filter{YType::enumeration, "filter"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    lives_kept{YType::uint8, "lives-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "icmp-echo";
}

Native::Ip::Sla::Entry::IcmpEcho::History::~History()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_data() const
{
    return buckets_kept.is_set
	|| distributions_of_statistics_kept.is_set
	|| filter.is_set
	|| hours_of_statistics_kept.is_set
	|| lives_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets_kept.yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(lives_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::IcmpEcho::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_kept.is_set || is_set(buckets_kept.yfilter)) leaf_name_data.push_back(buckets_kept.get_name_leafdata());
    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (lives_kept.is_set || is_set(lives_kept.yfilter)) leaf_name_data.push_back(lives_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept = value;
        buckets_kept.value_namespace = name_space;
        buckets_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lives-kept")
    {
        lives_kept = value;
        lives_kept.value_namespace = name_space;
        lives_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept.yfilter = yfilter;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "lives-kept")
    {
        lives_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "buckets-kept" || name == "distributions-of-statistics-kept" || name == "filter" || name == "hours-of-statistics-kept" || name == "lives-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::Enhanced()
    :
    buckets{YType::uint8, "buckets"},
    interval{YType::uint32, "interval"}
{
    yang_name = "enhanced"; yang_parent_name = "history";
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_data() const
{
    return buckets.is_set
	|| interval.is_set;
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enhanced' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets" || name == "interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathEcho::PathEcho()
    :
    dst_ip{YType::str, "dst-ip"},
    hops_of_statistics_kept{YType::uint8, "hops-of-statistics-kept"},
    paths_of_statistics_kept{YType::uint8, "paths-of-statistics-kept"},
    samples_of_history_kept{YType::uint8, "samples-of-history-kept"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "path-echo"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::PathEcho::~PathEcho()
{
}

bool Native::Ip::Sla::Entry::PathEcho::has_data() const
{
    return dst_ip.is_set
	|| hops_of_statistics_kept.is_set
	|| paths_of_statistics_kept.is_set
	|| samples_of_history_kept.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::PathEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(hops_of_statistics_kept.yfilter)
	|| ydk::is_set(paths_of_statistics_kept.yfilter)
	|| ydk::is_set(samples_of_history_kept.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Sla::Entry::PathEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::PathEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (hops_of_statistics_kept.is_set || is_set(hops_of_statistics_kept.yfilter)) leaf_name_data.push_back(hops_of_statistics_kept.get_name_leafdata());
    if (paths_of_statistics_kept.is_set || is_set(paths_of_statistics_kept.yfilter)) leaf_name_data.push_back(paths_of_statistics_kept.get_name_leafdata());
    if (samples_of_history_kept.is_set || is_set(samples_of_history_kept.yfilter)) leaf_name_data.push_back(samples_of_history_kept.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::PathEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept = value;
        hops_of_statistics_kept.value_namespace = name_space;
        hops_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept = value;
        paths_of_statistics_kept.value_namespace = name_space;
        paths_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept = value;
        samples_of_history_kept.value_namespace = name_space;
        samples_of_history_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "hops-of-statistics-kept" || name == "paths-of-statistics-kept" || name == "samples-of-history-kept" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::PathJitter()
    :
    dst_ip{YType::str, "dst-ip"},
    frequency{YType::uint32, "frequency"},
    lsr_path{YType::str, "lsr-path"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default_>())
{
    default_->parent = this;

    yang_name = "path-jitter"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::PathJitter::~PathJitter()
{
}

bool Native::Ip::Sla::Entry::PathJitter::has_data() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dst_ip.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::Sla::Entry::PathJitter::has_operation() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::Sla::Entry::PathJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-jitter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::PathJitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathJitter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto lsr_path_name_datas = lsr_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsr_path_name_datas.begin(), lsr_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::Sla::Entry::PathJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.append(value);
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dst-ip" || name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "source-ip" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::Default_::Default_()
    :
    frequency{YType::empty, "frequency"},
    lsr_path{YType::empty, "lsr-path"},
    owner{YType::empty, "owner"},
    request_data_size{YType::empty, "request-data-size"},
    tag{YType::empty, "tag"},
    threshold{YType::empty, "threshold"},
    timeout{YType::empty, "timeout"},
    tos{YType::empty, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::empty, "vrf"}
{
    yang_name = "default"; yang_parent_name = "path-jitter";
}

Native::Ip::Sla::Entry::PathJitter::Default_::~Default_()
{
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_data() const
{
    return frequency.is_set
	|| lsr_path.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set;
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Sla::Entry::PathJitter::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::PathJitter::Default_::get_entity_path(Entity* ancestor) const
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

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (lsr_path.is_set || is_set(lsr_path.yfilter)) leaf_name_data.push_back(lsr_path.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::PathJitter::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path = value;
        lsr_path.value_namespace = name_space;
        lsr_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpEcho::UdpEcho()
    :
    dest_addr{YType::str, "dest-addr"},
    dest_port{YType::uint16, "dest-port"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-echo"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Entry::UdpEcho::has_data() const
{
    return dest_addr.is_set
	|| dest_port.is_set
	|| source_ip.is_set
	|| source_port.is_set;
}

bool Native::Ip::Sla::Entry::UdpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpEcho' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-addr" || name == "dest-port" || name == "source-ip" || name == "source-port")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::UdpJitter()
    :
    dest_addr{YType::str, "dest-addr"},
    interval{YType::uint16, "interval"},
    num_packets{YType::uint16, "num-packets"},
    owner{YType::str, "owner"},
    portno{YType::uint16, "portno"},
    request_data_size{YType::uint16, "request-data-size"},
    source_ip{YType::str, "source-ip"},
    tag{YType::str, "tag"},
    threshold{YType::uint16, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    traffic_class{YType::uint8, "traffic-class"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>())
{
    history->parent = this;

    yang_name = "udp-jitter"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::UdpJitter::~UdpJitter()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::has_data() const
{
    return dest_addr.is_set
	|| interval.is_set
	|| num_packets.is_set
	|| owner.is_set
	|| portno.is_set
	|| request_data_size.is_set
	|| source_ip.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| traffic_class.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(num_packets.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(portno.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpJitter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UdpJitter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (num_packets.is_set || is_set(num_packets.yfilter)) leaf_name_data.push_back(num_packets.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (portno.is_set || is_set(portno.yfilter)) leaf_name_data.push_back(portno.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-packets")
    {
        num_packets = value;
        num_packets.value_namespace = name_space;
        num_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portno")
    {
        portno = value;
        portno.value_namespace = name_space;
        portno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "num-packets")
    {
        num_packets.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "portno")
    {
        portno.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "dest-addr" || name == "interval" || name == "num-packets" || name == "owner" || name == "portno" || name == "request-data-size" || name == "source-ip" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "traffic-class" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::History()
    :
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "udp-jitter";
}

Native::Ip::Sla::Entry::UdpJitter::History::~History()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_data() const
{
    return distributions_of_statistics_kept.is_set
	|| hours_of_statistics_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpJitter::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "distributions-of-statistics-kept" || name == "hours-of-statistics-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::Enhanced()
    :
    buckets{YType::uint8, "buckets"},
    interval{YType::uint16, "interval"}
{
    yang_name = "enhanced"; yang_parent_name = "history";
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_data() const
{
    return buckets.is_set
	|| interval.is_set;
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enhanced' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buckets" || name == "interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Http()
    :
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    vrf{YType::str, "vrf"}
    	,
    get(std::make_shared<Native::Ip::Sla::Entry::Http::Get>())
	,raw(std::make_shared<Native::Ip::Sla::Entry::Http::Raw>())
{
    get->parent = this;

    raw->parent = this;

    yang_name = "http"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::Http::~Http()
{
}

bool Native::Ip::Sla::Entry::Http::has_data() const
{
    return owner.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (get !=  nullptr && get->has_data())
	|| (raw !=  nullptr && raw->has_data());
}

bool Native::Ip::Sla::Entry::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (get !=  nullptr && get->has_operation())
	|| (raw !=  nullptr && raw->has_operation());
}

std::string Native::Ip::Sla::Entry::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Http' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "get")
    {
        if(get == nullptr)
        {
            get = std::make_shared<Native::Ip::Sla::Entry::Http::Get>();
        }
        return get;
    }

    if(child_yang_name == "raw")
    {
        if(raw == nullptr)
        {
            raw = std::make_shared<Native::Ip::Sla::Entry::Http::Raw>();
        }
        return raw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(get != nullptr)
    {
        children["get"] = get;
    }

    if(raw != nullptr)
    {
        children["raw"] = raw;
    }

    return children;
}

void Native::Ip::Sla::Entry::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "get" || name == "raw" || name == "owner" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Get::Get()
    :
    name_server{YType::str, "name-server"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    url{YType::str, "url"}
{
    yang_name = "get"; yang_parent_name = "http";
}

Native::Ip::Sla::Entry::Http::Get::~Get()
{
}

bool Native::Ip::Sla::Entry::Http::Get::has_data() const
{
    return name_server.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| url.is_set;
}

bool Native::Ip::Sla::Entry::Http::Get::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_server.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Get::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "get";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Http::Get::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Get' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Get::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Get::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Http::Get::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Get::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Get::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-server" || name == "source-ip" || name == "source-port" || name == "url")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Raw::Raw()
    :
    name_server{YType::str, "name-server"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    url{YType::str, "url"}
{
    yang_name = "raw"; yang_parent_name = "http";
}

Native::Ip::Sla::Entry::Http::Raw::~Raw()
{
}

bool Native::Ip::Sla::Entry::Http::Raw::has_data() const
{
    return name_server.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| url.is_set;
}

bool Native::Ip::Sla::Entry::Http::Raw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name_server.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Raw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Http::Raw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Raw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Raw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Raw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Http::Raw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Raw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Raw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-server" || name == "source-ip" || name == "source-port" || name == "url")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Dhcp::Dhcp()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "dhcp"; yang_parent_name = "entry";
}

Native::Ip::Sla::Entry::Dhcp::~Dhcp()
{
}

bool Native::Ip::Sla::Entry::Dhcp::has_data() const
{
    return dst_ip.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Sla::Entry::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Entry::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Entry::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Sla::Enable::Enable()
    :
    reaction_alerts{YType::empty, "reaction-alerts"}
{
    yang_name = "enable"; yang_parent_name = "sla";
}

Native::Ip::Sla::Enable::~Enable()
{
}

bool Native::Ip::Sla::Enable::has_data() const
{
    return reaction_alerts.is_set;
}

bool Native::Ip::Sla::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reaction_alerts.yfilter);
}

std::string Native::Ip::Sla::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reaction_alerts.is_set || is_set(reaction_alerts.yfilter)) leaf_name_data.push_back(reaction_alerts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts = value;
        reaction_alerts.value_namespace = name_space;
        reaction_alerts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction-alerts")
        return true;
    return false;
}

Native::Ip::Sla::Responder::Responder()
    :
    tcp_connect(std::make_shared<Native::Ip::Sla::Responder::TcpConnect>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Responder::UdpEcho>())
{
    tcp_connect->parent = this;

    udp_echo->parent = this;

    yang_name = "responder"; yang_parent_name = "sla";
}

Native::Ip::Sla::Responder::~Responder()
{
}

bool Native::Ip::Sla::Responder::has_data() const
{
    return (tcp_connect !=  nullptr && tcp_connect->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::Ip::Sla::Responder::has_operation() const
{
    return is_set(yfilter)
	|| (tcp_connect !=  nullptr && tcp_connect->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::Ip::Sla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp-connect")
    {
        if(tcp_connect == nullptr)
        {
            tcp_connect = std::make_shared<Native::Ip::Sla::Responder::TcpConnect>();
        }
        return tcp_connect;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Responder::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp_connect != nullptr)
    {
        children["tcp-connect"] = tcp_connect;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::Ip::Sla::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-connect" || name == "udp-echo")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::UdpEcho()
    :
    port{YType::uint16, "port"}
{
    yang_name = "udp-echo"; yang_parent_name = "responder";
}

Native::Ip::Sla::Responder::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::UdpEcho::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        for(auto const & c : ipaddress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Responder::UdpEcho::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{
    yang_name = "ipaddress"; yang_parent_name = "udp-echo";
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress" <<"[host='" <<host <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/udp-echo/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::TcpConnect::TcpConnect()
    :
    port{YType::uint16, "port"}
{
    yang_name = "tcp-connect"; yang_parent_name = "responder";
}

Native::Ip::Sla::Responder::TcpConnect::~TcpConnect()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::TcpConnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-connect";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::TcpConnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::TcpConnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        for(auto const & c : ipaddress)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Responder::TcpConnect::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::TcpConnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipaddress)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::TcpConnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::TcpConnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::TcpConnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{
    yang_name = "ipaddress"; yang_parent_name = "tcp-connect";
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_data() const
{
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress" <<"[host='" <<host <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/tcp-connect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Logging::Logging()
    :
    traps{YType::empty, "traps"}
{
    yang_name = "logging"; yang_parent_name = "sla";
}

Native::Ip::Sla::Logging::~Logging()
{
}

bool Native::Ip::Sla::Logging::has_data() const
{
    return traps.is_set;
}

bool Native::Ip::Sla::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traps.yfilter);
}

std::string Native::Ip::Sla::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traps")
    {
        traps = value;
        traps.value_namespace = name_space;
        traps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traps")
        return true;
    return false;
}

Native::Ip::Sla::Group::Group()
{
    yang_name = "group"; yang_parent_name = "sla";
}

Native::Ip::Sla::Group::~Group()
{
}

bool Native::Ip::Sla::Group::has_data() const
{
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Sla::Group::has_operation() const
{
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Sla::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        for(auto const & c : schedule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Group::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schedule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"}
{
    yang_name = "schedule"; yang_parent_name = "group";
}

Native::Ip::Sla::Group::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Group::Schedule::has_data() const
{
    for (std::size_t index=0; index<probe_ids.size(); index++)
    {
        if(probe_ids[index]->has_data())
            return true;
    }
    return entry_number.is_set;
}

bool Native::Ip::Sla::Group::Schedule::has_operation() const
{
    for (std::size_t index=0; index<probe_ids.size(); index++)
    {
        if(probe_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule" <<"[entry-number='" <<entry_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-ids")
    {
        for(auto const & c : probe_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds>();
        c->parent = this;
        probe_ids.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : probe_ids)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-ids" || name == "entry-number")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::ProbeIds()
    :
    word{YType::str, "word"}
    	,
    schedule_period(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>())
{
    schedule_period->parent = this;

    yang_name = "probe-ids"; yang_parent_name = "schedule";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::~ProbeIds()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_data() const
{
    return word.is_set
	|| (schedule_period !=  nullptr && schedule_period->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (schedule_period !=  nullptr && schedule_period->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-ids" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProbeIds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule-period")
    {
        if(schedule_period == nullptr)
        {
            schedule_period = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>();
        }
        return schedule_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(schedule_period != nullptr)
    {
        children["schedule-period"] = schedule_period;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-period" || name == "word")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::SchedulePeriod()
    :
    life{YType::str, "life"},
    seconds{YType::uint32, "seconds"}
    	,
    frequency(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>())
	,start_time(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>())
{
    frequency->parent = this;

    start_time->parent = this;

    yang_name = "schedule-period"; yang_parent_name = "probe-ids";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::~SchedulePeriod()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_data() const
{
    return life.is_set
	|| seconds.is_set
	|| (frequency !=  nullptr && frequency->has_data())
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| (frequency !=  nullptr && frequency->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-period";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SchedulePeriod' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency")
    {
        if(frequency == nullptr)
        {
            frequency = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>();
        }
        return frequency;
    }

    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frequency != nullptr)
    {
        children["frequency"] = frequency;
    }

    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "start-time" || name == "life" || name == "seconds")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::Frequency()
    :
    frequency_val{YType::uint32, "frequency-val"},
    range{YType::str, "range"}
{
    yang_name = "frequency"; yang_parent_name = "schedule-period";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::~Frequency()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_data() const
{
    return frequency_val.is_set
	|| range.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency_val.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frequency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency_val.is_set || is_set(frequency_val.yfilter)) leaf_name_data.push_back(frequency_val.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency-val")
    {
        frequency_val = value;
        frequency_val.value_namespace = name_space;
        frequency_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency-val")
    {
        frequency_val.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-val" || name == "range")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::StartTime()
    :
    now{YType::empty, "now"}
{
    yang_name = "start-time"; yang_parent_name = "schedule-period";
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_data() const
{
    return now.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(now.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "now")
        return true;
    return false;
}

Native::Ip::Sla::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"},
    ageout{YType::uint32, "ageout"},
    life{YType::str, "life"},
    recurring{YType::empty, "recurring"}
    	,
    start_time(std::make_shared<Native::Ip::Sla::Schedule::StartTime>())
{
    start_time->parent = this;

    yang_name = "schedule"; yang_parent_name = "sla";
}

Native::Ip::Sla::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Schedule::has_data() const
{
    return entry_number.is_set
	|| ageout.is_set
	|| life.is_set
	|| recurring.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter)
	|| ydk::is_set(ageout.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule" <<"[entry-number='" <<entry_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.yfilter)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Schedule::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Native::Ip::Sla::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout")
    {
        ageout = value;
        ageout.value_namespace = name_space;
        ageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
    if(value_path == "ageout")
    {
        ageout.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "entry-number" || name == "ageout" || name == "life" || name == "recurring")
        return true;
    return false;
}

Native::Ip::Sla::Schedule::StartTime::StartTime()
    :
    after{YType::str, "after"},
    hour_min{YType::str, "hour-min"},
    hour_min_sec{YType::str, "hour-min-sec"},
    now{YType::empty, "now"},
    pending{YType::empty, "pending"},
    random{YType::uint32, "random"}
{
    yang_name = "start-time"; yang_parent_name = "schedule";
}

Native::Ip::Sla::Schedule::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Schedule::StartTime::has_data() const
{
    return after.is_set
	|| hour_min.is_set
	|| hour_min_sec.is_set
	|| now.is_set
	|| pending.is_set
	|| random.is_set;
}

bool Native::Ip::Sla::Schedule::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after.yfilter)
	|| ydk::is_set(hour_min.yfilter)
	|| ydk::is_set(hour_min_sec.yfilter)
	|| ydk::is_set(now.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(random.yfilter);
}

std::string Native::Ip::Sla::Schedule::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::Schedule::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after.is_set || is_set(after.yfilter)) leaf_name_data.push_back(after.get_name_leafdata());
    if (hour_min.is_set || is_set(hour_min.yfilter)) leaf_name_data.push_back(hour_min.get_name_leafdata());
    if (hour_min_sec.is_set || is_set(hour_min_sec.yfilter)) leaf_name_data.push_back(hour_min_sec.get_name_leafdata());
    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (random.is_set || is_set(random.yfilter)) leaf_name_data.push_back(random.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::Schedule::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Schedule::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Sla::Schedule::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after")
    {
        after = value;
        after.value_namespace = name_space;
        after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour-min")
    {
        hour_min = value;
        hour_min.value_namespace = name_space;
        hour_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec = value;
        hour_min_sec.value_namespace = name_space;
        hour_min_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random")
    {
        random = value;
        random.value_namespace = name_space;
        random.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Schedule::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after")
    {
        after.yfilter = yfilter;
    }
    if(value_path == "hour-min")
    {
        hour_min.yfilter = yfilter;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec.yfilter = yfilter;
    }
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "random")
    {
        random.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Schedule::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after" || name == "hour-min" || name == "hour-min-sec" || name == "now" || name == "pending" || name == "random")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::ReactionConfiguration()
    :
    entry_number{YType::uint64, "entry-number"}
    	,
    react(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>())
{
    react->parent = this;

    yang_name = "reaction-configuration"; yang_parent_name = "sla";
}

Native::Ip::Sla::ReactionConfiguration::~ReactionConfiguration()
{
}

bool Native::Ip::Sla::ReactionConfiguration::has_data() const
{
    return entry_number.is_set
	|| (react !=  nullptr && react->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter)
	|| (react !=  nullptr && react->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-configuration" <<"[entry-number='" <<entry_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "react")
    {
        if(react == nullptr)
        {
            react = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>();
        }
        return react;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(react != nullptr)
    {
        children["react"] = react;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "react" || name == "entry-number")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::React()
    :
    connectionloss(nullptr) // presence node
	,rtt(nullptr) // presence node
{
    yang_name = "react"; yang_parent_name = "reaction-configuration";
}

Native::Ip::Sla::ReactionConfiguration::React::~React()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_data() const
{
    return (connectionloss !=  nullptr && connectionloss->has_data())
	|| (rtt !=  nullptr && rtt->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_operation() const
{
    return is_set(yfilter)
	|| (connectionloss !=  nullptr && connectionloss->has_operation())
	|| (rtt !=  nullptr && rtt->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react";

    return path_buffer.str();

}

const EntityPath Native::Ip::Sla::ReactionConfiguration::React::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'React' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Sla::ReactionConfiguration::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connectionLoss")
    {
        if(connectionloss == nullptr)
        {
            connectionloss = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Connectionloss>();
        }
        return connectionloss;
    }

    if(child_yang_name == "rtt")
    {
        if(rtt == nullptr)
        {
            rtt = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt>();
        }
        return rtt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::ReactionConfiguration::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connectionloss != nullptr)
    {
        children["connectionLoss"] = connectionloss;
    }

    if(rtt != nullptr)
    {
        children["rtt"] = rtt;
    }

    return children;
}

void Native::Ip::Sla::ReactionConfiguration::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connectionLoss" || name == "rtt")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Msdp::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Msdp::Vrf::Rpf::rfc3618 {0, "rfc3618"};

const Enum::YLeaf Native::Ip::Nat::Pool::Type::match_host {0, "match-host"};
const Enum::YLeaf Native::Ip::Nat::Pool::Type::rotary {1, "rotary"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Proto::tcp {0, "tcp"};
const Enum::YLeaf Native::Ip::Nat::Inside::Source::Static_::NatStaticTransportInterfaceList::Proto::udp {1, "udp"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::aol_group {0, "aol-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::apple_group {1, "apple-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::apple_talk_group {2, "apple-talk-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::banyan_group {3, "banyan-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::bittorrent_group {4, "bittorrent-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::capwap_group {5, "capwap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::cisco_jabber_group {6, "cisco-jabber-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::cisco_phone_group {7, "cisco-phone-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::corba_group {8, "corba-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::dameware_group {9, "dameware-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::edonkey_emule_group {10, "edonkey-emule-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::espn_group {11, "espn-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::fasttrack_group {12, "fasttrack-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::flash_group {13, "flash-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::fring_group {14, "fring-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ftp_group {15, "ftp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::gnutella_group {16, "gnutella-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::google_group {17, "google-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::gtalk_group {18, "gtalk-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::icq_group {19, "icq-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::imap_group {20, "imap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ipsec_group {21, "ipsec-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::irc_group {22, "irc-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::kakao_group {23, "kakao-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::kerberos_group {24, "kerberos-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ldap_group {25, "ldap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ms_cloud_group {26, "ms-cloud-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ms_crm_group {27, "ms-crm-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::ms_lync_group {28, "ms-lync-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::msn_messenger_group {29, "msn-messenger-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::netbios_group {30, "netbios-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::nntp_group {31, "nntp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::npmp_group {32, "npmp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::other {33, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::pop3_group {34, "pop3-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::prm_group {35, "prm-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::qq_group {36, "qq-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::skype_group {37, "skype-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::smtp_group {38, "smtp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::snmp_group {39, "snmp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::sqlsvr_group {40, "sqlsvr-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::stun_group {41, "stun-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::telepresence_group {42, "telepresence-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::tftp_group {43, "tftp-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::vmware_group {44, "vmware-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::vnc_group {45, "vnc-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::wap_group {46, "wap-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::webex_group {47, "webex-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::xns_xerox_group {48, "xns-xerox-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::xunlei_group {49, "xunlei-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::yahoo_group {50, "yahoo-group"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::ApplicationGroup::yahoo_messenger_group {51, "yahoo-messenger-group"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevance::business_irrelevant {0, "business-irrelevant"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevance::business_relevant {1, "business-relevant"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::BusinessRelevance::default_ {2, "default"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::anonymizers {0, "anonymizers"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::backup_and_storage {1, "backup-and-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::browsing {2, "browsing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::business_and_productivity_tools {3, "business-and-productivity-tools"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_file_sharing {4, "consumer-file-sharing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_internet {5, "consumer-internet"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_messaging {6, "consumer-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::consumer_streaming {7, "consumer-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::database {8, "database"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::email {9, "email"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::epayement {10, "epayement"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::file_sharing {11, "file-sharing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::gaming {12, "gaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::industrial_protocols {13, "industrial-protocols"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::instant_messaging {14, "instant-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::inter_process_rpc {15, "inter-process-rpc"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::internet_security {16, "internet-security"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::layer3_over_ip {17, "layer3-over-ip"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::location_based_services {18, "location-based-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::net_admin {19, "net-admin"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::newsgroup {20, "newsgroup"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::other {21, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::social_networking {22, "social-networking"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::software_updates {23, "software-updates"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::trojan {24, "trojan"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Category::voice_and_video {25, "voice-and-video"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Encrypted::encrypted_no {0, "encrypted-no"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Encrypted::encrypted_unassigned {1, "encrypted-unassigned"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Encrypted::encrypted_yes {2, "encrypted-yes"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::authentication_services {0, "authentication-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::backup_systems {1, "backup-systems"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_audio_streaming {2, "consumer-audio-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_cloud_storage {3, "consumer-cloud-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_multimedia_messaging {4, "consumer-multimedia-messaging"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_video_streaming {5, "consumer-video-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::consumer_web_browsing {6, "consumer-web-browsing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::control_and_signaling {7, "control-and-signaling"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::desktop_virtualization {8, "desktop-virtualization"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_cloud_data_storage {9, "enterprise-cloud-data-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_cloud_services {10, "enterprise-cloud-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_data_center_storage {11, "enterprise-data-center-storage"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_media_conferencing {12, "enterprise-media-conferencing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_realtime_apps {13, "enterprise-realtime-apps"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_rich_media_content {14, "enterprise-rich-media-content"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_sw_deployment_tools {15, "enterprise-sw-deployment-tools"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_transactional_apps {16, "enterprise-transactional-apps"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_video_broadcast {17, "enterprise-video-broadcast"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::enterprise_voice_collaboration {18, "enterprise-voice-collaboration"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::file_transfer {19, "file-transfer"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::naming_services {20, "naming-services"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::network_management {21, "network-management"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::os_updates {22, "os-updates"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::other {23, "other"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::p2p_file_transfer {24, "p2p-file-transfer"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::p2p_networking {25, "p2p-networking"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::remote_access_terminal {26, "remote-access-terminal"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::routing_protocol {27, "routing-protocol"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::SubCategory::tunneling_protocols {28, "tunneling-protocols"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::broadcast_video {0, "broadcast-video"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::multimedia_conferencing {2, "multimedia-conferencing"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::multimedia_streaming {3, "multimedia-streaming"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::network_control {4, "network-control"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::ops_admin_mgmt {5, "ops-admin-mgmt"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::real_time_interactive {6, "real-time-interactive"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::signaling {7, "signaling"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::transactional_data {8, "transactional-data"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::TrafficClass::voip_telephony {9, "voip-telephony"};

const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Tunnel::tunnel_no {0, "tunnel-no"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Tunnel::tunnel_unassigned {1, "tunnel-unassigned"};
const Enum::YLeaf Native::Ip::Nbar::AttributeMap::Attribute::Tunnel::tunnel_yes {2, "tunnel-yes"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::all {0, "all"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::failures {1, "failures"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::none {2, "none"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::overThreshold {3, "overThreshold"};

const Enum::YLeaf Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Life::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Sla::Schedule::Life::forever {0, "forever"};


}
}

