
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_keychain_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_oper {

Keychain::Keychain()
    :
    keies(std::make_shared<Keychain::Keies>())
{
    keies->parent = this;

    yang_name = "keychain"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Keychain::~Keychain()
{
}

bool Keychain::has_data() const
{
    if (is_presence_container) return true;
    return (keies !=  nullptr && keies->has_data());
}

bool Keychain::has_operation() const
{
    return is_set(yfilter)
	|| (keies !=  nullptr && keies->has_operation());
}

std::string Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-oper:keychain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keies")
    {
        if(keies == nullptr)
        {
            keies = std::make_shared<Keychain::Keies>();
        }
        return keies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(keies != nullptr)
    {
        children["keies"] = keies;
    }

    return children;
}

void Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Keychain::clone_ptr() const
{
    return std::make_shared<Keychain>();
}

std::string Keychain::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Keychain::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Keychain::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Keychain::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keies")
        return true;
    return false;
}

Keychain::Keies::Keies()
    :
    key(this, {"key_name"})
{

    yang_name = "keies"; yang_parent_name = "keychain"; is_top_level_class = false; has_list_ancestor = false; 
}

Keychain::Keies::~Keies()
{
}

bool Keychain::Keies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Keychain::Keies::has_operation() const
{
    for (std::size_t index=0; index<key.len(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Keychain::Keies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-oper:keychain/" << get_segment_path();
    return path_buffer.str();
}

std::string Keychain::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        auto c = std::make_shared<Keychain::Keies::Key>();
        c->parent = this;
        key.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : key.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Keychain::Keies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Keychain::Keies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Keychain::Keies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Keychain::Keies::Key::Key()
    :
    key_name{YType::str, "key-name"},
    accept_tolerance{YType::str, "accept-tolerance"}
        ,
    key(std::make_shared<Keychain::Keies::Key::Key_>())
{
    key->parent = this;

    yang_name = "key"; yang_parent_name = "keies"; is_top_level_class = false; has_list_ancestor = false; 
}

Keychain::Keies::Key::~Key()
{
}

bool Keychain::Keies::Key::has_data() const
{
    if (is_presence_container) return true;
    return key_name.is_set
	|| accept_tolerance.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Keychain::Keies::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_name.yfilter)
	|| ydk::is_set(accept_tolerance.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Keychain::Keies::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-oper:keychain/keies/" << get_segment_path();
    return path_buffer.str();
}

std::string Keychain::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    ADD_KEY_TOKEN(key_name, "key-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_name.is_set || is_set(key_name.yfilter)) leaf_name_data.push_back(key_name.get_name_leafdata());
    if (accept_tolerance.is_set || is_set(accept_tolerance.yfilter)) leaf_name_data.push_back(accept_tolerance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Keychain::Keies::Key::Key_>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Keychain::Keies::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-name")
    {
        key_name = value;
        key_name.value_namespace = name_space;
        key_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-tolerance")
    {
        accept_tolerance = value;
        accept_tolerance.value_namespace = name_space;
        accept_tolerance.value_namespace_prefix = name_space_prefix;
    }
}

void Keychain::Keies::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-name")
    {
        key_name.yfilter = yfilter;
    }
    if(value_path == "accept-tolerance")
    {
        accept_tolerance.yfilter = yfilter;
    }
}

bool Keychain::Keies::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "key-name" || name == "accept-tolerance")
        return true;
    return false;
}

Keychain::Keies::Key::Key_::Key_()
    :
    key_id(this, {})
{

    yang_name = "key"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Keychain::Keies::Key::Key_::~Key_()
{
}

bool Keychain::Keies::Key::Key_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_id.len(); index++)
    {
        if(key_id[index]->has_data())
            return true;
    }
    return false;
}

bool Keychain::Keies::Key::Key_::has_operation() const
{
    for (std::size_t index=0; index<key_id.len(); index++)
    {
        if(key_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Keychain::Keies::Key::Key_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::Key::Key_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::Key::Key_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-id")
    {
        auto c = std::make_shared<Keychain::Keies::Key::Key_::KeyId>();
        c->parent = this;
        key_id.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::Key::Key_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : key_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Keychain::Keies::Key::Key_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Keychain::Keies::Key::Key_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Keychain::Keies::Key::Key_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-id")
        return true;
    return false;
}

Keychain::Keies::Key::Key_::KeyId::KeyId()
    :
    key_string{YType::str, "key-string"},
    type{YType::enumeration, "type"},
    key_id{YType::str, "key-id"},
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"}
        ,
    macsec(std::make_shared<Keychain::Keies::Key::Key_::KeyId::Macsec>())
    , send_lifetime(std::make_shared<Keychain::Keies::Key::Key_::KeyId::SendLifetime>())
    , accept_lifetime(std::make_shared<Keychain::Keies::Key::Key_::KeyId::AcceptLifetime>())
{
    macsec->parent = this;
    send_lifetime->parent = this;
    accept_lifetime->parent = this;

    yang_name = "key-id"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Keychain::Keies::Key::Key_::KeyId::~KeyId()
{
}

bool Keychain::Keies::Key::Key_::KeyId::has_data() const
{
    if (is_presence_container) return true;
    return key_string.is_set
	|| type.is_set
	|| key_id.is_set
	|| cryptographic_algorithm.is_set
	|| (macsec !=  nullptr && macsec->has_data())
	|| (send_lifetime !=  nullptr && send_lifetime->has_data())
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_data());
}

bool Keychain::Keies::Key::Key_::KeyId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_string.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (send_lifetime !=  nullptr && send_lifetime->has_operation())
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_operation());
}

std::string Keychain::Keies::Key::Key_::KeyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::Key::Key_::KeyId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_string.is_set || is_set(key_string.yfilter)) leaf_name_data.push_back(key_string.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::Key::Key_::KeyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Keychain::Keies::Key::Key_::KeyId::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "send-lifetime")
    {
        if(send_lifetime == nullptr)
        {
            send_lifetime = std::make_shared<Keychain::Keies::Key::Key_::KeyId::SendLifetime>();
        }
        return send_lifetime;
    }

    if(child_yang_name == "accept-lifetime")
    {
        if(accept_lifetime == nullptr)
        {
            accept_lifetime = std::make_shared<Keychain::Keies::Key::Key_::KeyId::AcceptLifetime>();
        }
        return accept_lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::Key::Key_::KeyId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(send_lifetime != nullptr)
    {
        children["send-lifetime"] = send_lifetime;
    }

    if(accept_lifetime != nullptr)
    {
        children["accept-lifetime"] = accept_lifetime;
    }

    return children;
}

void Keychain::Keies::Key::Key_::KeyId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-string")
    {
        key_string = value;
        key_string.value_namespace = name_space;
        key_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Keychain::Keies::Key::Key_::KeyId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-string")
    {
        key_string.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
}

bool Keychain::Keies::Key::Key_::KeyId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec" || name == "send-lifetime" || name == "accept-lifetime" || name == "key-string" || name == "type" || name == "key-id" || name == "cryptographic-algorithm")
        return true;
    return false;
}

Keychain::Keies::Key::Key_::KeyId::Macsec::Macsec()
    :
    is_macsec_key{YType::boolean, "is-macsec-key"}
{

    yang_name = "macsec"; yang_parent_name = "key-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Keychain::Keies::Key::Key_::KeyId::Macsec::~Macsec()
{
}

bool Keychain::Keies::Key::Key_::KeyId::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return is_macsec_key.is_set;
}

bool Keychain::Keies::Key::Key_::KeyId::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_macsec_key.yfilter);
}

