
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_key_chain.hpp"

namespace ydk {
namespace ietf_key_chain {

KeyChains::KeyChains()
    :
    name{YType::str, "name"}
    	,
    accept_tolerance(std::make_shared<KeyChains::AcceptTolerance>())
{
    accept_tolerance->parent = this;

    yang_name = "key-chains"; yang_parent_name = "ietf-key-chain";
}

KeyChains::~KeyChains()
{
}

bool KeyChains::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return name.is_set
	|| (accept_tolerance !=  nullptr && accept_tolerance->has_data());
}

bool KeyChains::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (accept_tolerance !=  nullptr && accept_tolerance->has_operation());
}

std::string KeyChains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-key-chain:key-chains" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath KeyChains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-tolerance")
    {
        if(accept_tolerance == nullptr)
        {
            accept_tolerance = std::make_shared<KeyChains::AcceptTolerance>();
        }
        return accept_tolerance;
    }

    if(child_yang_name == "key")
    {
        for(auto const & c : key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<KeyChains::Key>();
        c->parent = this;
        key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_tolerance != nullptr)
    {
        children["accept-tolerance"] = accept_tolerance;
    }

    for (auto const & c : key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void KeyChains::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

std::shared_ptr<Entity> KeyChains::clone_ptr() const
{
    return std::make_shared<KeyChains>();
}

std::string KeyChains::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string KeyChains::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function KeyChains::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

KeyChains::AcceptTolerance::AcceptTolerance()
    :
    duration{YType::uint32, "duration"}
{
    yang_name = "accept-tolerance"; yang_parent_name = "key-chains";
}

KeyChains::AcceptTolerance::~AcceptTolerance()
{
}

bool KeyChains::AcceptTolerance::has_data() const
{
    return duration.is_set;
}

bool KeyChains::AcceptTolerance::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation);
}

std::string KeyChains::AcceptTolerance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-tolerance";

    return path_buffer.str();

}

const EntityPath KeyChains::AcceptTolerance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptTolerance' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::AcceptTolerance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::AcceptTolerance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KeyChains::AcceptTolerance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
}

KeyChains::Key::Key()
    :
    key_id{YType::uint64, "key-id"}
    	,
    crypto_algorithm(std::make_shared<KeyChains::Key::CryptoAlgorithm>())
	,key_string(std::make_shared<KeyChains::Key::KeyString>())
	,lifetime(std::make_shared<KeyChains::Key::Lifetime>())
{
    crypto_algorithm->parent = this;

    key_string->parent = this;

    lifetime->parent = this;

    yang_name = "key"; yang_parent_name = "key-chains";
}

KeyChains::Key::~Key()
{
}

bool KeyChains::Key::has_data() const
{
    return key_id.is_set
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_data())
	|| (key_string !=  nullptr && key_string->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool KeyChains::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| (crypto_algorithm !=  nullptr && crypto_algorithm->has_operation())
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string KeyChains::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto-algorithm")
    {
        if(crypto_algorithm == nullptr)
        {
            crypto_algorithm = std::make_shared<KeyChains::Key::CryptoAlgorithm>();
        }
        return crypto_algorithm;
    }

    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<KeyChains::Key::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<KeyChains::Key::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crypto_algorithm != nullptr)
    {
        children["crypto-algorithm"] = crypto_algorithm;
    }

    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void KeyChains::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
}

KeyChains::Key::KeyString::KeyString()
    :
    hexadecimal_string{YType::str, "hexadecimal-string"},
    keystring{YType::str, "keystring"}
{
    yang_name = "key-string"; yang_parent_name = "key";
}

KeyChains::Key::KeyString::~KeyString()
{
}

bool KeyChains::Key::KeyString::has_data() const
{
    return hexadecimal_string.is_set
	|| keystring.is_set;
}

bool KeyChains::Key::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(hexadecimal_string.operation)
	|| is_set(keystring.operation);
}

std::string KeyChains::Key::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hexadecimal_string.is_set || is_set(hexadecimal_string.operation)) leaf_name_data.push_back(hexadecimal_string.get_name_leafdata());
    if (keystring.is_set || is_set(keystring.operation)) leaf_name_data.push_back(keystring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KeyChains::Key::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hexadecimal-string")
    {
        hexadecimal_string = value;
    }
    if(value_path == "keystring")
    {
        keystring = value;
    }
}

