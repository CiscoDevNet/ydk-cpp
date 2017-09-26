
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_keychain_macsec_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_macsec_cfg {

MacSecKeychains::MacSecKeychains()
{

    yang_name = "mac-sec-keychains"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-macsec-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

MacSecKeychains::~MacSecKeychains()
{
}

bool MacSecKeychains::has_data() const
{
    for (std::size_t index=0; index<mac_sec_keychain.size(); index++)
    {
        if(mac_sec_keychain[index]->has_data())
            return true;
    }
    return false;
}

bool MacSecKeychains::has_operation() const
{
    for (std::size_t index=0; index<mac_sec_keychain.size(); index++)
    {
        if(mac_sec_keychain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacSecKeychains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-macsec-cfg:mac-sec-keychains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacSecKeychains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacSecKeychains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-sec-keychain")
    {
        for(auto const & c : mac_sec_keychain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MacSecKeychains::MacSecKeychain>();
        c->parent = this;
        mac_sec_keychain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacSecKeychains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_sec_keychain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MacSecKeychains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacSecKeychains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MacSecKeychains::clone_ptr() const
{
    return std::make_shared<MacSecKeychains>();
}

std::string MacSecKeychains::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MacSecKeychains::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MacSecKeychains::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MacSecKeychains::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MacSecKeychains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-sec-keychain")
        return true;
    return false;
}

MacSecKeychains::MacSecKeychain::MacSecKeychain()
    :
    chain_name{YType::str, "chain-name"}
    	,
    keies(std::make_shared<MacSecKeychains::MacSecKeychain::Keies>())
{
    keies->parent = this;

    yang_name = "mac-sec-keychain"; yang_parent_name = "mac-sec-keychains"; is_top_level_class = false; has_list_ancestor = false;
}

MacSecKeychains::MacSecKeychain::~MacSecKeychain()
{
}

bool MacSecKeychains::MacSecKeychain::has_data() const
{
    return chain_name.is_set
	|| (keies !=  nullptr && keies->has_data());
}

bool MacSecKeychains::MacSecKeychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chain_name.yfilter)
	|| (keies !=  nullptr && keies->has_operation());
}

std::string MacSecKeychains::MacSecKeychain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-macsec-cfg:mac-sec-keychains/" << get_segment_path();
    return path_buffer.str();
}

std::string MacSecKeychains::MacSecKeychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-sec-keychain" <<"[chain-name='" <<chain_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacSecKeychains::MacSecKeychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chain_name.is_set || is_set(chain_name.yfilter)) leaf_name_data.push_back(chain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacSecKeychains::MacSecKeychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keies")
    {
        if(keies == nullptr)
        {
            keies = std::make_shared<MacSecKeychains::MacSecKeychain::Keies>();
        }
        return keies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacSecKeychains::MacSecKeychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keies != nullptr)
    {
        children["keies"] = keies;
    }

    return children;
}

void MacSecKeychains::MacSecKeychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chain-name")
    {
        chain_name = value;
        chain_name.value_namespace = name_space;
        chain_name.value_namespace_prefix = name_space_prefix;
    }
}

void MacSecKeychains::MacSecKeychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chain-name")
    {
        chain_name.yfilter = yfilter;
    }
}

bool MacSecKeychains::MacSecKeychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keies" || name == "chain-name")
        return true;
    return false;
}

MacSecKeychains::MacSecKeychain::Keies::Keies()
{

    yang_name = "keies"; yang_parent_name = "mac-sec-keychain"; is_top_level_class = false; has_list_ancestor = true;
}

MacSecKeychains::MacSecKeychain::Keies::~Keies()
{
}

bool MacSecKeychains::MacSecKeychain::Keies::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool MacSecKeychains::MacSecKeychain::Keies::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacSecKeychains::MacSecKeychain::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacSecKeychains::MacSecKeychain::Keies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacSecKeychains::MacSecKeychain::Keies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<MacSecKeychains::MacSecKeychain::Keies::Key>();
        c->parent = this;
        key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacSecKeychains::MacSecKeychain::Keies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MacSecKeychains::MacSecKeychain::Keies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacSecKeychains::MacSecKeychain::Keies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacSecKeychains::MacSecKeychain::Keies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

