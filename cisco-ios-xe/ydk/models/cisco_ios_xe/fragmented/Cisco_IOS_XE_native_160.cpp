
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_160.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address";
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::has_operation() const
{
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::Host()
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "deny";
}

Native::Arp::AccessList::No::Deny::Response::~Response()
{
}

bool Native::Arp::AccessList::No::Deny::Response::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Response' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host>())
{
    any->parent = this;

    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response";
}

Native::Arp::AccessList::No::Deny::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip";
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_mask.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderIpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.operation)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address";
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::has_operation() const
{
    return is_set(operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::Host()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::Host()
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation)
	|| is_set(mac_address_mask.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.operation)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{
    yang_name = "any"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Any' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
{
    yang_name = "host"; yang_parent_name = "mac";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, std::string value)
{
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{
    yang_name = "sender-mac-address"; yang_parent_name = "host";
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(log.operation);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SenderMacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
}

Native::Switch::Switch()
    :
    number{YType::uint8, "number"},
    provision{YType::enumeration, "provision"}
{
    yang_name = "switch"; yang_parent_name = "native";
}

Native::Switch::~Switch()
{
}

bool Native::Switch::has_data() const
{
    return number.is_set
	|| provision.is_set;
}

bool Native::Switch::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(provision.operation);
}

std::string Native::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Switch::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (provision.is_set || is_set(provision.operation)) leaf_name_data.push_back(provision.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Switch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "provision")
    {
        provision = value;
    }
}

Native::SwitchVirtual::SwitchVirtual()
    :
    domain{YType::uint32, "domain"},
    virtual_{YType::empty, "virtual"}
    	,
    dual_active(std::make_shared<Native::SwitchVirtual::DualActive>())
	,mac_address(std::make_shared<Native::SwitchVirtual::MacAddress>())
	,switch(std::make_shared<Native::SwitchVirtual::Switch>())
{
    dual_active->parent = this;

    mac_address->parent = this;

    switch->parent = this;

    yang_name = "switch-virtual"; yang_parent_name = "native";
}

Native::SwitchVirtual::~SwitchVirtual()
{
}

bool Native::SwitchVirtual::has_data() const
{
    return domain.is_set
	|| virtual_.is_set
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (switch !=  nullptr && switch->has_data());
}

bool Native::SwitchVirtual::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(virtual_.operation)
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (switch !=  nullptr && switch->has_operation());
}

std::string Native::SwitchVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch-virtual" <<"[domain='" <<domain <<"']";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::get_entity_path(Entity* ancestor) const
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

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.operation)) leaf_name_data.push_back(virtual_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SwitchVirtual::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::SwitchVirtual::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "switch")
    {
        if(switch == nullptr)
        {
            switch = std::make_shared<Native::SwitchVirtual::Switch>();
        }
        return switch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(switch != nullptr)
    {
        children["switch"] = switch;
    }

    return children;
}

void Native::SwitchVirtual::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "virtual")
    {
        virtual_ = value;
    }
}

Native::SwitchVirtual::Switch::Switch()
    :
    mode{YType::enumeration, "mode"},
    priority{YType::uint32, "priority"},
    switch_number{YType::uint32, "switch-number"}
{
    yang_name = "switch"; yang_parent_name = "switch-virtual";
}

Native::SwitchVirtual::Switch::~Switch()
{
}

bool Native::SwitchVirtual::Switch::has_data() const
{
    return mode.is_set
	|| priority.is_set
	|| switch_number.is_set;
}

bool Native::SwitchVirtual::Switch::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(priority.operation)
	|| is_set(switch_number.operation);
}

std::string Native::SwitchVirtual::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switch' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.operation)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::Switch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
    }
}

Native::SwitchVirtual::MacAddress::MacAddress()
    :
    use_virtual{YType::empty, "use-virtual"}
{
    yang_name = "mac-address"; yang_parent_name = "switch-virtual";
}

Native::SwitchVirtual::MacAddress::~MacAddress()
{
}

bool Native::SwitchVirtual::MacAddress::has_data() const
{
    return use_virtual.is_set;
}

bool Native::SwitchVirtual::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(use_virtual.operation);
}

std::string Native::SwitchVirtual::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_virtual.is_set || is_set(use_virtual.operation)) leaf_name_data.push_back(use_virtual.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "use-virtual")
    {
        use_virtual = value;
    }
}

Native::SwitchVirtual::DualActive::DualActive()
    :
    detection(std::make_shared<Native::SwitchVirtual::DualActive::Detection>())
	,recovery(std::make_shared<Native::SwitchVirtual::DualActive::Recovery>())
{
    detection->parent = this;

    recovery->parent = this;

    yang_name = "dual-active"; yang_parent_name = "switch-virtual";
}

Native::SwitchVirtual::DualActive::~DualActive()
{
}

