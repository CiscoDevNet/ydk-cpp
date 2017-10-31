
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_keychain_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_keychain_cfg {

Keychains::Keychains()
{

    yang_name = "keychains"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Keychains::~Keychains()
{
}

bool Keychains::has_data() const
{
    for (std::size_t index=0; index<keychain.size(); index++)
    {
        if(keychain[index]->has_data())
            return true;
    }
    return false;
}

bool Keychains::has_operation() const
{
    for (std::size_t index=0; index<keychain.size(); index++)
    {
        if(keychain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Keychains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-cfg:keychains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keychain")
    {
        for(auto const & c : keychain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Keychains::Keychain>();
        c->parent = this;
        keychain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : keychain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Keychains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Keychains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Keychains::clone_ptr() const
{
    return std::make_shared<Keychains>();
}

std::string Keychains::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Keychains::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Keychains::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Keychains::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Keychains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keychain")
        return true;
    return false;
}

Keychains::Keychain::Keychain()
    :
    chain_name{YType::str, "chain-name"}
    	,
    accept_tolerance(std::make_shared<Keychains::Keychain::AcceptTolerance>())
	,keies(std::make_shared<Keychains::Keychain::Keies>())
{
    accept_tolerance->parent = this;
    keies->parent = this;

    yang_name = "keychain"; yang_parent_name = "keychains"; is_top_level_class = false; has_list_ancestor = false;
}

Keychains::Keychain::~Keychain()
{
}

bool Keychains::Keychain::has_data() const
{
    return chain_name.is_set
	|| (accept_tolerance !=  nullptr && accept_tolerance->has_data())
	|| (keies !=  nullptr && keies->has_data());
}

bool Keychains::Keychain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chain_name.yfilter)
	|| (accept_tolerance !=  nullptr && accept_tolerance->has_operation())
	|| (keies !=  nullptr && keies->has_operation());
}

std::string Keychains::Keychain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-cfg:keychains/" << get_segment_path();
    return path_buffer.str();
}

std::string Keychains::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain" <<"[chain-name='" <<chain_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::Keychain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chain_name.is_set || is_set(chain_name.yfilter)) leaf_name_data.push_back(chain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-tolerance")
    {
        if(accept_tolerance == nullptr)
        {
            accept_tolerance = std::make_shared<Keychains::Keychain::AcceptTolerance>();
        }
        return accept_tolerance;
    }

    if(child_yang_name == "keies")
    {
        if(keies == nullptr)
        {
            keies = std::make_shared<Keychains::Keychain::Keies>();
        }
        return keies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::Keychain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_tolerance != nullptr)
    {
        children["accept-tolerance"] = accept_tolerance;
    }

    if(keies != nullptr)
    {
        children["keies"] = keies;
    }

    return children;
}

void Keychains::Keychain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chain-name")
    {
        chain_name = value;
        chain_name.value_namespace = name_space;
        chain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Keychains::Keychain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chain-name")
    {
        chain_name.yfilter = yfilter;
    }
}

bool Keychains::Keychain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-tolerance" || name == "keies" || name == "chain-name")
        return true;
    return false;
}

Keychains::Keychain::AcceptTolerance::AcceptTolerance()
    :
    value_{YType::uint32, "value"},
    infinite{YType::boolean, "infinite"}
{

    yang_name = "accept-tolerance"; yang_parent_name = "keychain"; is_top_level_class = false; has_list_ancestor = true;
}

Keychains::Keychain::AcceptTolerance::~AcceptTolerance()
{
}

bool Keychains::Keychain::AcceptTolerance::has_data() const
{
    return value_.is_set
	|| infinite.is_set;
}

bool Keychains::Keychain::AcceptTolerance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(infinite.yfilter);
}

std::string Keychains::Keychain::AcceptTolerance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-tolerance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::Keychain::AcceptTolerance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (infinite.is_set || is_set(infinite.yfilter)) leaf_name_data.push_back(infinite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::Keychain::AcceptTolerance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::Keychain::AcceptTolerance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Keychains::Keychain::AcceptTolerance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite")
    {
        infinite = value;
        infinite.value_namespace = name_space;
        infinite.value_namespace_prefix = name_space_prefix;
    }
}

void Keychains::Keychain::AcceptTolerance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "infinite")
    {
        infinite.yfilter = yfilter;
    }
}

