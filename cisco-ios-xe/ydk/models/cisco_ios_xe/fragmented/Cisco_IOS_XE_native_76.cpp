
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_78.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_77.hpp"
#include "Cisco_IOS_XE_native_81.hpp"
#include "Cisco_IOS_XE_native_80.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::AccessList::AccessListExpandedRange::AccessListExpandedRange()
    :
    ip_extended_range{YType::uint16, "IP-extended-range"}
    	,
    deny(std::make_shared<Native::AccessList::AccessListExpandedRange::Deny>())
	,permit(std::make_shared<Native::AccessList::AccessListExpandedRange::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "access-list-expanded-range"; yang_parent_name = "access-list";
}

Native::AccessList::AccessListExpandedRange::~AccessListExpandedRange()
{
}

bool Native::AccessList::AccessListExpandedRange::has_data() const
{
    return ip_extended_range.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::AccessList::AccessListExpandedRange::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_extended_range.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:access-list-expanded-range" <<"[IP-extended-range='" <<ip_extended_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_extended_range.is_set || is_set(ip_extended_range.operation)) leaf_name_data.push_back(ip_extended_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::get_children() const
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

void Native::AccessList::AccessListExpandedRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "IP-extended-range")
    {
        ip_extended_range = value;
    }
}

Native::AccessList::AccessListExpandedRange::Permit::Permit()
    :
    ip(std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip>())
{
    ip->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-expanded-range";
}