bool Native::SwitchVirtual::DualActive::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::SwitchVirtual::DualActive::has_operation() const
{
    return is_set(operation)
	|| (detection !=  nullptr && detection->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::SwitchVirtual::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DualActive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::SwitchVirtual::DualActive::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::SwitchVirtual::DualActive::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::set_value(const std::string & value_path, std::string value)
{
}

Native::SwitchVirtual::DualActive::Recovery::Recovery()
    :
    switch{YType::uint8, "switch"}
    	,
    ip(std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>())
{
    ip->parent = this;

    yang_name = "recovery"; yang_parent_name = "dual-active";
}

Native::SwitchVirtual::DualActive::Recovery::~Recovery()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::has_data() const
{
    return switch.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::SwitchVirtual::DualActive::Recovery::has_operation() const
{
    return is_set(operation)
	|| is_set(switch.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch.is_set || is_set(switch.operation)) leaf_name_data.push_back(switch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Recovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch")
    {
        switch = value;
    }
}

Native::SwitchVirtual::DualActive::Recovery::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{
    yang_name = "ip"; yang_parent_name = "recovery";
}

Native::SwitchVirtual::DualActive::Recovery::Ip::~Ip()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation);
}

std::string Native::SwitchVirtual::DualActive::Recovery::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Recovery::Ip::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Recovery::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Recovery::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::SwitchVirtual::DualActive::Detection::Detection()
    :
    pagp(nullptr) // presence node
{
    yang_name = "detection"; yang_parent_name = "dual-active";
}

Native::SwitchVirtual::DualActive::Detection::~Detection()
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_data() const
{
    return (pagp !=  nullptr && pagp->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::has_operation() const
{
    return is_set(operation)
	|| (pagp !=  nullptr && pagp->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Detection::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pagp")
    {
        if(pagp == nullptr)
        {
            pagp = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp>();
        }
        return pagp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pagp != nullptr)
    {
        children["pagp"] = pagp;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Detection::set_value(const std::string & value_path, std::string value)
{
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Pagp()
    :
    trust(std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>())
{
    trust->parent = this;

    yang_name = "pagp"; yang_parent_name = "detection";
}

Native::SwitchVirtual::DualActive::Detection::Pagp::~Pagp()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_operation() const
{
    return is_set(operation)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Detection::Pagp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pagp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_value(const std::string & value_path, std::string value)
{
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::Trust()
    :
    channel_group{YType::uint8, "channel-group"}
{
    yang_name = "trust"; yang_parent_name = "pagp";
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::~Trust()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_data() const
{
    return channel_group.is_set;
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(channel_group.operation);
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_group.is_set || is_set(channel_group.operation)) leaf_name_data.push_back(channel_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "channel-group")
    {
        channel_group = value;
    }
}

Native::Device::Device()
    :
    classifier{YType::empty, "classifier"}
{
    yang_name = "device"; yang_parent_name = "native";
}

Native::Device::~Device()
{
}

bool Native::Device::has_data() const
{
    return classifier.is_set;
}

bool Native::Device::has_operation() const
{
    return is_set(operation)
	|| is_set(classifier.operation);
}

std::string Native::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device";

    return path_buffer.str();

}

const EntityPath Native::Device::get_entity_path(Entity* ancestor) const
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

    if (classifier.is_set || is_set(classifier.operation)) leaf_name_data.push_back(classifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Device::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classifier")
    {
        classifier = value;
    }
}

Native::StackMac::StackMac()
    :
    persistent(std::make_shared<Native::StackMac::Persistent>())
{
    persistent->parent = this;

    yang_name = "stack-mac"; yang_parent_name = "native";
}

Native::StackMac::~StackMac()
{
}

bool Native::StackMac::has_data() const
{
    return (persistent !=  nullptr && persistent->has_data());
}

bool Native::StackMac::has_operation() const
{
    return is_set(operation)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::StackMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:stack-mac";

    return path_buffer.str();

}

const EntityPath Native::StackMac::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::StackMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::StackMac::Persistent>();
        }
        return persistent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::StackMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    return children;
}

void Native::StackMac::set_value(const std::string & value_path, std::string value)
{
}

Native::StackMac::Persistent::Persistent()
    :
    timer{YType::uint8, "timer"}
{
    yang_name = "persistent"; yang_parent_name = "stack-mac";
}

Native::StackMac::Persistent::~Persistent()
{
}

bool Native::StackMac::Persistent::has_data() const
{
    return timer.is_set;
}

bool Native::StackMac::Persistent::has_operation() const
{
    return is_set(operation)
	|| is_set(timer.operation);
}

std::string Native::StackMac::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";

    return path_buffer.str();

}

const EntityPath Native::StackMac::Persistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:stack-mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::StackMac::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::StackMac::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::StackMac::Persistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer")
    {
        timer = value;
    }
}

Native::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cos{YType::uint8, "cos"}
    	,
    global(std::make_shared<Native::L2ProtocolTunnel::Global>())
{
    global->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "native";
}

Native::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::L2ProtocolTunnel::has_data() const
{
    return cos.is_set
	|| (global !=  nullptr && global->has_data());
}

bool Native::L2ProtocolTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
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

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::L2ProtocolTunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::L2ProtocolTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
}

Native::L2ProtocolTunnel::Global::Global()
    :
    drop_threshold{YType::uint16, "drop-threshold"}
{
    yang_name = "global"; yang_parent_name = "l2protocol-tunnel";
}

Native::L2ProtocolTunnel::Global::~Global()
{
}

bool Native::L2ProtocolTunnel::Global::has_data() const
{
    return drop_threshold.is_set;
}

bool Native::L2ProtocolTunnel::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_threshold.operation);
}

std::string Native::L2ProtocolTunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::L2ProtocolTunnel::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:l2protocol-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_threshold.is_set || is_set(drop_threshold.operation)) leaf_name_data.push_back(drop_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2ProtocolTunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2ProtocolTunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2ProtocolTunnel::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold = value;
    }
}

