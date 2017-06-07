
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_15.hpp"
#include "Cisco_IOS_XE_native_16.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Ipv6::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"}
    	,
    deny(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Deny>())
	,permit(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "seq"; yang_parent_name = "prefixes";
}

Native::Ipv6::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(operation)
	|| is_set(no.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq" <<"[no='" <<no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::Prefixes::Seq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Seq' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.operation)) leaf_name_data.push_back(no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no")
    {
        no = value;
    }
}

Native::Ipv6::PrefixList::Prefixes::Seq::Deny::Deny()
    :
    ge{YType::uint16, "ge"},
    ip{YType::str, "ip"},
    le{YType::uint16, "le"}
{
    yang_name = "deny"; yang_parent_name = "seq";
}

Native::Ipv6::PrefixList::Prefixes::Seq::Deny::~Deny()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_data() const
{
    return ge.is_set
	|| ip.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_operation() const
{
    return is_set(operation)
	|| is_set(ge.operation)
	|| is_set(ip.operation)
	|| is_set(le.operation);
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ipv6::PrefixList::Prefixes::Seq::Permit::Permit()
    :
    ge{YType::uint16, "ge"},
    ip{YType::str, "ip"},
    le{YType::uint16, "le"}
{
    yang_name = "permit"; yang_parent_name = "seq";
}

Native::Ipv6::PrefixList::Prefixes::Seq::Permit::~Permit()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_data() const
{
    return ge.is_set
	|| ip.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(ge.operation)
	|| is_set(ip.operation)
	|| is_set(le.operation);
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ipv6::Mld::Mld()
    :
    ssm_map(std::make_shared<Native::Ipv6::Mld::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "mld"; yang_parent_name = "ipv6";
}

Native::Ipv6::Mld::~Mld()
{
}

bool Native::Ipv6::Mld::has_data() const
{
    return (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ipv6::Mld::has_operation() const
{
    return is_set(operation)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ipv6::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mld:mld";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Mld::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ipv6::Mld::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ipv6::Mld::set_value(const std::string & value_path, std::string value)
{
}

Native::Ipv6::Mld::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ipv6::Mld::SsmMap::Query>())
	,static_(std::make_shared<Native::Ipv6::Mld::SsmMap::Static_>())
{
    query->parent = this;

    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "mld";
}

Native::Ipv6::Mld::SsmMap::~SsmMap()
{
}

bool Native::Ipv6::Mld::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ipv6::Mld::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ipv6::Mld::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Mld::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ipv6::Mld::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Mld::SsmMap::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::get_children() const
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

void Native::Ipv6::Mld::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Ipv6::Mld::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{
    yang_name = "query"; yang_parent_name = "ssm-map";
}

Native::Ipv6::Mld::SsmMap::Query::~Query()
{
}

bool Native::Ipv6::Mld::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Query::has_operation() const
{
    return is_set(operation)
	|| is_set(dns.operation);
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Mld::SsmMap::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.operation)) leaf_name_data.push_back(dns.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Mld::SsmMap::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns")
    {
        dns = value;
    }
}

Native::Ipv6::Mld::SsmMap::Static_::Static_()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{
    yang_name = "static"; yang_parent_name = "ssm-map";
}

Native::Ipv6::Mld::SsmMap::Static_::~Static_()
{
}

bool Native::Ipv6::Mld::SsmMap::Static_::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(acl.operation)
	|| is_set(source_ip.operation);
}

std::string Native::Ipv6::Mld::SsmMap::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Mld::SsmMap::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Mld::SsmMap::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
}

Native::Ipv6::MulticastRouting::MulticastRouting()
    :
    vrf{YType::str, "vrf"}
{
    yang_name = "multicast-routing"; yang_parent_name = "ipv6";
}

Native::Ipv6::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ipv6::MulticastRouting::has_data() const
{
    return vrf.is_set;
}

bool Native::Ipv6::MulticastRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Ipv6::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::MulticastRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::MulticastRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ipv6::Rip::Rip()
    :
    vrf_mode{YType::enumeration, "vrf-mode"}
{
    yang_name = "rip"; yang_parent_name = "ipv6";
}

Native::Ipv6::Rip::~Rip()
{
}

bool Native::Ipv6::Rip::has_data() const
{
    return vrf_mode.is_set;
}

bool Native::Ipv6::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_mode.operation);
}

std::string Native::Ipv6::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip";

    return path_buffer.str();

}

const EntityPath Native::Ipv6::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_mode.is_set || is_set(vrf_mode.operation)) leaf_name_data.push_back(vrf_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ipv6::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ipv6::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-mode")
    {
        vrf_mode = value;
    }
}

Native::Vlan::Vlan()
    :
    access_log(std::make_shared<Native::Vlan::AccessLog>())
	,accounting(nullptr) // presence node
	,dot1q(std::make_shared<Native::Vlan::Dot1Q>())
	,internal(std::make_shared<Native::Vlan::Internal>())
{
    access_log->parent = this;

    dot1q->parent = this;

    internal->parent = this;

    yang_name = "vlan"; yang_parent_name = "native";
}

Native::Vlan::~Vlan()
{
}

bool Native::Vlan::has_data() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return (access_log !=  nullptr && access_log->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (internal !=  nullptr && internal->has_data());
}

bool Native::Vlan::has_operation() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (access_log !=  nullptr && access_log->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (internal !=  nullptr && internal->has_operation());
}

std::string Native::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-log")
    {
        if(access_log == nullptr)
        {
            access_log = std::make_shared<Native::Vlan::AccessLog>();
        }
        return access_log;
    }

    if(child_yang_name == "access-map")
    {
        for(auto const & c : access_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::AccessMap>();
        c->parent = this;
        access_map.push_back(c);
        return c;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Vlan::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "configuration")
    {
        for(auto const & c : configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::Configuration>();
        c->parent = this;
        configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Vlan::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Vlan::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "vlan-list")
    {
        for(auto const & c : vlan_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_log != nullptr)
    {
        children["access-log"] = access_log;
    }

    for (auto const & c : access_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    for (auto const & c : configuration)
    {
        children[c->get_segment_path()] = c;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    for (auto const & c : vlan_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Vlan::AccessMap::AccessMap()
    :
    name{YType::str, "name"},
    action{YType::enumeration, "action"},
    value_{YType::uint16, "value"}
    	,
    match(std::make_shared<Native::Vlan::AccessMap::Match>())
{
    match->parent = this;

    yang_name = "access-map"; yang_parent_name = "vlan";
}

Native::Vlan::AccessMap::~AccessMap()
{
}

bool Native::Vlan::AccessMap::has_data() const
{
    return name.is_set
	|| action.is_set
	|| value_.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Vlan::AccessMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(action.operation)
	|| is_set(value_.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Vlan::AccessMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vlan::AccessMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Vlan::AccessMap::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Vlan::AccessMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Vlan::AccessMap::Match::Match()
    :
    ip(std::make_shared<Native::Vlan::AccessMap::Match::Ip>())
	,ipv6(std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>())
{
    ip->parent = this;

    ipv6->parent = this;

    yang_name = "match"; yang_parent_name = "access-map";
}

Native::Vlan::AccessMap::Match::~Match()
{
}

bool Native::Vlan::AccessMap::Match::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vlan::AccessMap::Match::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vlan::AccessMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Vlan::AccessMap::Match::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::AccessMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vlan::AccessMap::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Vlan::AccessMap::Match::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{
    yang_name = "ipv6"; yang_parent_name = "match";
}

Native::Vlan::AccessMap::Match::Ipv6::~Ipv6()
{
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Vlan::AccessMap::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Vlan::AccessMap::Match::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::AccessMap::Match::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::Vlan::AccessMap::Match::Ip::Ip()
    :
    address{YType::str, "address"}
{
    yang_name = "ip"; yang_parent_name = "match";
}

Native::Vlan::AccessMap::Match::Ip::~Ip()
{
}

bool Native::Vlan::AccessMap::Match::Ip::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ip::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Vlan::AccessMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Vlan::AccessMap::Match::Ip::get_entity_path(Entity* ancestor) const
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


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::AccessMap::Match::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::Vlan::Configuration::Configuration()
    :
    vlan_id{YType::str, "vlan-id"}
    	,
    ip(std::make_shared<Native::Vlan::Configuration::Ip>())
{
    ip->parent = this;

    yang_name = "configuration"; yang_parent_name = "vlan";
}

Native::Vlan::Configuration::~Configuration()
{
}

bool Native::Vlan::Configuration::has_data() const
{
    return vlan_id.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Vlan::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Vlan::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:configuration" <<"[vlan-id='" <<vlan_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::Configuration::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Vlan::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Native::Vlan::Configuration::Ip::Ip()
    :
    flow(std::make_shared<Native::Vlan::Configuration::Ip::Flow>())
{
    flow->parent = this;

    yang_name = "ip"; yang_parent_name = "configuration";
}

Native::Vlan::Configuration::Ip::~Ip()
{
}

bool Native::Vlan::Configuration::Ip::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Vlan::Configuration::Ip::has_operation() const
{
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Vlan::Configuration::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Configuration::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Vlan::Configuration::Ip::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Vlan::Configuration::Ip::Flow::Flow()
{
    yang_name = "flow"; yang_parent_name = "ip";
}

Native::Vlan::Configuration::Ip::Flow::~Flow()
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vlan::Configuration::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Vlan::Configuration::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Configuration::Ip::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Vlan::Configuration::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::Flow::set_value(const std::string & value_path, std::string value)
{
}

Native::Vlan::Configuration::Ip::Flow::Monitor::Monitor()
    :
    flow_monitor{YType::str, "flow-monitor"},
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Vlan::Configuration::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_data() const
{
    return flow_monitor.is_set
	|| input.is_set
	|| output.is_set;
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_monitor.operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Vlan::Configuration::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[flow-monitor='" <<flow_monitor <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Configuration::Ip::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_monitor.is_set || is_set(flow_monitor.operation)) leaf_name_data.push_back(flow_monitor.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor = value;
    }
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Vlan::Filter::Filter()
    :
    word{YType::str, "word"},
    vlan_list{YType::str, "vlan-list"}
{
    yang_name = "filter"; yang_parent_name = "vlan";
}

Native::Vlan::Filter::~Filter()
{
}

bool Native::Vlan::Filter::has_data() const
{
    return word.is_set
	|| vlan_list.is_set;
}

bool Native::Vlan::Filter::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(vlan_list.operation);
}

std::string Native::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:filter" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan_list.is_set || is_set(vlan_list.operation)) leaf_name_data.push_back(vlan_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Filter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "vlan-list")
    {
        vlan_list = value;
    }
}

Native::Vlan::Accounting::Accounting()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "accounting"; yang_parent_name = "vlan";
}

Native::Vlan::Accounting::~Accounting()
{
}

bool Native::Vlan::Accounting::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Vlan::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Vlan::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:accounting";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Vlan::Internal::Internal()
    :
    allocation(std::make_shared<Native::Vlan::Internal::Allocation>())
{
    allocation->parent = this;

    yang_name = "internal"; yang_parent_name = "vlan";
}

Native::Vlan::Internal::~Internal()
{
}

bool Native::Vlan::Internal::has_data() const
{
    return (allocation !=  nullptr && allocation->has_data());
}

bool Native::Vlan::Internal::has_operation() const
{
    return is_set(operation)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Native::Vlan::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:internal";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Native::Vlan::Internal::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocation != nullptr)
    {
        children["allocation"] = allocation;
    }

    return children;
}

void Native::Vlan::Internal::set_value(const std::string & value_path, std::string value)
{
}

Native::Vlan::Internal::Allocation::Allocation()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "allocation"; yang_parent_name = "internal";
}

Native::Vlan::Internal::Allocation::~Allocation()
{
}

bool Native::Vlan::Internal::Allocation::has_data() const
{
    return policy.is_set;
}

bool Native::Vlan::Internal::Allocation::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Native::Vlan::Internal::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Internal::Allocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:internal/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Internal::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Internal::Allocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Native::Vlan::Dot1Q::Dot1Q()
    :
    tag(std::make_shared<Native::Vlan::Dot1Q::Tag>())
{
    tag->parent = this;

    yang_name = "dot1q"; yang_parent_name = "vlan";
}

Native::Vlan::Dot1Q::~Dot1Q()
{
}

bool Native::Vlan::Dot1Q::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Vlan::Dot1Q::has_operation() const
{
    return is_set(operation)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Vlan::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:dot1q";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Vlan::Dot1Q::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Vlan::Dot1Q::set_value(const std::string & value_path, std::string value)
{
}

Native::Vlan::Dot1Q::Tag::Tag()
    :
    native{YType::empty, "native"}
{
    yang_name = "tag"; yang_parent_name = "dot1q";
}

Native::Vlan::Dot1Q::Tag::~Tag()
{
}

bool Native::Vlan::Dot1Q::Tag::has_data() const
{
    return native.is_set;
}

bool Native::Vlan::Dot1Q::Tag::has_operation() const
{
    return is_set(operation)
	|| is_set(native.operation);
}

std::string Native::Vlan::Dot1Q::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Vlan::Dot1Q::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:dot1q/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.operation)) leaf_name_data.push_back(native.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::Dot1Q::Tag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "native")
    {
        native = value;
    }
}

Native::Vlan::AccessLog::AccessLog()
    :
    maxflow{YType::uint16, "maxflow"},
    ratelimit{YType::uint16, "ratelimit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "access-log"; yang_parent_name = "vlan";
}

Native::Vlan::AccessLog::~AccessLog()
{
}

bool Native::Vlan::AccessLog::has_data() const
{
    return maxflow.is_set
	|| ratelimit.is_set
	|| threshold.is_set;
}

bool Native::Vlan::AccessLog::has_operation() const
{
    return is_set(operation)
	|| is_set(maxflow.operation)
	|| is_set(ratelimit.operation)
	|| is_set(threshold.operation);
}

std::string Native::Vlan::AccessLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-log";

    return path_buffer.str();

}

const EntityPath Native::Vlan::AccessLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxflow.is_set || is_set(maxflow.operation)) leaf_name_data.push_back(maxflow.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.operation)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::AccessLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::AccessLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maxflow")
    {
        maxflow = value;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Vlan::VlanList::VlanList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    remote_span{YType::empty, "remote-span"},
    uni_vlan{YType::enumeration, "uni-vlan"}
    	,
    lldp(std::make_shared<Native::Vlan::VlanList::Lldp>())
	,private_vlan(std::make_shared<Native::Vlan::VlanList::PrivateVlan>())
{
    lldp->parent = this;

    private_vlan->parent = this;

    yang_name = "vlan-list"; yang_parent_name = "vlan";
}

Native::Vlan::VlanList::~VlanList()
{
}

bool Native::Vlan::VlanList::has_data() const
{
    return id.is_set
	|| name.is_set
	|| remote_span.is_set
	|| uni_vlan.is_set
	|| (lldp !=  nullptr && lldp->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::Vlan::VlanList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation)
	|| is_set(remote_span.operation)
	|| is_set(uni_vlan.operation)
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::Vlan::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vlan-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Vlan::VlanList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_span.is_set || is_set(remote_span.operation)) leaf_name_data.push_back(remote_span.get_name_leafdata());
    if (uni_vlan.is_set || is_set(uni_vlan.operation)) leaf_name_data.push_back(uni_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Vlan::VlanList::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Vlan::VlanList::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    return children;
}

void Native::Vlan::VlanList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "remote-span")
    {
        remote_span = value;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan = value;
    }
}

Native::Vlan::VlanList::PrivateVlan::PrivateVlan()
    :
    association{YType::str, "association"},
    community{YType::empty, "community"},
    isolated{YType::empty, "isolated"},
    primary{YType::empty, "primary"}
{
    yang_name = "private-vlan"; yang_parent_name = "vlan-list";
}

Native::Vlan::VlanList::PrivateVlan::~PrivateVlan()
{
}

bool Native::Vlan::VlanList::PrivateVlan::has_data() const
{
    return association.is_set
	|| community.is_set
	|| isolated.is_set
	|| primary.is_set;
}

bool Native::Vlan::VlanList::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(association.operation)
	|| is_set(community.operation)
	|| is_set(isolated.operation)
	|| is_set(primary.operation);
}

std::string Native::Vlan::VlanList::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Vlan::VlanList::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association.is_set || is_set(association.operation)) leaf_name_data.push_back(association.get_name_leafdata());
    if (community.is_set || is_set(community.operation)) leaf_name_data.push_back(community.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.operation)) leaf_name_data.push_back(isolated.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::VlanList::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association")
    {
        association = value;
    }
    if(value_path == "community")
    {
        community = value;
    }
    if(value_path == "isolated")
    {
        isolated = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
}

Native::Vlan::VlanList::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{
    yang_name = "lldp"; yang_parent_name = "vlan-list";
}

Native::Vlan::VlanList::Lldp::~Lldp()
{
}

bool Native::Vlan::VlanList::Lldp::has_data() const
{
    return run.is_set;
}

bool Native::Vlan::VlanList::Lldp::has_operation() const
{
    return is_set(operation)
	|| is_set(run.operation);
}

std::string Native::Vlan::VlanList::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp";

    return path_buffer.str();

}

const EntityPath Native::Vlan::VlanList::Lldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.operation)) leaf_name_data.push_back(run.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vlan::VlanList::Lldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "run")
    {
        run = value;
    }
}

Native::Cdp::Cdp()
    :
    run{YType::empty, "Cisco-IOS-XE-cdp:run"}
{
    yang_name = "cdp"; yang_parent_name = "native";
}

Native::Cdp::~Cdp()
{
}

bool Native::Cdp::has_data() const
{
    return run.is_set;
}

bool Native::Cdp::has_operation() const
{
    return is_set(operation)
	|| is_set(run.operation);
}

std::string Native::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp";

    return path_buffer.str();

}

const EntityPath Native::Cdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.operation)) leaf_name_data.push_back(run.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "run")
    {
        run = value;
    }
}

Native::Policy::Policy()
{
    yang_name = "policy"; yang_parent_name = "native";
}

Native::Policy::~Policy()
{
}

