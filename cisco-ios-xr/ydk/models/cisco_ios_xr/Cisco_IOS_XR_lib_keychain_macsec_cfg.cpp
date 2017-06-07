
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_keychain_macsec_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_macsec_cfg {

MacSecKeychains::MacSecKeychains()
{
    yang_name = "mac-sec-keychains"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-macsec-cfg";
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
    return is_set(operation);
}

std::string MacSecKeychains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-macsec-cfg:mac-sec-keychains";

    return path_buffer.str();

}

const EntityPath MacSecKeychains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MacSecKeychains::set_value(const std::string & value_path, std::string value)
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

MacSecKeychains::MacSecKeychain::MacSecKeychain()
    :
    chain_name{YType::str, "chain-name"}
    	,
    keies(std::make_shared<MacSecKeychains::MacSecKeychain::Keies>())
{
    keies->parent = this;

    yang_name = "mac-sec-keychain"; yang_parent_name = "mac-sec-keychains";
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
    return is_set(operation)
	|| is_set(chain_name.operation)
	|| (keies !=  nullptr && keies->has_operation());
}

std::string MacSecKeychains::MacSecKeychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-sec-keychain" <<"[chain-name='" <<chain_name <<"']";

    return path_buffer.str();

}

const EntityPath MacSecKeychains::MacSecKeychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-keychain-macsec-cfg:mac-sec-keychains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chain_name.is_set || is_set(chain_name.operation)) leaf_name_data.push_back(chain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MacSecKeychains::MacSecKeychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chain-name")
    {
        chain_name = value;
    }
}

MacSecKeychains::MacSecKeychain::Keies::Keies()
{
    yang_name = "keies"; yang_parent_name = "mac-sec-keychain";
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
    return is_set(operation);
}

std::string MacSecKeychains::MacSecKeychain::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";

    return path_buffer.str();

}

const EntityPath MacSecKeychains::MacSecKeychain::Keies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keies' in Cisco_IOS_XR_lib_keychain_macsec_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MacSecKeychains::MacSecKeychain::Keies::set_value(const std::string & value_path, std::string value)
{
}

MacSecKeychains::MacSecKeychain::Keies::Key::Key()
    :
    key_id{YType::str, "key-id"}
    	,
    key_string(nullptr) // presence node
	,lifetime(std::make_shared<MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "key"; yang_parent_name = "keies";
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
    return is_set(operation)
	|| is_set(key_id.operation)
	|| (key_string !=  nullptr && key_string->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string MacSecKeychains::MacSecKeychain::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-id='" <<key_id <<"']";

    return path_buffer.str();

}

const EntityPath MacSecKeychains::MacSecKeychain::Keies::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XR_lib_keychain_macsec_cfg cannot be nullptr as one of the ancestors is a list"});
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

void MacSecKeychains::MacSecKeychain::Keies::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
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
    yang_name = "lifetime"; yang_parent_name = "key";
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
    return is_set(operation)
	|| is_set(end_date.operation)
	|| is_set(end_hour.operation)
	|| is_set(end_minutes.operation)
	|| is_set(end_month.operation)
	|| is_set(end_seconds.operation)
	|| is_set(end_year.operation)
	|| is_set(infinite_flag.operation)
	|| is_set(life_time.operation)
	|| is_set(start_date.operation)
	|| is_set(start_hour.operation)
	|| is_set(start_minutes.operation)
	|| is_set(start_month.operation)
	|| is_set(start_seconds.operation)
	|| is_set(start_year.operation);
}

std::string MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XR_lib_keychain_macsec_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_date.is_set || is_set(end_date.operation)) leaf_name_data.push_back(end_date.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.operation)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minutes.is_set || is_set(end_minutes.operation)) leaf_name_data.push_back(end_minutes.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.operation)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_seconds.is_set || is_set(end_seconds.operation)) leaf_name_data.push_back(end_seconds.get_name_leafdata());
    if (end_year.is_set || is_set(end_year.operation)) leaf_name_data.push_back(end_year.get_name_leafdata());
    if (infinite_flag.is_set || is_set(infinite_flag.operation)) leaf_name_data.push_back(infinite_flag.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.operation)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (start_date.is_set || is_set(start_date.operation)) leaf_name_data.push_back(start_date.get_name_leafdata());
    if (start_hour.is_set || is_set(start_hour.operation)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minutes.is_set || is_set(start_minutes.operation)) leaf_name_data.push_back(start_minutes.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.operation)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_seconds.is_set || is_set(start_seconds.operation)) leaf_name_data.push_back(start_seconds.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.operation)) leaf_name_data.push_back(start_year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MacSecKeychains::MacSecKeychain::Keies::Key::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-date")
    {
        end_date = value;
    }
    if(value_path == "end-hour")
    {
        end_hour = value;
    }
    if(value_path == "end-minutes")
    {
        end_minutes = value;
    }
    if(value_path == "end-month")
    {
        end_month = value;
    }
    if(value_path == "end-seconds")
    {
        end_seconds = value;
    }
    if(value_path == "end-year")
    {
        end_year = value;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag = value;
    }
    if(value_path == "life-time")
    {
        life_time = value;
    }
    if(value_path == "start-date")
    {
        start_date = value;
    }
    if(value_path == "start-hour")
    {
        start_hour = value;
    }
    if(value_path == "start-minutes")
    {
        start_minutes = value;
    }
    if(value_path == "start-month")
    {
        start_month = value;
    }
    if(value_path == "start-seconds")
    {
        start_seconds = value;
    }
    if(value_path == "start-year")
    {
        start_year = value;
    }
}

MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::KeyString()
    :
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "key";
}

MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::~KeyString()
{
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::has_data() const
{
    return cryptographic_algorithm.is_set
	|| string.is_set;
}

bool MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(cryptographic_algorithm.operation)
	|| is_set(string.operation);
}

std::string MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XR_lib_keychain_macsec_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.operation)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MacSecKeychains::MacSecKeychain::Keies::Key::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

const Enum::YLeaf MacSecKeyChainMonthEnum::jan {0, "jan"};
const Enum::YLeaf MacSecKeyChainMonthEnum::feb {1, "feb"};
const Enum::YLeaf MacSecKeyChainMonthEnum::mar {2, "mar"};
const Enum::YLeaf MacSecKeyChainMonthEnum::apr {3, "apr"};
const Enum::YLeaf MacSecKeyChainMonthEnum::may {4, "may"};
const Enum::YLeaf MacSecKeyChainMonthEnum::jun {5, "jun"};
const Enum::YLeaf MacSecKeyChainMonthEnum::jul {6, "jul"};
const Enum::YLeaf MacSecKeyChainMonthEnum::aug {7, "aug"};
const Enum::YLeaf MacSecKeyChainMonthEnum::sep {8, "sep"};
const Enum::YLeaf MacSecKeyChainMonthEnum::oct {9, "oct"};
const Enum::YLeaf MacSecKeyChainMonthEnum::nov {10, "nov"};
const Enum::YLeaf MacSecKeyChainMonthEnum::dec {11, "dec"};

const Enum::YLeaf MacSecCryptoAlgEnum::aes_128_cmac {7, "aes-128-cmac"};
const Enum::YLeaf MacSecCryptoAlgEnum::aes_256_cmac {8, "aes-256-cmac"};


}
}

