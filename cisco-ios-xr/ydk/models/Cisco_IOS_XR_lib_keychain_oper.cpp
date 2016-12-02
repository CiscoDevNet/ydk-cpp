
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_lib_keychain_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_oper {

Keychain::Keies::Key::Key_::KeyId::SendLifetime::SendLifetime()
    :
    	duration{YType::int32, "duration"},
	 end{YType::str, "end"},
	 is_always_valid{YType::boolean, "is-always-valid"},
	 is_valid_now{YType::boolean, "is-valid-now"},
	 start{YType::str, "start"}
{
    yang_name = "send-lifetime"; yang_parent_name = "key-id";
}

Keychain::Keies::Key::Key_::KeyId::SendLifetime::~SendLifetime()
{
}

bool Keychain::Keies::Key::Key_::KeyId::SendLifetime::has_data() const
{
    return duration.is_set
	|| end.is_set
	|| is_always_valid.is_set
	|| is_valid_now.is_set
	|| start.is_set;
}

bool Keychain::Keies::Key::Key_::KeyId::SendLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(end.operation)
	|| is_set(is_always_valid.operation)
	|| is_set(is_valid_now.operation)
	|| is_set(start.operation);
}

std::string Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-lifetime";

    return path_buffer.str();

}

EntityPath Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (is_always_valid.is_set || is_set(is_always_valid.operation)) leaf_name_data.push_back(is_always_valid.get_name_leafdata());
    if (is_valid_now.is_set || is_set(is_valid_now.operation)) leaf_name_data.push_back(is_valid_now.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_children()
{
    return children;
}

void Keychain::Keies::Key::Key_::KeyId::SendLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "is-always-valid")
    {
        is_always_valid = value;
    }
    if(value_path == "is-valid-now")
    {
        is_valid_now = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::AcceptLifetime()
    :
    	duration{YType::int32, "duration"},
	 end{YType::str, "end"},
	 is_always_valid{YType::boolean, "is-always-valid"},
	 is_valid_now{YType::boolean, "is-valid-now"},
	 start{YType::str, "start"}
{
    yang_name = "accept-lifetime"; yang_parent_name = "key-id";
}

Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::~AcceptLifetime()
{
}

bool Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::has_data() const
{
    return duration.is_set
	|| end.is_set
	|| is_always_valid.is_set
	|| is_valid_now.is_set
	|| start.is_set;
}

bool Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(end.operation)
	|| is_set(is_always_valid.operation)
	|| is_set(is_valid_now.operation)
	|| is_set(start.operation);
}

std::string Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-lifetime";

    return path_buffer.str();

}

EntityPath Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (is_always_valid.is_set || is_set(is_always_valid.operation)) leaf_name_data.push_back(is_always_valid.get_name_leafdata());
    if (is_valid_now.is_set || is_set(is_valid_now.operation)) leaf_name_data.push_back(is_valid_now.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_children()
{
    return children;
}

void Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "is-always-valid")
    {
        is_always_valid = value;
    }
    if(value_path == "is-valid-now")
    {
        is_valid_now = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Keychain::Keies::Key::Key_::KeyId::KeyId()
    :
    	cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"},
	 key_id{YType::uint64, "key-id"},
	 key_string{YType::str, "key-string"}
    	,
    accept_lifetime(std::make_unique<Keychain::Keies::Key::Key_::KeyId::AcceptLifetime>())
	,send_lifetime(std::make_unique<Keychain::Keies::Key::Key_::KeyId::SendLifetime>())
{
    accept_lifetime->parent = this;
    children["accept-lifetime"] = accept_lifetime.get();

    send_lifetime->parent = this;
    children["send-lifetime"] = send_lifetime.get();

    yang_name = "key-id"; yang_parent_name = "key";
}

Keychain::Keies::Key::Key_::KeyId::~KeyId()
{
}

bool Keychain::Keies::Key::Key_::KeyId::has_data() const
{
    return cryptographic_algorithm.is_set
	|| key_id.is_set
	|| key_string.is_set
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_data())
	|| (send_lifetime !=  nullptr && send_lifetime->has_data());
}

bool Keychain::Keies::Key::Key_::KeyId::has_operation() const
{
    return is_set(operation)
	|| is_set(cryptographic_algorithm.operation)
	|| is_set(key_id.operation)
	|| is_set(key_string.operation)
	|| (accept_lifetime !=  nullptr && is_set(accept_lifetime->operation))
	|| (send_lifetime !=  nullptr && is_set(send_lifetime->operation));
}

std::string Keychain::Keies::Key::Key_::KeyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-id";

    return path_buffer.str();

}

EntityPath Keychain::Keies::Key::Key_::KeyId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.operation)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_string.is_set || is_set(key_string.operation)) leaf_name_data.push_back(key_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::Keies::Key::Key_::KeyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accept-lifetime")
    {
        if(accept_lifetime != nullptr)
        {
            children["accept-lifetime"] = accept_lifetime.get();
        }
        else
        {
            accept_lifetime = std::make_unique<Keychain::Keies::Key::Key_::KeyId::AcceptLifetime>();
            accept_lifetime->parent = this;
            children["accept-lifetime"] = accept_lifetime.get();
        }
        return children.at("accept-lifetime");
    }

    if(child_yang_name == "send-lifetime")
    {
        if(send_lifetime != nullptr)
        {
            children["send-lifetime"] = send_lifetime.get();
        }
        else
        {
            send_lifetime = std::make_unique<Keychain::Keies::Key::Key_::KeyId::SendLifetime>();
            send_lifetime->parent = this;
            children["send-lifetime"] = send_lifetime.get();
        }
        return children.at("send-lifetime");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::Keies::Key::Key_::KeyId::get_children()
{
    if(children.find("accept-lifetime") == children.end())
    {
        if(accept_lifetime != nullptr)
        {
            children["accept-lifetime"] = accept_lifetime.get();
        }
    }

    if(children.find("send-lifetime") == children.end())
    {
        if(send_lifetime != nullptr)
        {
            children["send-lifetime"] = send_lifetime.get();
        }
    }

    return children;
}

void Keychain::Keies::Key::Key_::KeyId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
    }
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "key-string")
    {
        key_string = value;
    }
}

