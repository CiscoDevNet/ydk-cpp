
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_key_chain.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_key_chain {

KeyChains::KeyChains()
    :
    name{YType::str, "name"}
    	,
    accept_tolerance(std::make_shared<KeyChains::AcceptTolerance>())
{
    accept_tolerance->parent = this;

    yang_name = "key-chains"; yang_parent_name = "ietf-key-chain"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (accept_tolerance !=  nullptr && accept_tolerance->has_operation());
}

std::string KeyChains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-key-chain:key-chains" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> KeyChains::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool KeyChains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-tolerance" || name == "key" || name == "name")
        return true;
    return false;
}

KeyChains::AcceptTolerance::AcceptTolerance()
    :
    duration{YType::uint32, "duration"}
{

    yang_name = "accept-tolerance"; yang_parent_name = "key-chains"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string KeyChains::AcceptTolerance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-tolerance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::AcceptTolerance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::AcceptTolerance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::AcceptTolerance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool KeyChains::AcceptTolerance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration")
        return true;
    return false;
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

    yang_name = "key"; yang_parent_name = "key-chains"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
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

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool KeyChains::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-algorithm" || name == "key-string" || name == "lifetime" || name == "key-id")
        return true;
    return false;
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

    yang_name = "crypto-algorithm"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha1_12.yfilter)
	|| ydk::is_set(hmac_sha1_20.yfilter)
	|| ydk::is_set(hmac_sha_1.yfilter)
	|| ydk::is_set(hmac_sha_256.yfilter)
	|| ydk::is_set(hmac_sha_384.yfilter)
	|| ydk::is_set(hmac_sha_512.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha_1.yfilter);
}

std::string KeyChains::Key::CryptoAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::CryptoAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.yfilter)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.yfilter)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.yfilter)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.yfilter)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.yfilter)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.yfilter)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.yfilter)) leaf_name_data.push_back(sha_1.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::Key::CryptoAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
        hmac_sha1_12.value_namespace = name_space;
        hmac_sha1_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
        hmac_sha1_20.value_namespace = name_space;
        hmac_sha1_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
        hmac_sha_1.value_namespace = name_space;
        hmac_sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
        hmac_sha_256.value_namespace = name_space;
        hmac_sha_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
        hmac_sha_384.value_namespace = name_space;
        hmac_sha_384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
        hmac_sha_512.value_namespace = name_space;
        hmac_sha_512.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
        sha_1.value_namespace = name_space;
        sha_1.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::Key::CryptoAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12.yfilter = yfilter;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha-1")
    {
        sha_1.yfilter = yfilter;
    }
}

bool KeyChains::Key::CryptoAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha1-12" || name == "hmac-sha1-20" || name == "hmac-sha-1" || name == "hmac-sha-256" || name == "hmac-sha-384" || name == "hmac-sha-512" || name == "md5" || name == "sha-1")
        return true;
    return false;
}

KeyChains::Key::KeyString::KeyString()
    :
    hexadecimal_string{YType::str, "hexadecimal-string"},
    keystring{YType::str, "keystring"}
{

    yang_name = "key-string"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(hexadecimal_string.yfilter)
	|| ydk::is_set(keystring.yfilter);
}

std::string KeyChains::Key::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hexadecimal_string.is_set || is_set(hexadecimal_string.yfilter)) leaf_name_data.push_back(hexadecimal_string.get_name_leafdata());
    if (keystring.is_set || is_set(keystring.yfilter)) leaf_name_data.push_back(keystring.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::Key::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hexadecimal-string")
    {
        hexadecimal_string = value;
        hexadecimal_string.value_namespace = name_space;
        hexadecimal_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keystring")
    {
        keystring = value;
        keystring.value_namespace = name_space;
        keystring.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::Key::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hexadecimal-string")
    {
        hexadecimal_string.yfilter = yfilter;
    }
    if(value_path == "keystring")
    {
        keystring.yfilter = yfilter;
    }
}

bool KeyChains::Key::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hexadecimal-string" || name == "keystring")
        return true;
    return false;
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

    yang_name = "lifetime"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void KeyChains::Key::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void KeyChains::Key::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool KeyChains::Key::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-lifetime" || name == "send-accept-lifetime" || name == "send-lifetime")
        return true;
    return false;
}

KeyChains::Key::Lifetime::AcceptLifetime::AcceptLifetime()
    :
    always{YType::empty, "always"},
    duration{YType::uint32, "duration"},
    end_date_time{YType::str, "end-date-time"},
    no_end_time{YType::empty, "no-end-time"},
    start_date_time{YType::str, "start-date-time"}
{

    yang_name = "accept-lifetime"; yang_parent_name = "lifetime"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_date_time.yfilter)
	|| ydk::is_set(no_end_time.yfilter)
	|| ydk::is_set(start_date_time.yfilter);
}