bool Keychains::Keychain::AcceptTolerance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "infinite")
        return true;
    return false;
}

Keychains::Keychain::Keies::Keies()
{

    yang_name = "keies"; yang_parent_name = "keychain"; is_top_level_class = false; has_list_ancestor = true;
}

Keychains::Keychain::Keies::~Keies()
{
}

bool Keychains::Keychain::Keies::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Keychains::Keychain::Keies::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Keychains::Keychain::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::Keychain::Keies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::Keychain::Keies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Keychains::Keychain::Keies::Key>();
        c->parent = this;
        key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::Keychain::Keies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Keychains::Keychain::Keies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Keychains::Keychain::Keies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Keychains::Keychain::Keies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Keychains::Keychain::Keies::Key::Key()
    :
    key_id{YType::str, "key-id"},
    key_string{YType::str, "key-string"},
    cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"}
    	,
    accept_lifetime(std::make_shared<Keychains::Keychain::Keies::Key::AcceptLifetime>())
	,send_lifetime(std::make_shared<Keychains::Keychain::Keies::Key::SendLifetime>())
{
    accept_lifetime->parent = this;
    send_lifetime->parent = this;

    yang_name = "key"; yang_parent_name = "keies"; is_top_level_class = false; has_list_ancestor = true;
}

Keychains::Keychain::Keies::Key::~Key()
{
}

bool Keychains::Keychain::Keies::Key::has_data() const
{
    return key_id.is_set
	|| key_string.is_set
	|| cryptographic_algorithm.is_set
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_data())
	|| (send_lifetime !=  nullptr && send_lifetime->has_data());
}

bool Keychains::Keychain::Keies::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(key_string.yfilter)
	|| ydk::is_set(cryptographic_algorithm.yfilter)
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_operation())
	|| (send_lifetime !=  nullptr && send_lifetime->has_operation());
}

std::string Keychains::Keychain::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-id='" <<key_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::Keychain::Keies::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (key_string.is_set || is_set(key_string.yfilter)) leaf_name_data.push_back(key_string.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.yfilter)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::Keychain::Keies::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-lifetime")
    {
        if(accept_lifetime == nullptr)
        {
            accept_lifetime = std::make_shared<Keychains::Keychain::Keies::Key::AcceptLifetime>();
        }
        return accept_lifetime;
    }

    if(child_yang_name == "send-lifetime")
    {
        if(send_lifetime == nullptr)
        {
            send_lifetime = std::make_shared<Keychains::Keychain::Keies::Key::SendLifetime>();
        }
        return send_lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::Keychain::Keies::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_lifetime != nullptr)
    {
        children["accept-lifetime"] = accept_lifetime;
    }

    if(send_lifetime != nullptr)
    {
        children["send-lifetime"] = send_lifetime;
    }

    return children;
}

void Keychains::Keychain::Keies::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-string")
    {
        key_string = value;
        key_string.value_namespace = name_space;
        key_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
        cryptographic_algorithm.value_namespace = name_space;
        cryptographic_algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Keychains::Keychain::Keies::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "key-string")
    {
        key_string.yfilter = yfilter;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm.yfilter = yfilter;
    }
}

bool Keychains::Keychain::Keies::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-lifetime" || name == "send-lifetime" || name == "key-id" || name == "key-string" || name == "cryptographic-algorithm")
        return true;
    return false;
}