Native::AccessList::AccessListExpandedRange::Permit::~Permit()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Permit::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Ip()
    :
    host(std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host>())
{
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::~Ip()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::has_data() const
{
    return (host !=  nullptr && host->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::has_operation() const
{
    return is_set(operation)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Host()
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::~Host()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"}
    	,
    host(std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_>())
{
    host->parent = this;

    yang_name = "ipv4-or-hostname"; yang_parent_name = "host";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| (host !=  nullptr && host->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Host_()
{
    yang_name = "host"; yang_parent_name = "ipv4-or-hostname";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::~Host_()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Ipv4OrHostname_()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    time_range{YType::str, "time-range"}
    	,
    dscp(std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp>())
	,tos(std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos>())
{
    dscp->parent = this;

    tos->parent = this;

    yang_name = "ipv4-or-hostname"; yang_parent_name = "host";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::~Ipv4OrHostname_()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::has_data() const
{
    return ipv4_or_hostname.is_set
	|| time_range.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| is_set(time_range.operation)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"}
{
    yang_name = "dscp"; yang_parent_name = "ipv4-or-hostname";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::~Dscp()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::has_data() const
{
    return dscp_val.is_set;
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_val.operation);
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.operation)) leaf_name_data.push_back(dscp_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
    }
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::Tos()
    :
    max_reliability{YType::empty, "max-reliability"},
    max_throughput{YType::empty, "max-throughput"},
    min_delay{YType::empty, "min-delay"},
    min_monetary_cost{YType::empty, "min-monetary-cost"},
    normal{YType::empty, "normal"},
    range{YType::uint8, "range"}
{
    yang_name = "tos"; yang_parent_name = "ipv4-or-hostname";
}

Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::~Tos()
{
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::has_data() const
{
    return max_reliability.is_set
	|| max_throughput.is_set
	|| min_delay.is_set
	|| min_monetary_cost.is_set
	|| normal.is_set
	|| range.is_set;
}

bool Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(max_reliability.operation)
	|| is_set(max_throughput.operation)
	|| is_set(min_delay.operation)
	|| is_set(min_monetary_cost.operation)
	|| is_set(normal.operation)
	|| is_set(range.operation);
}

std::string Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reliability.is_set || is_set(max_reliability.operation)) leaf_name_data.push_back(max_reliability.get_name_leafdata());
    if (max_throughput.is_set || is_set(max_throughput.operation)) leaf_name_data.push_back(max_throughput.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.operation)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (min_monetary_cost.is_set || is_set(min_monetary_cost.operation)) leaf_name_data.push_back(min_monetary_cost.get_name_leafdata());
    if (normal.is_set || is_set(normal.operation)) leaf_name_data.push_back(normal.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessList::AccessListExpandedRange::Permit::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-reliability")
    {
        max_reliability = value;
    }
    if(value_path == "max-throughput")
    {
        max_throughput = value;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
    }
    if(value_path == "min-monetary-cost")
    {
        min_monetary_cost = value;
    }
    if(value_path == "normal")
    {
        normal = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Native::AccessList::AccessListExpandedRange::Deny::Deny()
    :
    ip(std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip>())
{
    ip->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-expanded-range";
}

Native::AccessList::AccessListExpandedRange::Deny::~Deny()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Deny::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Ip()
    :
    host(std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host>())
{
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "deny";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::~Ip()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::has_data() const
{
    return (host !=  nullptr && host->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::has_operation() const
{
    return is_set(operation)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Host()
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::~Host()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"}
    	,
    host(std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_>())
{
    host->parent = this;

    yang_name = "ipv4-or-hostname"; yang_parent_name = "host";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| (host !=  nullptr && host->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Host_()
{
    yang_name = "host"; yang_parent_name = "ipv4-or-hostname";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::~Host_()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::set_value(const std::string & value_path, std::string value)
{
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Ipv4OrHostname_()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    time_range{YType::str, "time-range"}
    	,
    dscp(std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp>())
	,tos(std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos>())
{
    dscp->parent = this;

    tos->parent = this;

    yang_name = "ipv4-or-hostname"; yang_parent_name = "host";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::~Ipv4OrHostname_()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::has_data() const
{
    return ipv4_or_hostname.is_set
	|| time_range.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (tos !=  nullptr && tos->has_data());
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_or_hostname.operation)
	|| is_set(time_range.operation)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (tos !=  nullptr && tos->has_operation());
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4OrHostname_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.operation)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos>();
        }
        return tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::Dscp()
    :
    dscp_val{YType::str, "dscp-val"}
{
    yang_name = "dscp"; yang_parent_name = "ipv4-or-hostname";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::~Dscp()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::has_data() const
{
    return dscp_val.is_set;
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_val.operation);
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dscp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_val.is_set || is_set(dscp_val.operation)) leaf_name_data.push_back(dscp_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Dscp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-val")
    {
        dscp_val = value;
    }
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::Tos()
    :
    max_reliability{YType::empty, "max-reliability"},
    max_throughput{YType::empty, "max-throughput"},
    min_delay{YType::empty, "min-delay"},
    min_monetary_cost{YType::empty, "min-monetary-cost"},
    normal{YType::empty, "normal"},
    range{YType::uint8, "range"}
{
    yang_name = "tos"; yang_parent_name = "ipv4-or-hostname";
}

Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::~Tos()
{
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::has_data() const
{
    return max_reliability.is_set
	|| max_throughput.is_set
	|| min_delay.is_set
	|| min_monetary_cost.is_set
	|| normal.is_set
	|| range.is_set;
}

bool Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(max_reliability.operation)
	|| is_set(max_throughput.operation)
	|| is_set(min_delay.operation)
	|| is_set(min_monetary_cost.operation)
	|| is_set(normal.operation)
	|| is_set(range.operation);
}

std::string Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reliability.is_set || is_set(max_reliability.operation)) leaf_name_data.push_back(max_reliability.get_name_leafdata());
    if (max_throughput.is_set || is_set(max_throughput.operation)) leaf_name_data.push_back(max_throughput.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.operation)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (min_monetary_cost.is_set || is_set(min_monetary_cost.operation)) leaf_name_data.push_back(min_monetary_cost.get_name_leafdata());
    if (normal.is_set || is_set(normal.operation)) leaf_name_data.push_back(normal.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::AccessList::AccessListExpandedRange::Deny::Ip::Host::Ipv4OrHostname::Host_::Ipv4OrHostname_::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-reliability")
    {
        max_reliability = value;
    }
    if(value_path == "max-throughput")
    {
        max_throughput = value;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
    }
    if(value_path == "min-monetary-cost")
    {
        min_monetary_cost = value;
    }
    if(value_path == "normal")
    {
        normal = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Native::BridgeDomain::BridgeDomain()
    :
    c_mac(std::make_shared<Native::BridgeDomain::CMac>())
	,otv(std::make_shared<Native::BridgeDomain::Otv>())
	,parameterized(std::make_shared<Native::BridgeDomain::Parameterized>())
{
    c_mac->parent = this;

    otv->parent = this;

    parameterized->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "native";
}

Native::BridgeDomain::~BridgeDomain()
{
}

bool Native::BridgeDomain::has_data() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_data())
            return true;
    }
    return (c_mac !=  nullptr && c_mac->has_data())
	|| (otv !=  nullptr && otv->has_data())
	|| (parameterized !=  nullptr && parameterized->has_data());
}

bool Native::BridgeDomain::has_operation() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (c_mac !=  nullptr && c_mac->has_operation())
	|| (otv !=  nullptr && otv->has_operation())
	|| (parameterized !=  nullptr && parameterized->has_operation());
}

std::string Native::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brd-id")
    {
        for(auto const & c : brd_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId>();
        c->parent = this;
        brd_id.push_back(c);
        return c;
    }

    if(child_yang_name == "c-mac")
    {
        if(c_mac == nullptr)
        {
            c_mac = std::make_shared<Native::BridgeDomain::CMac>();
        }
        return c_mac;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::BridgeDomain::Otv>();
        }
        return otv;
    }

    if(child_yang_name == "parameterized")
    {
        if(parameterized == nullptr)
        {
            parameterized = std::make_shared<Native::BridgeDomain::Parameterized>();
        }
        return parameterized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brd_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(c_mac != nullptr)
    {
        children["c-mac"] = c_mac;
    }

    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    if(parameterized != nullptr)
    {
        children["parameterized"] = parameterized;
    }

    return children;
}

void Native::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::BrdId::BrdId()
    :
    bridge_domain_id{YType::uint16, "bridge-domain-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::BrdId::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::BrdId::Mac>())
	,member(std::make_shared<Native::BridgeDomain::BrdId::Member>())
{
    ip->parent = this;

    mac->parent = this;

    member->parent = this;

    yang_name = "brd-id"; yang_parent_name = "bridge-domain";
}

Native::BridgeDomain::BrdId::~BrdId()
{
}

bool Native::BridgeDomain::BrdId::has_data() const
{
    return bridge_domain_id.is_set
	|| shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::BrdId::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_id.operation)
	|| is_set(shutdown.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::BrdId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:brd-id" <<"[bridge-domain-id='" <<bridge_domain_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.operation)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::BrdId::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::BrdId::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::BrdId::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::BrdId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::BridgeDomain::BrdId::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "brd-id";
}

Native::BridgeDomain::BrdId::Ip::~Ip()
{
}

bool Native::BridgeDomain::BrdId::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::has_operation() const
{
    return is_set(operation)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::BrdId::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{
    yang_name = "igmp"; yang_parent_name = "ip";
}

Native::BridgeDomain::BrdId::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;

    explicit_tracking->parent = this;

    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp";
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(operation)
	|| is_set(immediate_leave.operation)
	|| is_set(last_member_query_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(report_suppression.operation)
	|| is_set(robustness_variable.operation)
	|| is_set(static_.operation)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.operation)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.operation)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.operation)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.operation)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{
    yang_name = "check"; yang_parent_name = "snooping";
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(operation)
	|| is_set(rtr_alert_option.operation)
	|| is_set(ttl.operation);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Check' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.operation)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "snooping";
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitTracking' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{
    yang_name = "mrouter"; yang_parent_name = "snooping";
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mrouter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{
    yang_name = "querier"; yang_parent_name = "snooping";
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(max_response_time.operation)
	|| is_set(query_interval.operation)
	|| is_set(tcn.operation)
	|| is_set(timer.operation)
	|| is_set(version.operation);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Querier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.operation)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.operation)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "tcn")
    {
        tcn = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::BridgeDomain::BrdId::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "brd-id";
}

Native::BridgeDomain::BrdId::Mac::~Mac()
{
}

bool Native::BridgeDomain::BrdId::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(aging_time.operation)
	|| is_set(learning.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.operation)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.operation)) leaf_name_data.push_back(learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
    }
    if(value_path == "learning")
    {
        learning = value;
    }
}

Native::BridgeDomain::BrdId::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>())
{
    action->parent = this;

    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac";
}

Native::BridgeDomain::BrdId::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Mac::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit";
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_operation() const
{
    return is_set(operation)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Mac::Limit::Action::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flooding"; yang_parent_name = "action";
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{
    yang_name = "maximum"; yang_parent_name = "limit";
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(addresses.operation);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.operation)) leaf_name_data.push_back(addresses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addresses")
    {
        addresses = value;
    }
}

Native::BridgeDomain::BrdId::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    service_engine{YType::uint8, "Service-Engine"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    vni{YType::uint32, "vni"},
    vpn{YType::uint32, "VPN"},
    y_controller{YType::str, "_controller"}
{
    yang_name = "member"; yang_parent_name = "brd-id";
}

Native::BridgeDomain::BrdId::Member::~Member()
{
}

bool Native::BridgeDomain::BrdId::Member::has_data() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| service_engine.is_set
	|| sonet_acr.is_set
	|| tunnel_tp.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| virtual_tokenring.is_set
	|| vni.is_set
	|| vpn.is_set
	|| y_controller.is_set;
}

bool Native::BridgeDomain::BrdId::Member::has_operation() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(analysis_module.operation)
	|| is_set(fcpa.operation)
	|| is_set(sbc.operation)
	|| is_set(service_engine.operation)
	|| is_set(sonet_acr.operation)
	|| is_set(tunnel_tp.operation)
	|| is_set(ucse.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(vfi.operation)
	|| is_set(virtual_tokenring.operation)
	|| is_set(vni.operation)
	|| is_set(vpn.operation)
	|| is_set(y_controller.operation);
}

std::string Native::BridgeDomain::BrdId::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.operation)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.operation)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.operation)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.operation)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.operation)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.operation)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.operation)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.operation)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.operation)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.operation)) leaf_name_data.push_back(y_controller.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACR")
    {
        for(auto const & c : acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::Acr>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "mem-ipv4")
    {
        for(auto const & c : mem_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mem_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
    }
    if(value_path == "SBC")
    {
        sbc = value;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
    }
    if(value_path == "ucse")
    {
        ucse = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "vfi")
    {
        vfi = value;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
    if(value_path == "VPN")
    {
        vpn = value;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member";
}

Native::BridgeDomain::BrdId::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mem_ipv4.operation)
	|| is_set(template_.operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemIpv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.operation)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mem-vcid")
    {
        for(auto const & c : mem_vcid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    for (auto const & c : mem_vcid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
    }
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{
    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4";
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(operation)
	|| is_set(mem_vcid.operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemVcid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.operation)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{
    yang_name = "encapsulation"; yang_parent_name = "mem-vcid";
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::Template_()
    :
    template_{YType::str, "template"}
{
    yang_name = "template"; yang_parent_name = "mem-vcid";
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::~Template_()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_.operation);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{
    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4";
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Native::BridgeDomain::BrdId::Member::Acr::Acr()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member";
}

Native::BridgeDomain::BrdId::Member::Acr::~Acr()
{
}

bool Native::BridgeDomain::BrdId::Member::Acr::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::BrdId::Member::Acr::has_operation() const
{
    return is_set(operation)
	|| is_set(acr_int.operation)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::Acr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::Acr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.operation)) leaf_name_data.push_back(acr_int.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::Acr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::Acr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::Acr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
    }
}

Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::ServiceInstance()
{
    yang_name = "service-instance"; yang_parent_name = "ACR";
}

Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceInstance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{
    yang_name = "id"; yang_parent_name = "service-instance";
}

Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(split_horizon.operation);
}

std::string Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::Acr::ServiceInstance::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member";
}

Native::BridgeDomain::BrdId::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_id.operation)
	|| is_set(service_instance.operation)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemberInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.operation)) leaf_name_data.push_back(service_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
    }
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{
    yang_name = "split-horizon"; yang_parent_name = "member-interface";
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizon' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::BridgeDomain::CMac::CMac()
    :
    aging_time{YType::uint16, "aging-time"}
{
    yang_name = "c-mac"; yang_parent_name = "bridge-domain";
}

Native::BridgeDomain::CMac::~CMac()
{
}

bool Native::BridgeDomain::CMac::has_data() const
{
    return aging_time.is_set;
}

bool Native::BridgeDomain::CMac::has_operation() const
{
    return is_set(operation)
	|| is_set(aging_time.operation);
}

std::string Native::BridgeDomain::CMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:c-mac";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::CMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.operation)) leaf_name_data.push_back(aging_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::CMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::CMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::CMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
    }
}