std::string KeyChains::Key::Lifetime::AcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::Lifetime::AcceptLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_date_time.is_set || is_set(end_date_time.yfilter)) leaf_name_data.push_back(end_date_time.get_name_leafdata());
    if (no_end_time.is_set || is_set(no_end_time.yfilter)) leaf_name_data.push_back(no_end_time.get_name_leafdata());
    if (start_date_time.is_set || is_set(start_date_time.yfilter)) leaf_name_data.push_back(start_date_time.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::Key::Lifetime::AcceptLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-date-time")
    {
        end_date_time = value;
        end_date_time.value_namespace = name_space;
        end_date_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-end-time")
    {
        no_end_time = value;
        no_end_time.value_namespace = name_space;
        no_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-date-time")
    {
        start_date_time = value;
        start_date_time.value_namespace = name_space;
        start_date_time.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::Key::Lifetime::AcceptLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-date-time")
    {
        end_date_time.yfilter = yfilter;
    }
    if(value_path == "no-end-time")
    {
        no_end_time.yfilter = yfilter;
    }
    if(value_path == "start-date-time")
    {
        start_date_time.yfilter = yfilter;
    }
}

bool KeyChains::Key::Lifetime::AcceptLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "duration" || name == "end-date-time" || name == "no-end-time" || name == "start-date-time")
        return true;
    return false;
}

KeyChains::Key::Lifetime::SendAcceptLifetime::SendAcceptLifetime()
    :
    always{YType::empty, "always"},
    duration{YType::uint32, "duration"},
    end_date_time{YType::str, "end-date-time"},
    no_end_time{YType::empty, "no-end-time"},
    start_date_time{YType::str, "start-date-time"}
{

    yang_name = "send-accept-lifetime"; yang_parent_name = "lifetime"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_date_time.yfilter)
	|| ydk::is_set(no_end_time.yfilter)
	|| ydk::is_set(start_date_time.yfilter);
}

std::string KeyChains::Key::Lifetime::SendAcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-accept-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::Lifetime::SendAcceptLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_date_time.is_set || is_set(end_date_time.yfilter)) leaf_name_data.push_back(end_date_time.get_name_leafdata());
    if (no_end_time.is_set || is_set(no_end_time.yfilter)) leaf_name_data.push_back(no_end_time.get_name_leafdata());
    if (start_date_time.is_set || is_set(start_date_time.yfilter)) leaf_name_data.push_back(start_date_time.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::Key::Lifetime::SendAcceptLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-date-time")
    {
        end_date_time = value;
        end_date_time.value_namespace = name_space;
        end_date_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-end-time")
    {
        no_end_time = value;
        no_end_time.value_namespace = name_space;
        no_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-date-time")
    {
        start_date_time = value;
        start_date_time.value_namespace = name_space;
        start_date_time.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::Key::Lifetime::SendAcceptLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-date-time")
    {
        end_date_time.yfilter = yfilter;
    }
    if(value_path == "no-end-time")
    {
        no_end_time.yfilter = yfilter;
    }
    if(value_path == "start-date-time")
    {
        start_date_time.yfilter = yfilter;
    }
}

bool KeyChains::Key::Lifetime::SendAcceptLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "duration" || name == "end-date-time" || name == "no-end-time" || name == "start-date-time")
        return true;
    return false;
}

KeyChains::Key::Lifetime::SendLifetime::SendLifetime()
    :
    always{YType::empty, "always"},
    duration{YType::uint32, "duration"},
    end_date_time{YType::str, "end-date-time"},
    no_end_time{YType::empty, "no-end-time"},
    start_date_time{YType::str, "start-date-time"}
{

    yang_name = "send-lifetime"; yang_parent_name = "lifetime"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_date_time.yfilter)
	|| ydk::is_set(no_end_time.yfilter)
	|| ydk::is_set(start_date_time.yfilter);
}

std::string KeyChains::Key::Lifetime::SendLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > KeyChains::Key::Lifetime::SendLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_date_time.is_set || is_set(end_date_time.yfilter)) leaf_name_data.push_back(end_date_time.get_name_leafdata());
    if (no_end_time.is_set || is_set(no_end_time.yfilter)) leaf_name_data.push_back(no_end_time.get_name_leafdata());
    if (start_date_time.is_set || is_set(start_date_time.yfilter)) leaf_name_data.push_back(start_date_time.get_name_leafdata());

    return leaf_name_data;

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

void KeyChains::Key::Lifetime::SendLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-date-time")
    {
        end_date_time = value;
        end_date_time.value_namespace = name_space;
        end_date_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-end-time")
    {
        no_end_time = value;
        no_end_time.value_namespace = name_space;
        no_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-date-time")
    {
        start_date_time = value;
        start_date_time.value_namespace = name_space;
        start_date_time.value_namespace_prefix = name_space_prefix;
    }
}

void KeyChains::Key::Lifetime::SendLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-date-time")
    {
        end_date_time.yfilter = yfilter;
    }
    if(value_path == "no-end-time")
    {
        no_end_time.yfilter = yfilter;
    }
    if(value_path == "start-date-time")
    {
        start_date_time.yfilter = yfilter;
    }
}

bool KeyChains::Key::Lifetime::SendLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "duration" || name == "end-date-time" || name == "no-end-time" || name == "start-date-time")
        return true;
    return false;
}


}
}