MacSecKeychains::MacSecKeychain::Keies::Key::Key()
    :
    key_id{YType::str, "key-id"}
    	,
    key_string(nullptr) // presence node
	,lifetime(std::make_shared<MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "key"; yang_parent_name = "keies"; is_top_level_class = false; has_list_ancestor = true;
}

MacSecKeychains::MacSecKeychain::Keies::Key::~Key()
{
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::has_data() const
{
    return key_id.is_set
	|| (key_string !=  nullptr && key_string->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string MacSecKeychains::MacSecKeychain::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacSecKeychains::MacSecKeychain::Keies::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacSecKeychains::MacSecKeychain::Keies::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<MacSecKeychains::MacSecKeychain::Keies::Key::KeyString>();
        }
        return key_string;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacSecKeychains::MacSecKeychain::Keies::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void MacSecKeychains::MacSecKeychain::Keies::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
}

void MacSecKeychains::MacSecKeychain::Keies::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "lifetime" || name == "key-id")
        return true;
    return false;
}

MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::KeyString()
    :
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"},
    encryption_type{YType::enumeration, "encryption-type"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::~KeyString()
{
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::has_data() const
{
    return cryptographic_algorithm.is_set
	|| encryption_type.is_set
	|| string.is_set;
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cryptographic-algorithm" || name == "encryption-type" || name == "string")
        return true;
    return false;
}

MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::Lifetime()
    :
    end_date{YType::uint32, "end-date"},
    end_hour{YType::uint32, "end-hour"},
    end_minutes{YType::uint32, "end-minutes"},
    end_month{YType::enumeration, "end-month"},
    end_seconds{YType::uint32, "end-seconds"},
    end_year{YType::uint32, "end-year"},
    infinite_flag{YType::boolean, "infinite-flag"},
    life_time{YType::uint32, "life-time"},
    start_date{YType::uint32, "start-date"},
    start_hour{YType::uint32, "start-hour"},
    start_minutes{YType::uint32, "start-minutes"},
    start_month{YType::enumeration, "start-month"},
    start_seconds{YType::uint32, "start-seconds"},
    start_year{YType::uint32, "start-year"}
{

    yang_name = "lifetime"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::~Lifetime()
{
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::has_data() const
{
    return end_date.is_set
	|| end_hour.is_set
	|| end_minutes.is_set
	|| end_month.is_set
	|| end_seconds.is_set
	|| end_year.is_set
	|| infinite_flag.is_set
	|| life_time.is_set
	|| start_date.is_set
	|| start_hour.is_set
	|| start_minutes.is_set
	|| start_month.is_set
	|| start_seconds.is_set
	|| start_year.is_set;
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end_date.yfilter)
	|| ydk::is_set(end_hour.yfilter)
	|| ydk::is_set(end_minutes.yfilter)
	|| ydk::is_set(end_month.yfilter)
	|| ydk::is_set(end_seconds.yfilter)
	|| ydk::is_set(end_year.yfilter)
	|| ydk::is_set(infinite_flag.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(start_date.yfilter)
	|| ydk::is_set(start_hour.yfilter)
	|| ydk::is_set(start_minutes.yfilter)
	|| ydk::is_set(start_month.yfilter)
	|| ydk::is_set(start_seconds.yfilter)
	|| ydk::is_set(start_year.yfilter);
}

std::string MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_date.is_set || is_set(end_date.yfilter)) leaf_name_data.push_back(end_date.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.yfilter)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minutes.is_set || is_set(end_minutes.yfilter)) leaf_name_data.push_back(end_minutes.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.yfilter)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_seconds.is_set || is_set(end_seconds.yfilter)) leaf_name_data.push_back(end_seconds.get_name_leafdata());
    if (end_year.is_set || is_set(end_year.yfilter)) leaf_name_data.push_back(end_year.get_name_leafdata());
    if (infinite_flag.is_set || is_set(infinite_flag.yfilter)) leaf_name_data.push_back(infinite_flag.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (start_date.is_set || is_set(start_date.yfilter)) leaf_name_data.push_back(start_date.get_name_leafdata());
    if (start_hour.is_set || is_set(start_hour.yfilter)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minutes.is_set || is_set(start_minutes.yfilter)) leaf_name_data.push_back(start_minutes.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.yfilter)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_seconds.is_set || is_set(start_seconds.yfilter)) leaf_name_data.push_back(start_seconds.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.yfilter)) leaf_name_data.push_back(start_year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end-date")
    {
        end_date = value;
        end_date.value_namespace = name_space;
        end_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-hour")
    {
        end_hour = value;
        end_hour.value_namespace = name_space;
        end_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-minutes")
    {
        end_minutes = value;
        end_minutes.value_namespace = name_space;
        end_minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-month")
    {
        end_month = value;
        end_month.value_namespace = name_space;
        end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-seconds")
    {
        end_seconds = value;
        end_seconds.value_namespace = name_space;
        end_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-year")
    {
        end_year = value;
        end_year.value_namespace = name_space;
        end_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag = value;
        infinite_flag.value_namespace = name_space;
        infinite_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-date")
    {
        start_date = value;
        start_date.value_namespace = name_space;
        start_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-hour")
    {
        start_hour = value;
        start_hour.value_namespace = name_space;
        start_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-minutes")
    {
        start_minutes = value;
        start_minutes.value_namespace = name_space;
        start_minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-month")
    {
        start_month = value;
        start_month.value_namespace = name_space;
        start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-seconds")
    {
        start_seconds = value;
        start_seconds.value_namespace = name_space;
        start_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-year")
    {
        start_year = value;
        start_year.value_namespace = name_space;
        start_year.value_namespace_prefix = name_space_prefix;
    }
}

void MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end-date")
    {
        end_date.yfilter = yfilter;
    }
    if(value_path == "end-hour")
    {
        end_hour.yfilter = yfilter;
    }
    if(value_path == "end-minutes")
    {
        end_minutes.yfilter = yfilter;
    }
    if(value_path == "end-month")
    {
        end_month.yfilter = yfilter;
    }
    if(value_path == "end-seconds")
    {
        end_seconds.yfilter = yfilter;
    }
    if(value_path == "end-year")
    {
        end_year.yfilter = yfilter;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "start-date")
    {
        start_date.yfilter = yfilter;
    }
    if(value_path == "start-hour")
    {
        start_hour.yfilter = yfilter;
    }
    if(value_path == "start-minutes")
    {
        start_minutes.yfilter = yfilter;
    }
    if(value_path == "start-month")
    {
        start_month.yfilter = yfilter;
    }
    if(value_path == "start-seconds")
    {
        start_seconds.yfilter = yfilter;
    }
    if(value_path == "start-year")
    {
        start_year.yfilter = yfilter;
    }
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-date" || name == "end-hour" || name == "end-minutes" || name == "end-month" || name == "end-seconds" || name == "end-year" || name == "infinite-flag" || name == "life-time" || name == "start-date" || name == "start-hour" || name == "start-minutes" || name == "start-month" || name == "start-seconds" || name == "start-year")
        return true;
    return false;
}

const Enum::YLeaf MacSecKeyChainMonth::jan {0, "jan"};
const Enum::YLeaf MacSecKeyChainMonth::feb {1, "feb"};
const Enum::YLeaf MacSecKeyChainMonth::mar {2, "mar"};
const Enum::YLeaf MacSecKeyChainMonth::apr {3, "apr"};
const Enum::YLeaf MacSecKeyChainMonth::may {4, "may"};
const Enum::YLeaf MacSecKeyChainMonth::jun {5, "jun"};
const Enum::YLeaf MacSecKeyChainMonth::jul {6, "jul"};
const Enum::YLeaf MacSecKeyChainMonth::aug {7, "aug"};
const Enum::YLeaf MacSecKeyChainMonth::sep {8, "sep"};
const Enum::YLeaf MacSecKeyChainMonth::oct {9, "oct"};
const Enum::YLeaf MacSecKeyChainMonth::nov {10, "nov"};
const Enum::YLeaf MacSecKeyChainMonth::dec {11, "dec"};

const Enum::YLeaf MacSecEncryption::type7 {0, "type7"};
const Enum::YLeaf MacSecEncryption::type6 {2, "type6"};

const Enum::YLeaf MacSecCryptoAlg::aes_128_cmac {7, "aes-128-cmac"};
const Enum::YLeaf MacSecCryptoAlg::aes_256_cmac {8, "aes-256-cmac"};


}
}