Native::Rep::Rep()
    :
    admin(std::make_shared<Native::Rep::Admin>())
{
    admin->parent = this;

    yang_name = "rep"; yang_parent_name = "native";
}

Native::Rep::~Rep()
{
}

bool Native::Rep::has_data() const
{
    return (admin !=  nullptr && admin->has_data());
}

bool Native::Rep::has_operation() const
{
    return is_set(operation)
	|| (admin !=  nullptr && admin->has_operation());
}

std::string Native::Rep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:rep";

    return path_buffer.str();

}

const EntityPath Native::Rep::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Rep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin")
    {
        if(admin == nullptr)
        {
            admin = std::make_shared<Native::Rep::Admin>();
        }
        return admin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin != nullptr)
    {
        children["admin"] = admin;
    }

    return children;
}

void Native::Rep::set_value(const std::string & value_path, std::string value)
{
}

Native::Rep::Admin::Admin()
{
    yang_name = "admin"; yang_parent_name = "rep";
}

Native::Rep::Admin::~Admin()
{
}

bool Native::Rep::Admin::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rep::Admin::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Rep::Admin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin";

    return path_buffer.str();

}

const EntityPath Native::Rep::Admin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rep::Admin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rep::Admin::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::Admin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Rep::Admin::set_value(const std::string & value_path, std::string value)
{
}

Native::Rep::Admin::Vlan::Vlan()
    :
    name{YType::uint16, "name"}
{
    yang_name = "vlan"; yang_parent_name = "admin";
}

Native::Rep::Admin::Vlan::~Vlan()
{
}

bool Native::Rep::Admin::Vlan::has_data() const
{
    return name.is_set;
}

bool Native::Rep::Admin::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Rep::Admin::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Rep::Admin::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/admin/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rep::Admin::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::Admin::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rep::Admin::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::HwSwitch::HwSwitch()
    :
    switch(std::make_shared<Native::HwSwitch::Switch>())
{
    switch->parent = this;

    yang_name = "hw-switch"; yang_parent_name = "native";
}

Native::HwSwitch::~HwSwitch()
{
}

bool Native::HwSwitch::has_data() const
{
    return (switch !=  nullptr && switch->has_data());
}

bool Native::HwSwitch::has_operation() const
{
    return is_set(operation)
	|| (switch !=  nullptr && switch->has_operation());
}

std::string Native::HwSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:hw-switch";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::HwSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch == nullptr)
        {
            switch = std::make_shared<Native::HwSwitch::Switch>();
        }
        return switch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch != nullptr)
    {
        children["switch"] = switch;
    }

    return children;
}

void Native::HwSwitch::set_value(const std::string & value_path, std::string value)
{
}

Native::HwSwitch::Switch::Switch()
{
    yang_name = "switch"; yang_parent_name = "hw-switch";
}

Native::HwSwitch::Switch::~Switch()
{
}

bool Native::HwSwitch::Switch::has_data() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return false;
}