Keychains::Keychain::Keies::Key::AcceptLifetime::AcceptLifetime()
    :
    start_hour{YType::uint32, "start-hour"},
    start_minutes{YType::uint32, "start-minutes"},
    start_seconds{YType::uint32, "start-seconds"},
    start_date{YType::uint32, "start-date"},
    start_month{YType::enumeration, "start-month"},
    start_year{YType::uint32, "start-year"},
    life_time{YType::uint32, "life-time"},
    infinite_flag{YType::boolean, "infinite-flag"},
    end_hour{YType::uint32, "end-hour"},
    end_minutes{YType::uint32, "end-minutes"},
    end_seconds{YType::uint32, "end-seconds"},
    end_date{YType::uint32, "end-date"},
    end_month{YType::enumeration, "end-month"},
    end_year{YType::uint32, "end-year"}
{

    yang_name = "accept-lifetime"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Keychains::Keychain::Keies::Key::AcceptLifetime::~AcceptLifetime()
{
}

bool Keychains::Keychain::Keies::Key::AcceptLifetime::has_data() const
{
    return start_hour.is_set
	|| start_minutes.is_set
	|| start_seconds.is_set
	|| start_date.is_set
	|| start_month.is_set
	|| start_year.is_set
	|| life_time.is_set
	|| infinite_flag.is_set
	|| end_hour.is_set
	|| end_minutes.is_set
	|| end_seconds.is_set
	|| end_date.is_set
	|| end_month.is_set
	|| end_year.is_set;
}

bool Keychains::Keychain::Keies::Key::AcceptLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_hour.yfilter)
	|| ydk::is_set(start_minutes.yfilter)
	|| ydk::is_set(start_seconds.yfilter)
	|| ydk::is_set(start_date.yfilter)
	|| ydk::is_set(start_month.yfilter)
	|| ydk::is_set(start_year.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(infinite_flag.yfilter)
	|| ydk::is_set(end_hour.yfilter)
	|| ydk::is_set(end_minutes.yfilter)
	|| ydk::is_set(end_seconds.yfilter)
	|| ydk::is_set(end_date.yfilter)
	|| ydk::is_set(end_month.yfilter)
	|| ydk::is_set(end_year.yfilter);
}