std::string Keychain::Keies::Key::Key_::KeyId::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::Key::Key_::KeyId::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_macsec_key.is_set || is_set(is_macsec_key.yfilter)) leaf_name_data.push_back(is_macsec_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::Key::Key_::KeyId::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::Key::Key_::KeyId::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Keychain::Keies::Key::Key_::KeyId::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-macsec-key")
    {
        is_macsec_key = value;
        is_macsec_key.value_namespace = name_space;
        is_macsec_key.value_namespace_prefix = name_space_prefix;
    }
}

void Keychain::Keies::Key::Key_::KeyId::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-macsec-key")
    {
        is_macsec_key.yfilter = yfilter;
    }
}

bool Keychain::Keies::Key::Key_::KeyId::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-macsec-key")
        return true;
    return false;
}

Keychain::Keies::Key::Key_::KeyId::SendLifetime::SendLifetime()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    duration{YType::str, "duration"},
    is_always_valid{YType::boolean, "is-always-valid"},
    is_valid_now{YType::boolean, "is-valid-now"}
{

    yang_name = "send-lifetime"; yang_parent_name = "key-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Keychain::Keies::Key::Key_::KeyId::SendLifetime::~SendLifetime()
{
}

bool Keychain::Keies::Key::Key_::KeyId::SendLifetime::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| end.is_set
	|| duration.is_set
	|| is_always_valid.is_set
	|| is_valid_now.is_set;
}