Native::BridgeDomain::Otv::Otv()
    :
    default_(std::make_shared<Native::BridgeDomain::Otv::Default_>())
{
    default_->parent = this;

    yang_name = "otv"; yang_parent_name = "bridge-domain";
}

Native::BridgeDomain::Otv::~Otv()
{
}

bool Native::BridgeDomain::Otv::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::BridgeDomain::Otv::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::BridgeDomain::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:otv";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Otv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::BridgeDomain::Otv::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::BridgeDomain::Otv::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Otv::Default_::Default_()
    :
    age_time{YType::uint16, "age-time"}
{
    yang_name = "default"; yang_parent_name = "otv";
}

Native::BridgeDomain::Otv::Default_::~Default_()
{
}

bool Native::BridgeDomain::Otv::Default_::has_data() const
{
    return age_time.is_set;
}

bool Native::BridgeDomain::Otv::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(age_time.operation);
}

std::string Native::BridgeDomain::Otv::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Otv::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:otv/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time.is_set || is_set(age_time.operation)) leaf_name_data.push_back(age_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Otv::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-time")
    {
        age_time = value;
    }
}

Native::BridgeDomain::Parameterized::Parameterized()
    :
    vlan(nullptr) // presence node
{
    yang_name = "parameterized"; yang_parent_name = "bridge-domain";
}

Native::BridgeDomain::Parameterized::~Parameterized()
{
}

bool Native::BridgeDomain::Parameterized::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::BridgeDomain::Parameterized::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::BridgeDomain::Parameterized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:parameterized";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::BridgeDomain::Parameterized::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Parameterized::Vlan::Vlan()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>())
	,member(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>())
{
    ip->parent = this;

    mac->parent = this;

    member->parent = this;

    yang_name = "vlan"; yang_parent_name = "parameterized";
}

