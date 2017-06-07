
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_71.hpp"
#include "Cisco_IOS_XE_native_72.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Vasiright::Standby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list";
}

Native::Interface::Vasiright::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(text.operation)
	|| is_set(word.operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "text")
    {
        text = value;
    }
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication";
}

Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "ip"; yang_parent_name = "standby-list";
}

Native::Interface::Vasiright::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Ip::get_entity_path(Entity* ancestor) const
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
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list";
}

Native::Interface::Vasiright::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Preempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Preempt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Preempt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{
    yang_name = "delay"; yang_parent_name = "preempt";
}

Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation)
	|| is_set(reload.operation)
	|| is_set(sync.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "reload")
    {
        reload = value;
    }
    if(value_path == "sync")
    {
        sync = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;

    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list";
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(unknown.operation)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.operation)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unknown")
    {
        unknown = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect";
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(operation)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertisement' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement";
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication";
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{
    yang_name = "timers"; yang_parent_name = "redirect";
}

Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(advertisement.operation)
	|| is_set(holddown.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::get_entity_path(Entity* ancestor) const
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

    if (advertisement.is_set || is_set(advertisement.operation)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
    }
    if(value_path == "holddown")
    {
        holddown = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;

    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list";
}

Native::Interface::Vasiright::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Vasiright::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(operation)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Timers::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "timers";
}

Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "timers";
}

Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Vasiright::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "track"; yang_parent_name = "standby-list";
}

Native::Interface::Vasiright::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Vasiright::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vasiright::Standby::StandbyList::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(decrement.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Interface::Vasiright::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Standby::StandbyList::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.operation)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Standby::StandbyList::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "decrement")
    {
        decrement = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::Vasiright::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Vasiright::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::AccessSession::~AccessSession()
{
}

bool Native::Interface::Vasiright::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Vasiright::AccessSession::has_operation() const
{
    return is_set(operation)
	|| is_set(closed.operation)
	|| is_set(host_mode.operation)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Vasiright::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::AccessSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessSession' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.operation)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Vasiright::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Vasiright::AccessSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "closed")
    {
        closed = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
}

Native::Interface::Vasiright::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{
    yang_name = "port-control"; yang_parent_name = "access-session";
}

Native::Interface::Vasiright::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::Vasiright::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vasiright::AccessSession::PortControl::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::Vasiright::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::AccessSession::PortControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::AccessSession::PortControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::Vasiright::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::Vasiright::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast>())
{
    action->parent = this;

    broadcast->parent = this;

    multicast->parent = this;

    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::StormControl::~StormControl()
{
}

bool Native::Interface::Vasiright::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vasiright::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vasiright::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Interface::Vasiright::StormControl::Action::~Action()
{
}

bool Native::Interface::Vasiright::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Vasiright::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Interface::Vasiright::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Action::get_entity_path(Entity* ancestor) const
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

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Interface::Vasiright::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level>())
{
    include->parent = this;

    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Interface::Vasiright::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasiright::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{
    yang_name = "include"; yang_parent_name = "broadcast";
}

Native::Interface::Vasiright::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast.operation);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Broadcast::Include::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Include' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Include::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast")
    {
        multicast = value;
    }
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control";
}

Native::Interface::Vasiright::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasiright::StormControl::Multicast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Multicast::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::Multicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast";
}

Native::Interface::Vasiright::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Multicast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasiright::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control";
}

Native::Interface::Vasiright::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vasiright::StormControl::Unicast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;

    pps->parent = this;

    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast";
}

Native::Interface::Vasiright::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::has_operation() const
{
    return is_set(operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Unicast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "threshold"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_entity_path(Entity* ancestor) const
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

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vasiright::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{
    yang_name = "trust"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::Trust::~Trust()
{
}

bool Native::Interface::Vasiright::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vasiright::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(device.operation);
}

std::string Native::Interface::Vasiright::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Trust::get_entity_path(Entity* ancestor) const
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

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
}

Native::Interface::Vasiright::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "utd"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::Utd::~Utd()
{
}

bool Native::Interface::Vasiright::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Vasiright::Utd::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Interface::Vasiright::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Utd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Utd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Utd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::Vasiright::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Vasiright::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::Vasiright::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Vasiright::PriorityQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Vasiright::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::PriorityQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Vasiright::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Vasiright::PriorityQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Vasiright::PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{
    yang_name = "cos-map"; yang_parent_name = "priority-queue";
}

Native::Interface::Vasiright::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vasiright::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Vasiright::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos_values.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Vasiright::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::PriorityQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::PriorityQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Vasiright::RcvQueue::RcvQueue()
{
    yang_name = "rcv-queue"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::Vasiright::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vasiright::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vasiright::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::RcvQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RcvQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vasiright::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vasiright::RcvQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{
    yang_name = "cos-map"; yang_parent_name = "rcv-queue";
}

Native::Interface::Vasiright::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vasiright::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Vasiright::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(threshold_id.operation)
	|| is_set(cos_values.operation);
}

std::string Native::Interface::Vasiright::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::RcvQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.operation)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::RcvQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

Native::Interface::Vasiright::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::Vasiright::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::Peer::~Peer()
{
}

bool Native::Interface::Vasiright::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Vasiright::Peer::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Vasiright::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Peer::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Vasiright::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Vasiright::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Vasiright::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer";
}

Native::Interface::Vasiright::Peer::Default_::~Default_()
{
}

bool Native::Interface::Vasiright::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vasiright::Peer::Default_::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vasiright::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Peer::Default_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vasiright::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vasiright::Peer::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Vasiright::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default";
}

Native::Interface::Vasiright::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Vasiright::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Peer::Default_::Ip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Interface::Vasiright::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vasiright::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Vasiright::Peer::Default_::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ip";
}

Native::Interface::Vasiright::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Vasiright::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Peer::Default_::Ip::Address::get_entity_path(Entity* ancestor) const
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

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::Vasiright::Peer::Default_::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "dhcp-pool"; yang_parent_name = "address";
}

Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpPool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "pool"; yang_parent_name = "address";
}

Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::get_entity_path(Entity* ancestor) const
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

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::Vasiright::PmPath::PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{
    yang_name = "pm-path"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::PmPath::~PmPath()
{
}

bool Native::Interface::Vasiright::PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::Vasiright::PmPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vasiright::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::PmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::PmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vasiright::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "vasiright";
}

Native::Interface::Vasiright::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vasiright::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Vasiright::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(history.operation)
	|| is_set(input.operation)
	|| is_set(output.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Vasiright::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Vasiright::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history")
    {
        history = value;
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

Native::Interface::Vasiright::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;

    performance_monitor->parent = this;

    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy";
}

Native::Interface::Vasiright::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Vasiright::ServicePolicy::Type::has_operation() const
{
    return is_set(operation)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::Type::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{
    yang_name = "control"; yang_parent_name = "type";
}

Native::Interface::Vasiright::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber.operation);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::Type::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Control' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.operation)) leaf_name_data.push_back(subscriber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::Control::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
    }
}

Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "performance-monitor"; yang_parent_name = "type";
}

Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type";
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-chain";
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-chain";
}

Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::RouteMap::RouteMap()
    :
    name{YType::str, "name"}
{
    yang_name = "route-map"; yang_parent_name = "native";
}

Native::RouteMap::~RouteMap()
{
}