KeyChains::Key::Lifetime::Lifetime()
    :
    accept_lifetime(std::make_shared<KeyChains::Key::Lifetime::AcceptLifetime>())
	,send_accept_lifetime(std::make_shared<KeyChains::Key::Lifetime::SendAcceptLifetime>())
	,send_lifetime(std::make_shared<KeyChains::Key::Lifetime::SendLifetime>())
{
    accept_lifetime->parent = this;

    send_accept_lifetime->parent = this;

    send_lifetime->parent = this;

    yang_name = "lifetime"; yang_parent_name = "key";
}

KeyChains::Key::Lifetime::~Lifetime()
{
}

bool KeyChains::Key::Lifetime::has_data() const
{
    return (accept_lifetime !=  nullptr && accept_lifetime->has_data())
	|| (send_accept_lifetime !=  nullptr && send_accept_lifetime->has_data())
	|| (send_lifetime !=  nullptr && send_lifetime->has_data());
}

bool KeyChains::Key::Lifetime::has_operation() const
{
    return is_set(operation)
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_operation())
	|| (send_accept_lifetime !=  nullptr && send_accept_lifetime->has_operation())
	|| (send_lifetime !=  nullptr && send_lifetime->has_operation());
}

std::string KeyChains::Key::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-lifetime")
    {
        if(accept_lifetime == nullptr)
        {
            accept_lifetime = std::make_shared<KeyChains::Key::Lifetime::AcceptLifetime>();
        }
        return accept_lifetime;
    }

    if(child_yang_name == "send-accept-lifetime")
    {
        if(send_accept_lifetime == nullptr)
        {
            send_accept_lifetime = std::make_shared<KeyChains::Key::Lifetime::SendAcceptLifetime>();
        }
        return send_accept_lifetime;
    }

    if(child_yang_name == "send-lifetime")
    {
        if(send_lifetime == nullptr)
        {
            send_lifetime = std::make_shared<KeyChains::Key::Lifetime::SendLifetime>();
        }
        return send_lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_lifetime != nullptr)
    {
        children["accept-lifetime"] = accept_lifetime;
    }

    if(send_accept_lifetime != nullptr)
    {
        children["send-accept-lifetime"] = send_accept_lifetime;
    }

    if(send_lifetime != nullptr)
    {
        children["send-lifetime"] = send_lifetime;
    }

    return children;
}

void KeyChains::Key::Lifetime::set_value(const std::string & value_path, std::string value)
{
}

KeyChains::Key::Lifetime::SendAcceptLifetime::SendAcceptLifetime()
    :
    always{YType::empty, "always"},
    duration{YType::uint32, "duration"},
    end_date_time{YType::str, "end-date-time"},
    no_end_time{YType::empty, "no-end-time"},
    start_date_time{YType::str, "start-date-time"}
{
    yang_name = "send-accept-lifetime"; yang_parent_name = "lifetime";
}

KeyChains::Key::Lifetime::SendAcceptLifetime::~SendAcceptLifetime()
{
}

bool KeyChains::Key::Lifetime::SendAcceptLifetime::has_data() const
{
    return always.is_set
	|| duration.is_set
	|| end_date_time.is_set
	|| no_end_time.is_set
	|| start_date_time.is_set;
}

bool KeyChains::Key::Lifetime::SendAcceptLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(duration.operation)
	|| is_set(end_date_time.operation)
	|| is_set(no_end_time.operation)
	|| is_set(start_date_time.operation);
}

std::string KeyChains::Key::Lifetime::SendAcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-accept-lifetime";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::Lifetime::SendAcceptLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendAcceptLifetime' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_date_time.is_set || is_set(end_date_time.operation)) leaf_name_data.push_back(end_date_time.get_name_leafdata());
    if (no_end_time.is_set || is_set(no_end_time.operation)) leaf_name_data.push_back(no_end_time.get_name_leafdata());
    if (start_date_time.is_set || is_set(start_date_time.operation)) leaf_name_data.push_back(start_date_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::Lifetime::SendAcceptLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::Lifetime::SendAcceptLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KeyChains::Key::Lifetime::SendAcceptLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "end-date-time")
    {
        end_date_time = value;
    }
    if(value_path == "no-end-time")
    {
        no_end_time = value;
    }
    if(value_path == "start-date-time")
    {
        start_date_time = value;
    }
}

KeyChains::Key::Lifetime::SendLifetime::SendLifetime()
    :
    always{YType::empty, "always"},
    duration{YType::uint32, "duration"},
    end_date_time{YType::str, "end-date-time"},
    no_end_time{YType::empty, "no-end-time"},
    start_date_time{YType::str, "start-date-time"}
{
    yang_name = "send-lifetime"; yang_parent_name = "lifetime";
}