bool Native::HwSwitch::Switch::has_operation() const
{
    for (std::size_t index=0; index<switch_number.size(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::HwSwitch::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-number")
    {
        for(auto const & c : switch_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::HwSwitch::Switch::SwitchNumber>();
        c->parent = this;
        switch_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_number)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::HwSwitch::Switch::set_value(const std::string & value_path, std::string value)
{
}

Native::HwSwitch::Switch::SwitchNumber::SwitchNumber()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    logging(std::make_shared<Native::HwSwitch::Switch::SwitchNumber::Logging>())
{
    logging->parent = this;

    yang_name = "switch-number"; yang_parent_name = "switch";
}

Native::HwSwitch::Switch::SwitchNumber::~SwitchNumber()
{
}

bool Native::HwSwitch::Switch::SwitchNumber::has_data() const
{
    return switch_number.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::HwSwitch::Switch::SwitchNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(switch_number.operation)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::HwSwitch::Switch::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number" <<"[switch-number='" <<switch_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch::SwitchNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:hw-switch/switch/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.operation)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::HwSwitch::Switch::SwitchNumber::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::HwSwitch::Switch::SwitchNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
    }
}

Native::HwSwitch::Switch::SwitchNumber::Logging::Logging()
    :
    onboard(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "switch-number";
}

Native::HwSwitch::Switch::SwitchNumber::Logging::~Logging()
{
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::has_data() const
{
    return (onboard !=  nullptr && onboard->has_data());
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::has_operation() const
{
    return is_set(operation)
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string Native::HwSwitch::Switch::SwitchNumber::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch::SwitchNumber::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch::SwitchNumber::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch::SwitchNumber::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(onboard != nullptr)
    {
        children["onboard"] = onboard;
    }

    return children;
}

void Native::HwSwitch::Switch::SwitchNumber::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::Onboard()
    :
    counter{YType::empty, "counter"},
    environment{YType::empty, "environment"},
    message{YType::empty, "message"},
    poe{YType::empty, "poe"},
    temperature{YType::empty, "temperature"},
    voltage{YType::empty, "voltage"}
{
    yang_name = "onboard"; yang_parent_name = "logging";
}

Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::~Onboard()
{
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::has_data() const
{
    return counter.is_set
	|| environment.is_set
	|| message.is_set
	|| poe.is_set
	|| temperature.is_set
	|| voltage.is_set;
}

bool Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::has_operation() const
{
    return is_set(operation)
	|| is_set(counter.operation)
	|| is_set(environment.operation)
	|| is_set(message.operation)
	|| is_set(poe.operation)
	|| is_set(temperature.operation)
	|| is_set(voltage.operation);
}

std::string Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";

    return path_buffer.str();

}

const EntityPath Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Onboard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.operation)) leaf_name_data.push_back(counter.get_name_leafdata());
    if (environment.is_set || is_set(environment.operation)) leaf_name_data.push_back(environment.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (poe.is_set || is_set(poe.operation)) leaf_name_data.push_back(poe.get_name_leafdata());
    if (temperature.is_set || is_set(temperature.operation)) leaf_name_data.push_back(temperature.get_name_leafdata());
    if (voltage.is_set || is_set(voltage.operation)) leaf_name_data.push_back(voltage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::HwSwitch::Switch::SwitchNumber::Logging::Onboard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "counter")
    {
        counter = value;
    }
    if(value_path == "environment")
    {
        environment = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "poe")
    {
        poe = value;
    }
    if(value_path == "temperature")
    {
        temperature = value;
    }
    if(value_path == "voltage")
    {
        voltage = value;
    }
}

Native::Utd::Utd()
{
    yang_name = "utd"; yang_parent_name = "native";
}

Native::Utd::~Utd()
{
}

bool Native::Utd::has_data() const
{
    return false;
}

bool Native::Utd::has_operation() const
{
    return is_set(operation);
}

std::string Native::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";

    return path_buffer.str();

}

const EntityPath Native::Utd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Utd::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::UtdEngine()
    :
    utd(std::make_shared<Native::UtdEngine::Utd>())
{
    utd->parent = this;

    yang_name = "utd-engine"; yang_parent_name = "native";
}

Native::UtdEngine::~UtdEngine()
{
}

bool Native::UtdEngine::has_data() const
{
    return (utd !=  nullptr && utd->has_data());
}

bool Native::UtdEngine::has_operation() const
{
    return is_set(operation)
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::UtdEngine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd-engine";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::UtdEngine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::UtdEngine::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    return children;
}

void Native::UtdEngine::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Utd()
    :
    engine(std::make_shared<Native::UtdEngine::Utd::Engine>())
	,whitelist(std::make_shared<Native::UtdEngine::Utd::Whitelist>())
{
    engine->parent = this;

    whitelist->parent = this;

    yang_name = "utd"; yang_parent_name = "utd-engine";
}

Native::UtdEngine::Utd::~Utd()
{
}

bool Native::UtdEngine::Utd::has_data() const
{
    return (engine !=  nullptr && engine->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdEngine::Utd::has_operation() const
{
    return is_set(operation)
	|| (engine !=  nullptr && engine->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdEngine::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::UtdEngine::Utd::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdEngine::Utd::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(engine != nullptr)
    {
        children["engine"] = engine;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::UtdEngine::Utd::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Engine()
    :
    advanced(std::make_shared<Native::UtdEngine::Utd::Engine::Advanced>())
	,standard(std::make_shared<Native::UtdEngine::Utd::Engine::Standard>())
{
    advanced->parent = this;

    standard->parent = this;

    yang_name = "engine"; yang_parent_name = "utd";
}

Native::UtdEngine::Utd::Engine::~Engine()
{
}

bool Native::UtdEngine::Utd::Engine::has_data() const
{
    return (advanced !=  nullptr && advanced->has_data())
	|| (standard !=  nullptr && standard->has_data());
}

bool Native::UtdEngine::Utd::Engine::has_operation() const
{
    return is_set(operation)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (standard !=  nullptr && standard->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "standard")
    {
        if(standard == nullptr)
        {
            standard = std::make_shared<Native::UtdEngine::Utd::Engine::Standard>();
        }
        return standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advanced != nullptr)
    {
        children["advanced"] = advanced;
    }

    if(standard != nullptr)
    {
        children["standard"] = standard;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Advanced::Advanced()
    :
    default_(std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_>())
	,threat(nullptr) // presence node
{
    default_->parent = this;

    yang_name = "advanced"; yang_parent_name = "engine";
}

Native::UtdEngine::Utd::Engine::Advanced::~Advanced()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (threat !=  nullptr && threat->has_data());
}

bool Native::UtdEngine::Utd::Engine::Advanced::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Default_()
    :
    threat(nullptr) // presence node
{
    yang_name = "default"; yang_parent_name = "advanced";
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::~Default_()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_data() const
{
    return (threat !=  nullptr && threat->has_data());
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::has_operation() const
{
    return is_set(operation)
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::Threat()
{
    yang_name = "threat"; yang_parent_name = "default";
}

Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::~Threat()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_data() const
{
    return false;
}

bool Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::has_operation() const
{
    return is_set(operation);
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Default_::Threat::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Advanced::Threat::Threat()
    :
    detection{YType::empty, "detection"}
{
    yang_name = "threat"; yang_parent_name = "advanced";
}

Native::UtdEngine::Utd::Engine::Advanced::Threat::~Threat()
{
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_data() const
{
    return detection.is_set;
}

bool Native::UtdEngine::Utd::Engine::Advanced::Threat::has_operation() const
{
    return is_set(operation)
	|| is_set(detection.operation);
}

std::string Native::UtdEngine::Utd::Engine::Advanced::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Advanced::Threat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/advanced/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.operation)) leaf_name_data.push_back(detection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Advanced::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Advanced::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Advanced::Threat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection")
    {
        detection = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Standard()
    :
    policy{YType::enumeration, "policy"},
    threat{YType::enumeration, "threat"},
    whitelist{YType::empty, "whitelist"}
    	,
    default_(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Default_>())
	,logging(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging>())
	,signature(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature>())
{
    default_->parent = this;

    logging->parent = this;

    signature->parent = this;

    yang_name = "standard"; yang_parent_name = "engine";
}

Native::UtdEngine::Utd::Engine::Standard::~Standard()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::has_data() const
{
    return policy.is_set
	|| threat.is_set
	|| whitelist.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signature !=  nullptr && signature->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation)
	|| is_set(threat.operation)
	|| is_set(whitelist.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (threat.is_set || is_set(threat.operation)) leaf_name_data.push_back(threat.get_name_leafdata());
    if (whitelist.is_set || is_set(whitelist.operation)) leaf_name_data.push_back(whitelist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "threat")
    {
        threat = value;
    }
    if(value_path == "whitelist")
    {
        whitelist = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Default_::Default_()
    :
    policy{YType::empty, "policy"},
    threat{YType::empty, "threat"}
{
    yang_name = "default"; yang_parent_name = "standard";
}

Native::UtdEngine::Utd::Engine::Standard::Default_::~Default_()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_data() const
{
    return policy.is_set
	|| threat.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation)
	|| is_set(threat.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (threat.is_set || is_set(threat.operation)) leaf_name_data.push_back(threat.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "threat")
    {
        threat = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Logging()
    :
    server(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Server>())
	,syslog(nullptr) // presence node
{
    server->parent = this;

    yang_name = "logging"; yang_parent_name = "standard";
}

Native::UtdEngine::Utd::Engine::Standard::Logging::~Logging()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_data() const
{
    return (server !=  nullptr && server->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::has_operation() const
{
    return is_set(operation)
	|| (server !=  nullptr && server->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Server>();
        }
        return server;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(syslog != nullptr)
    {
        children["syslog"] = syslog;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Server::Server()
    :
    level{YType::enumeration, "level"},
    name{YType::str, "name"},
    syslog{YType::empty, "syslog"}
{
    yang_name = "server"; yang_parent_name = "logging";
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Server::~Server()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_data() const
{
    return level.is_set
	|| name.is_set
	|| syslog.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(name.operation)
	|| is_set(syslog.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::Syslog()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "syslog"; yang_parent_name = "logging";
}

Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::~Syslog()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_data() const
{
    return level.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Logging::Syslog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Signature()
    :
    update(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update>())
{
    update->parent = this;

    yang_name = "signature"; yang_parent_name = "standard";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::~Signature()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_data() const
{
    return (update !=  nullptr && update->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::has_operation() const
{
    return is_set(operation)
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Update()
    :
    occur_at(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt>())
	,server(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server>())
{
    occur_at->parent = this;

    server->parent = this;

    yang_name = "update"; yang_parent_name = "signature";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::~Update()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_data() const
{
    return (occur_at !=  nullptr && occur_at->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::has_operation() const
{
    return is_set(operation)
	|| (occur_at !=  nullptr && occur_at->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "occur-at")
    {
        if(occur_at == nullptr)
        {
            occur_at = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt>();
        }
        return occur_at;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(occur_at != nullptr)
    {
        children["occur-at"] = occur_at;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::OccurAt()
    :
    daily(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily>())
	,monthly(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly>())
	,weekly(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly>())
{
    daily->parent = this;

    monthly->parent = this;

    weekly->parent = this;

    yang_name = "occur-at"; yang_parent_name = "update";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::~OccurAt()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::has_operation() const
{
    return is_set(operation)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "occur-at";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::Daily()
    :
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{
    yang_name = "daily"; yang_parent_name = "occur-at";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::~Daily()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_data() const
{
    return hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::has_operation() const
{
    return is_set(operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Daily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::Monthly()
    :
    days{YType::str, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{
    yang_name = "monthly"; yang_parent_name = "occur-at";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::~Monthly()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Monthly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::Weekly()
    :
    days{YType::str, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{
    yang_name = "weekly"; yang_parent_name = "occur-at";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::~Weekly()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/occur-at/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::OccurAt::Weekly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Server()
    :
    cisco(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco>())
	,url(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url>())
{
    cisco->parent = this;

    url->parent = this;

    yang_name = "server"; yang_parent_name = "update";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::~Server()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_data() const
{
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::has_operation() const
{
    return is_set(operation)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco != nullptr)
    {
        children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::Cisco()
    :
    password{YType::str, "password"},
    username{YType::str, "username"}
{
    yang_name = "cisco"; yang_parent_name = "server";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::~Cisco()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_data() const
{
    return password.is_set
	|| username.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(username.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Cisco::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::Url()
    :
    name{YType::str, "name"}
    	,
    all(std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All>())
{
    all->parent = this;

    yang_name = "url"; yang_parent_name = "server";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::~Url()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_data() const
{
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::All()
    :
    name{YType::str, "name"},
    password{YType::str, "password"},
    username{YType::str, "username"}
{
    yang_name = "all"; yang_parent_name = "url";
}

Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::~All()
{
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_data() const
{
    return name.is_set
	|| password.is_set
	|| username.is_set;
}

bool Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(password.operation)
	|| is_set(username.operation);
}

std::string Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/engine/standard/signature/update/server/url/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Engine::Standard::Signature::Update::Server::Url::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::UtdEngine::Utd::Whitelist::Whitelist()
    :
    signature(std::make_shared<Native::UtdEngine::Utd::Whitelist::Signature>())
{
    signature->parent = this;

    yang_name = "whitelist"; yang_parent_name = "utd";
}

Native::UtdEngine::Utd::Whitelist::~Whitelist()
{
}

bool Native::UtdEngine::Utd::Whitelist::has_data() const
{
    return (signature !=  nullptr && signature->has_data());
}

bool Native::UtdEngine::Utd::Whitelist::has_operation() const
{
    return is_set(operation)
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Native::UtdEngine::Utd::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Whitelist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdEngine::Utd::Whitelist::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    return children;
}

void Native::UtdEngine::Utd::Whitelist::set_value(const std::string & value_path, std::string value)
{
}

Native::UtdEngine::Utd::Whitelist::Signature::Signature()
    :
    comment{YType::str, "comment"},
    id{YType::uint64, "id"}
{
    yang_name = "signature"; yang_parent_name = "whitelist";
}

Native::UtdEngine::Utd::Whitelist::Signature::~Signature()
{
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_data() const
{
    return comment.is_set
	|| id.is_set;
}

bool Native::UtdEngine::Utd::Whitelist::Signature::has_operation() const
{
    return is_set(operation)
	|| is_set(comment.operation)
	|| is_set(id.operation);
}

std::string Native::UtdEngine::Utd::Whitelist::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";

    return path_buffer.str();

}

const EntityPath Native::UtdEngine::Utd::Whitelist::Signature::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-engine/utd/whitelist/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comment.is_set || is_set(comment.operation)) leaf_name_data.push_back(comment.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::UtdEngine::Utd::Whitelist::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdEngine::Utd::Whitelist::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdEngine::Utd::Whitelist::Signature::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "comment")
    {
        comment = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Voice::Voice()
{
    yang_name = "voice"; yang_parent_name = "native";
}

Native::Voice::~Voice()
{
}

bool Native::Voice::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Voice::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice";

    return path_buffer.str();

}

const EntityPath Native::Voice::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Voice::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Voice::set_value(const std::string & value_path, std::string value)
{
}

Native::Voice::Service::Service()
    :
    type{YType::enumeration, "type"}
    	,
    fax(std::make_shared<Native::Voice::Service::Fax>())
{
    fax->parent = this;

    yang_name = "service"; yang_parent_name = "voice";
}

Native::Voice::Service::~Service()
{
}

bool Native::Voice::Service::has_data() const
{
    return type.is_set
	|| (fax !=  nullptr && fax->has_data());
}

bool Native::Voice::Service::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (fax !=  nullptr && fax->has_operation());
}

std::string Native::Voice::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath Native::Voice::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-voice:voice/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Voice::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fax")
    {
        if(fax == nullptr)
        {
            fax = std::make_shared<Native::Voice::Service::Fax>();
        }
        return fax;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fax != nullptr)
    {
        children["fax"] = fax;
    }

    return children;
}

void Native::Voice::Service::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Voice::Service::Fax::Fax()
    :
    codec{YType::enumeration, "codec"},
    fallback{YType::enumeration, "fallback"},
    hs_redundancy{YType::uint8, "hs-redundancy"},
    ls_redundancy{YType::uint8, "ls-redundancy"},
    protocol{YType::enumeration, "protocol"},
    version{YType::enumeration, "version"}
{
    yang_name = "fax"; yang_parent_name = "service";
}

Native::Voice::Service::Fax::~Fax()
{
}

bool Native::Voice::Service::Fax::has_data() const
{
    return codec.is_set
	|| fallback.is_set
	|| hs_redundancy.is_set
	|| ls_redundancy.is_set
	|| protocol.is_set
	|| version.is_set;
}

bool Native::Voice::Service::Fax::has_operation() const
{
    return is_set(operation)
	|| is_set(codec.operation)
	|| is_set(fallback.operation)
	|| is_set(hs_redundancy.operation)
	|| is_set(ls_redundancy.operation)
	|| is_set(protocol.operation)
	|| is_set(version.operation);
}

std::string Native::Voice::Service::Fax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fax";

    return path_buffer.str();

}

const EntityPath Native::Voice::Service::Fax::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fax' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (codec.is_set || is_set(codec.operation)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.operation)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (hs_redundancy.is_set || is_set(hs_redundancy.operation)) leaf_name_data.push_back(hs_redundancy.get_name_leafdata());
    if (ls_redundancy.is_set || is_set(ls_redundancy.operation)) leaf_name_data.push_back(ls_redundancy.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Voice::Service::Fax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::Fax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Voice::Service::Fax::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "codec")
    {
        codec = value;
    }
    if(value_path == "fallback")
    {
        fallback = value;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy = value;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::VoiceCard::VoiceCard()
    :
    slot{YType::uint8, "slot"}
{
    yang_name = "voice-card"; yang_parent_name = "native";
}

Native::VoiceCard::~VoiceCard()
{
}

bool Native::VoiceCard::has_data() const
{
    return slot.is_set;
}

bool Native::VoiceCard::has_operation() const
{
    return is_set(operation)
	|| is_set(slot.operation);
}

std::string Native::VoiceCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice-card" <<"[slot='" <<slot <<"']";

    return path_buffer.str();

}

const EntityPath Native::VoiceCard::get_entity_path(Entity* ancestor) const
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

    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::VoiceCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VoiceCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VoiceCard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot")
    {
        slot = value;
    }
}

Native::Vpdn::Vpdn()
    :
    authen_before_forward{YType::empty, "authen-before-forward"},
    enable{YType::empty, "enable"},
    search_order{YType::enumeration, "search-order"}
{
    yang_name = "vpdn"; yang_parent_name = "native";
}

Native::Vpdn::~Vpdn()
{
}

bool Native::Vpdn::has_data() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_before_forward.is_set
	|| enable.is_set;
}

bool Native::Vpdn::has_operation() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authen_before_forward.operation)
	|| is_set(enable.operation)
	|| is_set(search_order.operation);
}

std::string Native::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vpdn:vpdn";

    return path_buffer.str();

}

const EntityPath Native::Vpdn::get_entity_path(Entity* ancestor) const
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

    if (authen_before_forward.is_set || is_set(authen_before_forward.operation)) leaf_name_data.push_back(authen_before_forward.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());

    auto search_order_name_datas = search_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_order_name_datas.begin(), search_order_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vpdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "search-order")
    {
        search_order.append(value);
    }
}

Native::Vstack::Vstack()
    :
    director{YType::str, "director"}
{
    yang_name = "vstack"; yang_parent_name = "native";
}

Native::Vstack::~Vstack()
{
}

bool Native::Vstack::has_data() const
{
    return director.is_set;
}

bool Native::Vstack::has_operation() const
{
    return is_set(operation)
	|| is_set(director.operation);
}

std::string Native::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vstack:vstack";

    return path_buffer.str();

}

const EntityPath Native::Vstack::get_entity_path(Entity* ancestor) const
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

    if (director.is_set || is_set(director.operation)) leaf_name_data.push_back(director.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vstack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "director")
    {
        director = value;
    }
}

const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c2960x_24pd_l {0, "ws-c2960x-24pd-l"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48ps {1, "ws-c3650-48ps"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_24ps {2, "ws-c3650-24ps"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_48p {3, "ws-c3850-48p"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24p {4, "ws-c3850-24p"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_48t {5, "ws-c3850-48t"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24t {6, "ws-c3850-24t"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_48f {7, "ws-c3850-48f"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_48u {8, "ws-c3850-48u"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24u {9, "ws-c3850-24u"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_12x48u {10, "ws-c3850-12x48u"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24xu {11, "ws-c3850-24xu"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24ux {12, "ws-c3850-24ux"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_12s {13, "ws-c3850-12s"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24s {14, "ws-c3850-24s"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_12xs {15, "ws-c3850-12xs"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_24xs {16, "ws-c3850-24xs"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_48xs {17, "ws-c3850-48xs"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_12x48fd {18, "ws-c3650-12x48fd"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_12x48uq {19, "ws-c3650-12x48uq"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_12x48ur {20, "ws-c3650-12x48ur"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_12x48uz {21, "ws-c3650-12x48uz"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_24pd {22, "ws-c3650-24pd"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_24pdm {23, "ws-c3650-24pdm"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_24td {24, "ws-c3650-24td"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_24ts {25, "ws-c3650-24ts"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48fqm {26, "ws-c3650-48fqm"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48pd {27, "ws-c3650-48pd"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48pq {28, "ws-c3650-48pq"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48td {29, "ws-c3650-48td"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48tq {30, "ws-c3650-48tq"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_48ts {31, "ws-c3650-48ts"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_8x24pd {32, "ws-c3650-8x24pd"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3650_8x24uq {33, "ws-c3650-8x24uq"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3750x_24p {34, "ws-c3750x-24p"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3750x_12s {35, "ws-c3750x-12s"};
const Enum::YLeaf Native::Switch::ProvisionEnum::ws_c3850_12x48au {36, "ws-c3850-12x48au"};
const Enum::YLeaf Native::Switch::ProvisionEnum::c9300_24p {37, "c9300-24p"};
const Enum::YLeaf Native::Switch::ProvisionEnum::c9300_24t {38, "c9300-24t"};
const Enum::YLeaf Native::Switch::ProvisionEnum::c9300_24u {39, "c9300-24u"};
const Enum::YLeaf Native::Switch::ProvisionEnum::c9300_48p {40, "c9300-48p"};
const Enum::YLeaf Native::Switch::ProvisionEnum::c9300_48t {41, "c9300-48t"};
const Enum::YLeaf Native::Switch::ProvisionEnum::c9300_48u {42, "c9300-48u"};

const Enum::YLeaf Native::SwitchVirtual::Switch::ModeEnum::virtual_ {0, "virtual"};

const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::PolicyEnum::balanced {0, "balanced"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::PolicyEnum::connectivity {1, "connectivity"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::PolicyEnum::security {2, "security"};

const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::ThreatEnum::detection {0, "detection"};
const Enum::YLeaf Native::UtdEngine::Utd::Engine::Standard::ThreatEnum::protection {1, "protection"};

const Enum::YLeaf Native::Voice::Service::TypeEnum::pots {0, "pots"};
const Enum::YLeaf Native::Voice::Service::TypeEnum::saf {1, "saf"};
const Enum::YLeaf Native::Voice::Service::TypeEnum::voatm {2, "voatm"};
const Enum::YLeaf Native::Voice::Service::TypeEnum::vofr {3, "vofr"};
const Enum::YLeaf Native::Voice::Service::TypeEnum::voip {4, "voip"};

const Enum::YLeaf Native::Voice::Service::Fax::ProtocolEnum::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::ProtocolEnum::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::ProtocolEnum::pass_through {2, "pass-through"};
const Enum::YLeaf Native::Voice::Service::Fax::ProtocolEnum::t38 {3, "t38"};

const Enum::YLeaf Native::Voice::Service::Fax::FallbackEnum::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::FallbackEnum::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::FallbackEnum::pass_through {2, "pass-through"};

const Enum::YLeaf Native::Voice::Service::Fax::CodecEnum::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Voice::Service::Fax::CodecEnum::g711ulaw {1, "g711ulaw"};

const Enum::YLeaf Native::Voice::Service::Fax::VersionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Voice::Service::Fax::VersionEnum::Y_3 {1, "3"};

const Enum::YLeaf Native::Vpdn::SearchOrderEnum::dnis {0, "dnis"};
const Enum::YLeaf Native::Vpdn::SearchOrderEnum::domain {1, "domain"};
const Enum::YLeaf Native::Vpdn::SearchOrderEnum::multihop_hostname {2, "multihop-hostname"};


}
}