bool Native::Policy::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-map")
    {
        for(auto const & c : policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap>();
        c->parent = this;
        policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : policy_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::ClassMap()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    prematch{YType::enumeration, "prematch"},
    protocol{YType::enumeration, "protocol"},
    subscriber{YType::empty, "subscriber"},
    type{YType::enumeration, "type"}
    	,
    match(std::make_shared<Native::Policy::ClassMap::Match>())
	,no_match(std::make_shared<Native::Policy::ClassMap::NoMatch>())
{
    match->parent = this;

    no_match->parent = this;

    yang_name = "class-map"; yang_parent_name = "policy";
}

Native::Policy::ClassMap::~ClassMap()
{
}

bool Native::Policy::ClassMap::has_data() const
{
    return name.is_set
	|| description.is_set
	|| prematch.is_set
	|| protocol.is_set
	|| subscriber.is_set
	|| type.is_set
	|| (match !=  nullptr && match->has_data())
	|| (no_match !=  nullptr && no_match->has_data());
}

bool Native::Policy::ClassMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(prematch.operation)
	|| is_set(protocol.operation)
	|| is_set(subscriber.operation)
	|| is_set(type.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (no_match !=  nullptr && no_match->has_operation());
}

std::string Native::Policy::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:class-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (prematch.is_set || is_set(prematch.operation)) leaf_name_data.push_back(prematch.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.operation)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Policy::ClassMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "no-match")
    {
        if(no_match == nullptr)
        {
            no_match = std::make_shared<Native::Policy::ClassMap::NoMatch>();
        }
        return no_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(no_match != nullptr)
    {
        children["no-match"] = no_match;
    }

    return children;
}

void Native::Policy::ClassMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "prematch")
    {
        prematch = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Policy::ClassMap::Match::Match()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    peer{YType::str, "peer"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    vlan{YType::uint16, "vlan"}
    	,
    access_group(std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Application>())
	,authorization_status(std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>())
	,current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Ip>())
	,method(std::make_shared<Native::Policy::ClassMap::Match::Method>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Mpls>())
	,not(std::make_shared<Native::Policy::ClassMap::Match::Not>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Protocol>())
	,result_type(std::make_shared<Native::Policy::ClassMap::Match::ResultType>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>())
{
    access_group->parent = this;

    application->parent = this;

    authorization_status->parent = this;

    authorizing_method_priority->parent = this;

    current_method_priority->parent = this;

    destination_address->parent = this;

    ip->parent = this;

    method->parent = this;

    mpls->parent = this;

    not->parent = this;

    packet->parent = this;

    protocol->parent = this;

    result_type->parent = this;

    security_group->parent = this;

    source_address->parent = this;

    yang_name = "match"; yang_parent_name = "class-map";
}

Native::Policy::ClassMap::Match::~Match()
{
}

bool Native::Policy::ClassMap::Match::has_data() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (not !=  nullptr && not->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (result_type !=  nullptr && result_type->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Native::Policy::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(class_map.operation)
	|| is_set(cos.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(fr_de.operation)
	|| is_set(fr_dlci.operation)
	|| is_set(input_interface.operation)
	|| is_set(non_client_nrt.operation)
	|| is_set(peer.operation)
	|| is_set(precedence.operation)
	|| is_set(qos_group.operation)
	|| is_set(vlan.operation)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (not !=  nullptr && not->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Native::Policy::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::get_entity_path(Entity* ancestor) const
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

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.operation)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "activated-service-template")
    {
        for(auto const & c : activated_service_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::Match::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Application>();
        }
        return application;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::Method>();
        }
        return method;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "not")
    {
        if(not == nullptr)
        {
            not = std::make_shared<Native::Policy::ClassMap::Match::Not>();
        }
        return not;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::Match::ResultType>();
        }
        return result_type;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    for (auto const & c : activated_service_template)
    {
        children[c->get_segment_path()] = c;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(not != nullptr)
    {
        children["not"] = not;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Native::Policy::ClassMap::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
    }
    if(value_path == "peer")
    {
        peer = value;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{
    yang_name = "current-method-priority"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation);
}

std::string Native::Policy::ClassMap::Match::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::CurrentMethodPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentMethodPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
}

Native::Policy::ClassMap::Match::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>())
{
    application_group->parent = this;

    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Application::has_operation() const
{
    return is_set(operation)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Application::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{
    yang_name = "application-group"; yang_parent_name = "application";
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(telepresence_group.operation)
	|| is_set(vmware_group.operation)
	|| is_set(webex_group.operation);
}

std::string Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.operation)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.operation)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.operation)) leaf_name_data.push_back(webex_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
    }
}

Native::Policy::ClassMap::Match::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{
    yang_name = "attribute"; yang_parent_name = "application";
}

Native::Policy::ClassMap::Match::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(media_type.operation);
}

std::string Native::Policy::ClassMap::Match::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Application::Attribute::get_entity_path(Entity* ancestor) const
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

    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "media-type")
    {
        media_type = value;
    }
}

Native::Policy::ClassMap::Match::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{
    yang_name = "access-group"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(name.operation);
}

std::string Native::Policy::ClassMap::Match::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::AccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

Native::Policy::ClassMap::Match::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{
    yang_name = "destination-address"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac.operation);
}

std::string Native::Policy::ClassMap::Match::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

Native::Policy::ClassMap::Match::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{
    yang_name = "ip"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation);
}

std::string Native::Policy::ClassMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Ip::get_entity_path(Entity* ancestor) const
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


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        for(auto const & c : rtp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rtp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

Native::Policy::ClassMap::Match::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{
    yang_name = "rtp"; yang_parent_name = "ip";
}

Native::Policy::ClassMap::Match::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_operation() const
{
    return is_set(operation)
	|| is_set(port1.operation)
	|| is_set(port2.operation);
}

std::string Native::Policy::ClassMap::Match::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Ip::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.operation)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.operation)) leaf_name_data.push_back(port2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port1")
    {
        port1 = value;
    }
    if(value_path == "port2")
    {
        port2 = value;
    }
}

Native::Policy::ClassMap::Match::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Mpls::has_operation() const
{
    return is_set(operation)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{
    yang_name = "experimental"; yang_parent_name = "mpls";
}

Native::Policy::ClassMap::Match::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(topmost.operation);
}

std::string Native::Policy::ClassMap::Match::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Mpls::Experimental::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Experimental' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

Native::Policy::ClassMap::Match::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Packet::has_operation() const
{
    return is_set(operation)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Packet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Packet::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "length"; yang_parent_name = "packet";
}