bool Native::RouteMap::has_data() const
{
    for (std::size_t index=0; index<route_map_seq.size(); index++)
    {
        if(route_map_seq[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<route_map_seq.size(); index++)
    {
        if(route_map_seq[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-map-seq")
    {
        for(auto const & c : route_map_seq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq>();
        c->parent = this;
        route_map_seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_map_seq)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::RouteMap::RouteMapSeq::RouteMapSeq()
    :
    sequence{YType::uint16, "sequence"},
    description{YType::str, "description"},
    operation_{YType::enumeration, "operation"}
    	,
    match(std::make_shared<Native::RouteMap::RouteMapSeq::Match>())
	,set(std::make_shared<Native::RouteMap::RouteMapSeq::Set>())
{
    match->parent = this;

    set->parent = this;

    yang_name = "route-map-seq"; yang_parent_name = "route-map";
}

Native::RouteMap::RouteMapSeq::~RouteMapSeq()
{
}

bool Native::RouteMap::RouteMapSeq::has_data() const
{
    return sequence.is_set
	|| description.is_set
	|| operation_.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::RouteMap::RouteMapSeq::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(description.operation)
	|| is_set(operation_.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-route-map:route-map-seq" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMapSeq' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.operation)) leaf_name_data.push_back(operation_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::RouteMap::RouteMapSeq::Match>();
        }
        return match;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::RouteMap::RouteMapSeq::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "operation")
    {
        operation_ = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Set()
    :
    automatic_tag{YType::empty, "automatic-tag"},
    global{YType::empty, "global"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::str, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    mpls_label{YType::empty, "mpls-label"},
    traffic_index{YType::uint8, "traffic-index"},
    vrf{YType::str, "vrf"},
    weight{YType::uint32, "weight"}
    	,
    aigp_metric(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AigpMetric>())
	,as_path(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath>())
	,clns(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns>())
	,comm_list(std::make_shared<Native::RouteMap::RouteMapSeq::Set::CommList>())
	,community(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community>())
	,dampening(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening>())
	,default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_>())
	,extcomm_list(std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList>())
	,extcommunity(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity>())
	,interface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface>())
	,ip(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip>())
	,ipv6(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6>())
	,level(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Level>())
	,lisp(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Lisp>())
	,origin(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Origin>())
	,tag(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Tag>())
{
    aigp_metric->parent = this;

    as_path->parent = this;

    clns->parent = this;

    comm_list->parent = this;

    community->parent = this;

    dampening->parent = this;

    default_->parent = this;

    extcomm_list->parent = this;

    extcommunity->parent = this;

    interface->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    level->parent = this;

    lisp->parent = this;

    origin->parent = this;

    tag->parent = this;

    yang_name = "set"; yang_parent_name = "route-map-seq";
}

Native::RouteMap::RouteMapSeq::Set::~Set()
{
}

bool Native::RouteMap::RouteMapSeq::Set::has_data() const
{
    return automatic_tag.is_set
	|| global.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| mpls_label.is_set
	|| traffic_index.is_set
	|| vrf.is_set
	|| weight.is_set
	|| (aigp_metric !=  nullptr && aigp_metric->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (comm_list !=  nullptr && comm_list->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (extcomm_list !=  nullptr && extcomm_list->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (level !=  nullptr && level->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (origin !=  nullptr && origin->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(automatic_tag.operation)
	|| is_set(global.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(mpls_label.operation)
	|| is_set(traffic_index.operation)
	|| is_set(vrf.operation)
	|| is_set(weight.operation)
	|| (aigp_metric !=  nullptr && aigp_metric->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (comm_list !=  nullptr && comm_list->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (extcomm_list !=  nullptr && extcomm_list->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (level !=  nullptr && level->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (origin !=  nullptr && origin->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::get_entity_path(Entity* ancestor) const
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

    if (automatic_tag.is_set || is_set(automatic_tag.operation)) leaf_name_data.push_back(automatic_tag.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (traffic_index.is_set || is_set(traffic_index.operation)) leaf_name_data.push_back(traffic_index.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aigp-metric")
    {
        if(aigp_metric == nullptr)
        {
            aigp_metric = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AigpMetric>();
        }
        return aigp_metric;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "comm-list")
    {
        if(comm_list == nullptr)
        {
            comm_list = std::make_shared<Native::RouteMap::RouteMapSeq::Set::CommList>();
        }
        return comm_list;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community>();
        }
        return community;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "extcomm-list")
    {
        if(extcomm_list == nullptr)
        {
            extcomm_list = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList>();
        }
        return extcomm_list;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Level>();
        }
        return level;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "origin")
    {
        if(origin == nullptr)
        {
            origin = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Origin>();
        }
        return origin;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aigp_metric != nullptr)
    {
        children["aigp-metric"] = aigp_metric;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(comm_list != nullptr)
    {
        children["comm-list"] = comm_list;
    }

    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(extcomm_list != nullptr)
    {
        children["extcomm-list"] = extcomm_list;
    }

    if(extcommunity != nullptr)
    {
        children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(origin != nullptr)
    {
        children["origin"] = origin;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "automatic-tag")
    {
        automatic_tag = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "traffic-index")
    {
        traffic_index = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::AigpMetric::AigpMetric()
    :
    igp_metric{YType::empty, "igp-metric"},
    value_{YType::uint32, "value"}
{
    yang_name = "aigp-metric"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::AigpMetric::~AigpMetric()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_data() const
{
    return igp_metric.is_set
	|| value_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AigpMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_metric.operation)
	|| is_set(value_.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-metric";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AigpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AigpMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::AsPath::AsPath()
    :
    prepend(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend>())
	,tag(nullptr) // presence node
{
    prepend->parent = this;

    yang_name = "as-path"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::AsPath::~AsPath()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_data() const
{
    return (prepend !=  nullptr && prepend->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::has_operation() const
{
    return is_set(operation)
	|| (prepend !=  nullptr && prepend->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::AsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend")
    {
        if(prepend == nullptr)
        {
            prepend = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend>();
        }
        return prepend;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prepend != nullptr)
    {
        children["prepend"] = prepend;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::Prepend()
    :
    as_container(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer>())
	,last_as_cont(std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont>())
{
    as_container->parent = this;

    last_as_cont->parent = this;

    yang_name = "prepend"; yang_parent_name = "as-path";
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::~Prepend()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_data() const
{
    return (as_container !=  nullptr && as_container->has_data())
	|| (last_as_cont !=  nullptr && last_as_cont->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::has_operation() const
{
    return is_set(operation)
	|| (as_container !=  nullptr && as_container->has_operation())
	|| (last_as_cont !=  nullptr && last_as_cont->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prepend' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-container")
    {
        if(as_container == nullptr)
        {
            as_container = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer>();
        }
        return as_container;
    }

    if(child_yang_name == "last-as-cont")
    {
        if(last_as_cont == nullptr)
        {
            last_as_cont = std::make_shared<Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont>();
        }
        return last_as_cont;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_container != nullptr)
    {
        children["as-container"] = as_container;
    }

    if(last_as_cont != nullptr)
    {
        children["last-as-cont"] = last_as_cont;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::AsContainer()
    :
    as_number{YType::str, "as-number"}
{
    yang_name = "as-container"; yang_parent_name = "prepend";
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::~AsContainer()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_data() const
{
    return as_number.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-container";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::LastAsCont()
    :
    last_as{YType::uint16, "last-as"}
{
    yang_name = "last-as-cont"; yang_parent_name = "prepend";
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::~LastAsCont()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_data() const
{
    return last_as.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::has_operation() const
{
    return is_set(operation)
	|| is_set(last_as.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-as-cont";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastAsCont' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_as.is_set || is_set(last_as.operation)) leaf_name_data.push_back(last_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-as")
    {
        last_as = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::Tag()
{
    yang_name = "tag"; yang_parent_name = "as-path";
}

Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_data() const
{
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::has_operation() const
{
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::AsPath::Tag::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Clns::Clns()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns::NextHop>())
{
    next_hop->parent = this;

    yang_name = "clns"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Clns::~Clns()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::has_operation() const
{
    return is_set(operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Clns::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Clns::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Clns::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::NextHop()
    :
    address{YType::str, "address"}
{
    yang_name = "next-hop"; yang_parent_name = "clns";
}

Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Clns::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Community::Community()
    :
    none{YType::empty, "none"}
    	,
    community_well_known(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown>())
{
    community_well_known->parent = this;

    yang_name = "community"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Community::~Community()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_data() const
{
    return none.is_set
	|| (community_well_known !=  nullptr && community_well_known->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| (community_well_known !=  nullptr && community_well_known->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Community::get_entity_path(Entity* ancestor) const
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

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-well-known")
    {
        if(community_well_known == nullptr)
        {
            community_well_known = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown>();
        }
        return community_well_known;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community_well_known != nullptr)
    {
        children["community-well-known"] = community_well_known;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::CommunityWellKnown()
    :
    additive{YType::empty, "additive"},
    community_list{YType::str, "community-list"}
{
    yang_name = "community-well-known"; yang_parent_name = "community";
}

Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::~CommunityWellKnown()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_data() const
{
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return additive.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::has_operation() const
{
    for (auto const & leaf : community_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(additive.operation)
	|| is_set(community_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-well-known";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommunityWellKnown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.operation)) leaf_name_data.push_back(additive.get_name_leafdata());

    auto community_list_name_datas = community_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), community_list_name_datas.begin(), community_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additive")
    {
        additive = value;
    }
    if(value_path == "community-list")
    {
        community_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::CommList::CommList()
    :
    comm_list_expanded{YType::uint16, "comm-list-expanded"},
    comm_list_name{YType::str, "comm-list-name"},
    comm_list_standard{YType::uint16, "comm-list-standard"},
    delete_{YType::empty, "delete"}
{
    yang_name = "comm-list"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::CommList::~CommList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_data() const
{
    return comm_list_expanded.is_set
	|| comm_list_name.is_set
	|| comm_list_standard.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::CommList::has_operation() const
{
    return is_set(operation)
	|| is_set(comm_list_expanded.operation)
	|| is_set(comm_list_name.operation)
	|| is_set(comm_list_standard.operation)
	|| is_set(delete_.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::CommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "comm-list";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::CommList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_expanded.is_set || is_set(comm_list_expanded.operation)) leaf_name_data.push_back(comm_list_expanded.get_name_leafdata());
    if (comm_list_name.is_set || is_set(comm_list_name.operation)) leaf_name_data.push_back(comm_list_name.get_name_leafdata());
    if (comm_list_standard.is_set || is_set(comm_list_standard.operation)) leaf_name_data.push_back(comm_list_standard.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.operation)) leaf_name_data.push_back(delete_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::CommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::CommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::CommList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "comm-list-expanded")
    {
        comm_list_expanded = value;
    }
    if(value_path == "comm-list-name")
    {
        comm_list_name = value;
    }
    if(value_path == "comm-list-standard")
    {
        comm_list_standard = value;
    }
    if(value_path == "delete")
    {
        delete_ = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Dampening::Dampening()
{
    yang_name = "dampening"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Dampening::~Dampening()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_data() const
{
    for (std::size_t index=0; index<dampening_list.size(); index++)
    {
        if(dampening_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::has_operation() const
{
    for (std::size_t index=0; index<dampening_list.size(); index++)
    {
        if(dampening_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening-list")
    {
        for(auto const & c : dampening_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList>();
        c->parent = this;
        dampening_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dampening_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::DampeningList()
    :
    half_life_penalty{YType::uint8, "half-life-penalty"},
    restart_penalty{YType::uint16, "restart-penalty"},
    suppress_penalty{YType::uint16, "suppress-penalty"},
    max_suppress_penalty{YType::uint8, "max-suppress-penalty"}
{
    yang_name = "dampening-list"; yang_parent_name = "dampening";
}

Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::~DampeningList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_data() const
{
    return half_life_penalty.is_set
	|| restart_penalty.is_set
	|| suppress_penalty.is_set
	|| max_suppress_penalty.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::has_operation() const
{
    return is_set(operation)
	|| is_set(half_life_penalty.operation)
	|| is_set(restart_penalty.operation)
	|| is_set(suppress_penalty.operation)
	|| is_set(max_suppress_penalty.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening-list" <<"[half-life-penalty='" <<half_life_penalty <<"']" <<"[restart-penalty='" <<restart_penalty <<"']" <<"[suppress-penalty='" <<suppress_penalty <<"']" <<"[max-suppress-penalty='" <<max_suppress_penalty <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DampeningList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_penalty.is_set || is_set(half_life_penalty.operation)) leaf_name_data.push_back(half_life_penalty.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.operation)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (max_suppress_penalty.is_set || is_set(max_suppress_penalty.operation)) leaf_name_data.push_back(max_suppress_penalty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life-penalty")
    {
        half_life_penalty = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
    }
    if(value_path == "max-suppress-penalty")
    {
        max_suppress_penalty = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Default_::Default_()
    :
    interface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface>())
{
    interface->parent = this;

    yang_name = "default"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Default_::~Default_()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Default_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::Interface()
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
    lisp{YType::uint16, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::has_data() const
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

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_entity_path(Entity* ancestor) const
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

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::get_children() const
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

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtcommList()
{
    yang_name = "extcomm-list"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::~ExtcommList()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_data() const
{
    for (std::size_t index=0; index<excomm_list_name.size(); index++)
    {
        if(excomm_list_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ext_range.size(); index++)
    {
        if(ext_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::has_operation() const
{
    for (std::size_t index=0; index<excomm_list_name.size(); index++)
    {
        if(excomm_list_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ext_range.size(); index++)
    {
        if(ext_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcomm-list";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtcommList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "excomm-list-name")
    {
        for(auto const & c : excomm_list_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName>();
        c->parent = this;
        excomm_list_name.push_back(c);
        return c;
    }

    if(child_yang_name == "ext-range")
    {
        for(auto const & c : ext_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange>();
        c->parent = this;
        ext_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : excomm_list_name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ext_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::ExtRange()
    :
    comm_list_num{YType::uint16, "comm-list-num"},
    delete_{YType::empty, "delete"}
{
    yang_name = "ext-range"; yang_parent_name = "extcomm-list";
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::~ExtRange()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_data() const
{
    return comm_list_num.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::has_operation() const
{
    return is_set(operation)
	|| is_set(comm_list_num.operation)
	|| is_set(delete_.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext-range" <<"[comm-list-num='" <<comm_list_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (comm_list_num.is_set || is_set(comm_list_num.operation)) leaf_name_data.push_back(comm_list_num.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.operation)) leaf_name_data.push_back(delete_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "comm-list-num")
    {
        comm_list_num = value;
    }
    if(value_path == "delete")
    {
        delete_ = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::ExcommListName()
    :
    name{YType::str, "name"},
    delete_{YType::empty, "delete"}
{
    yang_name = "excomm-list-name"; yang_parent_name = "extcomm-list";
}

Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::~ExcommListName()
{
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_data() const
{
    return name.is_set
	|| delete_.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delete_.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excomm-list-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcommListName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delete_.is_set || is_set(delete_.operation)) leaf_name_data.push_back(delete_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delete")
    {
        delete_ = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Extcommunity()
    :
    cost(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost>())
	,rt(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt>())
	,soo(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo>())
	,vpn_distinguisher(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher>())
{
    cost->parent = this;

    rt->parent = this;

    soo->parent = this;

    vpn_distinguisher->parent = this;

    yang_name = "extcommunity"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::~Extcommunity()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_data() const
{
    return (cost !=  nullptr && cost->has_data())
	|| (rt !=  nullptr && rt->has_data())
	|| (soo !=  nullptr && soo->has_data())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::has_operation() const
{
    return is_set(operation)
	|| (cost !=  nullptr && cost->has_operation())
	|| (rt !=  nullptr && rt->has_operation())
	|| (soo !=  nullptr && soo->has_operation())
	|| (vpn_distinguisher !=  nullptr && vpn_distinguisher->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extcommunity";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Extcommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "rt")
    {
        if(rt == nullptr)
        {
            rt = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt>();
        }
        return rt;
    }

    if(child_yang_name == "soo")
    {
        if(soo == nullptr)
        {
            soo = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo>();
        }
        return soo;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        if(vpn_distinguisher == nullptr)
        {
            vpn_distinguisher = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher>();
        }
        return vpn_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(rt != nullptr)
    {
        children["rt"] = rt;
    }

    if(soo != nullptr)
    {
        children["soo"] = soo;
    }

    if(vpn_distinguisher != nullptr)
    {
        children["vpn-distinguisher"] = vpn_distinguisher;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Cost()
    :
    igp(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp>())
	,pre_bestpath(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath>())
{
    igp->parent = this;

    pre_bestpath->parent = this;

    yang_name = "cost"; yang_parent_name = "extcommunity";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::~Cost()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_data() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return (igp !=  nullptr && igp->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::has_operation() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (igp !=  nullptr && igp->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        for(auto const & c : community_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId>();
        c->parent = this;
        community_id.push_back(c);
        return c;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{
    yang_name = "community-id"; yang_parent_name = "cost";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_data() const
{
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::has_operation() const
{
    return is_set(operation)
	|| is_set(community_id.operation)
	|| is_set(cost_value.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id" <<"[community-id='" <<community_id <<"']" <<"[cost-value='" <<cost_value <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommunityId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.operation)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.operation)) leaf_name_data.push_back(cost_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-id")
    {
        community_id = value;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::Igp()
{
    yang_name = "igp"; yang_parent_name = "cost";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::~Igp()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_data() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::has_operation() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        for(auto const & c : community_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId>();
        c->parent = this;
        community_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{
    yang_name = "community-id"; yang_parent_name = "igp";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_data() const
{
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::has_operation() const
{
    return is_set(operation)
	|| is_set(community_id.operation)
	|| is_set(cost_value.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id" <<"[community-id='" <<community_id <<"']" <<"[cost-value='" <<cost_value <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommunityId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.operation)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.operation)) leaf_name_data.push_back(cost_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-id")
    {
        community_id = value;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::PreBestpath()
{
    yang_name = "pre-bestpath"; yang_parent_name = "cost";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::~PreBestpath()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_data() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::has_operation() const
{
    for (std::size_t index=0; index<community_id.size(); index++)
    {
        if(community_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community-id")
    {
        for(auto const & c : community_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId>();
        c->parent = this;
        community_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : community_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::CommunityId()
    :
    community_id{YType::uint8, "community-id"},
    cost_value{YType::uint32, "cost-value"}
{
    yang_name = "community-id"; yang_parent_name = "pre-bestpath";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::~CommunityId()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_data() const
{
    return community_id.is_set
	|| cost_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::has_operation() const
{
    return is_set(operation)
	|| is_set(community_id.operation)
	|| is_set(cost_value.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community-id" <<"[community-id='" <<community_id <<"']" <<"[cost-value='" <<cost_value <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommunityId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_id.is_set || is_set(community_id.operation)) leaf_name_data.push_back(community_id.get_name_leafdata());
    if (cost_value.is_set || is_set(cost_value.operation)) leaf_name_data.push_back(cost_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-id")
    {
        community_id = value;
    }
    if(value_path == "cost-value")
    {
        cost_value = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Rt()
    :
    additive{YType::empty, "additive"},
    asn_nn{YType::str, "asn-nn"}
    	,
    range(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range>())
{
    range->parent = this;

    yang_name = "rt"; yang_parent_name = "extcommunity";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::~Rt()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_data() const
{
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return additive.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::has_operation() const
{
    for (auto const & leaf : asn_nn.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(additive.operation)
	|| is_set(asn_nn.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (additive.is_set || is_set(additive.operation)) leaf_name_data.push_back(additive.get_name_leafdata());

    auto asn_nn_name_datas = asn_nn.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), asn_nn_name_datas.begin(), asn_nn_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additive")
    {
        additive = value;
    }
    if(value_path == "asn-nn")
    {
        asn_nn.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::Range()
    :
    additive{YType::empty, "additive"},
    high_limit{YType::str, "high-limit"},
    lower_limit{YType::str, "lower-limit"}
{
    yang_name = "range"; yang_parent_name = "rt";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::~Range()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_data() const
{
    return additive.is_set
	|| high_limit.is_set
	|| lower_limit.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(additive.operation)
	|| is_set(high_limit.operation)
	|| is_set(lower_limit.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_entity_path(Entity* ancestor) const
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

    if (additive.is_set || is_set(additive.operation)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.operation)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.operation)) leaf_name_data.push_back(lower_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additive")
    {
        additive = value;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::Soo()
    :
    asn_nn{YType::str, "asn-nn"}
{
    yang_name = "soo"; yang_parent_name = "extcommunity";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::~Soo()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_data() const
{
    return asn_nn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_nn.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Soo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.operation)) leaf_name_data.push_back(asn_nn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::VpnDistinguisher()
    :
    asn_nn{YType::str, "asn-nn"}
    	,
    range(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range>())
{
    range->parent = this;

    yang_name = "vpn-distinguisher"; yang_parent_name = "extcommunity";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_data() const
{
    return asn_nn.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(asn_nn.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnDistinguisher' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_nn.is_set || is_set(asn_nn.operation)) leaf_name_data.push_back(asn_nn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-nn")
    {
        asn_nn = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::Range()
    :
    additive{YType::empty, "additive"},
    high_limit{YType::str, "high-limit"},
    lower_limit{YType::str, "lower-limit"}
{
    yang_name = "range"; yang_parent_name = "vpn-distinguisher";
}

Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::~Range()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_data() const
{
    return additive.is_set
	|| high_limit.is_set
	|| lower_limit.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(additive.operation)
	|| is_set(high_limit.operation)
	|| is_set(lower_limit.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_entity_path(Entity* ancestor) const
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

    if (additive.is_set || is_set(additive.operation)) leaf_name_data.push_back(additive.get_name_leafdata());
    if (high_limit.is_set || is_set(high_limit.operation)) leaf_name_data.push_back(high_limit.get_name_leafdata());
    if (lower_limit.is_set || is_set(lower_limit.operation)) leaf_name_data.push_back(lower_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "additive")
    {
        additive = value;
    }
    if(value_path == "high-limit")
    {
        high_limit = value;
    }
    if(value_path == "lower-limit")
    {
        lower_limit = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Interface::Interface()
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
    lisp{YType::uint16, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Interface::~Interface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_data() const
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

bool Native::RouteMap::RouteMapSeq::Set::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Interface::get_entity_path(Entity* ancestor) const
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

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::get_children() const
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

void Native::RouteMap::RouteMapSeq::Set::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
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

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
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

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Ip()
    :
    df{YType::uint8, "df"}
    	,
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Address>())
	,default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_>())
	,global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop>())
	,precedence(nullptr) // presence node
	,qos_group(nullptr) // presence node
	,tos(nullptr) // presence node
	,vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf>())
{
    address->parent = this;

    default_->parent = this;

    global->parent = this;

    next_hop->parent = this;

    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Ip::~Ip()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_data() const
{
    return df.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (precedence !=  nullptr && precedence->has_data())
	|| (qos_group !=  nullptr && qos_group->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(df.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (precedence !=  nullptr && precedence->has_operation())
	|| (qos_group !=  nullptr && qos_group->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::get_entity_path(Entity* ancestor) const
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

    if (df.is_set || is_set(df.operation)) leaf_name_data.push_back(df.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "precedence")
    {
        if(precedence == nullptr)
        {
            precedence = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Precedence>();
        }
        return precedence;
    }

    if(child_yang_name == "qos-group")
    {
        if(qos_group == nullptr)
        {
            qos_group = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup>();
        }
        return qos_group;
    }

    if(child_yang_name == "tos")
    {
        if(tos == nullptr)
        {
            tos = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Tos>();
        }
        return tos;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(precedence != nullptr)
    {
        children["precedence"] = precedence;
    }

    if(qos_group != nullptr)
    {
        children["qos-group"] = qos_group;
    }

    if(tos != nullptr)
    {
        children["tos"] = tos;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "df")
    {
        df = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "address"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_data() const
{
    return prefix_list.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_entity_path(Entity* ancestor) const
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

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Default_()
    :
    global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop>())
	,vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf>())
{
    global->parent = this;

    next_hop->parent = this;

    vrf->parent = this;

    yang_name = "default"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::~Default_()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::has_operation() const
{
    return is_set(operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{
    yang_name = "next-hop"; yang_parent_name = "global";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::NextHop()
    :
    address{YType::str, "address"}
{
    yang_name = "next-hop"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        for(auto const & c : vrfs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs>();
        c->parent = this;
        vrfs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrfs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
    	,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::has_data() const
{
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs" <<"[vrf='" <<vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{
    yang_name = "next-hop"; yang_parent_name = "vrfs";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::has_operation() const
{
    return is_set(operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::NextHop()
    :
    address{YType::str, "address"}
{
    yang_name = "next-hop"; yang_parent_name = "global";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::NextHop()
    :
    address{YType::str, "address"},
    peer_address{YType::empty, "peer-address"},
    self{YType::empty, "self"}
    	,
    dynamic(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic>())
	,encapsulate(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate>())
	,recursive(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive>())
	,verify_availability(nullptr) // presence node
{
    dynamic->parent = this;

    encapsulate->parent = this;

    recursive->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_data() const
{
    return address.is_set
	|| peer_address.is_set
	|| self.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (recursive !=  nullptr && recursive->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(peer_address.operation)
	|| is_set(self.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (recursive !=  nullptr && recursive->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (self.is_set || is_set(self.operation)) leaf_name_data.push_back(self.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "recursive")
    {
        if(recursive == nullptr)
        {
            recursive = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive>();
        }
        return recursive;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(encapsulate != nullptr)
    {
        children["encapsulate"] = encapsulate;
    }

    if(recursive != nullptr)
    {
        children["recursive"] = recursive;
    }

    if(verify_availability != nullptr)
    {
        children["verify-availability"] = verify_availability;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "self")
    {
        self = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::Dynamic()
    :
    dhcp{YType::empty, "dhcp"}
{
    yang_name = "dynamic"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::~Dynamic()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_data() const
{
    return dhcp.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_entity_path(Entity* ancestor) const
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

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{
    yang_name = "encapsulate"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_data() const
{
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::has_operation() const
{
    return is_set(operation)
	|| is_set(l3vpn.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.operation)) leaf_name_data.push_back(l3vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Recursive()
    :
    global{YType::str, "global"},
    ipv4{YType::str, "ipv4"}
    	,
    vrf(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf>())
{
    vrf->parent = this;

    yang_name = "recursive"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::~Recursive()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_data() const
{
    return global.is_set
	|| ipv4.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::has_operation() const
{
    return is_set(operation)
	|| is_set(global.operation)
	|| is_set(ipv4.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recursive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "recursive";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        for(auto const & c : vrfs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs>();
        c->parent = this;
        vrfs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrfs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"},
    ipv4{YType::str, "ipv4"}
{
    yang_name = "vrfs"; yang_parent_name = "vrf";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_data() const
{
    return vrf.is_set
	|| ipv4.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| is_set(ipv4.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs" <<"[vrf='" <<vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::VerifyAvailability()
{
    yang_name = "verify-availability"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VerifyAvailability' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    range{YType::uint16, "range"}
{
    yang_name = "ipv4"; yang_parent_name = "verify-availability";
}

Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::~Ipv4()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_data() const
{
    return ipv4.is_set
	|| range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(range.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::Precedence()
    :
    precedence_fields{YType::enumeration, "precedence-fields"},
    precedence_value{YType::uint8, "precedence-value"}
{
    yang_name = "precedence"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::~Precedence()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_data() const
{
    return precedence_fields.is_set
	|| precedence_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::has_operation() const
{
    return is_set(operation)
	|| is_set(precedence_fields.operation)
	|| is_set(precedence_value.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedence";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Precedence' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (precedence_fields.is_set || is_set(precedence_fields.operation)) leaf_name_data.push_back(precedence_fields.get_name_leafdata());
    if (precedence_value.is_set || is_set(precedence_value.operation)) leaf_name_data.push_back(precedence_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence-fields")
    {
        precedence_fields = value;
    }
    if(value_path == "precedence-value")
    {
        precedence_value = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::QosGroup()
    :
    qos_id{YType::uint8, "qos-id"}
{
    yang_name = "qos-group"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::~QosGroup()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_data() const
{
    return qos_id.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(qos_id.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_id.is_set || is_set(qos_id.operation)) leaf_name_data.push_back(qos_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "qos-id")
    {
        qos_id = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Tos::Tos()
    :
    service_value{YType::uint8, "service-value"},
    tos_fields{YType::enumeration, "tos-fields"}
{
    yang_name = "tos"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Tos::~Tos()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_data() const
{
    return service_value.is_set
	|| tos_fields.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_value.operation)
	|| is_set(tos_fields.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_entity_path(Entity* ancestor) const
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

    if (service_value.is_set || is_set(service_value.operation)) leaf_name_data.push_back(service_value.get_name_leafdata());
    if (tos_fields.is_set || is_set(tos_fields.operation)) leaf_name_data.push_back(tos_fields.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Tos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-value")
    {
        service_value = value;
    }
    if(value_path == "tos-fields")
    {
        tos_fields = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrf()
{
    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::~Vrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrfs.size(); index++)
    {
        if(vrfs[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        for(auto const & c : vrfs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs>();
        c->parent = this;
        vrfs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrfs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::Vrfs()
    :
    vrf{YType::str, "vrf"}
    	,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop>())
{
    next_hop->parent = this;

    yang_name = "vrfs"; yang_parent_name = "vrf";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::~Vrfs()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_data() const
{
    return vrf.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs" <<"[vrf='" <<vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::NextHop()
    :
    address{YType::str, "address"}
{
    yang_name = "next-hop"; yang_parent_name = "vrfs";
}

Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Ipv6()
    :
    precedence{YType::uint8, "precedence"}
    	,
    address(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Address>())
	,default_(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_>())
	,global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop>())
{
    address->parent = this;

    default_->parent = this;

    global->parent = this;

    next_hop->parent = this;

    yang_name = "ipv6"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::~Ipv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_data() const
{
    for (std::size_t index=0; index<bvrf.size(); index++)
    {
        if(bvrf[index]->has_data())
            return true;
    }
    return precedence.is_set
	|| (address !=  nullptr && address->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<bvrf.size(); index++)
    {
        if(bvrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(precedence.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "bvrf")
    {
        for(auto const & c : bvrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf>();
        c->parent = this;
        bvrf.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : bvrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "precedence")
    {
        precedence = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::Address()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::~Address()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_data() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_entity_path(Entity* ancestor) const
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


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Default_()
    :
    global(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global>())
	,next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop>())
{
    global->parent = this;

    next_hop->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::~Default_()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::has_data() const
{
    for (std::size_t index=0; index<dvrf.size(); index++)
    {
        if(dvrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::has_operation() const
{
    for (std::size_t index=0; index<dvrf.size(); index++)
    {
        if(dvrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dvrf")
    {
        for(auto const & c : dvrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf>();
        c->parent = this;
        dvrf.push_back(c);
        return c;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global>();
        }
        return global;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dvrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::Global()
    :
    next_hop{YType::str, "next-hop"}
{
    yang_name = "global"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::has_data() const
{
    return next_hop.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"}
{
    yang_name = "next-hop"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::has_data() const
{
    for (std::size_t index=0; index<ipv6s.size(); index++)
    {
        if(ipv6s[index]->has_data())
            return true;
    }
    return next_hop_address.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::has_operation() const
{
    for (std::size_t index=0; index<ipv6s.size(); index++)
    {
        if(ipv6s[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(next_hop_address.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6s")
    {
        for(auto const & c : ipv6s)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S>();
        c->parent = this;
        ipv6s.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6s)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::Ipv6S()
    :
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ipv6s"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::~Ipv6S()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::has_data() const
{
    return ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6s" <<"[ipv6='" <<ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6S' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf()
    :
    dvrf{YType::str, "dvrf"}
{
    yang_name = "dvrf"; yang_parent_name = "default";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::~Dvrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::has_data() const
{
    for (std::size_t index=0; index<dvrf0.size(); index++)
    {
        if(dvrf0[index]->has_data())
            return true;
    }
    return dvrf.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::has_operation() const
{
    for (std::size_t index=0; index<dvrf0.size(); index++)
    {
        if(dvrf0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dvrf.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf" <<"[dvrf='" <<dvrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dvrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf.is_set || is_set(dvrf.operation)) leaf_name_data.push_back(dvrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dvrf0")
    {
        for(auto const & c : dvrf0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0>();
        c->parent = this;
        dvrf0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dvrf0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dvrf")
    {
        dvrf = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::Dvrf0()
    :
    dvrf0{YType::str, "dvrf0"},
    next_hop{YType::empty, "next-hop"}
{
    yang_name = "dvrf0"; yang_parent_name = "dvrf";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::~Dvrf0()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::has_data() const
{
    return dvrf0.is_set
	|| next_hop.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::has_operation() const
{
    return is_set(operation)
	|| is_set(dvrf0.operation)
	|| is_set(next_hop.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvrf0" <<"[dvrf0='" <<dvrf0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dvrf0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dvrf0.is_set || is_set(dvrf0.operation)) leaf_name_data.push_back(dvrf0.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dvrf0")
    {
        dvrf0 = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::Global()
    :
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop>())
{
    next_hop->parent = this;

    yang_name = "global"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::~Global()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::has_operation() const
{
    return is_set(operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NextHop()
    :
    verify_availability{YType::str, "verify-availability"}
{
    yang_name = "next-hop"; yang_parent_name = "global";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_data() const
{
    for (std::size_t index=0; index<nh_ipv6.size(); index++)
    {
        if(nh_ipv6[index]->has_data())
            return true;
    }
    return verify_availability.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nh_ipv6.size(); index++)
    {
        if(nh_ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(verify_availability.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (verify_availability.is_set || is_set(verify_availability.operation)) leaf_name_data.push_back(verify_availability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nh-ipv6")
    {
        for(auto const & c : nh_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6>();
        c->parent = this;
        nh_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nh_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "verify-availability")
    {
        verify_availability = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::NhIpv6()
    :
    nh_ipv6{YType::str, "nh-ipv6"},
    nh_ipv60{YType::str, "nh-ipv60"}
{
    yang_name = "nh-ipv6"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::~NhIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_data() const
{
    return nh_ipv6.is_set
	|| nh_ipv60.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(nh_ipv6.operation)
	|| is_set(nh_ipv60.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-ipv6" <<"[nh-ipv6='" <<nh_ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhIpv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_ipv6.is_set || is_set(nh_ipv6.operation)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());
    if (nh_ipv60.is_set || is_set(nh_ipv60.operation)) leaf_name_data.push_back(nh_ipv60.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
    }
    if(value_path == "nh-ipv60")
    {
        nh_ipv60 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NextHop()
    :
    peer_address{YType::empty, "peer-address"},
    recursive{YType::str, "recursive"}
    	,
    encapsulate(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate>())
	,verify_availability(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability>())
{
    encapsulate->parent = this;

    verify_availability->parent = this;

    yang_name = "next-hop"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_data() const
{
    for (std::size_t index=0; index<nha_ipv6.size(); index++)
    {
        if(nha_ipv6[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| recursive.is_set
	|| (encapsulate !=  nullptr && encapsulate->has_data())
	|| (verify_availability !=  nullptr && verify_availability->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv6.size(); index++)
    {
        if(nha_ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(recursive.operation)
	|| (encapsulate !=  nullptr && encapsulate->has_operation())
	|| (verify_availability !=  nullptr && verify_availability->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (recursive.is_set || is_set(recursive.operation)) leaf_name_data.push_back(recursive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulate")
    {
        if(encapsulate == nullptr)
        {
            encapsulate = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate>();
        }
        return encapsulate;
    }

    if(child_yang_name == "nha-ipv6")
    {
        for(auto const & c : nha_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6>();
        c->parent = this;
        nha_ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "verify-availability")
    {
        if(verify_availability == nullptr)
        {
            verify_availability = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability>();
        }
        return verify_availability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulate != nullptr)
    {
        children["encapsulate"] = encapsulate;
    }

    for (auto const & c : nha_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    if(verify_availability != nullptr)
    {
        children["verify-availability"] = verify_availability;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "recursive")
    {
        recursive = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv6()
    :
    nha_ipv6{YType::str, "nha-ipv6"}
{
    yang_name = "nha-ipv6"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::~NhaIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_data() const
{
    for (std::size_t index=0; index<nha_ipv60.size(); index++)
    {
        if(nha_ipv60[index]->has_data())
            return true;
    }
    return nha_ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::has_operation() const
{
    for (std::size_t index=0; index<nha_ipv60.size(); index++)
    {
        if(nha_ipv60[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(nha_ipv6.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv6" <<"[nha-ipv6='" <<nha_ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhaIpv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv6.is_set || is_set(nha_ipv6.operation)) leaf_name_data.push_back(nha_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nha-ipv60")
    {
        for(auto const & c : nha_ipv60)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60>();
        c->parent = this;
        nha_ipv60.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nha_ipv60)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nha-ipv6")
    {
        nha_ipv6 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::NhaIpv60()
    :
    nha_ipv60{YType::str, "nha-ipv60"},
    nh_ipv6{YType::str, "nh-ipv6"}
{
    yang_name = "nha-ipv60"; yang_parent_name = "nha-ipv6";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::~NhaIpv60()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_data() const
{
    return nha_ipv60.is_set
	|| nh_ipv6.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::has_operation() const
{
    return is_set(operation)
	|| is_set(nha_ipv60.operation)
	|| is_set(nh_ipv6.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nha-ipv60" <<"[nha-ipv60='" <<nha_ipv60 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhaIpv60' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nha_ipv60.is_set || is_set(nha_ipv60.operation)) leaf_name_data.push_back(nha_ipv60.get_name_leafdata());
    if (nh_ipv6.is_set || is_set(nh_ipv6.operation)) leaf_name_data.push_back(nh_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nha-ipv60")
    {
        nha_ipv60 = value;
    }
    if(value_path == "nh-ipv6")
    {
        nh_ipv6 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::Encapsulate()
    :
    l3vpn{YType::str, "l3vpn"}
{
    yang_name = "encapsulate"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::~Encapsulate()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_data() const
{
    return l3vpn.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::has_operation() const
{
    return is_set(operation)
	|| is_set(l3vpn.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulate";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l3vpn.is_set || is_set(l3vpn.operation)) leaf_name_data.push_back(l3vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l3vpn")
    {
        l3vpn = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VerifyAvailability()
{
    yang_name = "verify-availability"; yang_parent_name = "next-hop";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::~VerifyAvailability()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_data() const
{
    for (std::size_t index=0; index<va_ipv6.size(); index++)
    {
        if(va_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::has_operation() const
{
    for (std::size_t index=0; index<va_ipv6.size(); index++)
    {
        if(va_ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify-availability";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VerifyAvailability' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "va-ipv6")
    {
        for(auto const & c : va_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6>();
        c->parent = this;
        va_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : va_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::VaIpv6()
    :
    va_ipv6{YType::str, "va-ipv6"},
    seq_nh{YType::uint16, "seq-nh"}
{
    yang_name = "va-ipv6"; yang_parent_name = "verify-availability";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::~VaIpv6()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_data() const
{
    return va_ipv6.is_set
	|| seq_nh.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(va_ipv6.operation)
	|| is_set(seq_nh.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "va-ipv6" <<"[va-ipv6='" <<va_ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VaIpv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (va_ipv6.is_set || is_set(va_ipv6.operation)) leaf_name_data.push_back(va_ipv6.get_name_leafdata());
    if (seq_nh.is_set || is_set(seq_nh.operation)) leaf_name_data.push_back(seq_nh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "va-ipv6")
    {
        va_ipv6 = value;
    }
    if(value_path == "seq-nh")
    {
        seq_nh = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf()
    :
    bvrf{YType::str, "bvrf"}
{
    yang_name = "bvrf"; yang_parent_name = "ipv6";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::~Bvrf()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_data() const
{
    for (std::size_t index=0; index<bvrf0.size(); index++)
    {
        if(bvrf0[index]->has_data())
            return true;
    }
    return bvrf.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::has_operation() const
{
    for (std::size_t index=0; index<bvrf0.size(); index++)
    {
        if(bvrf0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bvrf.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf" <<"[bvrf='" <<bvrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bvrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf.is_set || is_set(bvrf.operation)) leaf_name_data.push_back(bvrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bvrf0")
    {
        for(auto const & c : bvrf0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0>();
        c->parent = this;
        bvrf0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bvrf0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bvrf")
    {
        bvrf = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::Bvrf0()
    :
    bvrf0{YType::str, "bvrf0"}
    	,
    next_hop(std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bvrf0"; yang_parent_name = "bvrf";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::~Bvrf0()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_data() const
{
    return bvrf0.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::has_operation() const
{
    return is_set(operation)
	|| is_set(bvrf0.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvrf0" <<"[bvrf0='" <<bvrf0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bvrf0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bvrf0.is_set || is_set(bvrf0.operation)) leaf_name_data.push_back(bvrf0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bvrf0")
    {
        bvrf0 = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::NextHop()
    :
    bipv6{YType::str, "bipv6"},
    verify_availability{YType::empty, "verify-availability"}
{
    yang_name = "next-hop"; yang_parent_name = "bvrf0";
}

Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::~NextHop()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_data() const
{
    return bipv6.is_set
	|| verify_availability.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(bipv6.operation)
	|| is_set(verify_availability.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bipv6.is_set || is_set(bipv6.operation)) leaf_name_data.push_back(bipv6.get_name_leafdata());
    if (verify_availability.is_set || is_set(verify_availability.operation)) leaf_name_data.push_back(verify_availability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bipv6")
    {
        bipv6 = value;
    }
    if(value_path == "verify-availability")
    {
        verify_availability = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Level::Level()
    :
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    nssa_only{YType::empty, "nssa-only"}
{
    yang_name = "level"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Level::~Level()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_data() const
{
    return level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| nssa_only.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(level_1.operation)
	|| is_set(level_1_2.operation)
	|| is_set(level_2.operation)
	|| is_set(nssa_only.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.operation)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.operation)) leaf_name_data.push_back(nssa_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Lisp::Lisp()
    :
    locator_set{YType::str, "locator-set"}
{
    yang_name = "lisp"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Lisp::~Lisp()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_data() const
{
    return locator_set.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_set.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Lisp::get_entity_path(Entity* ancestor) const
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

    if (locator_set.is_set || is_set(locator_set.operation)) leaf_name_data.push_back(locator_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Origin::Origin()
    :
    egp{YType::uint32, "egp"},
    origin_value{YType::enumeration, "origin-value"}
{
    yang_name = "origin"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Origin::~Origin()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_data() const
{
    return egp.is_set
	|| origin_value.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Origin::has_operation() const
{
    return is_set(operation)
	|| is_set(egp.operation)
	|| is_set(origin_value.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Origin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Origin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Origin' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egp.is_set || is_set(egp.operation)) leaf_name_data.push_back(egp.get_name_leafdata());
    if (origin_value.is_set || is_set(origin_value.operation)) leaf_name_data.push_back(origin_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Origin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Origin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Origin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egp")
    {
        egp = value;
    }
    if(value_path == "origin-value")
    {
        origin_value = value;
    }
}

Native::RouteMap::RouteMapSeq::Set::Tag::Tag()
    :
    tag_ipv4{YType::str, "tag-ipv4"},
    tag_val{YType::uint32, "tag-val"}
{
    yang_name = "tag"; yang_parent_name = "set";
}

Native::RouteMap::RouteMapSeq::Set::Tag::~Tag()
{
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_data() const
{
    return tag_ipv4.is_set
	|| tag_val.is_set;
}

bool Native::RouteMap::RouteMapSeq::Set::Tag::has_operation() const
{
    return is_set(operation)
	|| is_set(tag_ipv4.operation)
	|| is_set(tag_val.operation);
}

std::string Native::RouteMap::RouteMapSeq::Set::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Set::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag_ipv4.is_set || is_set(tag_ipv4.operation)) leaf_name_data.push_back(tag_ipv4.get_name_leafdata());
    if (tag_val.is_set || is_set(tag_val.operation)) leaf_name_data.push_back(tag_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Set::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Set::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Set::Tag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag-ipv4")
    {
        tag_ipv4 = value;
    }
    if(value_path == "tag-val")
    {
        tag_val = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::Match()
    :
    mpls_label{YType::empty, "mpls-label"},
    track{YType::uint16, "track"}
    	,
    additional_paths(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths>())
	,as_path(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AsPath>())
	,clns(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Clns>())
	,community(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Community>())
	,extcommunity(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Extcommunity>())
	,interface(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Interface>())
	,ip(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip>())
	,ipv6(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6>())
	,length(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length>())
	,local_preference(std::make_shared<Native::RouteMap::RouteMapSeq::Match::LocalPreference>())
	,mdt_group(std::make_shared<Native::RouteMap::RouteMapSeq::Match::MdtGroup>())
	,metric(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Metric>())
	,policy_list(std::make_shared<Native::RouteMap::RouteMapSeq::Match::PolicyList>())
	,route_type(std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType>())
	,rpki(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Rpki>())
	,source_protocol(nullptr) // presence node
	,tag(std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag>())
{
    additional_paths->parent = this;

    as_path->parent = this;

    clns->parent = this;

    community->parent = this;

    extcommunity->parent = this;

    interface->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    length->parent = this;

    local_preference->parent = this;

    mdt_group->parent = this;

    metric->parent = this;

    policy_list->parent = this;

    route_type->parent = this;

    rpki->parent = this;

    tag->parent = this;

    yang_name = "match"; yang_parent_name = "route-map-seq";
}

Native::RouteMap::RouteMapSeq::Match::~Match()
{
}

bool Native::RouteMap::RouteMapSeq::Match::has_data() const
{
    return mpls_label.is_set
	|| track.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (clns !=  nullptr && clns->has_data())
	|| (community !=  nullptr && community->has_data())
	|| (extcommunity !=  nullptr && extcommunity->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (local_preference !=  nullptr && local_preference->has_data())
	|| (mdt_group !=  nullptr && mdt_group->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (policy_list !=  nullptr && policy_list->has_data())
	|| (route_type !=  nullptr && route_type->has_data())
	|| (rpki !=  nullptr && rpki->has_data())
	|| (source_protocol !=  nullptr && source_protocol->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls_label.operation)
	|| is_set(track.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (clns !=  nullptr && clns->has_operation())
	|| (community !=  nullptr && community->has_operation())
	|| (extcommunity !=  nullptr && extcommunity->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (local_preference !=  nullptr && local_preference->has_operation())
	|| (mdt_group !=  nullptr && mdt_group->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (policy_list !=  nullptr && policy_list->has_operation())
	|| (route_type !=  nullptr && route_type->has_operation())
	|| (rpki !=  nullptr && rpki->has_operation())
	|| (source_protocol !=  nullptr && source_protocol->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::get_entity_path(Entity* ancestor) const
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

    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Community>();
        }
        return community;
    }

    if(child_yang_name == "extcommunity")
    {
        if(extcommunity == nullptr)
        {
            extcommunity = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Extcommunity>();
        }
        return extcommunity;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Length>();
        }
        return length;
    }

    if(child_yang_name == "local-preference")
    {
        if(local_preference == nullptr)
        {
            local_preference = std::make_shared<Native::RouteMap::RouteMapSeq::Match::LocalPreference>();
        }
        return local_preference;
    }

    if(child_yang_name == "mdt-group")
    {
        if(mdt_group == nullptr)
        {
            mdt_group = std::make_shared<Native::RouteMap::RouteMapSeq::Match::MdtGroup>();
        }
        return mdt_group;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "policy-list")
    {
        if(policy_list == nullptr)
        {
            policy_list = std::make_shared<Native::RouteMap::RouteMapSeq::Match::PolicyList>();
        }
        return policy_list;
    }

    if(child_yang_name == "route-type")
    {
        if(route_type == nullptr)
        {
            route_type = std::make_shared<Native::RouteMap::RouteMapSeq::Match::RouteType>();
        }
        return route_type;
    }

    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Rpki>();
        }
        return rpki;
    }

    if(child_yang_name == "source-protocol")
    {
        if(source_protocol == nullptr)
        {
            source_protocol = std::make_shared<Native::RouteMap::RouteMapSeq::Match::SourceProtocol>();
        }
        return source_protocol;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::RouteMap::RouteMapSeq::Match::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(extcommunity != nullptr)
    {
        children["extcommunity"] = extcommunity;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(length != nullptr)
    {
        children["length"] = length;
    }

    if(local_preference != nullptr)
    {
        children["local-preference"] = local_preference;
    }

    if(mdt_group != nullptr)
    {
        children["mdt-group"] = mdt_group;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(policy_list != nullptr)
    {
        children["policy-list"] = policy_list;
    }

    if(route_type != nullptr)
    {
        children["route-type"] = route_type;
    }

    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    if(source_protocol != nullptr)
    {
        children["source-protocol"] = source_protocol;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "track")
    {
        track = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdditionalPaths()
    :
    advertise_set(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet>())
{
    advertise_set->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "match";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_data() const
{
    return (advertise_set !=  nullptr && advertise_set->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| (advertise_set !=  nullptr && advertise_set->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-set")
    {
        if(advertise_set == nullptr)
        {
            advertise_set = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet>();
        }
        return advertise_set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_set != nullptr)
    {
        children["advertise-set"] = advertise_set;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::AdvertiseSet()
    :
    all(nullptr) // presence node
	,best(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best>())
	,best_range(std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    best_range->parent = this;

    yang_name = "advertise-set"; yang_parent_name = "additional-paths";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::~AdvertiseSet()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_range !=  nullptr && best_range->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_range !=  nullptr && best_range->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-set";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseSet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-range")
    {
        if(best_range == nullptr)
        {
            best_range = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange>();
        }
        return best_range;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::get_children() const
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

    if(best_range != nullptr)
    {
        children["best-range"] = best_range;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::set_value(const std::string & value_path, std::string value)
{
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::All()
    :
    best{YType::uint8, "best"},
    best_range{YType::uint8, "best-range"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "all"; yang_parent_name = "advertise-set";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::~All()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_data() const
{
    return best.is_set
	|| best_range.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation)
	|| is_set(best_range.operation)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_entity_path(Entity* ancestor) const
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

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.operation)) leaf_name_data.push_back(best_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
    if(value_path == "best-range")
    {
        best_range = value;
    }
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::GroupBest()
    :
    best{YType::empty, "best"},
    best_range{YType::empty, "best-range"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::~GroupBest()
{
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_data() const
{
    return best.is_set
	|| best_range.is_set;
}

bool Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation)
	|| is_set(best_range.operation);
}

std::string Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_entity_path(Entity* ancestor) const
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

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());
    if (best_range.is_set || is_set(best_range.operation)) leaf_name_data.push_back(best_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
    if(value_path == "best-range")
    {
        best_range = value;
    }
}

const Enum::YLeaf Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vasiright::AccessSession::HostModeEnum::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Vasiright::AccessSession::HostModeEnum::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Vasiright::AccessSession::HostModeEnum::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Vasiright::AccessSession::HostModeEnum::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Vasiright::Trust::DeviceEnum::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Vasiright::Trust::DeviceEnum::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Vasiright::Trust::DeviceEnum::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Vasiright::Trust::DeviceEnum::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::output {1, "output"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::OperationEnum::deny {0, "deny"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::OperationEnum::permit {1, "permit"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricTypeEnum::type_1 {2, "type-1"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::MetricTypeEnum::type_2 {3, "type-2"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::critical {0, "critical"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::flash {1, "flash"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::flash_override {2, "flash-override"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::immediate {3, "immediate"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::internet {4, "internet"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::network {5, "network"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::priority {6, "priority"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFieldsEnum::routine {7, "routine"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFieldsEnum::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFieldsEnum::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFieldsEnum::min_delay {2, "min-delay"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFieldsEnum::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFieldsEnum::normal {4, "normal"};

const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Origin::OriginValueEnum::igp {0, "igp"};
const Enum::YLeaf Native::RouteMap::RouteMapSeq::Set::Origin::OriginValueEnum::incomplete {1, "incomplete"};


}
}