Keychain::Keies::Key::Key_::Key_()
{
    yang_name = "key"; yang_parent_name = "key";
}

Keychain::Keies::Key::Key_::~Key_()
{
}

bool Keychain::Keies::Key::Key_::has_data() const
{
    for (std::size_t index=0; index<key_id.size(); index++)
    {
        if(key_id[index]->has_data())
            return true;
    }
    return false;
}

bool Keychain::Keies::Key::Key_::has_operation() const
{
    for (std::size_t index=0; index<key_id.size(); index++)
    {
        if(key_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Keychain::Keies::Key::Key_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

EntityPath Keychain::Keies::Key::Key_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::Keies::Key::Key_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "key-id")
    {
        for(auto const & c : key_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Keychain::Keies::Key::Key_::KeyId>();
        c->parent = this;
        key_id.push_back(std::move(c));
        children[segment_path] = key_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::Keies::Key::Key_::get_children()
{
    for (auto const & c : key_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Keychain::Keies::Key::Key_::set_value(const std::string & value_path, std::string value)
{
}

Keychain::Keies::Key::Key()
    :
    	key_name{YType::str, "key-name"},
	 accept_tolerance{YType::int32, "accept-tolerance"}
    	,
    key(std::make_unique<Keychain::Keies::Key::Key_>())
{
    key->parent = this;
    children["key"] = key.get();

    yang_name = "key"; yang_parent_name = "keies";
}

Keychain::Keies::Key::~Key()
{
}

bool Keychain::Keies::Key::has_data() const
{
    return key_name.is_set
	|| accept_tolerance.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Keychain::Keies::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(key_name.operation)
	|| is_set(accept_tolerance.operation)
	|| (key !=  nullptr && is_set(key->operation));
}

std::string Keychain::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-name='" <<key_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Keychain::Keies::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-keychain-oper:keychain/keies/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_name.is_set || is_set(key_name.operation)) leaf_name_data.push_back(key_name.get_name_leafdata());
    if (accept_tolerance.is_set || is_set(accept_tolerance.operation)) leaf_name_data.push_back(accept_tolerance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::Keies::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "key")
    {
        if(key != nullptr)
        {
            children["key"] = key.get();
        }
        else
        {
            key = std::make_unique<Keychain::Keies::Key::Key_>();
            key->parent = this;
            children["key"] = key.get();
        }
        return children.at("key");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::Keies::Key::get_children()
{
    if(children.find("key") == children.end())
    {
        if(key != nullptr)
        {
            children["key"] = key.get();
        }
    }

    return children;
}

void Keychain::Keies::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-name")
    {
        key_name = value;
    }
    if(value_path == "accept-tolerance")
    {
        accept_tolerance = value;
    }
}

Keychain::Keies::Keies()
{
    yang_name = "keies"; yang_parent_name = "keychain";
}

Keychain::Keies::~Keies()
{
}

bool Keychain::Keies::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Keychain::Keies::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Keychain::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";

    return path_buffer.str();

}

EntityPath Keychain::Keies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-keychain-oper:keychain/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::Keies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "key")
    {
        for(auto const & c : key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Keychain::Keies::Key>();
        c->parent = this;
        key.push_back(std::move(c));
        children[segment_path] = key.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::Keies::get_children()
{
    for (auto const & c : key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Keychain::Keies::set_value(const std::string & value_path, std::string value)
{
}

Keychain::Keychain()
    :
    keies(std::make_unique<Keychain::Keies>())
{
    keies->parent = this;
    children["keies"] = keies.get();

    yang_name = "keychain"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-oper";
}

Keychain::~Keychain()
{
}

bool Keychain::has_data() const
{
    return (keies !=  nullptr && keies->has_data());
}

bool Keychain::has_operation() const
{
    return is_set(operation)
	|| (keies !=  nullptr && is_set(keies->operation));
}

std::string Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-oper:keychain";

    return path_buffer.str();

}

EntityPath Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keies")
    {
        if(keies != nullptr)
        {
            children["keies"] = keies.get();
        }
        else
        {
            keies = std::make_unique<Keychain::Keies>();
            keies->parent = this;
            children["keies"] = keies.get();
        }
        return children.at("keies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychain::get_children()
{
    if(children.find("keies") == children.end())
    {
        if(keies != nullptr)
        {
            children["keies"] = keies.get();
        }
    }

    return children;
}

void Keychain::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Keychain::clone_ptr()
{
    return std::make_unique<Keychain>();
}

const Enum::Value CrytoAlgoEnum::not_configured {0, "not-configured"};
const Enum::Value CrytoAlgoEnum::hmac_sha1_12 {2, "hmac-sha1-12"};
const Enum::Value CrytoAlgoEnum::md5 {3, "md5"};
const Enum::Value CrytoAlgoEnum::sha1 {4, "sha1"};
const Enum::Value CrytoAlgoEnum::hmac_md5 {5, "hmac-md5"};
const Enum::Value CrytoAlgoEnum::hmac_sha1_20 {6, "hmac-sha1-20"};


}
}