Native::Policy::ClassMap::Match::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Policy::ClassMap::Match::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Packet::Length::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Length' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Packet::Length::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Protocol()
    :
    clns{YType::empty, "clns"},
    clns_es{YType::empty, "clns_es"},
    clns_is{YType::empty, "clns_is"},
    cmns{YType::empty, "cmns"},
    compressedtcp{YType::empty, "compressedtcp"},
    cuseeme{YType::empty, "cuseeme"},
    decnet{YType::empty, "decnet"},
    decnet_node{YType::empty, "decnet_node"},
    decnet_router_l1{YType::empty, "decnet_router-l1"},
    decnet_router_l2{YType::empty, "decnet_router-l2"},
    dhcp{YType::empty, "dhcp"},
    dlsw{YType::empty, "dlsw"},
    dns{YType::empty, "dns"},
    edonkey{YType::empty, "edonkey"},
    egp{YType::empty, "egp"},
    eigrp{YType::empty, "eigrp"},
    exchange{YType::empty, "exchange"},
    finger{YType::empty, "finger"},
    ftp{YType::empty, "ftp"},
    gopher{YType::empty, "gopher"},
    gre{YType::empty, "gre"},
    h323{YType::empty, "h323"},
    icmp{YType::empty, "icmp"},
    imap{YType::empty, "imap"},
    ip{YType::empty, "ip"},
    ipinip{YType::empty, "ipinip"},
    ipsec{YType::empty, "ipsec"},
    ipv6{YType::empty, "ipv6"},
    ipx{YType::empty, "ipx"},
    irc{YType::empty, "irc"},
    kerberos{YType::empty, "kerberos"},
    l2tp{YType::empty, "l2tp"},
    ldap{YType::empty, "ldap"},
    llc2{YType::empty, "llc2"},
    mgcp{YType::empty, "mgcp"},
    netbios{YType::empty, "netbios"},
    netshow{YType::empty, "netshow"},
    nfs{YType::empty, "nfs"},
    nntp{YType::empty, "nntp"},
    notes{YType::empty, "notes"},
    novadigm{YType::empty, "novadigm"},
    ntp{YType::empty, "ntp"},
    ospf{YType::empty, "ospf"},
    pad{YType::empty, "pad"},
    pcanywhere{YType::empty, "pcanywhere"},
    pop3{YType::empty, "pop3"},
    pppoe{YType::empty, "pppoe"},
    pptp{YType::empty, "pptp"},
    printer{YType::empty, "printer"},
    protocols{YType::enumeration, "protocols"},
    qllc{YType::empty, "qllc"},
    rcmd{YType::empty, "rcmd"},
    rip{YType::empty, "rip"},
    rsrb{YType::empty, "rsrb"},
    rsvp{YType::empty, "rsvp"},
    rtcp{YType::empty, "rtcp"},
    rtsp{YType::empty, "rtsp"},
    secure_ftp{YType::empty, "secure-ftp"},
    secure_http{YType::empty, "secure-http"},
    secure_imap{YType::empty, "secure-imap"},
    secure_irc{YType::empty, "secure-irc"},
    secure_ldap{YType::empty, "secure-ldap"},
    secure_nntp{YType::empty, "secure-nntp"},
    secure_pop3{YType::empty, "secure-pop3"},
    secure_telnet{YType::empty, "secure-telnet"},
    sip{YType::empty, "sip"},
    skinny{YType::empty, "skinny"},
    snapshot{YType::empty, "snapshot"},
    snmp{YType::empty, "snmp"},
    socks{YType::empty, "socks"},
    sqlnet{YType::empty, "sqlnet"},
    sqlserver{YType::empty, "sqlserver"},
    ssh{YType::empty, "ssh"},
    streamwork{YType::empty, "streamwork"},
    stun{YType::empty, "stun"},
    sunrpc{YType::empty, "sunrpc"},
    syslog{YType::empty, "syslog"},
    telnet{YType::empty, "telnet"},
    tftp{YType::empty, "tftp"},
    vdolive{YType::empty, "vdolive"},
    vofr{YType::empty, "vofr"},
    winmx{YType::empty, "winmx"},
    xwindows{YType::empty, "xwindows"}
    	,
    attribute(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>())
	,citrix(nullptr) // presence node
	,fasttrack(nullptr) // presence node
	,gnutella(nullptr) // presence node
	,http(nullptr) // presence node
	,kazaa2(nullptr) // presence node
	,napster(nullptr) // presence node
	,rtp(nullptr) // presence node
	,smtp(nullptr) // presence node
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_data() const
{
    return clns.is_set
	|| clns_es.is_set
	|| clns_is.is_set
	|| cmns.is_set
	|| compressedtcp.is_set
	|| cuseeme.is_set
	|| decnet.is_set
	|| decnet_node.is_set
	|| decnet_router_l1.is_set
	|| decnet_router_l2.is_set
	|| dhcp.is_set
	|| dlsw.is_set
	|| dns.is_set
	|| edonkey.is_set
	|| egp.is_set
	|| eigrp.is_set
	|| exchange.is_set
	|| finger.is_set
	|| ftp.is_set
	|| gopher.is_set
	|| gre.is_set
	|| h323.is_set
	|| icmp.is_set
	|| imap.is_set
	|| ip.is_set
	|| ipinip.is_set
	|| ipsec.is_set
	|| ipv6.is_set
	|| ipx.is_set
	|| irc.is_set
	|| kerberos.is_set
	|| l2tp.is_set
	|| ldap.is_set
	|| llc2.is_set
	|| mgcp.is_set
	|| netbios.is_set
	|| netshow.is_set
	|| nfs.is_set
	|| nntp.is_set
	|| notes.is_set
	|| novadigm.is_set
	|| ntp.is_set
	|| ospf.is_set
	|| pad.is_set
	|| pcanywhere.is_set
	|| pop3.is_set
	|| pppoe.is_set
	|| pptp.is_set
	|| printer.is_set
	|| protocols.is_set
	|| qllc.is_set
	|| rcmd.is_set
	|| rip.is_set
	|| rsrb.is_set
	|| rsvp.is_set
	|| rtcp.is_set
	|| rtsp.is_set
	|| secure_ftp.is_set
	|| secure_http.is_set
	|| secure_imap.is_set
	|| secure_irc.is_set
	|| secure_ldap.is_set
	|| secure_nntp.is_set
	|| secure_pop3.is_set
	|| secure_telnet.is_set
	|| sip.is_set
	|| skinny.is_set
	|| snapshot.is_set
	|| snmp.is_set
	|| socks.is_set
	|| sqlnet.is_set
	|| sqlserver.is_set
	|| ssh.is_set
	|| streamwork.is_set
	|| stun.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| telnet.is_set
	|| tftp.is_set
	|| vdolive.is_set
	|| vofr.is_set
	|| winmx.is_set
	|| xwindows.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (citrix !=  nullptr && citrix->has_data())
	|| (fasttrack !=  nullptr && fasttrack->has_data())
	|| (gnutella !=  nullptr && gnutella->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (kazaa2 !=  nullptr && kazaa2->has_data())
	|| (napster !=  nullptr && napster->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (smtp !=  nullptr && smtp->has_data());
}

bool Native::Policy::ClassMap::Match::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(clns.operation)
	|| is_set(clns_es.operation)
	|| is_set(clns_is.operation)
	|| is_set(cmns.operation)
	|| is_set(compressedtcp.operation)
	|| is_set(cuseeme.operation)
	|| is_set(decnet.operation)
	|| is_set(decnet_node.operation)
	|| is_set(decnet_router_l1.operation)
	|| is_set(decnet_router_l2.operation)
	|| is_set(dhcp.operation)
	|| is_set(dlsw.operation)
	|| is_set(dns.operation)
	|| is_set(edonkey.operation)
	|| is_set(egp.operation)
	|| is_set(eigrp.operation)
	|| is_set(exchange.operation)
	|| is_set(finger.operation)
	|| is_set(ftp.operation)
	|| is_set(gopher.operation)
	|| is_set(gre.operation)
	|| is_set(h323.operation)
	|| is_set(icmp.operation)
	|| is_set(imap.operation)
	|| is_set(ip.operation)
	|| is_set(ipinip.operation)
	|| is_set(ipsec.operation)
	|| is_set(ipv6.operation)
	|| is_set(ipx.operation)
	|| is_set(irc.operation)
	|| is_set(kerberos.operation)
	|| is_set(l2tp.operation)
	|| is_set(ldap.operation)
	|| is_set(llc2.operation)
	|| is_set(mgcp.operation)
	|| is_set(netbios.operation)
	|| is_set(netshow.operation)
	|| is_set(nfs.operation)
	|| is_set(nntp.operation)
	|| is_set(notes.operation)
	|| is_set(novadigm.operation)
	|| is_set(ntp.operation)
	|| is_set(ospf.operation)
	|| is_set(pad.operation)
	|| is_set(pcanywhere.operation)
	|| is_set(pop3.operation)
	|| is_set(pppoe.operation)
	|| is_set(pptp.operation)
	|| is_set(printer.operation)
	|| is_set(protocols.operation)
	|| is_set(qllc.operation)
	|| is_set(rcmd.operation)
	|| is_set(rip.operation)
	|| is_set(rsrb.operation)
	|| is_set(rsvp.operation)
	|| is_set(rtcp.operation)
	|| is_set(rtsp.operation)
	|| is_set(secure_ftp.operation)
	|| is_set(secure_http.operation)
	|| is_set(secure_imap.operation)
	|| is_set(secure_irc.operation)
	|| is_set(secure_ldap.operation)
	|| is_set(secure_nntp.operation)
	|| is_set(secure_pop3.operation)
	|| is_set(secure_telnet.operation)
	|| is_set(sip.operation)
	|| is_set(skinny.operation)
	|| is_set(snapshot.operation)
	|| is_set(snmp.operation)
	|| is_set(socks.operation)
	|| is_set(sqlnet.operation)
	|| is_set(sqlserver.operation)
	|| is_set(ssh.operation)
	|| is_set(streamwork.operation)
	|| is_set(stun.operation)
	|| is_set(sunrpc.operation)
	|| is_set(syslog.operation)
	|| is_set(telnet.operation)
	|| is_set(tftp.operation)
	|| is_set(vdolive.operation)
	|| is_set(vofr.operation)
	|| is_set(winmx.operation)
	|| is_set(xwindows.operation)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (citrix !=  nullptr && citrix->has_operation())
	|| (fasttrack !=  nullptr && fasttrack->has_operation())
	|| (gnutella !=  nullptr && gnutella->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (kazaa2 !=  nullptr && kazaa2->has_operation())
	|| (napster !=  nullptr && napster->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation());
}

std::string Native::Policy::ClassMap::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns.is_set || is_set(clns.operation)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (clns_es.is_set || is_set(clns_es.operation)) leaf_name_data.push_back(clns_es.get_name_leafdata());
    if (clns_is.is_set || is_set(clns_is.operation)) leaf_name_data.push_back(clns_is.get_name_leafdata());
    if (cmns.is_set || is_set(cmns.operation)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (compressedtcp.is_set || is_set(compressedtcp.operation)) leaf_name_data.push_back(compressedtcp.get_name_leafdata());
    if (cuseeme.is_set || is_set(cuseeme.operation)) leaf_name_data.push_back(cuseeme.get_name_leafdata());
    if (decnet.is_set || is_set(decnet.operation)) leaf_name_data.push_back(decnet.get_name_leafdata());
    if (decnet_node.is_set || is_set(decnet_node.operation)) leaf_name_data.push_back(decnet_node.get_name_leafdata());
    if (decnet_router_l1.is_set || is_set(decnet_router_l1.operation)) leaf_name_data.push_back(decnet_router_l1.get_name_leafdata());
    if (decnet_router_l2.is_set || is_set(decnet_router_l2.operation)) leaf_name_data.push_back(decnet_router_l2.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.operation)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (dns.is_set || is_set(dns.operation)) leaf_name_data.push_back(dns.get_name_leafdata());
    if (edonkey.is_set || is_set(edonkey.operation)) leaf_name_data.push_back(edonkey.get_name_leafdata());
    if (egp.is_set || is_set(egp.operation)) leaf_name_data.push_back(egp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (exchange.is_set || is_set(exchange.operation)) leaf_name_data.push_back(exchange.get_name_leafdata());
    if (finger.is_set || is_set(finger.operation)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (ftp.is_set || is_set(ftp.operation)) leaf_name_data.push_back(ftp.get_name_leafdata());
    if (gopher.is_set || is_set(gopher.operation)) leaf_name_data.push_back(gopher.get_name_leafdata());
    if (gre.is_set || is_set(gre.operation)) leaf_name_data.push_back(gre.get_name_leafdata());
    if (h323.is_set || is_set(h323.operation)) leaf_name_data.push_back(h323.get_name_leafdata());
    if (icmp.is_set || is_set(icmp.operation)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (imap.is_set || is_set(imap.operation)) leaf_name_data.push_back(imap.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipinip.is_set || is_set(ipinip.operation)) leaf_name_data.push_back(ipinip.get_name_leafdata());
    if (ipsec.is_set || is_set(ipsec.operation)) leaf_name_data.push_back(ipsec.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ipx.is_set || is_set(ipx.operation)) leaf_name_data.push_back(ipx.get_name_leafdata());
    if (irc.is_set || is_set(irc.operation)) leaf_name_data.push_back(irc.get_name_leafdata());
    if (kerberos.is_set || is_set(kerberos.operation)) leaf_name_data.push_back(kerberos.get_name_leafdata());
    if (l2tp.is_set || is_set(l2tp.operation)) leaf_name_data.push_back(l2tp.get_name_leafdata());
    if (ldap.is_set || is_set(ldap.operation)) leaf_name_data.push_back(ldap.get_name_leafdata());
    if (llc2.is_set || is_set(llc2.operation)) leaf_name_data.push_back(llc2.get_name_leafdata());
    if (mgcp.is_set || is_set(mgcp.operation)) leaf_name_data.push_back(mgcp.get_name_leafdata());
    if (netbios.is_set || is_set(netbios.operation)) leaf_name_data.push_back(netbios.get_name_leafdata());
    if (netshow.is_set || is_set(netshow.operation)) leaf_name_data.push_back(netshow.get_name_leafdata());
    if (nfs.is_set || is_set(nfs.operation)) leaf_name_data.push_back(nfs.get_name_leafdata());
    if (nntp.is_set || is_set(nntp.operation)) leaf_name_data.push_back(nntp.get_name_leafdata());
    if (notes.is_set || is_set(notes.operation)) leaf_name_data.push_back(notes.get_name_leafdata());
    if (novadigm.is_set || is_set(novadigm.operation)) leaf_name_data.push_back(novadigm.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.operation)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (pad.is_set || is_set(pad.operation)) leaf_name_data.push_back(pad.get_name_leafdata());
    if (pcanywhere.is_set || is_set(pcanywhere.operation)) leaf_name_data.push_back(pcanywhere.get_name_leafdata());
    if (pop3.is_set || is_set(pop3.operation)) leaf_name_data.push_back(pop3.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.operation)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pptp.is_set || is_set(pptp.operation)) leaf_name_data.push_back(pptp.get_name_leafdata());
    if (printer.is_set || is_set(printer.operation)) leaf_name_data.push_back(printer.get_name_leafdata());
    if (protocols.is_set || is_set(protocols.operation)) leaf_name_data.push_back(protocols.get_name_leafdata());
    if (qllc.is_set || is_set(qllc.operation)) leaf_name_data.push_back(qllc.get_name_leafdata());
    if (rcmd.is_set || is_set(rcmd.operation)) leaf_name_data.push_back(rcmd.get_name_leafdata());
    if (rip.is_set || is_set(rip.operation)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (rsrb.is_set || is_set(rsrb.operation)) leaf_name_data.push_back(rsrb.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.operation)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (rtcp.is_set || is_set(rtcp.operation)) leaf_name_data.push_back(rtcp.get_name_leafdata());
    if (rtsp.is_set || is_set(rtsp.operation)) leaf_name_data.push_back(rtsp.get_name_leafdata());
    if (secure_ftp.is_set || is_set(secure_ftp.operation)) leaf_name_data.push_back(secure_ftp.get_name_leafdata());
    if (secure_http.is_set || is_set(secure_http.operation)) leaf_name_data.push_back(secure_http.get_name_leafdata());
    if (secure_imap.is_set || is_set(secure_imap.operation)) leaf_name_data.push_back(secure_imap.get_name_leafdata());
    if (secure_irc.is_set || is_set(secure_irc.operation)) leaf_name_data.push_back(secure_irc.get_name_leafdata());
    if (secure_ldap.is_set || is_set(secure_ldap.operation)) leaf_name_data.push_back(secure_ldap.get_name_leafdata());
    if (secure_nntp.is_set || is_set(secure_nntp.operation)) leaf_name_data.push_back(secure_nntp.get_name_leafdata());
    if (secure_pop3.is_set || is_set(secure_pop3.operation)) leaf_name_data.push_back(secure_pop3.get_name_leafdata());
    if (secure_telnet.is_set || is_set(secure_telnet.operation)) leaf_name_data.push_back(secure_telnet.get_name_leafdata());
    if (sip.is_set || is_set(sip.operation)) leaf_name_data.push_back(sip.get_name_leafdata());
    if (skinny.is_set || is_set(skinny.operation)) leaf_name_data.push_back(skinny.get_name_leafdata());
    if (snapshot.is_set || is_set(snapshot.operation)) leaf_name_data.push_back(snapshot.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (socks.is_set || is_set(socks.operation)) leaf_name_data.push_back(socks.get_name_leafdata());
    if (sqlnet.is_set || is_set(sqlnet.operation)) leaf_name_data.push_back(sqlnet.get_name_leafdata());
    if (sqlserver.is_set || is_set(sqlserver.operation)) leaf_name_data.push_back(sqlserver.get_name_leafdata());
    if (ssh.is_set || is_set(ssh.operation)) leaf_name_data.push_back(ssh.get_name_leafdata());
    if (streamwork.is_set || is_set(streamwork.operation)) leaf_name_data.push_back(streamwork.get_name_leafdata());
    if (stun.is_set || is_set(stun.operation)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.operation)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (telnet.is_set || is_set(telnet.operation)) leaf_name_data.push_back(telnet.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.operation)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (vdolive.is_set || is_set(vdolive.operation)) leaf_name_data.push_back(vdolive.get_name_leafdata());
    if (vofr.is_set || is_set(vofr.operation)) leaf_name_data.push_back(vofr.get_name_leafdata());
    if (winmx.is_set || is_set(winmx.operation)) leaf_name_data.push_back(winmx.get_name_leafdata());
    if (xwindows.is_set || is_set(xwindows.operation)) leaf_name_data.push_back(xwindows.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "citrix")
    {
        if(citrix == nullptr)
        {
            citrix = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Citrix>();
        }
        return citrix;
    }

    if(child_yang_name == "fasttrack")
    {
        if(fasttrack == nullptr)
        {
            fasttrack = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Fasttrack>();
        }
        return fasttrack;
    }

    if(child_yang_name == "gnutella")
    {
        if(gnutella == nullptr)
        {
            gnutella = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Gnutella>();
        }
        return gnutella;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Http>();
        }
        return http;
    }

    if(child_yang_name == "kazaa2")
    {
        if(kazaa2 == nullptr)
        {
            kazaa2 = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Kazaa2>();
        }
        return kazaa2;
    }

    if(child_yang_name == "napster")
    {
        if(napster == nullptr)
        {
            napster = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Napster>();
        }
        return napster;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Smtp>();
        }
        return smtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    if(citrix != nullptr)
    {
        children["citrix"] = citrix;
    }

    if(fasttrack != nullptr)
    {
        children["fasttrack"] = fasttrack;
    }

    if(gnutella != nullptr)
    {
        children["gnutella"] = gnutella;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(kazaa2 != nullptr)
    {
        children["kazaa2"] = kazaa2;
    }

    if(napster != nullptr)
    {
        children["napster"] = napster;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clns")
    {
        clns = value;
    }
    if(value_path == "clns_es")
    {
        clns_es = value;
    }
    if(value_path == "clns_is")
    {
        clns_is = value;
    }
    if(value_path == "cmns")
    {
        cmns = value;
    }
    if(value_path == "compressedtcp")
    {
        compressedtcp = value;
    }
    if(value_path == "cuseeme")
    {
        cuseeme = value;
    }
    if(value_path == "decnet")
    {
        decnet = value;
    }
    if(value_path == "decnet_node")
    {
        decnet_node = value;
    }
    if(value_path == "decnet_router-l1")
    {
        decnet_router_l1 = value;
    }
    if(value_path == "decnet_router-l2")
    {
        decnet_router_l2 = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
    }
    if(value_path == "dns")
    {
        dns = value;
    }
    if(value_path == "edonkey")
    {
        edonkey = value;
    }
    if(value_path == "egp")
    {
        egp = value;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "exchange")
    {
        exchange = value;
    }
    if(value_path == "finger")
    {
        finger = value;
    }
    if(value_path == "ftp")
    {
        ftp = value;
    }
    if(value_path == "gopher")
    {
        gopher = value;
    }
    if(value_path == "gre")
    {
        gre = value;
    }
    if(value_path == "h323")
    {
        h323 = value;
    }
    if(value_path == "icmp")
    {
        icmp = value;
    }
    if(value_path == "imap")
    {
        imap = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "ipinip")
    {
        ipinip = value;
    }
    if(value_path == "ipsec")
    {
        ipsec = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "ipx")
    {
        ipx = value;
    }
    if(value_path == "irc")
    {
        irc = value;
    }
    if(value_path == "kerberos")
    {
        kerberos = value;
    }
    if(value_path == "l2tp")
    {
        l2tp = value;
    }
    if(value_path == "ldap")
    {
        ldap = value;
    }
    if(value_path == "llc2")
    {
        llc2 = value;
    }
    if(value_path == "mgcp")
    {
        mgcp = value;
    }
    if(value_path == "netbios")
    {
        netbios = value;
    }
    if(value_path == "netshow")
    {
        netshow = value;
    }
    if(value_path == "nfs")
    {
        nfs = value;
    }
    if(value_path == "nntp")
    {
        nntp = value;
    }
    if(value_path == "notes")
    {
        notes = value;
    }
    if(value_path == "novadigm")
    {
        novadigm = value;
    }
    if(value_path == "ntp")
    {
        ntp = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
    if(value_path == "pad")
    {
        pad = value;
    }
    if(value_path == "pcanywhere")
    {
        pcanywhere = value;
    }
    if(value_path == "pop3")
    {
        pop3 = value;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
    }
    if(value_path == "pptp")
    {
        pptp = value;
    }
    if(value_path == "printer")
    {
        printer = value;
    }
    if(value_path == "protocols")
    {
        protocols = value;
    }
    if(value_path == "qllc")
    {
        qllc = value;
    }
    if(value_path == "rcmd")
    {
        rcmd = value;
    }
    if(value_path == "rip")
    {
        rip = value;
    }
    if(value_path == "rsrb")
    {
        rsrb = value;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
    }
    if(value_path == "rtcp")
    {
        rtcp = value;
    }
    if(value_path == "rtsp")
    {
        rtsp = value;
    }
    if(value_path == "secure-ftp")
    {
        secure_ftp = value;
    }
    if(value_path == "secure-http")
    {
        secure_http = value;
    }
    if(value_path == "secure-imap")
    {
        secure_imap = value;
    }
    if(value_path == "secure-irc")
    {
        secure_irc = value;
    }
    if(value_path == "secure-ldap")
    {
        secure_ldap = value;
    }
    if(value_path == "secure-nntp")
    {
        secure_nntp = value;
    }
    if(value_path == "secure-pop3")
    {
        secure_pop3 = value;
    }
    if(value_path == "secure-telnet")
    {
        secure_telnet = value;
    }
    if(value_path == "sip")
    {
        sip = value;
    }
    if(value_path == "skinny")
    {
        skinny = value;
    }
    if(value_path == "snapshot")
    {
        snapshot = value;
    }
    if(value_path == "snmp")
    {
        snmp = value;
    }
    if(value_path == "socks")
    {
        socks = value;
    }
    if(value_path == "sqlnet")
    {
        sqlnet = value;
    }
    if(value_path == "sqlserver")
    {
        sqlserver = value;
    }
    if(value_path == "ssh")
    {
        ssh = value;
    }
    if(value_path == "streamwork")
    {
        streamwork = value;
    }
    if(value_path == "stun")
    {
        stun = value;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
    if(value_path == "telnet")
    {
        telnet = value;
    }
    if(value_path == "tftp")
    {
        tftp = value;
    }
    if(value_path == "vdolive")
    {
        vdolive = value;
    }
    if(value_path == "vofr")
    {
        vofr = value;
    }
    if(value_path == "winmx")
    {
        winmx = value;
    }
    if(value_path == "xwindows")
    {
        xwindows = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Citrix::Citrix()
    :
    ica_tag{YType::str, "ica-tag"}
{
    yang_name = "citrix"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Citrix::~Citrix()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Citrix::has_data() const
{
    return ica_tag.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Citrix::has_operation() const
{
    return is_set(operation)
	|| is_set(ica_tag.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Citrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citrix";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Citrix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Citrix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ica_tag.is_set || is_set(ica_tag.operation)) leaf_name_data.push_back(ica_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Citrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Citrix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Citrix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ica-tag")
    {
        ica_tag = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Fasttrack::Fasttrack()
    :
    file_transfer{YType::str, "file-transfer"}
{
    yang_name = "fasttrack"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Fasttrack::~Fasttrack()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Fasttrack::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Fasttrack::has_operation() const
{
    return is_set(operation)
	|| is_set(file_transfer.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Fasttrack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fasttrack";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Fasttrack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fasttrack' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.operation)) leaf_name_data.push_back(file_transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Fasttrack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Fasttrack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Fasttrack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Gnutella::Gnutella()
    :
    file_transfer{YType::str, "file-transfer"}
{
    yang_name = "gnutella"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Gnutella::~Gnutella()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Gnutella::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Gnutella::has_operation() const
{
    return is_set(operation)
	|| is_set(file_transfer.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Gnutella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnutella";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Gnutella::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gnutella' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.operation)) leaf_name_data.push_back(file_transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Gnutella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Gnutella::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Gnutella::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Http::Http()
    :
    c_header_field{YType::str, "c-header-field"},
    host{YType::str, "host"},
    mime{YType::str, "mime"},
    s_header_field{YType::str, "s-header-field"},
    url{YType::str, "url"}
{
    yang_name = "http"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Http::~Http()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Http::has_data() const
{
    return c_header_field.is_set
	|| host.is_set
	|| mime.is_set
	|| s_header_field.is_set
	|| url.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(c_header_field.operation)
	|| is_set(host.operation)
	|| is_set(mime.operation)
	|| is_set(s_header_field.operation)
	|| is_set(url.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Http::get_entity_path(Entity* ancestor) const
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

    if (c_header_field.is_set || is_set(c_header_field.operation)) leaf_name_data.push_back(c_header_field.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mime.is_set || is_set(mime.operation)) leaf_name_data.push_back(mime.get_name_leafdata());
    if (s_header_field.is_set || is_set(s_header_field.operation)) leaf_name_data.push_back(s_header_field.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "c-header-field")
    {
        c_header_field = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "mime")
    {
        mime = value;
    }
    if(value_path == "s-header-field")
    {
        s_header_field = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Kazaa2::Kazaa2()
    :
    file_transfer{YType::str, "file-transfer"}
{
    yang_name = "kazaa2"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Kazaa2::~Kazaa2()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Kazaa2::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Kazaa2::has_operation() const
{
    return is_set(operation)
	|| is_set(file_transfer.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Kazaa2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kazaa2";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Kazaa2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Kazaa2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.operation)) leaf_name_data.push_back(file_transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Kazaa2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Kazaa2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Kazaa2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Napster::Napster()
    :
    non_std{YType::empty, "non-std"}
{
    yang_name = "napster"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Napster::~Napster()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Napster::has_data() const
{
    return non_std.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Napster::has_operation() const
{
    return is_set(operation)
	|| is_set(non_std.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Napster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "napster";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Napster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Napster' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_std.is_set || is_set(non_std.operation)) leaf_name_data.push_back(non_std.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Napster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Napster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Napster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-std")
    {
        non_std = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Rtp::Rtp()
    :
    audio{YType::empty, "audio"},
    payload_type{YType::str, "payload-type"},
    video{YType::empty, "video"}
{
    yang_name = "rtp"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Rtp::has_data() const
{
    return audio.is_set
	|| payload_type.is_set
	|| video.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Rtp::has_operation() const
{
    return is_set(operation)
	|| is_set(audio.operation)
	|| is_set(payload_type.operation)
	|| is_set(video.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (audio.is_set || is_set(audio.operation)) leaf_name_data.push_back(audio.get_name_leafdata());
    if (payload_type.is_set || is_set(payload_type.operation)) leaf_name_data.push_back(payload_type.get_name_leafdata());
    if (video.is_set || is_set(video.operation)) leaf_name_data.push_back(video.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "audio")
    {
        audio = value;
    }
    if(value_path == "payload-type")
    {
        payload_type = value;
    }
    if(value_path == "video")
    {
        video = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Smtp::Smtp()
    :
    extended{YType::empty, "extended"}
{
    yang_name = "smtp"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Smtp::~Smtp()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Smtp::has_data() const
{
    return extended.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Smtp::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Smtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Smtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Smtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Attribute()
    :
    business_relevance(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>())
	,traffic_class(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>())
{
    business_relevance->parent = this;

    traffic_class->parent = this;

    yang_name = "attribute"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_data() const
{
    return (business_relevance !=  nullptr && business_relevance->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_operation() const
{
    return is_set(operation)
	|| (business_relevance !=  nullptr && business_relevance->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Attribute::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "business-relevance")
    {
        if(business_relevance == nullptr)
        {
            business_relevance = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>();
        }
        return business_relevance;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(business_relevance != nullptr)
    {
        children["business-relevance"] = business_relevance;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    business_irrelevant{YType::empty, "business-irrelevant"},
    business_relevant{YType::empty, "business-relevant"},
    default_{YType::empty, "default"}
{
    yang_name = "business-relevance"; yang_parent_name = "attribute";
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return business_irrelevant.is_set
	|| business_relevant.is_set
	|| default_.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(operation)
	|| is_set(business_irrelevant.operation)
	|| is_set(business_relevant.operation)
	|| is_set(default_.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BusinessRelevance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (business_irrelevant.is_set || is_set(business_irrelevant.operation)) leaf_name_data.push_back(business_irrelevant.get_name_leafdata());
    if (business_relevant.is_set || is_set(business_relevant.operation)) leaf_name_data.push_back(business_relevant.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "business-irrelevant")
    {
        business_irrelevant = value;
    }
    if(value_path == "business-relevant")
    {
        business_relevant = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    broadcast_video{YType::empty, "broadcast-video"},
    bulk_data{YType::empty, "bulk-data"},
    multimedia_conferencing{YType::empty, "multimedia-conferencing"},
    multimedia_streaming{YType::empty, "multimedia-streaming"},
    network_control{YType::empty, "network-control"},
    ops_admin_mgmt{YType::empty, "ops-admin-mgmt"},
    real_time_interactive{YType::empty, "real-time-interactive"},
    signaling{YType::empty, "signaling"},
    transactional_data{YType::empty, "transactional-data"},
    voip_telephony{YType::empty, "voip-telephony"}
{
    yang_name = "traffic-class"; yang_parent_name = "attribute";
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_data() const
{
    return broadcast_video.is_set
	|| bulk_data.is_set
	|| multimedia_conferencing.is_set
	|| multimedia_streaming.is_set
	|| network_control.is_set
	|| ops_admin_mgmt.is_set
	|| real_time_interactive.is_set
	|| signaling.is_set
	|| transactional_data.is_set
	|| voip_telephony.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_video.operation)
	|| is_set(bulk_data.operation)
	|| is_set(multimedia_conferencing.operation)
	|| is_set(multimedia_streaming.operation)
	|| is_set(network_control.operation)
	|| is_set(ops_admin_mgmt.operation)
	|| is_set(real_time_interactive.operation)
	|| is_set(signaling.operation)
	|| is_set(transactional_data.operation)
	|| is_set(voip_telephony.operation);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_video.is_set || is_set(broadcast_video.operation)) leaf_name_data.push_back(broadcast_video.get_name_leafdata());
    if (bulk_data.is_set || is_set(bulk_data.operation)) leaf_name_data.push_back(bulk_data.get_name_leafdata());
    if (multimedia_conferencing.is_set || is_set(multimedia_conferencing.operation)) leaf_name_data.push_back(multimedia_conferencing.get_name_leafdata());
    if (multimedia_streaming.is_set || is_set(multimedia_streaming.operation)) leaf_name_data.push_back(multimedia_streaming.get_name_leafdata());
    if (network_control.is_set || is_set(network_control.operation)) leaf_name_data.push_back(network_control.get_name_leafdata());
    if (ops_admin_mgmt.is_set || is_set(ops_admin_mgmt.operation)) leaf_name_data.push_back(ops_admin_mgmt.get_name_leafdata());
    if (real_time_interactive.is_set || is_set(real_time_interactive.operation)) leaf_name_data.push_back(real_time_interactive.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.operation)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transactional_data.is_set || is_set(transactional_data.operation)) leaf_name_data.push_back(transactional_data.get_name_leafdata());
    if (voip_telephony.is_set || is_set(voip_telephony.operation)) leaf_name_data.push_back(voip_telephony.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-video")
    {
        broadcast_video = value;
    }
    if(value_path == "bulk-data")
    {
        bulk_data = value;
    }
    if(value_path == "multimedia-conferencing")
    {
        multimedia_conferencing = value;
    }
    if(value_path == "multimedia-streaming")
    {
        multimedia_streaming = value;
    }
    if(value_path == "network-control")
    {
        network_control = value;
    }
    if(value_path == "ops-admin-mgmt")
    {
        ops_admin_mgmt = value;
    }
    if(value_path == "real-time-interactive")
    {
        real_time_interactive = value;
    }
    if(value_path == "signaling")
    {
        signaling = value;
    }
    if(value_path == "transactional-data")
    {
        transactional_data = value;
    }
    if(value_path == "voip-telephony")
    {
        voip_telephony = value;
    }
}

Native::Policy::ClassMap::Match::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::SecurityGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::get_children() const
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

void Native::Policy::ClassMap::Match::SecurityGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "destination"; yang_parent_name = "security-group";
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "source"; yang_parent_name = "security-group";
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::SecurityGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Policy::ClassMap::Match::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{
    yang_name = "source-address"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac.operation);
}

std::string Native::Policy::ClassMap::Match::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{
    yang_name = "activated-service-template"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(service_name.operation);
}

std::string Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActivatedServiceTemplate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Native::Policy::ClassMap::Match::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{
    yang_name = "authorization-status"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(authorized.operation)
	|| is_set(unauthorized.operation);
}

std::string Native::Policy::ClassMap::Match::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::AuthorizationStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizationStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.operation)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.operation)) leaf_name_data.push_back(unauthorized.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authorized")
    {
        authorized = value;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
    }
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{
    yang_name = "authorizing-method-priority"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation);
}

std::string Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizingMethodPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
}

Native::Policy::ClassMap::Match::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "method"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::Match::Method::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Policy::ClassMap::Match::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Method::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Policy::ClassMap::Match::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::Match::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::ResultType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResultType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::Match::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>())
{
    dot1x->parent = this;

    mab->parent = this;

    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type";
}

Native::Policy::ClassMap::Match::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_operation() const
{
    return is_set(operation)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::ResultType::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{
    yang_name = "dot1x"; yang_parent_name = "method";
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1X' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{
    yang_name = "mab"; yang_parent_name = "method";
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mab' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{
    yang_name = "webauth"; yang_parent_name = "method";
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Webauth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::Match::Not::Not()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    peer{YType::str, "peer"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    vlan{YType::uint16, "vlan"}
    	,
    access_group(std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Not::Application>())
	,current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>())
{
    access_group->parent = this;

    application->parent = this;

    current_method_priority->parent = this;

    destination_address->parent = this;

    ip->parent = this;

    mpls->parent = this;

    packet->parent = this;

    protocol->parent = this;

    security_group->parent = this;

    source_address->parent = this;

    yang_name = "not"; yang_parent_name = "match";
}

Native::Policy::ClassMap::Match::Not::~Not()
{
}

bool Native::Policy::ClassMap::Match::Not::has_data() const
{
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Native::Policy::ClassMap::Match::Not::has_operation() const
{
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(class_map.operation)
	|| is_set(cos.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(fr_de.operation)
	|| is_set(fr_dlci.operation)
	|| is_set(input_interface.operation)
	|| is_set(non_client_nrt.operation)
	|| is_set(peer.operation)
	|| is_set(precedence.operation)
	|| is_set(qos_group.operation)
	|| is_set(vlan.operation)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Not' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.operation)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Not::Application>();
        }
        return application;
    }

    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
    }
    if(value_path == "peer")
    {
        peer = value;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{
    yang_name = "current-method-priority"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation);
}

std::string Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentMethodPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
}

Native::Policy::ClassMap::Match::Not::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>())
{
    application_group->parent = this;

    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Application::has_operation() const
{
    return is_set(operation)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Application::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{
    yang_name = "application-group"; yang_parent_name = "application";
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(telepresence_group.operation)
	|| is_set(vmware_group.operation)
	|| is_set(webex_group.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplicationGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.operation)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.operation)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.operation)) leaf_name_data.push_back(webex_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
    }
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{
    yang_name = "attribute"; yang_parent_name = "application";
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(media_type.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Application::Attribute::get_entity_path(Entity* ancestor) const
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

    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "media-type")
    {
        media_type = value;
    }
}

Native::Policy::ClassMap::Match::Not::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{
    yang_name = "access-group"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(name.operation);
}

std::string Native::Policy::ClassMap::Match::Not::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{
    yang_name = "destination-address"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac.operation);
}

std::string Native::Policy::ClassMap::Match::Not::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

Native::Policy::ClassMap::Match::Not::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{
    yang_name = "ip"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Ip::get_entity_path(Entity* ancestor) const
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


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        for(auto const & c : rtp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rtp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{
    yang_name = "rtp"; yang_parent_name = "ip";
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_operation() const
{
    return is_set(operation)
	|| is_set(port1.operation)
	|| is_set(port2.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.operation)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.operation)) leaf_name_data.push_back(port2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port1")
    {
        port1 = value;
    }
    if(value_path == "port2")
    {
        port2 = value;
    }
}

Native::Policy::ClassMap::Match::Not::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_operation() const
{
    return is_set(operation)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{
    yang_name = "experimental"; yang_parent_name = "mpls";
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(topmost.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Experimental' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

Native::Policy::ClassMap::Match::Not::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_operation() const
{
    return is_set(operation)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Packet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Packet::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Not::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "length"; yang_parent_name = "packet";
}

Native::Policy::ClassMap::Match::Not::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Packet::Length::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Length' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Protocol()
    :
    clns{YType::empty, "clns"},
    clns_es{YType::empty, "clns_es"},
    clns_is{YType::empty, "clns_is"},
    cmns{YType::empty, "cmns"},
    compressedtcp{YType::empty, "compressedtcp"},
    cuseeme{YType::empty, "cuseeme"},
    decnet{YType::empty, "decnet"},
    decnet_node{YType::empty, "decnet_node"},
    decnet_router_l1{YType::empty, "decnet_router-l1"},
    decnet_router_l2{YType::empty, "decnet_router-l2"},
    dhcp{YType::empty, "dhcp"},
    dlsw{YType::empty, "dlsw"},
    dns{YType::empty, "dns"},
    edonkey{YType::empty, "edonkey"},
    egp{YType::empty, "egp"},
    eigrp{YType::empty, "eigrp"},
    exchange{YType::empty, "exchange"},
    finger{YType::empty, "finger"},
    ftp{YType::empty, "ftp"},
    gopher{YType::empty, "gopher"},
    gre{YType::empty, "gre"},
    h323{YType::empty, "h323"},
    icmp{YType::empty, "icmp"},
    imap{YType::empty, "imap"},
    ip{YType::empty, "ip"},
    ipinip{YType::empty, "ipinip"},
    ipsec{YType::empty, "ipsec"},
    ipv6{YType::empty, "ipv6"},
    ipx{YType::empty, "ipx"},
    irc{YType::empty, "irc"},
    kerberos{YType::empty, "kerberos"},
    l2tp{YType::empty, "l2tp"},
    ldap{YType::empty, "ldap"},
    llc2{YType::empty, "llc2"},
    mgcp{YType::empty, "mgcp"},
    netbios{YType::empty, "netbios"},
    netshow{YType::empty, "netshow"},
    nfs{YType::empty, "nfs"},
    nntp{YType::empty, "nntp"},
    notes{YType::empty, "notes"},
    novadigm{YType::empty, "novadigm"},
    ntp{YType::empty, "ntp"},
    ospf{YType::empty, "ospf"},
    pad{YType::empty, "pad"},
    pcanywhere{YType::empty, "pcanywhere"},
    pop3{YType::empty, "pop3"},
    pppoe{YType::empty, "pppoe"},
    pptp{YType::empty, "pptp"},
    printer{YType::empty, "printer"},
    protocols{YType::enumeration, "protocols"},
    qllc{YType::empty, "qllc"},
    rcmd{YType::empty, "rcmd"},
    rip{YType::empty, "rip"},
    rsrb{YType::empty, "rsrb"},
    rsvp{YType::empty, "rsvp"},
    rtcp{YType::empty, "rtcp"},
    rtsp{YType::empty, "rtsp"},
    secure_ftp{YType::empty, "secure-ftp"},
    secure_http{YType::empty, "secure-http"},
    secure_imap{YType::empty, "secure-imap"},
    secure_irc{YType::empty, "secure-irc"},
    secure_ldap{YType::empty, "secure-ldap"},
    secure_nntp{YType::empty, "secure-nntp"},
    secure_pop3{YType::empty, "secure-pop3"},
    secure_telnet{YType::empty, "secure-telnet"},
    sip{YType::empty, "sip"},
    skinny{YType::empty, "skinny"},
    snapshot{YType::empty, "snapshot"},
    snmp{YType::empty, "snmp"},
    socks{YType::empty, "socks"},
    sqlnet{YType::empty, "sqlnet"},
    sqlserver{YType::empty, "sqlserver"},
    ssh{YType::empty, "ssh"},
    streamwork{YType::empty, "streamwork"},
    stun{YType::empty, "stun"},
    sunrpc{YType::empty, "sunrpc"},
    syslog{YType::empty, "syslog"},
    telnet{YType::empty, "telnet"},
    tftp{YType::empty, "tftp"},
    vdolive{YType::empty, "vdolive"},
    vofr{YType::empty, "vofr"},
    winmx{YType::empty, "winmx"},
    xwindows{YType::empty, "xwindows"}
    	,
    attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>())
	,citrix(nullptr) // presence node
	,fasttrack(nullptr) // presence node
	,gnutella(nullptr) // presence node
	,http(nullptr) // presence node
	,kazaa2(nullptr) // presence node
	,napster(nullptr) // presence node
	,rtp(nullptr) // presence node
	,smtp(nullptr) // presence node
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_data() const
{
    return clns.is_set
	|| clns_es.is_set
	|| clns_is.is_set
	|| cmns.is_set
	|| compressedtcp.is_set
	|| cuseeme.is_set
	|| decnet.is_set
	|| decnet_node.is_set
	|| decnet_router_l1.is_set
	|| decnet_router_l2.is_set
	|| dhcp.is_set
	|| dlsw.is_set
	|| dns.is_set
	|| edonkey.is_set
	|| egp.is_set
	|| eigrp.is_set
	|| exchange.is_set
	|| finger.is_set
	|| ftp.is_set
	|| gopher.is_set
	|| gre.is_set
	|| h323.is_set
	|| icmp.is_set
	|| imap.is_set
	|| ip.is_set
	|| ipinip.is_set
	|| ipsec.is_set
	|| ipv6.is_set
	|| ipx.is_set
	|| irc.is_set
	|| kerberos.is_set
	|| l2tp.is_set
	|| ldap.is_set
	|| llc2.is_set
	|| mgcp.is_set
	|| netbios.is_set
	|| netshow.is_set
	|| nfs.is_set
	|| nntp.is_set
	|| notes.is_set
	|| novadigm.is_set
	|| ntp.is_set
	|| ospf.is_set
	|| pad.is_set
	|| pcanywhere.is_set
	|| pop3.is_set
	|| pppoe.is_set
	|| pptp.is_set
	|| printer.is_set
	|| protocols.is_set
	|| qllc.is_set
	|| rcmd.is_set
	|| rip.is_set
	|| rsrb.is_set
	|| rsvp.is_set
	|| rtcp.is_set
	|| rtsp.is_set
	|| secure_ftp.is_set
	|| secure_http.is_set
	|| secure_imap.is_set
	|| secure_irc.is_set
	|| secure_ldap.is_set
	|| secure_nntp.is_set
	|| secure_pop3.is_set
	|| secure_telnet.is_set
	|| sip.is_set
	|| skinny.is_set
	|| snapshot.is_set
	|| snmp.is_set
	|| socks.is_set
	|| sqlnet.is_set
	|| sqlserver.is_set
	|| ssh.is_set
	|| streamwork.is_set
	|| stun.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| telnet.is_set
	|| tftp.is_set
	|| vdolive.is_set
	|| vofr.is_set
	|| winmx.is_set
	|| xwindows.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (citrix !=  nullptr && citrix->has_data())
	|| (fasttrack !=  nullptr && fasttrack->has_data())
	|| (gnutella !=  nullptr && gnutella->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (kazaa2 !=  nullptr && kazaa2->has_data())
	|| (napster !=  nullptr && napster->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (smtp !=  nullptr && smtp->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(clns.operation)
	|| is_set(clns_es.operation)
	|| is_set(clns_is.operation)
	|| is_set(cmns.operation)
	|| is_set(compressedtcp.operation)
	|| is_set(cuseeme.operation)
	|| is_set(decnet.operation)
	|| is_set(decnet_node.operation)
	|| is_set(decnet_router_l1.operation)
	|| is_set(decnet_router_l2.operation)
	|| is_set(dhcp.operation)
	|| is_set(dlsw.operation)
	|| is_set(dns.operation)
	|| is_set(edonkey.operation)
	|| is_set(egp.operation)
	|| is_set(eigrp.operation)
	|| is_set(exchange.operation)
	|| is_set(finger.operation)
	|| is_set(ftp.operation)
	|| is_set(gopher.operation)
	|| is_set(gre.operation)
	|| is_set(h323.operation)
	|| is_set(icmp.operation)
	|| is_set(imap.operation)
	|| is_set(ip.operation)
	|| is_set(ipinip.operation)
	|| is_set(ipsec.operation)
	|| is_set(ipv6.operation)
	|| is_set(ipx.operation)
	|| is_set(irc.operation)
	|| is_set(kerberos.operation)
	|| is_set(l2tp.operation)
	|| is_set(ldap.operation)
	|| is_set(llc2.operation)
	|| is_set(mgcp.operation)
	|| is_set(netbios.operation)
	|| is_set(netshow.operation)
	|| is_set(nfs.operation)
	|| is_set(nntp.operation)
	|| is_set(notes.operation)
	|| is_set(novadigm.operation)
	|| is_set(ntp.operation)
	|| is_set(ospf.operation)
	|| is_set(pad.operation)
	|| is_set(pcanywhere.operation)
	|| is_set(pop3.operation)
	|| is_set(pppoe.operation)
	|| is_set(pptp.operation)
	|| is_set(printer.operation)
	|| is_set(protocols.operation)
	|| is_set(qllc.operation)
	|| is_set(rcmd.operation)
	|| is_set(rip.operation)
	|| is_set(rsrb.operation)
	|| is_set(rsvp.operation)
	|| is_set(rtcp.operation)
	|| is_set(rtsp.operation)
	|| is_set(secure_ftp.operation)
	|| is_set(secure_http.operation)
	|| is_set(secure_imap.operation)
	|| is_set(secure_irc.operation)
	|| is_set(secure_ldap.operation)
	|| is_set(secure_nntp.operation)
	|| is_set(secure_pop3.operation)
	|| is_set(secure_telnet.operation)
	|| is_set(sip.operation)
	|| is_set(skinny.operation)
	|| is_set(snapshot.operation)
	|| is_set(snmp.operation)
	|| is_set(socks.operation)
	|| is_set(sqlnet.operation)
	|| is_set(sqlserver.operation)
	|| is_set(ssh.operation)
	|| is_set(streamwork.operation)
	|| is_set(stun.operation)
	|| is_set(sunrpc.operation)
	|| is_set(syslog.operation)
	|| is_set(telnet.operation)
	|| is_set(tftp.operation)
	|| is_set(vdolive.operation)
	|| is_set(vofr.operation)
	|| is_set(winmx.operation)
	|| is_set(xwindows.operation)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (citrix !=  nullptr && citrix->has_operation())
	|| (fasttrack !=  nullptr && fasttrack->has_operation())
	|| (gnutella !=  nullptr && gnutella->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (kazaa2 !=  nullptr && kazaa2->has_operation())
	|| (napster !=  nullptr && napster->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (smtp !=  nullptr && smtp->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns.is_set || is_set(clns.operation)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (clns_es.is_set || is_set(clns_es.operation)) leaf_name_data.push_back(clns_es.get_name_leafdata());
    if (clns_is.is_set || is_set(clns_is.operation)) leaf_name_data.push_back(clns_is.get_name_leafdata());
    if (cmns.is_set || is_set(cmns.operation)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (compressedtcp.is_set || is_set(compressedtcp.operation)) leaf_name_data.push_back(compressedtcp.get_name_leafdata());
    if (cuseeme.is_set || is_set(cuseeme.operation)) leaf_name_data.push_back(cuseeme.get_name_leafdata());
    if (decnet.is_set || is_set(decnet.operation)) leaf_name_data.push_back(decnet.get_name_leafdata());
    if (decnet_node.is_set || is_set(decnet_node.operation)) leaf_name_data.push_back(decnet_node.get_name_leafdata());
    if (decnet_router_l1.is_set || is_set(decnet_router_l1.operation)) leaf_name_data.push_back(decnet_router_l1.get_name_leafdata());
    if (decnet_router_l2.is_set || is_set(decnet_router_l2.operation)) leaf_name_data.push_back(decnet_router_l2.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.operation)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (dns.is_set || is_set(dns.operation)) leaf_name_data.push_back(dns.get_name_leafdata());
    if (edonkey.is_set || is_set(edonkey.operation)) leaf_name_data.push_back(edonkey.get_name_leafdata());
    if (egp.is_set || is_set(egp.operation)) leaf_name_data.push_back(egp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (exchange.is_set || is_set(exchange.operation)) leaf_name_data.push_back(exchange.get_name_leafdata());
    if (finger.is_set || is_set(finger.operation)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (ftp.is_set || is_set(ftp.operation)) leaf_name_data.push_back(ftp.get_name_leafdata());
    if (gopher.is_set || is_set(gopher.operation)) leaf_name_data.push_back(gopher.get_name_leafdata());
    if (gre.is_set || is_set(gre.operation)) leaf_name_data.push_back(gre.get_name_leafdata());
    if (h323.is_set || is_set(h323.operation)) leaf_name_data.push_back(h323.get_name_leafdata());
    if (icmp.is_set || is_set(icmp.operation)) leaf_name_data.push_back(icmp.get_name_leafdata());
    if (imap.is_set || is_set(imap.operation)) leaf_name_data.push_back(imap.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipinip.is_set || is_set(ipinip.operation)) leaf_name_data.push_back(ipinip.get_name_leafdata());
    if (ipsec.is_set || is_set(ipsec.operation)) leaf_name_data.push_back(ipsec.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ipx.is_set || is_set(ipx.operation)) leaf_name_data.push_back(ipx.get_name_leafdata());
    if (irc.is_set || is_set(irc.operation)) leaf_name_data.push_back(irc.get_name_leafdata());
    if (kerberos.is_set || is_set(kerberos.operation)) leaf_name_data.push_back(kerberos.get_name_leafdata());
    if (l2tp.is_set || is_set(l2tp.operation)) leaf_name_data.push_back(l2tp.get_name_leafdata());
    if (ldap.is_set || is_set(ldap.operation)) leaf_name_data.push_back(ldap.get_name_leafdata());
    if (llc2.is_set || is_set(llc2.operation)) leaf_name_data.push_back(llc2.get_name_leafdata());
    if (mgcp.is_set || is_set(mgcp.operation)) leaf_name_data.push_back(mgcp.get_name_leafdata());
    if (netbios.is_set || is_set(netbios.operation)) leaf_name_data.push_back(netbios.get_name_leafdata());
    if (netshow.is_set || is_set(netshow.operation)) leaf_name_data.push_back(netshow.get_name_leafdata());
    if (nfs.is_set || is_set(nfs.operation)) leaf_name_data.push_back(nfs.get_name_leafdata());
    if (nntp.is_set || is_set(nntp.operation)) leaf_name_data.push_back(nntp.get_name_leafdata());
    if (notes.is_set || is_set(notes.operation)) leaf_name_data.push_back(notes.get_name_leafdata());
    if (novadigm.is_set || is_set(novadigm.operation)) leaf_name_data.push_back(novadigm.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.operation)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (pad.is_set || is_set(pad.operation)) leaf_name_data.push_back(pad.get_name_leafdata());
    if (pcanywhere.is_set || is_set(pcanywhere.operation)) leaf_name_data.push_back(pcanywhere.get_name_leafdata());
    if (pop3.is_set || is_set(pop3.operation)) leaf_name_data.push_back(pop3.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.operation)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pptp.is_set || is_set(pptp.operation)) leaf_name_data.push_back(pptp.get_name_leafdata());
    if (printer.is_set || is_set(printer.operation)) leaf_name_data.push_back(printer.get_name_leafdata());
    if (protocols.is_set || is_set(protocols.operation)) leaf_name_data.push_back(protocols.get_name_leafdata());
    if (qllc.is_set || is_set(qllc.operation)) leaf_name_data.push_back(qllc.get_name_leafdata());
    if (rcmd.is_set || is_set(rcmd.operation)) leaf_name_data.push_back(rcmd.get_name_leafdata());
    if (rip.is_set || is_set(rip.operation)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (rsrb.is_set || is_set(rsrb.operation)) leaf_name_data.push_back(rsrb.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.operation)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (rtcp.is_set || is_set(rtcp.operation)) leaf_name_data.push_back(rtcp.get_name_leafdata());
    if (rtsp.is_set || is_set(rtsp.operation)) leaf_name_data.push_back(rtsp.get_name_leafdata());
    if (secure_ftp.is_set || is_set(secure_ftp.operation)) leaf_name_data.push_back(secure_ftp.get_name_leafdata());
    if (secure_http.is_set || is_set(secure_http.operation)) leaf_name_data.push_back(secure_http.get_name_leafdata());
    if (secure_imap.is_set || is_set(secure_imap.operation)) leaf_name_data.push_back(secure_imap.get_name_leafdata());
    if (secure_irc.is_set || is_set(secure_irc.operation)) leaf_name_data.push_back(secure_irc.get_name_leafdata());
    if (secure_ldap.is_set || is_set(secure_ldap.operation)) leaf_name_data.push_back(secure_ldap.get_name_leafdata());
    if (secure_nntp.is_set || is_set(secure_nntp.operation)) leaf_name_data.push_back(secure_nntp.get_name_leafdata());
    if (secure_pop3.is_set || is_set(secure_pop3.operation)) leaf_name_data.push_back(secure_pop3.get_name_leafdata());
    if (secure_telnet.is_set || is_set(secure_telnet.operation)) leaf_name_data.push_back(secure_telnet.get_name_leafdata());
    if (sip.is_set || is_set(sip.operation)) leaf_name_data.push_back(sip.get_name_leafdata());
    if (skinny.is_set || is_set(skinny.operation)) leaf_name_data.push_back(skinny.get_name_leafdata());
    if (snapshot.is_set || is_set(snapshot.operation)) leaf_name_data.push_back(snapshot.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (socks.is_set || is_set(socks.operation)) leaf_name_data.push_back(socks.get_name_leafdata());
    if (sqlnet.is_set || is_set(sqlnet.operation)) leaf_name_data.push_back(sqlnet.get_name_leafdata());
    if (sqlserver.is_set || is_set(sqlserver.operation)) leaf_name_data.push_back(sqlserver.get_name_leafdata());
    if (ssh.is_set || is_set(ssh.operation)) leaf_name_data.push_back(ssh.get_name_leafdata());
    if (streamwork.is_set || is_set(streamwork.operation)) leaf_name_data.push_back(streamwork.get_name_leafdata());
    if (stun.is_set || is_set(stun.operation)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.operation)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (telnet.is_set || is_set(telnet.operation)) leaf_name_data.push_back(telnet.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.operation)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (vdolive.is_set || is_set(vdolive.operation)) leaf_name_data.push_back(vdolive.get_name_leafdata());
    if (vofr.is_set || is_set(vofr.operation)) leaf_name_data.push_back(vofr.get_name_leafdata());
    if (winmx.is_set || is_set(winmx.operation)) leaf_name_data.push_back(winmx.get_name_leafdata());
    if (xwindows.is_set || is_set(xwindows.operation)) leaf_name_data.push_back(xwindows.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "citrix")
    {
        if(citrix == nullptr)
        {
            citrix = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Citrix>();
        }
        return citrix;
    }

    if(child_yang_name == "fasttrack")
    {
        if(fasttrack == nullptr)
        {
            fasttrack = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack>();
        }
        return fasttrack;
    }

    if(child_yang_name == "gnutella")
    {
        if(gnutella == nullptr)
        {
            gnutella = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Gnutella>();
        }
        return gnutella;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Http>();
        }
        return http;
    }

    if(child_yang_name == "kazaa2")
    {
        if(kazaa2 == nullptr)
        {
            kazaa2 = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2>();
        }
        return kazaa2;
    }

    if(child_yang_name == "napster")
    {
        if(napster == nullptr)
        {
            napster = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Napster>();
        }
        return napster;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "smtp")
    {
        if(smtp == nullptr)
        {
            smtp = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Smtp>();
        }
        return smtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    if(citrix != nullptr)
    {
        children["citrix"] = citrix;
    }

    if(fasttrack != nullptr)
    {
        children["fasttrack"] = fasttrack;
    }

    if(gnutella != nullptr)
    {
        children["gnutella"] = gnutella;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(kazaa2 != nullptr)
    {
        children["kazaa2"] = kazaa2;
    }

    if(napster != nullptr)
    {
        children["napster"] = napster;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(smtp != nullptr)
    {
        children["smtp"] = smtp;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clns")
    {
        clns = value;
    }
    if(value_path == "clns_es")
    {
        clns_es = value;
    }
    if(value_path == "clns_is")
    {
        clns_is = value;
    }
    if(value_path == "cmns")
    {
        cmns = value;
    }
    if(value_path == "compressedtcp")
    {
        compressedtcp = value;
    }
    if(value_path == "cuseeme")
    {
        cuseeme = value;
    }
    if(value_path == "decnet")
    {
        decnet = value;
    }
    if(value_path == "decnet_node")
    {
        decnet_node = value;
    }
    if(value_path == "decnet_router-l1")
    {
        decnet_router_l1 = value;
    }
    if(value_path == "decnet_router-l2")
    {
        decnet_router_l2 = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
    }
    if(value_path == "dns")
    {
        dns = value;
    }
    if(value_path == "edonkey")
    {
        edonkey = value;
    }
    if(value_path == "egp")
    {
        egp = value;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "exchange")
    {
        exchange = value;
    }
    if(value_path == "finger")
    {
        finger = value;
    }
    if(value_path == "ftp")
    {
        ftp = value;
    }
    if(value_path == "gopher")
    {
        gopher = value;
    }
    if(value_path == "gre")
    {
        gre = value;
    }
    if(value_path == "h323")
    {
        h323 = value;
    }
    if(value_path == "icmp")
    {
        icmp = value;
    }
    if(value_path == "imap")
    {
        imap = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "ipinip")
    {
        ipinip = value;
    }
    if(value_path == "ipsec")
    {
        ipsec = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "ipx")
    {
        ipx = value;
    }
    if(value_path == "irc")
    {
        irc = value;
    }
    if(value_path == "kerberos")
    {
        kerberos = value;
    }
    if(value_path == "l2tp")
    {
        l2tp = value;
    }
    if(value_path == "ldap")
    {
        ldap = value;
    }
    if(value_path == "llc2")
    {
        llc2 = value;
    }
    if(value_path == "mgcp")
    {
        mgcp = value;
    }
    if(value_path == "netbios")
    {
        netbios = value;
    }
    if(value_path == "netshow")
    {
        netshow = value;
    }
    if(value_path == "nfs")
    {
        nfs = value;
    }
    if(value_path == "nntp")
    {
        nntp = value;
    }
    if(value_path == "notes")
    {
        notes = value;
    }
    if(value_path == "novadigm")
    {
        novadigm = value;
    }
    if(value_path == "ntp")
    {
        ntp = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
    if(value_path == "pad")
    {
        pad = value;
    }
    if(value_path == "pcanywhere")
    {
        pcanywhere = value;
    }
    if(value_path == "pop3")
    {
        pop3 = value;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
    }
    if(value_path == "pptp")
    {
        pptp = value;
    }
    if(value_path == "printer")
    {
        printer = value;
    }
    if(value_path == "protocols")
    {
        protocols = value;
    }
    if(value_path == "qllc")
    {
        qllc = value;
    }
    if(value_path == "rcmd")
    {
        rcmd = value;
    }
    if(value_path == "rip")
    {
        rip = value;
    }
    if(value_path == "rsrb")
    {
        rsrb = value;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
    }
    if(value_path == "rtcp")
    {
        rtcp = value;
    }
    if(value_path == "rtsp")
    {
        rtsp = value;
    }
    if(value_path == "secure-ftp")
    {
        secure_ftp = value;
    }
    if(value_path == "secure-http")
    {
        secure_http = value;
    }
    if(value_path == "secure-imap")
    {
        secure_imap = value;
    }
    if(value_path == "secure-irc")
    {
        secure_irc = value;
    }
    if(value_path == "secure-ldap")
    {
        secure_ldap = value;
    }
    if(value_path == "secure-nntp")
    {
        secure_nntp = value;
    }
    if(value_path == "secure-pop3")
    {
        secure_pop3 = value;
    }
    if(value_path == "secure-telnet")
    {
        secure_telnet = value;
    }
    if(value_path == "sip")
    {
        sip = value;
    }
    if(value_path == "skinny")
    {
        skinny = value;
    }
    if(value_path == "snapshot")
    {
        snapshot = value;
    }
    if(value_path == "snmp")
    {
        snmp = value;
    }
    if(value_path == "socks")
    {
        socks = value;
    }
    if(value_path == "sqlnet")
    {
        sqlnet = value;
    }
    if(value_path == "sqlserver")
    {
        sqlserver = value;
    }
    if(value_path == "ssh")
    {
        ssh = value;
    }
    if(value_path == "streamwork")
    {
        streamwork = value;
    }
    if(value_path == "stun")
    {
        stun = value;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
    if(value_path == "telnet")
    {
        telnet = value;
    }
    if(value_path == "tftp")
    {
        tftp = value;
    }
    if(value_path == "vdolive")
    {
        vdolive = value;
    }
    if(value_path == "vofr")
    {
        vofr = value;
    }
    if(value_path == "winmx")
    {
        winmx = value;
    }
    if(value_path == "xwindows")
    {
        xwindows = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Citrix::Citrix()
    :
    ica_tag{YType::str, "ica-tag"}
{
    yang_name = "citrix"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Citrix::~Citrix()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Citrix::has_data() const
{
    return ica_tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Citrix::has_operation() const
{
    return is_set(operation)
	|| is_set(ica_tag.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Citrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "citrix";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Citrix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Citrix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ica_tag.is_set || is_set(ica_tag.operation)) leaf_name_data.push_back(ica_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Citrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Citrix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Citrix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ica-tag")
    {
        ica_tag = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::Fasttrack()
    :
    file_transfer{YType::str, "file-transfer"}
{
    yang_name = "fasttrack"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::~Fasttrack()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::has_operation() const
{
    return is_set(operation)
	|| is_set(file_transfer.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fasttrack";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fasttrack' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.operation)) leaf_name_data.push_back(file_transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Fasttrack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::Gnutella()
    :
    file_transfer{YType::str, "file-transfer"}
{
    yang_name = "gnutella"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::~Gnutella()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::has_operation() const
{
    return is_set(operation)
	|| is_set(file_transfer.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gnutella";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gnutella' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.operation)) leaf_name_data.push_back(file_transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Gnutella::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Http::Http()
    :
    c_header_field{YType::str, "c-header-field"},
    host{YType::str, "host"},
    mime{YType::str, "mime"},
    s_header_field{YType::str, "s-header-field"},
    url{YType::str, "url"}
{
    yang_name = "http"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Http::~Http()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Http::has_data() const
{
    return c_header_field.is_set
	|| host.is_set
	|| mime.is_set
	|| s_header_field.is_set
	|| url.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(c_header_field.operation)
	|| is_set(host.operation)
	|| is_set(mime.operation)
	|| is_set(s_header_field.operation)
	|| is_set(url.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Http::get_entity_path(Entity* ancestor) const
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

    if (c_header_field.is_set || is_set(c_header_field.operation)) leaf_name_data.push_back(c_header_field.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mime.is_set || is_set(mime.operation)) leaf_name_data.push_back(mime.get_name_leafdata());
    if (s_header_field.is_set || is_set(s_header_field.operation)) leaf_name_data.push_back(s_header_field.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "c-header-field")
    {
        c_header_field = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "mime")
    {
        mime = value;
    }
    if(value_path == "s-header-field")
    {
        s_header_field = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::Kazaa2()
    :
    file_transfer{YType::str, "file-transfer"}
{
    yang_name = "kazaa2"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::~Kazaa2()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::has_data() const
{
    return file_transfer.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::has_operation() const
{
    return is_set(operation)
	|| is_set(file_transfer.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kazaa2";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Kazaa2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_transfer.is_set || is_set(file_transfer.operation)) leaf_name_data.push_back(file_transfer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Kazaa2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file-transfer")
    {
        file_transfer = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Napster::Napster()
    :
    non_std{YType::empty, "non-std"}
{
    yang_name = "napster"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Napster::~Napster()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Napster::has_data() const
{
    return non_std.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Napster::has_operation() const
{
    return is_set(operation)
	|| is_set(non_std.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Napster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "napster";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Napster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Napster' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_std.is_set || is_set(non_std.operation)) leaf_name_data.push_back(non_std.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Napster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Napster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Napster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-std")
    {
        non_std = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Rtp::Rtp()
    :
    audio{YType::empty, "audio"},
    payload_type{YType::str, "payload-type"},
    video{YType::empty, "video"}
{
    yang_name = "rtp"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Rtp::has_data() const
{
    return audio.is_set
	|| payload_type.is_set
	|| video.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Rtp::has_operation() const
{
    return is_set(operation)
	|| is_set(audio.operation)
	|| is_set(payload_type.operation)
	|| is_set(video.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (audio.is_set || is_set(audio.operation)) leaf_name_data.push_back(audio.get_name_leafdata());
    if (payload_type.is_set || is_set(payload_type.operation)) leaf_name_data.push_back(payload_type.get_name_leafdata());
    if (video.is_set || is_set(video.operation)) leaf_name_data.push_back(video.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Rtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "audio")
    {
        audio = value;
    }
    if(value_path == "payload-type")
    {
        payload_type = value;
    }
    if(value_path == "video")
    {
        video = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Smtp::Smtp()
    :
    extended{YType::empty, "extended"}
{
    yang_name = "smtp"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Smtp::~Smtp()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Smtp::has_data() const
{
    return extended.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Smtp::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Smtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Smtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Smtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Attribute()
    :
    business_relevance(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance>())
	,traffic_class(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass>())
{
    business_relevance->parent = this;

    traffic_class->parent = this;

    yang_name = "attribute"; yang_parent_name = "protocol";
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_data() const
{
    return (business_relevance !=  nullptr && business_relevance->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_operation() const
{
    return is_set(operation)
	|| (business_relevance !=  nullptr && business_relevance->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "business-relevance")
    {
        if(business_relevance == nullptr)
        {
            business_relevance = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance>();
        }
        return business_relevance;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(business_relevance != nullptr)
    {
        children["business-relevance"] = business_relevance;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    business_irrelevant{YType::empty, "business-irrelevant"},
    business_relevant{YType::empty, "business-relevant"},
    default_{YType::empty, "default"}
{
    yang_name = "business-relevance"; yang_parent_name = "attribute";
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return business_irrelevant.is_set
	|| business_relevant.is_set
	|| default_.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(operation)
	|| is_set(business_irrelevant.operation)
	|| is_set(business_relevant.operation)
	|| is_set(default_.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BusinessRelevance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (business_irrelevant.is_set || is_set(business_irrelevant.operation)) leaf_name_data.push_back(business_irrelevant.get_name_leafdata());
    if (business_relevant.is_set || is_set(business_relevant.operation)) leaf_name_data.push_back(business_relevant.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "business-irrelevant")
    {
        business_irrelevant = value;
    }
    if(value_path == "business-relevant")
    {
        business_relevant = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    broadcast_video{YType::empty, "broadcast-video"},
    bulk_data{YType::empty, "bulk-data"},
    multimedia_conferencing{YType::empty, "multimedia-conferencing"},
    multimedia_streaming{YType::empty, "multimedia-streaming"},
    network_control{YType::empty, "network-control"},
    ops_admin_mgmt{YType::empty, "ops-admin-mgmt"},
    real_time_interactive{YType::empty, "real-time-interactive"},
    signaling{YType::empty, "signaling"},
    transactional_data{YType::empty, "transactional-data"},
    voip_telephony{YType::empty, "voip-telephony"}
{
    yang_name = "traffic-class"; yang_parent_name = "attribute";
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_data() const
{
    return broadcast_video.is_set
	|| bulk_data.is_set
	|| multimedia_conferencing.is_set
	|| multimedia_streaming.is_set
	|| network_control.is_set
	|| ops_admin_mgmt.is_set
	|| real_time_interactive.is_set
	|| signaling.is_set
	|| transactional_data.is_set
	|| voip_telephony.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_video.operation)
	|| is_set(bulk_data.operation)
	|| is_set(multimedia_conferencing.operation)
	|| is_set(multimedia_streaming.operation)
	|| is_set(network_control.operation)
	|| is_set(ops_admin_mgmt.operation)
	|| is_set(real_time_interactive.operation)
	|| is_set(signaling.operation)
	|| is_set(transactional_data.operation)
	|| is_set(voip_telephony.operation);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficClass' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_video.is_set || is_set(broadcast_video.operation)) leaf_name_data.push_back(broadcast_video.get_name_leafdata());
    if (bulk_data.is_set || is_set(bulk_data.operation)) leaf_name_data.push_back(bulk_data.get_name_leafdata());
    if (multimedia_conferencing.is_set || is_set(multimedia_conferencing.operation)) leaf_name_data.push_back(multimedia_conferencing.get_name_leafdata());
    if (multimedia_streaming.is_set || is_set(multimedia_streaming.operation)) leaf_name_data.push_back(multimedia_streaming.get_name_leafdata());
    if (network_control.is_set || is_set(network_control.operation)) leaf_name_data.push_back(network_control.get_name_leafdata());
    if (ops_admin_mgmt.is_set || is_set(ops_admin_mgmt.operation)) leaf_name_data.push_back(ops_admin_mgmt.get_name_leafdata());
    if (real_time_interactive.is_set || is_set(real_time_interactive.operation)) leaf_name_data.push_back(real_time_interactive.get_name_leafdata());
    if (signaling.is_set || is_set(signaling.operation)) leaf_name_data.push_back(signaling.get_name_leafdata());
    if (transactional_data.is_set || is_set(transactional_data.operation)) leaf_name_data.push_back(transactional_data.get_name_leafdata());
    if (voip_telephony.is_set || is_set(voip_telephony.operation)) leaf_name_data.push_back(voip_telephony.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-video")
    {
        broadcast_video = value;
    }
    if(value_path == "bulk-data")
    {
        bulk_data = value;
    }
    if(value_path == "multimedia-conferencing")
    {
        multimedia_conferencing = value;
    }
    if(value_path == "multimedia-streaming")
    {
        multimedia_streaming = value;
    }
    if(value_path == "network-control")
    {
        network_control = value;
    }
    if(value_path == "ops-admin-mgmt")
    {
        ops_admin_mgmt = value;
    }
    if(value_path == "real-time-interactive")
    {
        real_time_interactive = value;
    }
    if(value_path == "signaling")
    {
        signaling = value;
    }
    if(value_path == "transactional-data")
    {
        transactional_data = value;
    }
    if(value_path == "voip-telephony")
    {
        voip_telephony = value;
    }
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>())
{
    destination->parent = this;

    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::SecurityGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_children() const
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

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "destination"; yang_parent_name = "security-group";
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{
    yang_name = "source"; yang_parent_name = "security-group";
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Policy::ClassMap::Match::Not::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{
    yang_name = "source-address"; yang_parent_name = "not";
}

Native::Policy::ClassMap::Match::Not::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mac.operation);
}

std::string Native::Policy::ClassMap::Match::Not::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::Match::Not::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

Native::Policy::ClassMap::NoMatch::NoMatch()
    :
    authorization_status(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>())
	,method(std::make_shared<Native::Policy::ClassMap::NoMatch::Method>())
	,result_type(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>())
{
    authorization_status->parent = this;

    authorizing_method_priority->parent = this;

    method->parent = this;

    result_type->parent = this;

    yang_name = "no-match"; yang_parent_name = "class-map";
}

Native::Policy::ClassMap::NoMatch::~NoMatch()
{
}

bool Native::Policy::ClassMap::NoMatch::has_data() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    return (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data());
}

bool Native::Policy::ClassMap::NoMatch::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-match";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoMatch' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activated-service-template")
    {
        for(auto const & c : activated_service_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>();
        }
        return result_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : activated_service_template)
    {
        children[c->get_segment_path()] = c;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{
    yang_name = "activated-service-template"; yang_parent_name = "no-match";
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(service_name.operation);
}

std::string Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActivatedServiceTemplate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{
    yang_name = "authorization-status"; yang_parent_name = "no-match";
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(authorized.operation)
	|| is_set(unauthorized.operation);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizationStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.operation)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.operation)) leaf_name_data.push_back(unauthorized.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authorized")
    {
        authorized = value;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
    }
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{
    yang_name = "authorizing-method-priority"; yang_parent_name = "no-match";
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizingMethodPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
}

Native::Policy::ClassMap::NoMatch::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "method"; yang_parent_name = "no-match";
}

Native::Policy::ClassMap::NoMatch::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::NoMatch::Method::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Policy::ClassMap::NoMatch::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::Method::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Policy::ClassMap::NoMatch::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "no-match";
}

Native::Policy::ClassMap::NoMatch::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::ResultType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResultType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>())
{
    dot1x->parent = this;

    mab->parent = this;

    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type";
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_operation() const
{
    return is_set(operation)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::ResultType::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{
    yang_name = "dot1x"; yang_parent_name = "method";
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1X' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{
    yang_name = "mab"; yang_parent_name = "method";
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mab' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{
    yang_name = "webauth"; yang_parent_name = "method";
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_timeout.operation)
	|| is_set(agent_not_found.operation)
	|| is_set(authoritative.operation)
	|| is_set(method_timeout.operation)
	|| is_set(none.operation)
	|| is_set(success.operation);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";

    return path_buffer.str();

}

const EntityPath Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Webauth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.operation)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.operation)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.operation)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.operation)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.operation)) leaf_name_data.push_back(success.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "success")
    {
        success = value;
    }
}

Native::Policy::PolicyMap::PolicyMap()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    protocol{YType::enumeration, "protocol"},
    sequence_interval{YType::uint16, "sequence-interval"},
    subscriber{YType::empty, "subscriber"},
    type{YType::enumeration, "type"}
{
    yang_name = "policy-map"; yang_parent_name = "policy";
}

Native::Policy::PolicyMap::~PolicyMap()
{
}

bool Native::Policy::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| protocol.is_set
	|| sequence_interval.is_set
	|| subscriber.is_set
	|| type.is_set;
}

bool Native::Policy::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(protocol.operation)
	|| is_set(sequence_interval.operation)
	|| is_set(subscriber.operation)
	|| is_set(type.operation);
}

std::string Native::Policy::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:policy-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sequence_interval.is_set || is_set(sequence_interval.operation)) leaf_name_data.push_back(sequence_interval.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.operation)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval = value;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Policy::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    match_type{YType::enumeration, "match-type"}
{
    yang_name = "event"; yang_parent_name = "policy-map";
}

Native::Policy::PolicyMap::Event::~Event()
{
}

bool Native::Policy::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| match_type.is_set;
}

bool Native::Policy::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(event_type.operation)
	|| is_set(match_type.operation);
}

std::string Native::Policy::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.operation)) leaf_name_data.push_back(match_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-number")
    {
        for(auto const & c : class_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber>();
        c->parent = this;
        class_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
    if(value_path == "match-type")
    {
        match_type = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ClassNumber()
    :
    number{YType::uint8, "number"},
    class_{YType::str, "class"},
    execution_type{YType::enumeration, "execution-type"}
{
    yang_name = "class-number"; yang_parent_name = "event";
}

Native::Policy::PolicyMap::Event::ClassNumber::~ClassNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_data() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_data())
            return true;
    }
    return number.is_set
	|| class_.is_set
	|| execution_type.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_operation() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(class_.operation)
	|| is_set(execution_type.operation);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (execution_type.is_set || is_set(execution_type.operation)) leaf_name_data.push_back(execution_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-number")
    {
        for(auto const & c : action_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber>();
        c->parent = this;
        action_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "execution-type")
    {
        execution_type = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::ActionNumber()
    :
    number{YType::uint8, "number"},
    authentication_restart{YType::uint16, "authentication-restart"},
    authorize{YType::empty, "authorize"},
    clear_session{YType::empty, "clear-session"}
    	,
    activate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>())
	,authenticate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>())
	,pause(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>())
	,resume(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>())
	,terminate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>())
{
    activate->parent = this;

    authenticate->parent = this;

    pause->parent = this;

    resume->parent = this;

    terminate->parent = this;

    yang_name = "action-number"; yang_parent_name = "class-number";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::~ActionNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_data() const
{
    return number.is_set
	|| authentication_restart.is_set
	|| authorize.is_set
	|| clear_session.is_set
	|| (activate !=  nullptr && activate->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (pause !=  nullptr && pause->has_data())
	|| (resume !=  nullptr && resume->has_data())
	|| (terminate !=  nullptr && terminate->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(authentication_restart.operation)
	|| is_set(authorize.operation)
	|| is_set(clear_session.operation)
	|| (activate !=  nullptr && activate->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (pause !=  nullptr && pause->has_operation())
	|| (resume !=  nullptr && resume->has_operation())
	|| (terminate !=  nullptr && terminate->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-number" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (authentication_restart.is_set || is_set(authentication_restart.operation)) leaf_name_data.push_back(authentication_restart.get_name_leafdata());
    if (authorize.is_set || is_set(authorize.operation)) leaf_name_data.push_back(authorize.get_name_leafdata());
    if (clear_session.is_set || is_set(clear_session.operation)) leaf_name_data.push_back(clear_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>();
        }
        return authenticate;
    }

    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>();
        }
        return pause;
    }

    if(child_yang_name == "resume")
    {
        if(resume == nullptr)
        {
            resume = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>();
        }
        return resume;
    }

    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>();
        }
        return terminate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(activate != nullptr)
    {
        children["activate"] = activate;
    }

    if(authenticate != nullptr)
    {
        children["authenticate"] = authenticate;
    }

    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    if(resume != nullptr)
    {
        children["resume"] = resume;
    }

    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart = value;
    }
    if(value_path == "authorize")
    {
        authorize = value;
    }
    if(value_path == "clear-session")
    {
        clear_session = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::Terminate()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{
    yang_name = "terminate"; yang_parent_name = "action-number";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::~Terminate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1x.operation)
	|| is_set(mab.operation)
	|| is_set(webauth.operation);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Terminate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.operation)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.operation)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.operation)) leaf_name_data.push_back(webauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
    }
    if(value_path == "mab")
    {
        mab = value;
    }
    if(value_path == "webauth")
    {
        webauth = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::Resume()
    :
    reauthentication{YType::empty, "reauthentication"}
{
    yang_name = "resume"; yang_parent_name = "action-number";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::~Resume()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_operation() const
{
    return is_set(operation)
	|| is_set(reauthentication.operation);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resume' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.operation)) leaf_name_data.push_back(reauthentication.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::Pause()
    :
    reauthentication{YType::empty, "reauthentication"}
{
    yang_name = "pause"; yang_parent_name = "action-number";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::~Pause()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_operation() const
{
    return is_set(operation)
	|| is_set(reauthentication.operation);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.operation)) leaf_name_data.push_back(reauthentication.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::Activate()
    :
    service_template{YType::str, "service-template"}
{
    yang_name = "activate"; yang_parent_name = "action-number";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::~Activate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_data() const
{
    return service_template.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_operation() const
{
    return is_set(operation)
	|| is_set(service_template.operation);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Activate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_template.is_set || is_set(service_template.operation)) leaf_name_data.push_back(service_template.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-template")
    {
        service_template = value;
    }
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Authenticate()
    :
    using(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>())
{
    using->parent = this;

    yang_name = "authenticate"; yang_parent_name = "action-number";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::~Authenticate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_data() const
{
    return (using !=  nullptr && using->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_operation() const
{
    return is_set(operation)
	|| (using !=  nullptr && using->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authenticate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "using")
    {
        if(using == nullptr)
        {
            using = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>();
        }
        return using;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(using != nullptr)
    {
        children["using"] = using;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Using()
    :
    both{YType::empty, "both"},
    method{YType::enumeration, "method"},
    priority{YType::uint8, "priority"},
    retries{YType::uint8, "retries"},
    retry_time{YType::uint16, "retry-time"}
{
    yang_name = "using"; yang_parent_name = "authenticate";
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::~Using()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_data() const
{
    return both.is_set
	|| method.is_set
	|| priority.is_set
	|| retries.is_set
	|| retry_time.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_operation() const
{
    return is_set(operation)
	|| is_set(both.operation)
	|| is_set(method.operation)
	|| is_set(priority.operation)
	|| is_set(retries.operation)
	|| is_set(retry_time.operation);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "using";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Using' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both.is_set || is_set(both.operation)) leaf_name_data.push_back(both.get_name_leafdata());
    if (method.is_set || is_set(method.operation)) leaf_name_data.push_back(method.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.operation)) leaf_name_data.push_back(retry_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "both")
    {
        both = value;
    }
    if(value_path == "method")
    {
        method = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
    }
}

Native::Policy::PolicyMap::Class_::Class_()
    :
    name{YType::str, "name"},
    insert_before{YType::str, "insert-before"},
    type{YType::enumeration, "type"}
    	,
    appnav_policy(std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy>())
	,inspect_police(std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice>())
	,pm_policy(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy>())
	,policy(std::make_shared<Native::Policy::PolicyMap::Class_::Policy_>())
{
    appnav_policy->parent = this;

    inspect_police->parent = this;

    pm_policy->parent = this;

    policy->parent = this;

    yang_name = "class"; yang_parent_name = "policy-map";
}

Native::Policy::PolicyMap::Class_::~Class_()
{
}

bool Native::Policy::PolicyMap::Class_::has_data() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| insert_before.is_set
	|| type.is_set
	|| (appnav_policy !=  nullptr && appnav_policy->has_data())
	|| (inspect_police !=  nullptr && inspect_police->has_data())
	|| (pm_policy !=  nullptr && pm_policy->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool Native::Policy::PolicyMap::Class_::has_operation() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(insert_before.operation)
	|| is_set(type.operation)
	|| (appnav_policy !=  nullptr && appnav_policy->has_operation())
	|| (inspect_police !=  nullptr && inspect_police->has_operation())
	|| (pm_policy !=  nullptr && pm_policy->has_operation())
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Class_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.operation)) leaf_name_data.push_back(insert_before.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-list")
    {
        for(auto const & c : action_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList>();
        c->parent = this;
        action_list.push_back(c);
        return c;
    }

    if(child_yang_name == "appnav-policy")
    {
        if(appnav_policy == nullptr)
        {
            appnav_policy = std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy>();
        }
        return appnav_policy;
    }

    if(child_yang_name == "inspect-police")
    {
        if(inspect_police == nullptr)
        {
            inspect_police = std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice>();
        }
        return inspect_police;
    }

    if(child_yang_name == "pm-policy")
    {
        if(pm_policy == nullptr)
        {
            pm_policy = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy>();
        }
        return pm_policy;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy::PolicyMap::Class_::Policy_>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(appnav_policy != nullptr)
    {
        children["appnav-policy"] = appnav_policy;
    }

    if(inspect_police != nullptr)
    {
        children["inspect-police"] = inspect_police;
    }

    if(pm_policy != nullptr)
    {
        children["pm-policy"] = pm_policy;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::AppnavPolicy()
    :
    monitor_load{YType::enumeration, "monitor-load"},
    pass_through{YType::empty, "pass-through"}
{
    yang_name = "appnav-policy"; yang_parent_name = "class";
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::~AppnavPolicy()
{
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_data() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_data())
            return true;
    }
    return monitor_load.is_set
	|| pass_through.is_set;
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::has_operation() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(monitor_load.operation)
	|| is_set(pass_through.operation);
}

std::string Native::Policy::PolicyMap::Class_::AppnavPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appnav-policy";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::AppnavPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AppnavPolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_load.is_set || is_set(monitor_load.operation)) leaf_name_data.push_back(monitor_load.get_name_leafdata());
    if (pass_through.is_set || is_set(pass_through.operation)) leaf_name_data.push_back(pass_through.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::AppnavPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute")
    {
        for(auto const & c : distribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute>();
        c->parent = this;
        distribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::AppnavPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor-load")
    {
        monitor_load = value;
    }
    if(value_path == "pass-through")
    {
        pass_through = value;
    }
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::Distribute()
    :
    service_node_group{YType::str, "service-node-group"},
    insert_before{YType::str, "insert-before"}
{
    yang_name = "distribute"; yang_parent_name = "appnav-policy";
}

Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::~Distribute()
{
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_data() const
{
    return service_node_group.is_set
	|| insert_before.is_set;
}

bool Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::has_operation() const
{
    return is_set(operation)
	|| is_set(service_node_group.operation)
	|| is_set(insert_before.operation);
}

std::string Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute" <<"[service-node-group='" <<service_node_group <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_node_group.is_set || is_set(service_node_group.operation)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.operation)) leaf_name_data.push_back(insert_before.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::AppnavPolicy::Distribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-node-group")
    {
        service_node_group = value;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
    }
}

Native::Policy::PolicyMap::Class_::Policy_::Policy_()
    :
    action{YType::enumeration, "action"},
    log{YType::empty, "log"},
    parameter_map{YType::str, "parameter-map"}
    	,
    dpi(std::make_shared<Native::Policy::PolicyMap::Class_::Policy_::Dpi>())
{
    dpi->parent = this;

    yang_name = "policy"; yang_parent_name = "class";
}

Native::Policy::PolicyMap::Class_::Policy_::~Policy_()
{
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_data() const
{
    return action.is_set
	|| log.is_set
	|| parameter_map.is_set
	|| (dpi !=  nullptr && dpi->has_data());
}

bool Native::Policy::PolicyMap::Class_::Policy_::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(log.operation)
	|| is_set(parameter_map.operation)
	|| (dpi !=  nullptr && dpi->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::Policy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::Policy_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.operation)) leaf_name_data.push_back(parameter_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::Policy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dpi")
    {
        if(dpi == nullptr)
        {
            dpi = std::make_shared<Native::Policy::PolicyMap::Class_::Policy_::Dpi>();
        }
        return dpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::Policy_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dpi != nullptr)
    {
        children["dpi"] = dpi;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::Policy_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
    }
}

Native::Policy::PolicyMap::Class_::Policy_::Dpi::Dpi()
    :
    policy_map{YType::str, "policy-map"},
    type{YType::enumeration, "type"}
{
    yang_name = "dpi"; yang_parent_name = "policy";
}

Native::Policy::PolicyMap::Class_::Policy_::Dpi::~Dpi()
{
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_data() const
{
    return policy_map.is_set
	|| type.is_set;
}

bool Native::Policy::PolicyMap::Class_::Policy_::Dpi::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_map.operation)
	|| is_set(type.operation);
}

std::string Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpi";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dpi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map.is_set || is_set(policy_map.operation)) leaf_name_data.push_back(policy_map.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::Policy_::Dpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::Policy_::Dpi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-map")
    {
        policy_map = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::PmPolicy()
    :
    flow(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Flow>())
	,monitor(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor>())
{
    flow->parent = this;

    monitor->parent = this;

    yang_name = "pm-policy"; yang_parent_name = "class";
}

Native::Policy::PolicyMap::Class_::PmPolicy::~PmPolicy()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_data() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_data())
            return true;
    }
    return (flow !=  nullptr && flow->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::has_operation() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (flow !=  nullptr && flow->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-policy";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmPolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "react")
    {
        for(auto const & c : react)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React>();
        c->parent = this;
        react.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    for (auto const & c : react)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::PmPolicy::Flow::Flow()
    :
    monitor{YType::str, "monitor"}
{
    yang_name = "flow"; yang_parent_name = "pm-policy";
}

Native::Policy::PolicyMap::Class_::PmPolicy::Flow::~Flow()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_data() const
{
    return monitor.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Flow::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor.operation);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Monitor()
    :
    metric(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric>())
{
    metric->parent = this;

    yang_name = "monitor"; yang_parent_name = "pm-policy";
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::~Monitor()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_data() const
{
    return (metric !=  nullptr && metric->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::has_operation() const
{
    return is_set(operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Metric()
    :
    rtp(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp>())
{
    rtp->parent = this;

    yang_name = "metric"; yang_parent_name = "monitor";
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::~Metric()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_data() const
{
    return (rtp !=  nullptr && rtp->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::has_operation() const
{
    return is_set(operation)
	|| (rtp !=  nullptr && rtp->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp>();
        }
        return rtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::Rtp()
{
    yang_name = "rtp"; yang_parent_name = "metric";
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::~Rtp()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rtp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        for(auto const & c : clock_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clock_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::ClockRate()
    :
    number{YType::str, "number"},
    frequency{YType::uint32, "frequency"}
{
    yang_name = "clock-rate"; yang_parent_name = "rtp";
}

Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::~ClockRate()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_data() const
{
    return number.is_set
	|| frequency.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(frequency.operation);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClockRate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "frequency")
    {
        frequency = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::React()
    :
    id{YType::uint16, "id"},
    description{YType::str, "description"},
    mode{YType::enumeration, "mode"}
    	,
    action(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Action>())
	,alarm(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm>())
	,threshold(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold>())
{
    action->parent = this;

    alarm->parent = this;

    threshold->parent = this;

    yang_name = "react"; yang_parent_name = "pm-policy";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::~React()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_data() const
{
    return id.is_set
	|| description.is_set
	|| mode.is_set
	|| (action !=  nullptr && action->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(description.operation)
	|| is_set(mode.operation)
	|| (action !=  nullptr && action->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Action>();
        }
        return action;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::Action()
    :
    snmp{YType::empty, "snmp"},
    syslog{YType::empty, "syslog"}
{
    yang_name = "action"; yang_parent_name = "react";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::~Action()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_data() const
{
    return snmp.is_set
	|| syslog.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(snmp.operation)
	|| is_set(syslog.operation);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmp")
    {
        snmp = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Alarm()
    :
    severity{YType::enumeration, "severity"}
    	,
    type(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type>())
{
    type->parent = this;

    yang_name = "alarm"; yang_parent_name = "react";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::~Alarm()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_data() const
{
    return severity.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Alarm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Type()
    :
    discrete{YType::empty, "discrete"}
    	,
    grouped(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped>())
{
    grouped->parent = this;

    yang_name = "type"; yang_parent_name = "alarm";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::~Type()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_data() const
{
    return discrete.is_set
	|| (grouped !=  nullptr && grouped->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(discrete.operation)
	|| (grouped !=  nullptr && grouped->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discrete.is_set || is_set(discrete.operation)) leaf_name_data.push_back(discrete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grouped")
    {
        if(grouped == nullptr)
        {
            grouped = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped>();
        }
        return grouped;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(grouped != nullptr)
    {
        children["grouped"] = grouped;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discrete")
    {
        discrete = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::Grouped()
    :
    count{YType::uint16, "count"},
    percent{YType::uint8, "percent"}
{
    yang_name = "grouped"; yang_parent_name = "type";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::~Grouped()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_data() const
{
    return count.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(percent.operation);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grouped";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Grouped' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::Type::Grouped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Threshold()
    :
    value_(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_>())
{
    value_->parent = this;

    yang_name = "threshold"; yang_parent_name = "react";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::~Threshold()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_data() const
{
    return (value_ !=  nullptr && value_->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::has_operation() const
{
    return is_set(operation)
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Value_()
    :
    ge{YType::str, "ge"},
    gt{YType::str, "gt"},
    le{YType::str, "le"},
    lt{YType::str, "lt"}
    	,
    range(std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range>())
{
    range->parent = this;

    yang_name = "value"; yang_parent_name = "threshold";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::~Value_()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_data() const
{
    return ge.is_set
	|| gt.is_set
	|| le.is_set
	|| lt.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::has_operation() const
{
    return is_set(operation)
	|| is_set(ge.operation)
	|| is_set(gt.operation)
	|| is_set(le.operation)
	|| is_set(lt.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Value_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::Range()
    :
    high{YType::str, "high"},
    low{YType::str, "low"}
{
    yang_name = "range"; yang_parent_name = "value";
}

Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::~Range()
{
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(high.operation)
	|| is_set(low.operation);
}

std::string Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_entity_path(Entity* ancestor) const
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

    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::PmPolicy::React::Threshold::Value_::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Policy::PolicyMap::Class_::InspectPolice::InspectPolice()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice::Police>())
{
    police->parent = this;

    yang_name = "inspect-police"; yang_parent_name = "class";
}

Native::Policy::PolicyMap::Class_::InspectPolice::~InspectPolice()
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::has_operation() const
{
    return is_set(operation)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::InspectPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-police";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::InspectPolice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InspectPolice' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::InspectPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class_::InspectPolice::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::InspectPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::InspectPolice::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::InspectPolice::Police::Police()
    :
    burst{YType::uint32, "burst"},
    rate{YType::uint32, "rate"}
{
    yang_name = "police"; yang_parent_name = "inspect-police";
}

Native::Policy::PolicyMap::Class_::InspectPolice::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_data() const
{
    return burst.is_set
	|| rate.is_set;
}

bool Native::Policy::PolicyMap::Class_::InspectPolice::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(burst.operation)
	|| is_set(rate.operation);
}

std::string Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::InspectPolice::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::InspectPolice::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::ActionList()
    :
    action_type{YType::enumeration, "action-type"},
    netflow_sampler{YType::str, "netflow-sampler"},
    service_policy{YType::str, "service-policy"},
    trust{YType::enumeration, "trust"}
    	,
    bandwidth(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth>())
	,compression(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Compression>())
	,estimate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate>())
	,fair_queue(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::FairQueue>())
	,forward(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Forward>())
	,police_aggregate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate>())
	,police_catalyst(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst>())
	,police_cir_percent(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent>())
	,police_flow(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow>())
	,police_policy_map(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap>())
	,police_rate_pdp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp>())
	,police_rate_percent(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent>())
	,police_rate_unit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit>())
	,police_switch(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch>())
	,police_target_bitrate(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate>())
	,priority(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Priority>())
	,queue_buffers(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers>())
	,queue_limit(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimit>())
	,queue_limit_dscp(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp>())
	,random_detect(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect>())
	,set(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set>())
	,shape(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape>())
{
    bandwidth->parent = this;

    compression->parent = this;

    estimate->parent = this;

    fair_queue->parent = this;

    forward->parent = this;

    police_aggregate->parent = this;

    police_catalyst->parent = this;

    police_cir_percent->parent = this;

    police_flow->parent = this;

    police_policy_map->parent = this;

    police_rate_pdp->parent = this;

    police_rate_percent->parent = this;

    police_rate_unit->parent = this;

    police_switch->parent = this;

    police_target_bitrate->parent = this;

    priority->parent = this;

    queue_buffers->parent = this;

    queue_limit->parent = this;

    queue_limit_dscp->parent = this;

    random_detect->parent = this;

    set->parent = this;

    shape->parent = this;

    yang_name = "action-list"; yang_parent_name = "class";
}

Native::Policy::PolicyMap::Class_::ActionList::~ActionList()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::has_data() const
{
    return action_type.is_set
	|| netflow_sampler.is_set
	|| service_policy.is_set
	|| trust.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (compression !=  nullptr && compression->has_data())
	|| (estimate !=  nullptr && estimate->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (police_aggregate !=  nullptr && police_aggregate->has_data())
	|| (police_catalyst !=  nullptr && police_catalyst->has_data())
	|| (police_cir_percent !=  nullptr && police_cir_percent->has_data())
	|| (police_flow !=  nullptr && police_flow->has_data())
	|| (police_policy_map !=  nullptr && police_policy_map->has_data())
	|| (police_rate_pdp !=  nullptr && police_rate_pdp->has_data())
	|| (police_rate_percent !=  nullptr && police_rate_percent->has_data())
	|| (police_rate_unit !=  nullptr && police_rate_unit->has_data())
	|| (police_switch !=  nullptr && police_switch->has_data())
	|| (police_target_bitrate !=  nullptr && police_target_bitrate->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (queue_buffers !=  nullptr && queue_buffers->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data())
	|| (queue_limit_dscp !=  nullptr && queue_limit_dscp->has_data())
	|| (random_detect !=  nullptr && random_detect->has_data())
	|| (set !=  nullptr && set->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::has_operation() const
{
    return is_set(operation)
	|| is_set(action_type.operation)
	|| is_set(netflow_sampler.operation)
	|| is_set(service_policy.operation)
	|| is_set(trust.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (compression !=  nullptr && compression->has_operation())
	|| (estimate !=  nullptr && estimate->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (police_aggregate !=  nullptr && police_aggregate->has_operation())
	|| (police_catalyst !=  nullptr && police_catalyst->has_operation())
	|| (police_cir_percent !=  nullptr && police_cir_percent->has_operation())
	|| (police_flow !=  nullptr && police_flow->has_operation())
	|| (police_policy_map !=  nullptr && police_policy_map->has_operation())
	|| (police_rate_pdp !=  nullptr && police_rate_pdp->has_operation())
	|| (police_rate_percent !=  nullptr && police_rate_percent->has_operation())
	|| (police_rate_unit !=  nullptr && police_rate_unit->has_operation())
	|| (police_switch !=  nullptr && police_switch->has_operation())
	|| (police_target_bitrate !=  nullptr && police_target_bitrate->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (queue_buffers !=  nullptr && queue_buffers->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation())
	|| (queue_limit_dscp !=  nullptr && queue_limit_dscp->has_operation())
	|| (random_detect !=  nullptr && random_detect->has_operation())
	|| (set !=  nullptr && set->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-list" <<"[action-type='" <<action_type <<"']";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (netflow_sampler.is_set || is_set(netflow_sampler.operation)) leaf_name_data.push_back(netflow_sampler.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.operation)) leaf_name_data.push_back(service_policy.get_name_leafdata());
    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "compression")
    {
        if(compression == nullptr)
        {
            compression = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Compression>();
        }
        return compression;
    }

    if(child_yang_name == "estimate")
    {
        if(estimate == nullptr)
        {
            estimate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate>();
        }
        return estimate;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "police-aggregate")
    {
        if(police_aggregate == nullptr)
        {
            police_aggregate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceAggregate>();
        }
        return police_aggregate;
    }

    if(child_yang_name == "police-catalyst")
    {
        if(police_catalyst == nullptr)
        {
            police_catalyst = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCatalyst>();
        }
        return police_catalyst;
    }

    if(child_yang_name == "police-cir-percent")
    {
        if(police_cir_percent == nullptr)
        {
            police_cir_percent = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceCirPercent>();
        }
        return police_cir_percent;
    }

    if(child_yang_name == "police-flow")
    {
        if(police_flow == nullptr)
        {
            police_flow = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceFlow>();
        }
        return police_flow;
    }

    if(child_yang_name == "police-policy-map")
    {
        if(police_policy_map == nullptr)
        {
            police_policy_map = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PolicePolicyMap>();
        }
        return police_policy_map;
    }

    if(child_yang_name == "police-rate-pdp")
    {
        if(police_rate_pdp == nullptr)
        {
            police_rate_pdp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePdp>();
        }
        return police_rate_pdp;
    }

    if(child_yang_name == "police-rate-percent")
    {
        if(police_rate_percent == nullptr)
        {
            police_rate_percent = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRatePercent>();
        }
        return police_rate_percent;
    }

    if(child_yang_name == "police-rate-unit")
    {
        if(police_rate_unit == nullptr)
        {
            police_rate_unit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceRateUnit>();
        }
        return police_rate_unit;
    }

    if(child_yang_name == "police-switch")
    {
        if(police_switch == nullptr)
        {
            police_switch = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceSwitch>();
        }
        return police_switch;
    }

    if(child_yang_name == "police-target-bitrate")
    {
        if(police_target_bitrate == nullptr)
        {
            police_target_bitrate = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::PoliceTargetBitrate>();
        }
        return police_target_bitrate;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "queue-buffers")
    {
        if(queue_buffers == nullptr)
        {
            queue_buffers = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueBuffers>();
        }
        return queue_buffers;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimit>();
        }
        return queue_limit;
    }

    if(child_yang_name == "queue-limit-dscp")
    {
        if(queue_limit_dscp == nullptr)
        {
            queue_limit_dscp = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::QueueLimitDscp>();
        }
        return queue_limit_dscp;
    }

    if(child_yang_name == "random-detect")
    {
        if(random_detect == nullptr)
        {
            random_detect = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::RandomDetect>();
        }
        return random_detect;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Set>();
        }
        return set;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(compression != nullptr)
    {
        children["compression"] = compression;
    }

    if(estimate != nullptr)
    {
        children["estimate"] = estimate;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(police_aggregate != nullptr)
    {
        children["police-aggregate"] = police_aggregate;
    }

    if(police_catalyst != nullptr)
    {
        children["police-catalyst"] = police_catalyst;
    }

    if(police_cir_percent != nullptr)
    {
        children["police-cir-percent"] = police_cir_percent;
    }

    if(police_flow != nullptr)
    {
        children["police-flow"] = police_flow;
    }

    if(police_policy_map != nullptr)
    {
        children["police-policy-map"] = police_policy_map;
    }

    if(police_rate_pdp != nullptr)
    {
        children["police-rate-pdp"] = police_rate_pdp;
    }

    if(police_rate_percent != nullptr)
    {
        children["police-rate-percent"] = police_rate_percent;
    }

    if(police_rate_unit != nullptr)
    {
        children["police-rate-unit"] = police_rate_unit;
    }

    if(police_switch != nullptr)
    {
        children["police-switch"] = police_switch;
    }

    if(police_target_bitrate != nullptr)
    {
        children["police-target-bitrate"] = police_target_bitrate;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(queue_buffers != nullptr)
    {
        children["queue-buffers"] = queue_buffers;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    if(queue_limit_dscp != nullptr)
    {
        children["queue-limit-dscp"] = queue_limit_dscp;
    }

    if(random_detect != nullptr)
    {
        children["random-detect"] = random_detect;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
    if(value_path == "netflow-sampler")
    {
        netflow_sampler = value;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
    }
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Bandwidth()
    :
    bits{YType::uint32, "bits"},
    percent{YType::uint8, "percent"}
    	,
    remaining(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining>())
{
    remaining->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::~Bandwidth()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::has_data() const
{
    return bits.is_set
	|| percent.is_set
	|| (remaining !=  nullptr && remaining->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bits.operation)
	|| is_set(percent.operation)
	|| (remaining !=  nullptr && remaining->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bits.is_set || is_set(bits.operation)) leaf_name_data.push_back(bits.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remaining")
    {
        if(remaining == nullptr)
        {
            remaining = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining>();
        }
        return remaining;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remaining != nullptr)
    {
        children["remaining"] = remaining;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bits")
    {
        bits = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Remaining()
    :
    percent{YType::uint8, "percent"},
    ratio{YType::uint16, "ratio"},
    rem_option{YType::enumeration, "rem-option"}
    	,
    account(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account>())
{
    account->parent = this;

    yang_name = "remaining"; yang_parent_name = "bandwidth";
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::~Remaining()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::has_data() const
{
    return percent.is_set
	|| ratio.is_set
	|| rem_option.is_set
	|| (account !=  nullptr && account->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(ratio.operation)
	|| is_set(rem_option.operation)
	|| (account !=  nullptr && account->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remaining";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remaining' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (ratio.is_set || is_set(ratio.operation)) leaf_name_data.push_back(ratio.get_name_leafdata());
    if (rem_option.is_set || is_set(rem_option.operation)) leaf_name_data.push_back(rem_option.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account>();
        }
        return account;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["account"] = account;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "ratio")
    {
        ratio = value;
    }
    if(value_path == "rem-option")
    {
        rem_option = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::Account()
    :
    user_defined{YType::uint32, "user-defined"}
{
    yang_name = "account"; yang_parent_name = "remaining";
}

Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::~Account()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::has_data() const
{
    return user_defined.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::has_operation() const
{
    return is_set(operation)
	|| is_set(user_defined.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Account' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined.is_set || is_set(user_defined.operation)) leaf_name_data.push_back(user_defined.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::Account::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-defined")
    {
        user_defined = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::Compression()
    :
    header(nullptr) // presence node
{
    yang_name = "compression"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::~Compression()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::has_data() const
{
    return (header !=  nullptr && header->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && header->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Compression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compression";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Compression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Compression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Compression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Compression::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Compression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Compression::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::Header()
    :
    ip{YType::enumeration, "ip"}
{
    yang_name = "header"; yang_parent_name = "compression";
}

Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::~Header()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::has_data() const
{
    return ip.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Estimate()
    :
    bandwidth(nullptr) // presence node
{
    yang_name = "estimate"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::~Estimate()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::has_data() const
{
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::has_operation() const
{
    return is_set(operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "estimate";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Estimate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Estimate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::set_value(const std::string & value_path, std::string value)
{
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::Bandwidth()
    :
    drop_one_in{YType::uint32, "drop-one-in"}
    	,
    delay_one_in(std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn>())
{
    delay_one_in->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "estimate";
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::~Bandwidth()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::has_data() const
{
    return drop_one_in.is_set
	|| (delay_one_in !=  nullptr && delay_one_in->has_data());
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_one_in.operation)
	|| (delay_one_in !=  nullptr && delay_one_in->has_operation());
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_one_in.is_set || is_set(drop_one_in.operation)) leaf_name_data.push_back(drop_one_in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-one-in")
    {
        if(delay_one_in == nullptr)
        {
            delay_one_in = std::make_shared<Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn>();
        }
        return delay_one_in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay_one_in != nullptr)
    {
        children["delay-one-in"] = delay_one_in;
    }

    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-one-in")
    {
        drop_one_in = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::DelayOneIn()
    :
    doi{YType::uint32, "doi"},
    milliseconds{YType::uint32, "milliseconds"}
{
    yang_name = "delay-one-in"; yang_parent_name = "bandwidth";
}

Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::~DelayOneIn()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::has_data() const
{
    return doi.is_set
	|| milliseconds.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::has_operation() const
{
    return is_set(operation)
	|| is_set(doi.operation)
	|| is_set(milliseconds.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-one-in";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DelayOneIn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (doi.is_set || is_set(doi.operation)) leaf_name_data.push_back(doi.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.operation)) leaf_name_data.push_back(milliseconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Estimate::Bandwidth::DelayOneIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "doi")
    {
        doi = value;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::Forward::Forward()
    :
    service_index{YType::uint8, "service-index"},
    service_path{YType::uint32, "service-path"}
{
    yang_name = "forward"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::Forward::~Forward()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::Forward::has_data() const
{
    return service_index.is_set
	|| service_path.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::Forward::has_operation() const
{
    return is_set(operation)
	|| is_set(service_index.operation)
	|| is_set(service_path.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::Forward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forward' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_index.is_set || is_set(service_index.operation)) leaf_name_data.push_back(service_index.get_name_leafdata());
    if (service_path.is_set || is_set(service_path.operation)) leaf_name_data.push_back(service_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::Forward::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-index")
    {
        service_index = value;
    }
    if(value_path == "service-path")
    {
        service_path = value;
    }
}

Native::Policy::PolicyMap::Class_::ActionList::FairQueue::FairQueue()
    :
    dynamic_queues{YType::uint32, "dynamic-queues"},
    queue_limit{YType::uint16, "queue-limit"}
{
    yang_name = "fair-queue"; yang_parent_name = "action-list";
}

Native::Policy::PolicyMap::Class_::ActionList::FairQueue::~FairQueue()
{
}

bool Native::Policy::PolicyMap::Class_::ActionList::FairQueue::has_data() const
{
    return dynamic_queues.is_set
	|| queue_limit.is_set;
}

bool Native::Policy::PolicyMap::Class_::ActionList::FairQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic_queues.operation)
	|| is_set(queue_limit.operation);
}

std::string Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";

    return path_buffer.str();

}

const EntityPath Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FairQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_queues.is_set || is_set(dynamic_queues.operation)) leaf_name_data.push_back(dynamic_queues.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.operation)) leaf_name_data.push_back(queue_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class_::ActionList::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::PolicyMap::Class_::ActionList::FairQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic-queues")
    {
        dynamic_queues = value;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
    }
}

const Enum::YLeaf Native::Ipv6::Rip::VrfModeEnum::enable {0, "enable"};

const Enum::YLeaf Native::Vlan::AccessMap::ActionEnum::drop {0, "drop"};
const Enum::YLeaf Native::Vlan::AccessMap::ActionEnum::forward {1, "forward"};

const Enum::YLeaf Native::Vlan::Internal::Allocation::PolicyEnum::ascending {0, "ascending"};
const Enum::YLeaf Native::Vlan::Internal::Allocation::PolicyEnum::descending {1, "descending"};

const Enum::YLeaf Native::Vlan::VlanList::UniVlanEnum::community {0, "community"};
const Enum::YLeaf Native::Vlan::VlanList::UniVlanEnum::isolated {1, "isolated"};

const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::inspect {3, "inspect"};
const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::multicast_flows {4, "multicast-flows"};
const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::stack {5, "stack"};
const Enum::YLeaf Native::Policy::ClassMap::TypeEnum::traffic {6, "traffic"};

const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::aol {0, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::edonkey {1, "edonkey"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::fasttrack {2, "fasttrack"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::gnutella {3, "gnutella"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::http {4, "http"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::imap {5, "imap"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::kazaa2 {6, "kazaa2"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::msnmsgr {7, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::pop3 {8, "pop3"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::smtp {9, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::sunrpc {10, "sunrpc"};
const Enum::YLeaf Native::Policy::ClassMap::ProtocolEnum::ymsgr {11, "ymsgr"};

const Enum::YLeaf Native::Policy::ClassMap::PrematchEnum::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::ClassMap::PrematchEnum::match_any {1, "match-any"};
const Enum::YLeaf Native::Policy::ClassMap::PrematchEnum::match_none {2, "match-none"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaTypeEnum::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaTypeEnum::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaTypeEnum::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaTypeEnum::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaTypeEnum::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::x802_11_iapp {0, "x802-11-iapp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ace_svr {1, "ace-svr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::aol {2, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::appleqtc {3, "appleqtc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::biff {4, "biff"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::bittorrent {5, "bittorrent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::bootpc {6, "bootpc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::bootps {7, "bootps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cddbp {8, "cddbp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cifs {9, "cifs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cisco_fna {10, "cisco-fna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cisco_net_mgmt {11, "cisco-net-mgmt"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cisco_svcs {12, "cisco-svcs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cisco_sys {13, "cisco-sys"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cisco_tdp {14, "cisco-tdp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cisco_tna {15, "cisco-tna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::citriximaclient {16, "citriximaclient"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::clp {17, "clp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::creativepartnr {18, "creativepartnr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::creativeserver {19, "creativeserver"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::daytime {20, "daytime"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::dbase {21, "dbase"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::dbcontrol_agent {22, "dbcontrol_agent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ddns_v3 {23, "ddns-v3"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::dhcp_failover {24, "dhcp-failover"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::directconnect {25, "directconnect"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::discard {26, "discard"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::dnsix {27, "dnsix"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::echo {28, "echo"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::entrust_svc_hdlr {29, "entrust-svc-hdlr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::entrust_svcs {30, "entrust-svcs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::exec {31, "exec"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::fcip_port {32, "fcip-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ftps {33, "ftps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::gdoi {34, "gdoi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::giop {35, "giop"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::gtpv0 {36, "gtpv0"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::gtpv1 {37, "gtpv1"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::h225ras {38, "h225ras"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::h323callsigalt {39, "h323callsigalt"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::hp_alarm_mgr {40, "hp-alarm-mgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::hp_collector {41, "hp-collector"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::hp_managed_node {42, "hp-managed-node"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::hsrp {43, "hsrp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::https {44, "https"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ica {45, "ica"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::icabrowser {46, "icabrowser"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ident {47, "ident"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::igmpv3lite {48, "igmpv3lite"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::imap3 {49, "imap3"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::imaps {50, "imaps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ipass {51, "ipass"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ipsec_msft {52, "ipsec-msft"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::irc_serv {53, "irc-serv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ircs {54, "ircs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ircu {55, "ircu"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::isakmp {56, "isakmp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::iscsi {57, "iscsi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::iscsi_target {58, "iscsi-target"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::kermit {59, "kermit"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ldap_admin {60, "ldap-admin"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ldaps {61, "ldaps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::login {62, "login"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::lotusmtap {63, "lotusmtap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::lotusnote {64, "lotusnote"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::mapi {65, "mapi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_ad_rep {66, "ms-ad-rep"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_exch_nspi {67, "ms-exch-nspi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_frs {68, "ms-frs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_frsapi {69, "ms-frsapi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_rfr {70, "ms-rfr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::msn_messenger {71, "msn-messenger"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::netlogon {72, "netlogon"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::microsoft_ds {73, "microsoft-ds"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_cluster_net {74, "ms-cluster-net"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_dotnetster {75, "ms-dotnetster"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_sna {76, "ms-sna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_sql {77, "ms-sql"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ms_sql_m {78, "ms-sql-m"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::msexch_routing {79, "msexch-routing"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::msnmsgr {80, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::msrpc {81, "msrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::mysql {82, "mysql"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::n2h2server {83, "n2h2server"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ncp {84, "ncp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::net8_cman {85, "net8-cman"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::netbios_dgm {86, "netbios-dgm"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::netbios_ns {87, "netbios-ns"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::netbios_ssn {88, "netbios-ssn"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::netstat {89, "netstat"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::oem_agent {90, "oem-agent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::oracle {91, "oracle"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::oracle_em_vp {92, "oracle-em-vp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::oraclenames {93, "oraclenames"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::orasrv {94, "orasrv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::pcanywheredata {95, "pcanywheredata"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::pcanywherestat {96, "pcanywherestat"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::pop3s {97, "pop3s"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::pwdgen {98, "pwdgen"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::qmtp {99, "qmtp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::r_winsock {100, "r-winsock"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::radius {101, "radius"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::rdb_dbs_disp {102, "rdb-dbs-disp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::realmedia {103, "realmedia"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::realsecure {104, "realsecure"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::router {105, "router"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::rsvp_encap {106, "rsvp-encap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::rsvp_tunnel {107, "rsvp_tunnel"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::rtc_pm_port {108, "rtc-pm-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::rtelnet {109, "rtelnet"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::send {110, "send"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::shell {111, "shell"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::sip_tls {112, "sip-tls"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::sms {113, "sms"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::smtp {114, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::snmptrap {115, "snmptrap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::sql_net {116, "sql-net"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::sqlserv {117, "sqlserv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::sqlsrv {118, "sqlsrv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::sshell {119, "sshell"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ssp {120, "ssp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::syslog_conn {121, "syslog-conn"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::tacacs {122, "tacacs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::tacacs_ds {123, "tacacs-ds"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::tarantella {124, "tarantella"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::tcp {125, "tcp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::telnets {126, "telnets"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::time {127, "time"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::timed {128, "timed"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::tr_rsrb {129, "tr-rsrb"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ttc {130, "ttc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::udp {131, "udp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::uucp {132, "uucp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::vqp {133, "vqp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::webster {134, "webster"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::who {135, "who"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::wins {136, "wins"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::x11 {137, "x11"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::xdmcp {138, "xdmcp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::ymsgr {139, "ymsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::aarp {140, "aarp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::appletalk {141, "appletalk"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::arp {142, "arp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::bgp {143, "bgp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::bridge {144, "bridge"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::bstun {145, "bstun"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Protocol::ProtocolsEnum::cdp {146, "cdp"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaTypeEnum::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaTypeEnum::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaTypeEnum::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaTypeEnum::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaTypeEnum::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::x802_11_iapp {0, "x802-11-iapp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ace_svr {1, "ace-svr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::aol {2, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::appleqtc {3, "appleqtc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::biff {4, "biff"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::bittorrent {5, "bittorrent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::bootpc {6, "bootpc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::bootps {7, "bootps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cddbp {8, "cddbp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cifs {9, "cifs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cisco_fna {10, "cisco-fna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cisco_net_mgmt {11, "cisco-net-mgmt"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cisco_svcs {12, "cisco-svcs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cisco_sys {13, "cisco-sys"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cisco_tdp {14, "cisco-tdp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cisco_tna {15, "cisco-tna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::citriximaclient {16, "citriximaclient"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::clp {17, "clp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::creativepartnr {18, "creativepartnr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::creativeserver {19, "creativeserver"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::daytime {20, "daytime"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::dbase {21, "dbase"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::dbcontrol_agent {22, "dbcontrol_agent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ddns_v3 {23, "ddns-v3"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::dhcp_failover {24, "dhcp-failover"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::directconnect {25, "directconnect"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::discard {26, "discard"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::dnsix {27, "dnsix"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::echo {28, "echo"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::entrust_svc_hdlr {29, "entrust-svc-hdlr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::entrust_svcs {30, "entrust-svcs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::exec {31, "exec"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::fcip_port {32, "fcip-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ftps {33, "ftps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::gdoi {34, "gdoi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::giop {35, "giop"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::gtpv0 {36, "gtpv0"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::gtpv1 {37, "gtpv1"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::h225ras {38, "h225ras"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::h323callsigalt {39, "h323callsigalt"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::hp_alarm_mgr {40, "hp-alarm-mgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::hp_collector {41, "hp-collector"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::hp_managed_node {42, "hp-managed-node"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::hsrp {43, "hsrp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::https {44, "https"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ica {45, "ica"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::icabrowser {46, "icabrowser"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ident {47, "ident"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::igmpv3lite {48, "igmpv3lite"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::imap3 {49, "imap3"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::imaps {50, "imaps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ipass {51, "ipass"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ipsec_msft {52, "ipsec-msft"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::irc_serv {53, "irc-serv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ircs {54, "ircs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ircu {55, "ircu"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::isakmp {56, "isakmp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::iscsi {57, "iscsi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::iscsi_target {58, "iscsi-target"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::kermit {59, "kermit"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ldap_admin {60, "ldap-admin"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ldaps {61, "ldaps"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::login {62, "login"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::lotusmtap {63, "lotusmtap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::lotusnote {64, "lotusnote"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::mapi {65, "mapi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_ad_rep {66, "ms-ad-rep"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_exch_nspi {67, "ms-exch-nspi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_frs {68, "ms-frs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_frsapi {69, "ms-frsapi"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_rfr {70, "ms-rfr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::msn_messenger {71, "msn-messenger"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::netlogon {72, "netlogon"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::microsoft_ds {73, "microsoft-ds"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_cluster_net {74, "ms-cluster-net"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_dotnetster {75, "ms-dotnetster"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_sna {76, "ms-sna"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_sql {77, "ms-sql"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ms_sql_m {78, "ms-sql-m"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::msexch_routing {79, "msexch-routing"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::msnmsgr {80, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::msrpc {81, "msrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::mysql {82, "mysql"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::n2h2server {83, "n2h2server"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ncp {84, "ncp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::net8_cman {85, "net8-cman"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::netbios_dgm {86, "netbios-dgm"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::netbios_ns {87, "netbios-ns"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::netbios_ssn {88, "netbios-ssn"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::netstat {89, "netstat"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::oem_agent {90, "oem-agent"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::oracle {91, "oracle"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::oracle_em_vp {92, "oracle-em-vp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::oraclenames {93, "oraclenames"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::orasrv {94, "orasrv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::pcanywheredata {95, "pcanywheredata"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::pcanywherestat {96, "pcanywherestat"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::pop3s {97, "pop3s"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::pwdgen {98, "pwdgen"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::qmtp {99, "qmtp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::r_winsock {100, "r-winsock"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::radius {101, "radius"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::rdb_dbs_disp {102, "rdb-dbs-disp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::realmedia {103, "realmedia"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::realsecure {104, "realsecure"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::router {105, "router"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::rsvp_encap {106, "rsvp-encap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::rsvp_tunnel {107, "rsvp_tunnel"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::rtc_pm_port {108, "rtc-pm-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::rtelnet {109, "rtelnet"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::send {110, "send"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::shell {111, "shell"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::sip_tls {112, "sip-tls"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::sms {113, "sms"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::smtp {114, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::snmptrap {115, "snmptrap"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::sql_net {116, "sql-net"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::sqlserv {117, "sqlserv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::sqlsrv {118, "sqlsrv"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::sshell {119, "sshell"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ssp {120, "ssp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::syslog_conn {121, "syslog-conn"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::tacacs {122, "tacacs"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::tacacs_ds {123, "tacacs-ds"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::tarantella {124, "tarantella"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::tcp {125, "tcp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::telnets {126, "telnets"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::time {127, "time"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::timed {128, "timed"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::tr_rsrb {129, "tr-rsrb"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ttc {130, "ttc"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::udp {131, "udp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::uucp {132, "uucp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::vqp {133, "vqp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::webster {134, "webster"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::who {135, "who"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::wins {136, "wins"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::x11 {137, "x11"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::xdmcp {138, "xdmcp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::ymsgr {139, "ymsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::aarp {140, "aarp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::appletalk {141, "appletalk"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::arp {142, "arp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::bgp {143, "bgp"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::bridge {144, "bridge"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::bstun {145, "bstun"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsEnum::cdp {146, "cdp"};

const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::control {3, "control"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::packet_service {4, "packet-service"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::performance_monitor {5, "performance-monitor"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::service {6, "service"};
const Enum::YLeaf Native::Policy::PolicyMap::TypeEnum::service_chain {7, "service-chain"};

const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::http {0, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::im {1, "im"};
const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::p2p {3, "p2p"};
const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::pop3 {4, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::smtp {5, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::ProtocolEnum::sunrpc {6, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::aaa_available {0, "aaa-available"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::absolute_timeout {1, "absolute-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::agent_found {2, "agent-found"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::authentication_failure {3, "authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::authentication_success {4, "authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::authorization_failure {5, "authorization-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::authorization_success {6, "authorization-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::identity_update {7, "identity-update"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::inactivity_timeout {8, "inactivity-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::remote_authentication_failure {9, "remote-authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::remote_authentication_success {10, "remote-authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::session_disconnected {11, "session-disconnected"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::session_started {12, "session-started"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::tag_added {13, "tag-added"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::tag_removed {14, "tag-removed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::template_activated {15, "template-activated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::template_activation_failed {16, "template-activation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::template_deactivated {17, "template-deactivated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::template_deactivation_failed {18, "template-deactivation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::timer_expiry {19, "timer-expiry"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventTypeEnum::violation {20, "violation"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchTypeEnum::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchTypeEnum::match_first {1, "match-first"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ClassEnum::always {0, "always"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionTypeEnum::do_all {0, "do-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionTypeEnum::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionTypeEnum::do_until_success {2, "do-until-success"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::MethodEnum::dot1x {0, "dot1x"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::MethodEnum::mab {1, "mab"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::MethodEnum::webauth {2, "webauth"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::TypeEnum::inspect {0, "inspect"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::MS_port_mapper {0, "MS-port-mapper"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::cifs {1, "cifs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::http {2, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::ica {3, "ica"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::mapi {4, "mapi"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::nfs {5, "nfs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::ssl {6, "ssl"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::AppnavPolicy::MonitorLoadEnum::video {7, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ActionEnum::cxsc {0, "cxsc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ActionEnum::drop {1, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ActionEnum::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ActionEnum::pass {3, "pass"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ActionEnum::service_policy {4, "service-policy"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ParameterMapEnum::global {0, "global"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::ParameterMapEnum::gtp {1, "gtp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum::gtpv0 {0, "gtpv0"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum::gtpv1 {1, "gtpv1"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum::pop3 {3, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum::smtp {4, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::Policy_::Dpi::TypeEnum::sunrpc {5, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::celb {0, "celb"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::cn {1, "cn"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::default_ {2, "default"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::dvi4 {3, "dvi4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::dvi4_2 {4, "dvi4-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::dvi4_3 {5, "dvi4-3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::dvi4_4 {6, "dvi4-4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::g722 {7, "g722"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::g723 {8, "g723"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::g728 {9, "g728"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::g729 {10, "g729"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::gsm {11, "gsm"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::h261 {12, "h261"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::h263 {13, "h263"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::jpeg {14, "jpeg"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::l16 {15, "l16"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::l16_2 {16, "l16-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::lpc {17, "lpc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::mp2t {18, "mp2t"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::mpa {19, "mpa"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::mpv {20, "mpv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::nv {21, "nv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::pcma {22, "pcma"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::pcmu {23, "pcmu"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::Monitor::Metric::Rtp::ClockRate::NumberEnum::qcelp {24, "qcelp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::ModeEnum::media_stop {0, "media-stop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::ModeEnum::mrv {1, "mrv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::ModeEnum::rtp_jitter_average {2, "rtp-jitter-average"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::ModeEnum::transport_packets_lost_rate {3, "transport-packets-lost-rate"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::SeverityEnum::alert {0, "alert"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::SeverityEnum::critical {1, "critical"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::SeverityEnum::emergency {2, "emergency"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::SeverityEnum::error {3, "error"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::PmPolicy::React::Alarm::SeverityEnum::info {4, "info"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::TrustEnum::cos {0, "cos"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::TrustEnum::dscp {1, "dscp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::TrustEnum::ip_precedence {2, "ip-precedence"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::RemOptionEnum::percent {0, "percent"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Bandwidth::Remaining::RemOptionEnum::ratio {1, "ratio"};

const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::IpEnum::rtp {0, "rtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class_::ActionList::Compression::Header::IpEnum::tcp {1, "tcp"};


}
}