bool Keychain::Keies::Key::Key_::KeyId::SendLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_always_valid.yfilter)
	|| ydk::is_set(is_valid_now.yfilter);
}

std::string Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_always_valid.is_set || is_set(is_always_valid.yfilter)) leaf_name_data.push_back(is_always_valid.get_name_leafdata());
    if (is_valid_now.is_set || is_set(is_valid_now.yfilter)) leaf_name_data.push_back(is_valid_now.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::Key::Key_::KeyId::SendLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Keychain::Keies::Key::Key_::KeyId::SendLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-always-valid")
    {
        is_always_valid = value;
        is_always_valid.value_namespace = name_space;
        is_always_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid-now")
    {
        is_valid_now = value;
        is_valid_now.value_namespace = name_space;
        is_valid_now.value_namespace_prefix = name_space_prefix;
    }
}

void Keychain::Keies::Key::Key_::KeyId::SendLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-always-valid")
    {
        is_always_valid.yfilter = yfilter;
    }
    if(value_path == "is-valid-now")
    {
        is_valid_now.yfilter = yfilter;
    }
}

bool Keychain::Keies::Key::Key_::KeyId::SendLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "duration" || name == "is-always-valid" || name == "is-valid-now")
        return true;
    return false;
}

Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::AcceptLifetime()
    :
    start{YType::str, "start"},
    end{YType::str, "end"},
    duration{YType::str, "duration"},
    is_always_valid{YType::boolean, "is-always-valid"},
    is_valid_now{YType::boolean, "is-valid-now"}
{

    yang_name = "accept-lifetime"; yang_parent_name = "key-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::~AcceptLifetime()
{
}

bool Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| end.is_set
	|| duration.is_set
	|| is_always_valid.is_set
	|| is_valid_now.is_set;
}

bool Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_always_valid.yfilter)
	|| ydk::is_set(is_valid_now.yfilter);
}

std::string Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_always_valid.is_set || is_set(is_always_valid.yfilter)) leaf_name_data.push_back(is_always_valid.get_name_leafdata());
    if (is_valid_now.is_set || is_set(is_valid_now.yfilter)) leaf_name_data.push_back(is_valid_now.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-always-valid")
    {
        is_always_valid = value;
        is_always_valid.value_namespace = name_space;
        is_always_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid-now")
    {
        is_valid_now = value;
        is_valid_now.value_namespace = name_space;
        is_valid_now.value_namespace_prefix = name_space_prefix;
    }
}

void Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-always-valid")
    {
        is_always_valid.yfilter = yfilter;
    }
    if(value_path == "is-valid-now")
    {
        is_valid_now.yfilter = yfilter;
    }
}

bool Keychain::Keies::Key::Key_::KeyId::AcceptLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end" || name == "duration" || name == "is-always-valid" || name == "is-valid-now")
        return true;
    return false;
}

const Enum::YLeaf Enc::password_type7 {0, "password-type7"};
const Enum::YLeaf Enc::password_type6 {2, "password-type6"};

const Enum::YLeaf CrytoAlgo::not_configured {0, "not-configured"};
const Enum::YLeaf CrytoAlgo::hmac_sha1_12 {2, "hmac-sha1-12"};
const Enum::YLeaf CrytoAlgo::md5 {3, "md5"};
const Enum::YLeaf CrytoAlgo::sha1 {4, "sha1"};
const Enum::YLeaf CrytoAlgo::hmac_md5 {5, "hmac-md5"};
const Enum::YLeaf CrytoAlgo::hmac_sha1_20 {6, "hmac-sha1-20"};
const Enum::YLeaf CrytoAlgo::aes_128_cmac {7, "aes-128-cmac"};
const Enum::YLeaf CrytoAlgo::aes_256_cmac {8, "aes-256-cmac"};


}
}