std::string Keychains::Keychain::Keies::Key::AcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::Keychain::Keies::Key::AcceptLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hour.is_set || is_set(start_hour.yfilter)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minutes.is_set || is_set(start_minutes.yfilter)) leaf_name_data.push_back(start_minutes.get_name_leafdata());
    if (start_seconds.is_set || is_set(start_seconds.yfilter)) leaf_name_data.push_back(start_seconds.get_name_leafdata());
    if (start_date.is_set || is_set(start_date.yfilter)) leaf_name_data.push_back(start_date.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.yfilter)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.yfilter)) leaf_name_data.push_back(start_year.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (infinite_flag.is_set || is_set(infinite_flag.yfilter)) leaf_name_data.push_back(infinite_flag.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.yfilter)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minutes.is_set || is_set(end_minutes.yfilter)) leaf_name_data.push_back(end_minutes.get_name_leafdata());
    if (end_seconds.is_set || is_set(end_seconds.yfilter)) leaf_name_data.push_back(end_seconds.get_name_leafdata());
    if (end_date.is_set || is_set(end_date.yfilter)) leaf_name_data.push_back(end_date.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.yfilter)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_year.is_set || is_set(end_year.yfilter)) leaf_name_data.push_back(end_year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::Keychain::Keies::Key::AcceptLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::Keychain::Keies::Key::AcceptLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Keychains::Keychain::Keies::Key::AcceptLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "start-seconds")
    {
        start_seconds = value;
        start_seconds.value_namespace = name_space;
        start_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-date")
    {
        start_date = value;
        start_date.value_namespace = name_space;
        start_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-month")
    {
        start_month = value;
        start_month.value_namespace = name_space;
        start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-year")
    {
        start_year = value;
        start_year.value_namespace = name_space;
        start_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag = value;
        infinite_flag.value_namespace = name_space;
        infinite_flag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "end-seconds")
    {
        end_seconds = value;
        end_seconds.value_namespace = name_space;
        end_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-date")
    {
        end_date = value;
        end_date.value_namespace = name_space;
        end_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-month")
    {
        end_month = value;
        end_month.value_namespace = name_space;
        end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-year")
    {
        end_year = value;
        end_year.value_namespace = name_space;
        end_year.value_namespace_prefix = name_space_prefix;
    }
}

void Keychains::Keychain::Keies::Key::AcceptLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-hour")
    {
        start_hour.yfilter = yfilter;
    }
    if(value_path == "start-minutes")
    {
        start_minutes.yfilter = yfilter;
    }
    if(value_path == "start-seconds")
    {
        start_seconds.yfilter = yfilter;
    }
    if(value_path == "start-date")
    {
        start_date.yfilter = yfilter;
    }
    if(value_path == "start-month")
    {
        start_month.yfilter = yfilter;
    }
    if(value_path == "start-year")
    {
        start_year.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag.yfilter = yfilter;
    }
    if(value_path == "end-hour")
    {
        end_hour.yfilter = yfilter;
    }
    if(value_path == "end-minutes")
    {
        end_minutes.yfilter = yfilter;
    }
    if(value_path == "end-seconds")
    {
        end_seconds.yfilter = yfilter;
    }
    if(value_path == "end-date")
    {
        end_date.yfilter = yfilter;
    }
    if(value_path == "end-month")
    {
        end_month.yfilter = yfilter;
    }
    if(value_path == "end-year")
    {
        end_year.yfilter = yfilter;
    }
}

bool Keychains::Keychain::Keies::Key::AcceptLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-hour" || name == "start-minutes" || name == "start-seconds" || name == "start-date" || name == "start-month" || name == "start-year" || name == "life-time" || name == "infinite-flag" || name == "end-hour" || name == "end-minutes" || name == "end-seconds" || name == "end-date" || name == "end-month" || name == "end-year")
        return true;
    return false;
}

Keychains::Keychain::Keies::Key::SendLifetime::SendLifetime()
    :
    start_hour{YType::uint32, "start-hour"},
    start_minutes{YType::uint32, "start-minutes"},
    start_seconds{YType::uint32, "start-seconds"},
    start_date{YType::uint32, "start-date"},
    start_month{YType::enumeration, "start-month"},
    start_year{YType::uint32, "start-year"},
    life_time{YType::uint32, "life-time"},
    infinite_flag{YType::boolean, "infinite-flag"},
    end_hour{YType::uint32, "end-hour"},
    end_minutes{YType::uint32, "end-minutes"},
    end_seconds{YType::uint32, "end-seconds"},
    end_date{YType::uint32, "end-date"},
    end_month{YType::enumeration, "end-month"},
    end_year{YType::uint32, "end-year"}
{

    yang_name = "send-lifetime"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true;
}

Keychains::Keychain::Keies::Key::SendLifetime::~SendLifetime()
{
}

bool Keychains::Keychain::Keies::Key::SendLifetime::has_data() const
{
    return start_hour.is_set
	|| start_minutes.is_set
	|| start_seconds.is_set
	|| start_date.is_set
	|| start_month.is_set
	|| start_year.is_set
	|| life_time.is_set
	|| infinite_flag.is_set
	|| end_hour.is_set
	|| end_minutes.is_set
	|| end_seconds.is_set
	|| end_date.is_set
	|| end_month.is_set
	|| end_year.is_set;
}

bool Keychains::Keychain::Keies::Key::SendLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_hour.yfilter)
	|| ydk::is_set(start_minutes.yfilter)
	|| ydk::is_set(start_seconds.yfilter)
	|| ydk::is_set(start_date.yfilter)
	|| ydk::is_set(start_month.yfilter)
	|| ydk::is_set(start_year.yfilter)
	|| ydk::is_set(life_time.yfilter)
	|| ydk::is_set(infinite_flag.yfilter)
	|| ydk::is_set(end_hour.yfilter)
	|| ydk::is_set(end_minutes.yfilter)
	|| ydk::is_set(end_seconds.yfilter)
	|| ydk::is_set(end_date.yfilter)
	|| ydk::is_set(end_month.yfilter)
	|| ydk::is_set(end_year.yfilter);
}

std::string Keychains::Keychain::Keies::Key::SendLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Keychains::Keychain::Keies::Key::SendLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hour.is_set || is_set(start_hour.yfilter)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minutes.is_set || is_set(start_minutes.yfilter)) leaf_name_data.push_back(start_minutes.get_name_leafdata());
    if (start_seconds.is_set || is_set(start_seconds.yfilter)) leaf_name_data.push_back(start_seconds.get_name_leafdata());
    if (start_date.is_set || is_set(start_date.yfilter)) leaf_name_data.push_back(start_date.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.yfilter)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.yfilter)) leaf_name_data.push_back(start_year.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.yfilter)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (infinite_flag.is_set || is_set(infinite_flag.yfilter)) leaf_name_data.push_back(infinite_flag.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.yfilter)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minutes.is_set || is_set(end_minutes.yfilter)) leaf_name_data.push_back(end_minutes.get_name_leafdata());
    if (end_seconds.is_set || is_set(end_seconds.yfilter)) leaf_name_data.push_back(end_seconds.get_name_leafdata());
    if (end_date.is_set || is_set(end_date.yfilter)) leaf_name_data.push_back(end_date.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.yfilter)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_year.is_set || is_set(end_year.yfilter)) leaf_name_data.push_back(end_year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Keychains::Keychain::Keies::Key::SendLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Keychains::Keychain::Keies::Key::SendLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Keychains::Keychain::Keies::Key::SendLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "start-seconds")
    {
        start_seconds = value;
        start_seconds.value_namespace = name_space;
        start_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-date")
    {
        start_date = value;
        start_date.value_namespace = name_space;
        start_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-month")
    {
        start_month = value;
        start_month.value_namespace = name_space;
        start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-year")
    {
        start_year = value;
        start_year.value_namespace = name_space;
        start_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life-time")
    {
        life_time = value;
        life_time.value_namespace = name_space;
        life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag = value;
        infinite_flag.value_namespace = name_space;
        infinite_flag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "end-seconds")
    {
        end_seconds = value;
        end_seconds.value_namespace = name_space;
        end_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-date")
    {
        end_date = value;
        end_date.value_namespace = name_space;
        end_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-month")
    {
        end_month = value;
        end_month.value_namespace = name_space;
        end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-year")
    {
        end_year = value;
        end_year.value_namespace = name_space;
        end_year.value_namespace_prefix = name_space_prefix;
    }
}

void Keychains::Keychain::Keies::Key::SendLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-hour")
    {
        start_hour.yfilter = yfilter;
    }
    if(value_path == "start-minutes")
    {
        start_minutes.yfilter = yfilter;
    }
    if(value_path == "start-seconds")
    {
        start_seconds.yfilter = yfilter;
    }
    if(value_path == "start-date")
    {
        start_date.yfilter = yfilter;
    }
    if(value_path == "start-month")
    {
        start_month.yfilter = yfilter;
    }
    if(value_path == "start-year")
    {
        start_year.yfilter = yfilter;
    }
    if(value_path == "life-time")
    {
        life_time.yfilter = yfilter;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag.yfilter = yfilter;
    }
    if(value_path == "end-hour")
    {
        end_hour.yfilter = yfilter;
    }
    if(value_path == "end-minutes")
    {
        end_minutes.yfilter = yfilter;
    }
    if(value_path == "end-seconds")
    {
        end_seconds.yfilter = yfilter;
    }
    if(value_path == "end-date")
    {
        end_date.yfilter = yfilter;
    }
    if(value_path == "end-month")
    {
        end_month.yfilter = yfilter;
    }
    if(value_path == "end-year")
    {
        end_year.yfilter = yfilter;
    }
}

bool Keychains::Keychain::Keies::Key::SendLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-hour" || name == "start-minutes" || name == "start-seconds" || name == "start-date" || name == "start-month" || name == "start-year" || name == "life-time" || name == "infinite-flag" || name == "end-hour" || name == "end-minutes" || name == "end-seconds" || name == "end-date" || name == "end-month" || name == "end-year")
        return true;
    return false;
}

const Enum::YLeaf CryptoAlg::alg_hmac_sha1_12 {2, "alg-hmac-sha1-12"};
const Enum::YLeaf CryptoAlg::alg_md5_16 {3, "alg-md5-16"};
const Enum::YLeaf CryptoAlg::alg_sha1_20 {4, "alg-sha1-20"};
const Enum::YLeaf CryptoAlg::alg_hmac_md5_16 {5, "alg-hmac-md5-16"};
const Enum::YLeaf CryptoAlg::alg_hmac_sha1_20 {6, "alg-hmac-sha1-20"};

const Enum::YLeaf KeyChainMonth::jan {0, "jan"};
const Enum::YLeaf KeyChainMonth::feb {1, "feb"};
const Enum::YLeaf KeyChainMonth::mar {2, "mar"};
const Enum::YLeaf KeyChainMonth::apr {3, "apr"};
const Enum::YLeaf KeyChainMonth::may {4, "may"};
const Enum::YLeaf KeyChainMonth::jun {5, "jun"};
const Enum::YLeaf KeyChainMonth::jul {6, "jul"};
const Enum::YLeaf KeyChainMonth::aug {7, "aug"};
const Enum::YLeaf KeyChainMonth::sep {8, "sep"};
const Enum::YLeaf KeyChainMonth::oct {9, "oct"};
const Enum::YLeaf KeyChainMonth::nov {10, "nov"};
const Enum::YLeaf KeyChainMonth::dec {11, "dec"};


}
}