KeyChains::Key::Lifetime::SendLifetime::~SendLifetime()
{
}

bool KeyChains::Key::Lifetime::SendLifetime::has_data() const
{
    return always.is_set
	|| duration.is_set
	|| end_date_time.is_set
	|| no_end_time.is_set
	|| start_date_time.is_set;
}

bool KeyChains::Key::Lifetime::SendLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(duration.operation)
	|| is_set(end_date_time.operation)
	|| is_set(no_end_time.operation)
	|| is_set(start_date_time.operation);
}

std::string KeyChains::Key::Lifetime::SendLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-lifetime";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::Lifetime::SendLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendLifetime' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_date_time.is_set || is_set(end_date_time.operation)) leaf_name_data.push_back(end_date_time.get_name_leafdata());
    if (no_end_time.is_set || is_set(no_end_time.operation)) leaf_name_data.push_back(no_end_time.get_name_leafdata());
    if (start_date_time.is_set || is_set(start_date_time.operation)) leaf_name_data.push_back(start_date_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::Lifetime::SendLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::Lifetime::SendLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KeyChains::Key::Lifetime::SendLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "end-date-time")
    {
        end_date_time = value;
    }
    if(value_path == "no-end-time")
    {
        no_end_time = value;
    }
    if(value_path == "start-date-time")
    {
        start_date_time = value;
    }
}

KeyChains::Key::Lifetime::AcceptLifetime::AcceptLifetime()
    :
    always{YType::empty, "always"},
    duration{YType::uint32, "duration"},
    end_date_time{YType::str, "end-date-time"},
    no_end_time{YType::empty, "no-end-time"},
    start_date_time{YType::str, "start-date-time"}
{
    yang_name = "accept-lifetime"; yang_parent_name = "lifetime";
}

KeyChains::Key::Lifetime::AcceptLifetime::~AcceptLifetime()
{
}

bool KeyChains::Key::Lifetime::AcceptLifetime::has_data() const
{
    return always.is_set
	|| duration.is_set
	|| end_date_time.is_set
	|| no_end_time.is_set
	|| start_date_time.is_set;
}

bool KeyChains::Key::Lifetime::AcceptLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(duration.operation)
	|| is_set(end_date_time.operation)
	|| is_set(no_end_time.operation)
	|| is_set(start_date_time.operation);
}

std::string KeyChains::Key::Lifetime::AcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-lifetime";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::Lifetime::AcceptLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptLifetime' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_date_time.is_set || is_set(end_date_time.operation)) leaf_name_data.push_back(end_date_time.get_name_leafdata());
    if (no_end_time.is_set || is_set(no_end_time.operation)) leaf_name_data.push_back(no_end_time.get_name_leafdata());
    if (start_date_time.is_set || is_set(start_date_time.operation)) leaf_name_data.push_back(start_date_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::Lifetime::AcceptLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::Lifetime::AcceptLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KeyChains::Key::Lifetime::AcceptLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "end-date-time")
    {
        end_date_time = value;
    }
    if(value_path == "no-end-time")
    {
        no_end_time = value;
    }
    if(value_path == "start-date-time")
    {
        start_date_time = value;
    }
}

KeyChains::Key::CryptoAlgorithm::CryptoAlgorithm()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"}
{
    yang_name = "crypto-algorithm"; yang_parent_name = "key";
}

KeyChains::Key::CryptoAlgorithm::~CryptoAlgorithm()
{
}

bool KeyChains::Key::CryptoAlgorithm::has_data() const
{
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set
	|| md5.is_set
	|| sha_1.is_set;
}

bool KeyChains::Key::CryptoAlgorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(hmac_sha1_12.operation)
	|| is_set(hmac_sha1_20.operation)
	|| is_set(hmac_sha_1.operation)
	|| is_set(hmac_sha_256.operation)
	|| is_set(hmac_sha_384.operation)
	|| is_set(hmac_sha_512.operation)
	|| is_set(md5.operation)
	|| is_set(sha_1.operation);
}

std::string KeyChains::Key::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";

    return path_buffer.str();

}

const EntityPath KeyChains::Key::CryptoAlgorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CryptoAlgorithm' in ietf_key_chain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.operation)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.operation)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.operation)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.operation)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.operation)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.operation)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.operation)) leaf_name_data.push_back(sha_1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> KeyChains::Key::CryptoAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> KeyChains::Key::CryptoAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void KeyChains::Key::CryptoAlgorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
    }
}


}
}