Native::BridgeDomain::Parameterized::Vlan::~Vlan()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::has_data() const
{
    return shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(shutdown.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "vlan";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::~Ip()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_operation() const
{
    return is_set(operation)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{
    yang_name = "igmp"; yang_parent_name = "ip";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_operation() const
{
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;

    explicit_tracking->parent = this;

    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(operation)
	|| is_set(immediate_leave.operation)
	|| is_set(last_member_query_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(report_suppression.operation)
	|| is_set(robustness_variable.operation)
	|| is_set(static_.operation)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.operation)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.operation)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.operation)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.operation)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{
    yang_name = "check"; yang_parent_name = "snooping";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(operation)
	|| is_set(rtr_alert_option.operation)
	|| is_set(ttl.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.operation)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "snooping";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{
    yang_name = "mrouter"; yang_parent_name = "snooping";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{
    yang_name = "querier"; yang_parent_name = "snooping";
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(max_response_time.operation)
	|| is_set(query_interval.operation)
	|| is_set(tcn.operation)
	|| is_set(timer.operation)
	|| is_set(version.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.operation)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.operation)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "tcn")
    {
        tcn = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "vlan";
}

Native::BridgeDomain::Parameterized::Vlan::Mac::~Mac()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(aging_time.operation)
	|| is_set(learning.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.operation)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.operation)) leaf_name_data.push_back(learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
    }
    if(value_path == "learning")
    {
        learning = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>())
{
    action->parent = this;

    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac";
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit";
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_operation() const
{
    return is_set(operation)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flooding"; yang_parent_name = "action";
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/action/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{
    yang_name = "maximum"; yang_parent_name = "limit";
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(addresses.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.operation)) leaf_name_data.push_back(addresses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addresses")
    {
        addresses = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    service_engine{YType::uint8, "Service-Engine"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    vni{YType::uint32, "vni"},
    vpn{YType::uint32, "VPN"},
    y_controller{YType::str, "_controller"}
{
    yang_name = "member"; yang_parent_name = "vlan";
}

Native::BridgeDomain::Parameterized::Vlan::Member::~Member()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_data() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| service_engine.is_set
	|| sonet_acr.is_set
	|| tunnel_tp.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| virtual_tokenring.is_set
	|| vni.is_set
	|| vpn.is_set
	|| y_controller.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_operation() const
{
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(analysis_module.operation)
	|| is_set(fcpa.operation)
	|| is_set(sbc.operation)
	|| is_set(service_engine.operation)
	|| is_set(sonet_acr.operation)
	|| is_set(tunnel_tp.operation)
	|| is_set(ucse.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(vfi.operation)
	|| is_set(virtual_tokenring.operation)
	|| is_set(vni.operation)
	|| is_set(vpn.operation)
	|| is_set(y_controller.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.operation)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.operation)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.operation)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.operation)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.operation)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.operation)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.operation)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.operation)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.operation)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.operation)) leaf_name_data.push_back(y_controller.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACR")
    {
        for(auto const & c : acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::Acr>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "mem-ipv4")
    {
        for(auto const & c : mem_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mem_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
    }
    if(value_path == "SBC")
    {
        sbc = value;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
    }
    if(value_path == "ucse")
    {
        ucse = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "vfi")
    {
        vfi = value;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
    }
    if(value_path == "vni")
    {
        vni = value;
    }
    if(value_path == "VPN")
    {
        vpn = value;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mem_ipv4.operation)
	|| is_set(template_.operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.operation)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mem-vcid")
    {
        for(auto const & c : mem_vcid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    for (auto const & c : mem_vcid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
    }
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{
    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(operation)
	|| is_set(mem_vcid.operation)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemVcid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.operation)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{
    yang_name = "encapsulation"; yang_parent_name = "mem-vcid";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::Template_()
    :
    template_{YType::str, "template"}
{
    yang_name = "template"; yang_parent_name = "mem-vcid";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::~Template_()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{
    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::Acr::Acr()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member";
}

Native::BridgeDomain::Parameterized::Vlan::Member::Acr::~Acr()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::Acr::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::Acr::has_operation() const
{
    return is_set(operation)
	|| is_set(acr_int.operation)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::Acr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::Acr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.operation)) leaf_name_data.push_back(acr_int.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::Acr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::Acr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::Acr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::ServiceInstance()
{
    yang_name = "service-instance"; yang_parent_name = "ACR";
}

Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceInstance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::set_value(const std::string & value_path, std::string value)
{
}

Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{
    yang_name = "id"; yang_parent_name = "service-instance";
}

Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(split_horizon.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::Acr::ServiceInstance::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_id.operation)
	|| is_set(service_instance.operation)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.operation)) leaf_name_data.push_back(service_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
    }
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{
    yang_name = "split-horizon"; yang_parent_name = "member-interface";
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";

    return path_buffer.str();

}

const EntityPath Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizon' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Crypto::Crypto()
    :
    xauth{YType::str, "Cisco-IOS-XE-crypto:xauth"}
    	,
    call(std::make_shared<Native::Crypto::Call>())
	,engine(std::make_shared<Native::Crypto::Engine>())
	,gdoi(std::make_shared<Native::Crypto::Gdoi>())
	,gkm(std::make_shared<Native::Crypto::Gkm>())
	,ikev2(std::make_shared<Native::Crypto::Ikev2>())
	,ipsec(std::make_shared<Native::Crypto::Ipsec>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp>())
	,key(std::make_shared<Native::Crypto::Key>())
	,logging(std::make_shared<Native::Crypto::Logging>())
	,map_client(std::make_shared<Native::Crypto::MapClient>())
	,map_ipv6(std::make_shared<Native::Crypto::MapIpv6>())
	,map_ipv6_gdoi(std::make_shared<Native::Crypto::MapIpv6Gdoi>())
	,mib(std::make_shared<Native::Crypto::Mib>())
	,pki(std::make_shared<Native::Crypto::Pki>())
	,ssl(std::make_shared<Native::Crypto::Ssl>())
	,tls_tunnel(std::make_shared<Native::Crypto::TlsTunnel>())
	,vpn(std::make_shared<Native::Crypto::Vpn>())
{
    call->parent = this;

    engine->parent = this;

    gdoi->parent = this;

    gkm->parent = this;

    ikev2->parent = this;

    ipsec->parent = this;

    isakmp->parent = this;

    key->parent = this;

    logging->parent = this;

    map_client->parent = this;

    map_ipv6->parent = this;

    map_ipv6_gdoi->parent = this;

    mib->parent = this;

    pki->parent = this;

    ssl->parent = this;

    tls_tunnel->parent = this;

    vpn->parent = this;

    yang_name = "crypto"; yang_parent_name = "native";
}

Native::Crypto::~Crypto()
{
}

bool Native::Crypto::has_data() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    return xauth.is_set
	|| (call !=  nullptr && call->has_data())
	|| (engine !=  nullptr && engine->has_data())
	|| (gdoi !=  nullptr && gdoi->has_data())
	|| (gkm !=  nullptr && gkm->has_data())
	|| (ikev2 !=  nullptr && ikev2->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (map_client !=  nullptr && map_client->has_data())
	|| (map_ipv6 !=  nullptr && map_ipv6->has_data())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Crypto::has_operation() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(xauth.operation)
	|| (call !=  nullptr && call->has_operation())
	|| (engine !=  nullptr && engine->has_operation())
	|| (gdoi !=  nullptr && gdoi->has_operation())
	|| (gkm !=  nullptr && gkm->has_operation())
	|| (ikev2 !=  nullptr && ikev2->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (map_client !=  nullptr && map_client->has_operation())
	|| (map_ipv6 !=  nullptr && map_ipv6->has_operation())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";

    return path_buffer.str();

}

const EntityPath Native::Crypto::get_entity_path(Entity* ancestor) const
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

    if (xauth.is_set || is_set(xauth.operation)) leaf_name_data.push_back(xauth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "call")
    {
        if(call == nullptr)
        {
            call = std::make_shared<Native::Crypto::Call>();
        }
        return call;
    }

    if(child_yang_name == "dynamic-map")
    {
        for(auto const & c : dynamic_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::DynamicMap>();
        c->parent = this;
        dynamic_map.push_back(c);
        return c;
    }

    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::Crypto::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "gdoi")
    {
        if(gdoi == nullptr)
        {
            gdoi = std::make_shared<Native::Crypto::Gdoi>();
        }
        return gdoi;
    }

    if(child_yang_name == "gkm")
    {
        if(gkm == nullptr)
        {
            gkm = std::make_shared<Native::Crypto::Gkm>();
        }
        return gkm;
    }

    if(child_yang_name == "identity")
    {
        for(auto const & c : identity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Crypto::Ikev2>();
        }
        return ikev2;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Key>();
        }
        return key;
    }

    if(child_yang_name == "keyring")
    {
        for(auto const & c : keyring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring>();
        c->parent = this;
        keyring.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Crypto::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "map-client")
    {
        if(map_client == nullptr)
        {
            map_client = std::make_shared<Native::Crypto::MapClient>();
        }
        return map_client;
    }

    if(child_yang_name == "map-ipv6")
    {
        if(map_ipv6 == nullptr)
        {
            map_ipv6 = std::make_shared<Native::Crypto::MapIpv6>();
        }
        return map_ipv6;
    }

    if(child_yang_name == "map-ipv6-gdoi")
    {
        if(map_ipv6_gdoi == nullptr)
        {
            map_ipv6_gdoi = std::make_shared<Native::Crypto::MapIpv6Gdoi>();
        }
        return map_ipv6_gdoi;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Crypto::Mib>();
        }
        return mib;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Crypto::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "tls-tunnel")
    {
        if(tls_tunnel == nullptr)
        {
            tls_tunnel = std::make_shared<Native::Crypto::TlsTunnel>();
        }
        return tls_tunnel;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Crypto::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(call != nullptr)
    {
        children["call"] = call;
    }

    for (auto const & c : dynamic_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(engine != nullptr)
    {
        children["engine"] = engine;
    }

    if(gdoi != nullptr)
    {
        children["gdoi"] = gdoi;
    }

    if(gkm != nullptr)
    {
        children["gkm"] = gkm;
    }

    for (auto const & c : identity)
    {
        children[c->get_segment_path()] = c;
    }

    if(ikev2 != nullptr)
    {
        children["ikev2"] = ikev2;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    for (auto const & c : keyring)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(map_client != nullptr)
    {
        children["map-client"] = map_client;
    }

    if(map_ipv6 != nullptr)
    {
        children["map-ipv6"] = map_ipv6;
    }

    if(map_ipv6_gdoi != nullptr)
    {
        children["map-ipv6-gdoi"] = map_ipv6_gdoi;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    if(tls_tunnel != nullptr)
    {
        children["tls-tunnel"] = tls_tunnel;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Crypto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xauth")
    {
        xauth = value;
    }
}

Native::Crypto::Call::Call()
    :
    admission(std::make_shared<Native::Crypto::Call::Admission>())
{
    admission->parent = this;

    yang_name = "call"; yang_parent_name = "crypto";
}

Native::Crypto::Call::~Call()
{
}

bool Native::Crypto::Call::has_data() const
{
    return (admission !=  nullptr && admission->has_data());
}

bool Native::Crypto::Call::has_operation() const
{
    return is_set(operation)
	|| (admission !=  nullptr && admission->has_operation());
}

std::string Native::Crypto::Call::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:call";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Call::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Call::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Crypto::Call::Admission>();
        }
        return admission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    return children;
}

void Native::Crypto::Call::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Call::Admission::Admission()
    :
    limit(std::make_shared<Native::Crypto::Call::Admission::Limit>())
{
    limit->parent = this;

    yang_name = "admission"; yang_parent_name = "call";
}

Native::Crypto::Call::Admission::~Admission()
{
}

bool Native::Crypto::Call::Admission::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Crypto::Call::Admission::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Crypto::Call::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Call::Admission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Call::Admission::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Crypto::Call::Admission::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Call::Admission::Limit::Limit()
    :
    all(std::make_shared<Native::Crypto::Call::Admission::Limit::All>())
	,ike(std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>())
	,ipsec(std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>())
{
    all->parent = this;

    ike->parent = this;

    ipsec->parent = this;

    yang_name = "limit"; yang_parent_name = "admission";
}

Native::Crypto::Call::Admission::Limit::~Limit()
{
}

bool Native::Crypto::Call::Admission::Limit::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Call::Admission::Limit::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Call::Admission::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Call::Admission::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Crypto::Call::Admission::Limit::All>();
        }
        return all;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(ike != nullptr)
    {
        children["ike"] = ike;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Call::Admission::Limit::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Call::Admission::Limit::All::All()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"}
{
    yang_name = "all"; yang_parent_name = "limit";
}

Native::Crypto::Call::Admission::Limit::All::~All()
{
}

bool Native::Crypto::Call::Admission::Limit::All::has_data() const
{
    return in_negotiation_sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::All::has_operation() const
{
    return is_set(operation)
	|| is_set(in_negotiation_sa.operation);
}

std::string Native::Crypto::Call::Admission::Limit::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Call::Admission::Limit::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.operation)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
    }
}

Native::Crypto::Call::Admission::Limit::Ike::Ike()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"},
    sa{YType::uint32, "sa"}
{
    yang_name = "ike"; yang_parent_name = "limit";
}

Native::Crypto::Call::Admission::Limit::Ike::~Ike()
{
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_data() const
{
    return in_negotiation_sa.is_set
	|| sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_operation() const
{
    return is_set(operation)
	|| is_set(in_negotiation_sa.operation)
	|| is_set(sa.operation);
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Call::Admission::Limit::Ike::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.operation)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());
    if (sa.is_set || is_set(sa.operation)) leaf_name_data.push_back(sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ike::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
    }
    if(value_path == "sa")
    {
        sa = value;
    }
}

Native::Crypto::Call::Admission::Limit::Ipsec::Ipsec()
    :
    sa{YType::uint32, "sa"}
{
    yang_name = "ipsec"; yang_parent_name = "limit";
}

Native::Crypto::Call::Admission::Limit::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_data() const
{
    return sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(sa.operation);
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Call::Admission::Limit::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.operation)) leaf_name_data.push_back(sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa")
    {
        sa = value;
    }
}

Native::Crypto::DynamicMap::DynamicMap()
    :
    name{YType::str, "name"},
    sequence{YType::uint16, "sequence"},
    description{YType::str, "description"}
    	,
    default_(std::make_shared<Native::Crypto::DynamicMap::Default_>())
	,dialer(std::make_shared<Native::Crypto::DynamicMap::Dialer>())
	,match(std::make_shared<Native::Crypto::DynamicMap::Match>())
	,qos(std::make_shared<Native::Crypto::DynamicMap::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::DynamicMap::Set>())
{
    default_->parent = this;

    dialer->parent = this;

    match->parent = this;

    qos->parent = this;

    set->parent = this;

    yang_name = "dynamic-map"; yang_parent_name = "crypto";
}

Native::Crypto::DynamicMap::~DynamicMap()
{
}

bool Native::Crypto::DynamicMap::has_data() const
{
    return name.is_set
	|| sequence.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::DynamicMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(sequence.operation)
	|| is_set(description.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::DynamicMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:dynamic-map" <<"[name='" <<name <<"']" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::DynamicMap::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::DynamicMap::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::DynamicMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::DynamicMap::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::DynamicMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::DynamicMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Crypto::DynamicMap::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::DynamicMap::Default_::Dialer>())
	,match(std::make_shared<Native::Crypto::DynamicMap::Default_::Match>())
	,qos(std::make_shared<Native::Crypto::DynamicMap::Default_::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::DynamicMap::Default_::Set>())
{
    dialer->parent = this;

    match->parent = this;

    qos->parent = this;

    set->parent = this;

    yang_name = "default"; yang_parent_name = "dynamic-map";
}

Native::Crypto::DynamicMap::Default_::~Default_()
{
}

bool Native::Crypto::DynamicMap::Default_::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::DynamicMap::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::get_entity_path(Entity* ancestor) const
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

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::DynamicMap::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::DynamicMap::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::DynamicMap::Default_::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Default_::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::DynamicMap::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Crypto::DynamicMap::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "dialer"; yang_parent_name = "default";
}

Native::Crypto::DynamicMap::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::DynamicMap::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Dialer::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Dialer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dialer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Dialer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::DynamicMap::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{
    yang_name = "match"; yang_parent_name = "default";
}

Native::Crypto::DynamicMap::Default_::Match::~Match()
{
}

bool Native::Crypto::DynamicMap::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Match::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Crypto::DynamicMap::Default_::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "qos"; yang_parent_name = "default";
}

Native::Crypto::DynamicMap::Default_::Qos::~Qos()
{
}

bool Native::Crypto::DynamicMap::Default_::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::DynamicMap::Default_::ReverseRoute::ReverseRoute()
{
    yang_name = "reverse-route"; yang_parent_name = "default";
}

Native::Crypto::DynamicMap::Default_::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Default_::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::ReverseRoute::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::DynamicMap::Default_::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::DynamicMap::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    ip(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Ip>())
	,nat(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Nat>())
	,peer_container(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::PeerContainer>())
	,pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation>())
{
    ip->parent = this;

    nat->parent = this;

    peer_container->parent = this;

    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default";
}

Native::Crypto::DynamicMap::Default_::Set::~Set()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::DynamicMap::Default_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(identity.operation)
	|| is_set(ikev2_profile.operation)
	|| is_set(isakmp_profile.operation)
	|| is_set(transform_set.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.operation)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.operation)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.operation)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.operation)) leaf_name_data.push_back(transform_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::PeerContainer>();
        }
        return peer_container;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "identity")
    {
        identity = value;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    direction{YType::enumeration, "direction"}
{
    yang_name = "ip"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Default_::Set::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Ip::has_data() const
{
    return access_group.is_set
	|| direction.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(direction.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::Ip::get_entity_path(Entity* ancestor) const
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

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::Nat::Nat()
    :
    demux{YType::empty, "demux"}
{
    yang_name = "nat"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Default_::Set::Nat::~Nat()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_data() const
{
    return demux.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_operation() const
{
    return is_set(operation)
	|| is_set(demux.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (demux.is_set || is_set(demux.operation)) leaf_name_data.push_back(demux.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Nat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "demux")
    {
        demux = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::PeerContainer::PeerContainer()
    :
    default_{YType::empty, "default"},
    peer{YType::str, "peer"}
{
    yang_name = "peer-container"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Default_::Set::PeerContainer::~PeerContainer()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_data() const
{
    return default_.is_set
	|| peer.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(peer.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::PeerContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::Pfs::Pfs()
{
    yang_name = "pfs"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::Pfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Pfs::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::ReverseRoute()
{
    yang_name = "reverse-route"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(dfbit.operation)
	|| is_set(ecn.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.operation)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.operation)) leaf_name_data.push_back(ecn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
    }
    if(value_path == "ecn")
    {
        ecn = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::Dummy()
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dummy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::empty, "idle-time"}
{
    yang_name = "idle-time-container"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(idle_time.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(kilobytes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
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

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.operation)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{
    yang_name = "replay"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(window_size.operation);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Crypto::DynamicMap::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "dialer"; yang_parent_name = "dynamic-map";
}

Native::Crypto::DynamicMap::Dialer::~Dialer()
{
}

bool Native::Crypto::DynamicMap::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Dialer::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::DynamicMap::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Dialer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dialer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Dialer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::DynamicMap::Match::Match()
    :
    address{YType::str, "address"}
{
    yang_name = "match"; yang_parent_name = "dynamic-map";
}

Native::Crypto::DynamicMap::Match::~Match()
{
}

bool Native::Crypto::DynamicMap::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::DynamicMap::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Crypto::DynamicMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Match::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Crypto::DynamicMap::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "qos"; yang_parent_name = "dynamic-map";
}

Native::Crypto::DynamicMap::Qos::~Qos()
{
}

bool Native::Crypto::DynamicMap::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::DynamicMap::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::DynamicMap::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "dynamic-map";
}

Native::Crypto::DynamicMap::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::DynamicMap::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::DynamicMap::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    gateway{YType::empty, "gateway"},
    remote_peer{YType::str, "remote-peer"},
    static_{YType::empty, "static"}
{
    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route";
}

Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_data() const
{
    return gateway.is_set
	|| remote_peer.is_set
	|| static_.is_set;
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(operation)
	|| is_set(gateway.operation)
	|| is_set(remote_peer.operation)
	|| is_set(static_.operation);
}

std::string Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePeerConatiner' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (remote_peer.is_set || is_set(remote_peer.operation)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "remote-peer")
    {
        remote_peer = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::Crypto::DynamicMap::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
    	,
    ip_in(std::make_shared<Native::Crypto::DynamicMap::Set::IpIn>())
	,ip_out(std::make_shared<Native::Crypto::DynamicMap::Set::IpOut>())
	,nat(std::make_shared<Native::Crypto::DynamicMap::Set::Nat>())
	,peer(std::make_shared<Native::Crypto::DynamicMap::Set::Peer>())
	,peer_container(std::make_shared<Native::Crypto::DynamicMap::Set::PeerContainer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::DynamicMap::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation>())
{
    ip_in->parent = this;

    ip_out->parent = this;

    nat->parent = this;

    peer->parent = this;

    peer_container->parent = this;

    reverse_route->parent = this;

    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "dynamic-map";
}

Native::Crypto::DynamicMap::Set::~Set()
{
}

bool Native::Crypto::DynamicMap::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| (ip_in !=  nullptr && ip_in->has_data())
	|| (ip_out !=  nullptr && ip_out->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::DynamicMap::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(identity.operation)
	|| is_set(ikev2_profile.operation)
	|| is_set(isakmp_profile.operation)
	|| is_set(transform_set.operation)
	|| (ip_in !=  nullptr && ip_in->has_operation())
	|| (ip_out !=  nullptr && ip_out->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.operation)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.operation)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.operation)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-in")
    {
        if(ip_in == nullptr)
        {
            ip_in = std::make_shared<Native::Crypto::DynamicMap::Set::IpIn>();
        }
        return ip_in;
    }

    if(child_yang_name == "ip-out")
    {
        if(ip_out == nullptr)
        {
            ip_out = std::make_shared<Native::Crypto::DynamicMap::Set::IpOut>();
        }
        return ip_out;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::DynamicMap::Set::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::DynamicMap::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::Crypto::DynamicMap::Set::PeerContainer>();
        }
        return peer_container;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::DynamicMap::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_in != nullptr)
    {
        children["ip-in"] = ip_in;
    }

    if(ip_out != nullptr)
    {
        children["ip-out"] = ip_out;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "identity")
    {
        identity = value;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

Native::Crypto::DynamicMap::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "peer"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::Peer::~Peer()
{
}

bool Native::Crypto::DynamicMap::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::DynamicMap::Set::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(default_.operation)
	|| is_set(dynamic.operation);
}

std::string Native::Crypto::DynamicMap::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::Peer::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Crypto::DynamicMap::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{
    yang_name = "pfs"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Crypto::DynamicMap::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::Pfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Pfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Crypto::DynamicMap::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{
    yang_name = "reverse-route"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(tag.operation);
}

std::string Native::Crypto::DynamicMap::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Crypto::DynamicMap::Set::IpIn::IpIn()
    :
    ip(std::make_shared<Native::Crypto::DynamicMap::Set::IpIn::Ip>())
{
    ip->parent = this;

    yang_name = "ip-in"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::IpIn::~IpIn()
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::IpIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-in";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::IpIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpIn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Set::IpIn::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::IpIn::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::DynamicMap::Set::IpIn::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"}
{
    yang_name = "ip"; yang_parent_name = "ip-in";
}

Native::Crypto::DynamicMap::Set::IpIn::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_data() const
{
    return access_group.is_set
	|| in.is_set;
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(in.operation);
}

std::string Native::Crypto::DynamicMap::Set::IpIn::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::IpIn::Ip::get_entity_path(Entity* ancestor) const
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

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpIn::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpIn::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::IpIn::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Crypto::DynamicMap::Set::IpOut::IpOut()
    :
    ip(std::make_shared<Native::Crypto::DynamicMap::Set::IpOut::Ip>())
{
    ip->parent = this;

    yang_name = "ip-out"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::IpOut::~IpOut()
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::IpOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-out";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::IpOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpOut' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Set::IpOut::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::IpOut::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::DynamicMap::Set::IpOut::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    out{YType::empty, "out"}
{
    yang_name = "ip"; yang_parent_name = "ip-out";
}

Native::Crypto::DynamicMap::Set::IpOut::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_data() const
{
    return access_group.is_set
	|| out.is_set;
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(out.operation);
}

std::string Native::Crypto::DynamicMap::Set::IpOut::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::IpOut::Ip::get_entity_path(Entity* ancestor) const
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

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpOut::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpOut::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::IpOut::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Crypto::DynamicMap::Set::Nat::Nat()
    :
    demux{YType::empty, "demux"}
{
    yang_name = "nat"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::Nat::~Nat()
{
}

bool Native::Crypto::DynamicMap::Set::Nat::has_data() const
{
    return demux.is_set;
}

bool Native::Crypto::DynamicMap::Set::Nat::has_operation() const
{
    return is_set(operation)
	|| is_set(demux.operation);
}

std::string Native::Crypto::DynamicMap::Set::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (demux.is_set || is_set(demux.operation)) leaf_name_data.push_back(demux.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Nat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "demux")
    {
        demux = value;
    }
}

Native::Crypto::DynamicMap::Set::PeerContainer::PeerContainer()
    :
    default_{YType::empty, "default"},
    peer{YType::str, "peer"}
{
    yang_name = "peer-container"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::PeerContainer::~PeerContainer()
{
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_data() const
{
    return default_.is_set
	|| peer.is_set;
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(peer.operation);
}

std::string Native::Crypto::DynamicMap::Set::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::PeerContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::PeerContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"}
    	,
    dummy(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;

    idle_time_container->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set";
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(dfbit.operation)
	|| is_set(ecn.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.operation)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.operation)) leaf_name_data.push_back(ecn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
    }
    if(value_path == "ecn")
    {
        ecn = value;
    }
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(pps.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dummy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.operation)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pps")
    {
        pps = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::uint32, "idle-time"}
{
    yang_name = "idle-time-container"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(idle_time.operation);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(kilobytes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
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

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.operation)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{
    yang_name = "replay"; yang_parent_name = "security-association";
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(window_size.operation);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Crypto::Engine::Engine()
    :
    software{YType::enumeration, "software"}
{
    yang_name = "engine"; yang_parent_name = "crypto";
}

Native::Crypto::Engine::~Engine()
{
}

bool Native::Crypto::Engine::has_data() const
{
    return software.is_set;
}

bool Native::Crypto::Engine::has_operation() const
{
    return is_set(operation)
	|| is_set(software.operation);
}

std::string Native::Crypto::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:engine";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Engine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (software.is_set || is_set(software.operation)) leaf_name_data.push_back(software.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Engine::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "software")
    {
        software = value;
    }
}

Native::Crypto::Gdoi::Gdoi()
{
    yang_name = "gdoi"; yang_parent_name = "crypto";
}

Native::Crypto::Gdoi::~Gdoi()
{
}

bool Native::Crypto::Gdoi::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Gdoi::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:gdoi";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gdoi::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Gdoi::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Group()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gdoi::Group::Client>())
	,default_(std::make_shared<Native::Crypto::Gdoi::Group::Default_>())
	,identity(std::make_shared<Native::Crypto::Gdoi::Group::Identity>())
	,server(std::make_shared<Native::Crypto::Gdoi::Group::Server>())
{
    client->parent = this;

    default_->parent = this;

    identity->parent = this;

    server->parent = this;

    yang_name = "group"; yang_parent_name = "gdoi";
}

Native::Crypto::Gdoi::Group::~Group()
{
}

bool Native::Crypto::Gdoi::Group::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gdoi::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(ipv6.operation)
	|| is_set(passive.operation)
	|| (client !=  nullptr && client->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gdoi::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:gdoi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gdoi::Group::Client>();
        }
        return client;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gdoi::Group::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gdoi::Group::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
}

Native::Crypto::Gdoi::Group::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::str, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(std::make_shared<Native::Crypto::Gdoi::Group::Client::Protocol>())
	,recovery_check(std::make_shared<Native::Crypto::Gdoi::Group::Client::RecoveryCheck>())
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gdoi::Group::Client::Status>())
{
    protocol->parent = this;

    recovery_check->parent = this;

    registration->parent = this;

    rekey->parent = this;

    status->parent = this;

    yang_name = "client"; yang_parent_name = "group";
}

Native::Crypto::Gdoi::Group::Client::~Client()
{
}

bool Native::Crypto::Gdoi::Group::Client::has_data() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bypass_policy.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::has_operation() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bypass_policy.operation)
	|| is_set(transform_sets.operation)
	|| is_set(transport_encrypt_key.operation)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.operation)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.operation)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    auto transform_sets_name_datas = transform_sets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_sets_name_datas.begin(), transform_sets_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gdoi::Group::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gdoi::Group::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.append(value);
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
    }
}

Native::Crypto::Gdoi::Group::Client::Protocol::Protocol()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
{
    yang_name = "protocol"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(gdoi.operation)
	|| is_set(gikev2.operation);
}

std::string Native::Crypto::Gdoi::Group::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Protocol::get_entity_path(Entity* ancestor) const
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

    if (gdoi.is_set || is_set(gdoi.operation)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.operation)) leaf_name_data.push_back(gikev2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
    }
}

Native::Crypto::Gdoi::Group::Client::RecoveryCheck::RecoveryCheck()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "recovery-check"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_data() const
{
    return interval.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecoveryCheck' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::RecoveryCheck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Crypto::Gdoi::Group::Client::Registration::Registration()
    :
    interface{YType::str, "interface"}
{
    yang_name = "registration"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Crypto::Gdoi::Group::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Registration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Crypto::Gdoi::Group::Client::Rekey::Rekey()
    :
    encryption(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Encryption>())
	,hash(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Hash>())
{
    encryption->parent = this;

    hash->parent = this;

    yang_name = "rekey"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_operation() const
{
    return is_set(operation)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::Encryption()
    :
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"},
    rekey_3des_cbc{YType::empty, "rekey-3des-cbc"}
{
    yang_name = "encryption"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_data() const
{
    return aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set
	|| rekey_3des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(aes_128.operation)
	|| is_set(aes_192.operation)
	|| is_set(aes_256.operation)
	|| is_set(des_cbc.operation)
	|| is_set(rekey_3des_cbc.operation);
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes_128.is_set || is_set(aes_128.operation)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.operation)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.operation)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.operation)) leaf_name_data.push_back(des_cbc.get_name_leafdata());
    if (rekey_3des_cbc.is_set || is_set(rekey_3des_cbc.operation)) leaf_name_data.push_back(rekey_3des_cbc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aes-128")
    {
        aes_128 = value;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
    }
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc = value;
    }
}

Native::Crypto::Gdoi::Group::Client::Rekey::Hash::Hash()
    :
    sha{YType::empty, "sha"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{
    yang_name = "hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_data() const
{
    return sha.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_operation() const
{
    return is_set(operation)
	|| is_set(sha.operation)
	|| is_set(sha256.operation)
	|| is_set(sha384.operation)
	|| is_set(sha512.operation);
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha.is_set || is_set(sha.operation)) leaf_name_data.push_back(sha.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.operation)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.operation)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.operation)) leaf_name_data.push_back(sha512.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Hash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sha")
    {
        sha = value;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
    }
}

Native::Crypto::Gdoi::Group::Client::Status::Status()
    :
    active_sa(std::make_shared<Native::Crypto::Gdoi::Group::Client::Status::ActiveSa>())
{
    active_sa->parent = this;

    yang_name = "status"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Client::Status::~Status()
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_operation() const
{
    return is_set(operation)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gdoi::Group::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::Status::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::ActiveSa()
    :
    track{YType::uint16, "track"}
{
    yang_name = "active-sa"; yang_parent_name = "status";
}

Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_data() const
{
    return track.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_operation() const
{
    return is_set(operation)
	|| is_set(track.operation);
}

std::string Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveSa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track")
    {
        track = value;
    }
}

Native::Crypto::Gdoi::Group::Identity::Identity()
    :
    number{YType::uint64, "number"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Identity::Address>())
{
    address->parent = this;

    yang_name = "identity"; yang_parent_name = "group";
}

Native::Crypto::Gdoi::Group::Identity::~Identity()
{
}

bool Native::Crypto::Gdoi::Group::Identity::has_data() const
{
    return number.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Identity::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Identity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Identity::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Identity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Crypto::Gdoi::Group::Identity::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "identity";
}

Native::Crypto::Gdoi::Group::Identity::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Identity::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Identity::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Server()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gdoi::Group::Server::Hostname>())
	,local(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local>())
{
    address->parent = this;

    hostname->parent = this;

    local->parent = this;

    yang_name = "server"; yang_parent_name = "group";
}

Native::Crypto::Gdoi::Group::Server::~Server()
{
}

bool Native::Crypto::Gdoi::Group::Server::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gdoi::Group::Server::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "server";
}

Native::Crypto::Gdoi::Group::Server::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "hostname"; yang_parent_name = "server";
}

Native::Crypto::Gdoi::Group::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Local()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Address>())
	,authorization(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization>())
	,default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_>())
	,group(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_>())
	,identifier(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier>())
	,redundancy(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy>())
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa>())
{
    address->parent = this;

    authorization->parent = this;

    default_->parent = this;

    group->parent = this;

    identifier->parent = this;

    redundancy->parent = this;

    registration->parent = this;

    rekey->parent = this;

    sa->parent = this;

    yang_name = "local"; yang_parent_name = "server";
}

Native::Crypto::Gdoi::Group::Server::Local::~Local()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(gdoi.operation)
	|| is_set(gikev2.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.operation)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.operation)) leaf_name_data.push_back(gikev2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Authorization()
    :
    identity{YType::str, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::~Authorization()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_operation() const
{
    return is_set(operation)
	|| is_set(identity.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.operation)) leaf_name_data.push_back(identity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identity")
    {
        identity = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "authorization";
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Group_()
    :
    size(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_::Size>())
{
    size->parent = this;

    yang_name = "group"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::~Group_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_operation() const
{
    return is_set(operation)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Group_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Size()
    :
    large{YType::empty, "large"},
    medium{YType::empty, "medium"},
    small{YType::enumeration, "small"}
{
    yang_name = "size"; yang_parent_name = "group";
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::~Size()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_data() const
{
    return large.is_set
	|| medium.is_set
	|| small.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_operation() const
{
    return is_set(operation)
	|| is_set(large.operation)
	|| is_set(medium.operation)
	|| is_set(small.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Size' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (large.is_set || is_set(large.operation)) leaf_name_data.push_back(large.get_name_leafdata());
    if (medium.is_set || is_set(medium.operation)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (small.is_set || is_set(small.operation)) leaf_name_data.push_back(small.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "large")
    {
        large = value;
    }
    if(value_path == "medium")
    {
        medium = value;
    }
    if(value_path == "small")
    {
        small = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Identifier()
    :
    value_{YType::uint8, "value"}
    	,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_>())
	,range(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range>())
{
    default_->parent = this;

    range->parent = this;

    yang_name = "identifier"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::~Identifier()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_data() const
{
    return value_.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Default_()
    :
    value_{YType::uint8, "value"}
    	,
    range(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range>())
{
    range->parent = this;

    yang_name = "default"; yang_parent_name = "identifier";
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_data() const
{
    return value_.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_entity_path(Entity* ancestor) const
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

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::Range()
    :
    highest{YType::uint8, "highest"},
    hyphen{YType::empty, "hyphen"},
    lowest{YType::uint8, "lowest"}
{
    yang_name = "range"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::~Range()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_data() const
{
    return highest.is_set
	|| hyphen.is_set
	|| lowest.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(highest.operation)
	|| is_set(hyphen.operation)
	|| is_set(lowest.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_entity_path(Entity* ancestor) const
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

    if (highest.is_set || is_set(highest.operation)) leaf_name_data.push_back(highest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.operation)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (lowest.is_set || is_set(lowest.operation)) leaf_name_data.push_back(lowest.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "highest")
    {
        highest = value;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
    }
    if(value_path == "lowest")
    {
        lowest = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::Range()
    :
    highest{YType::uint8, "highest"},
    hyphen{YType::empty, "hyphen"},
    lowest{YType::uint8, "lowest"}
{
    yang_name = "range"; yang_parent_name = "identifier";
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::~Range()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_data() const
{
    return highest.is_set
	|| hyphen.is_set
	|| lowest.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(highest.operation)
	|| is_set(hyphen.operation)
	|| is_set(lowest.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_entity_path(Entity* ancestor) const
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

    if (highest.is_set || is_set(highest.operation)) leaf_name_data.push_back(highest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.operation)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (lowest.is_set || is_set(lowest.operation)) leaf_name_data.push_back(lowest.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "highest")
    {
        highest = value;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
    }
    if(value_path == "lowest")
    {
        lowest = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Redundancy()
    :
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_>())
	,local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer>())
	,protocol(nullptr) // presence node
{
    default_->parent = this;

    peer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Default_()
    :
    local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer>())
	,protocol(nullptr) // presence node
{
    peer->parent = this;

    yang_name = "default"; yang_parent_name = "redundancy";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{
    yang_name = "local"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "peer";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{
    yang_name = "protocol"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu.operation)
	|| is_set(version.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_entity_path(Entity* ancestor) const
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

    if (pdu.is_set || is_set(pdu.operation)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu")
    {
        pdu = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{
    yang_name = "local"; yang_parent_name = "redundancy";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "peer";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

const Enum::YLeaf Native::Crypto::DynamicMap::Default_::Set::Ip::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Crypto::DynamicMap::Default_::Set::Ip::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::GroupEnum::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::DfbitEnum::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::DfbitEnum::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::DfbitEnum::set {2, "set"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::EcnEnum::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::EcnEnum::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::KilobytesEnum::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Engine::SoftwareEnum::ipsec {0, "ipsec"};
const Enum::YLeaf Native::Crypto::Engine::SoftwareEnum::isakmp {1, "isakmp"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Client::TransportEncryptKeyEnum::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Client::TransportEncryptKeyEnum::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::SmallEnum::Y_12 {0, "12"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::SmallEnum::Y_16 {1, "16"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::SmallEnum::Y_8 {2, "8"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::VersionEnum::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::VersionEnum::optimize {1, "optimize"};


}
}

