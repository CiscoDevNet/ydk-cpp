
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_mka_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_mka_cfg {

Macsec::Macsec()
    :
    shutdown{YType::empty, "shutdown"}
        ,
    policy_names(std::make_shared<Macsec::PolicyNames>())
{
    policy_names->parent = this;

    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-mka-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| (policy_names !=  nullptr && policy_names->has_data());
}

bool Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (policy_names !=  nullptr && policy_names->has_operation());
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-names")
    {
        if(policy_names == nullptr)
        {
            policy_names = std::make_shared<Macsec::PolicyNames>();
        }
        return policy_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_names != nullptr)
    {
        _children["policy-names"] = policy_names;
    }

    return _children;
}

void Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Macsec::clone_ptr() const
{
    return std::make_shared<Macsec>();
}

std::string Macsec::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Macsec::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Macsec::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Macsec::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-names" || name == "shutdown")
        return true;
    return false;
}

Macsec::PolicyNames::PolicyNames()
    :
    policy_name(this, {"name"})
{

    yang_name = "policy-names"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::PolicyNames::~PolicyNames()
{
}

bool Macsec::PolicyNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_name.len(); index++)
    {
        if(policy_name[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::PolicyNames::has_operation() const
{
    for (std::size_t index=0; index<policy_name.len(); index++)
    {
        if(policy_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Macsec::PolicyNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::PolicyNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::PolicyNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::PolicyNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-name")
    {
        auto ent_ = std::make_shared<Macsec::PolicyNames::PolicyName>();
        ent_->parent = this;
        policy_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::PolicyNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Macsec::PolicyNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Macsec::PolicyNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Macsec::PolicyNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

Macsec::PolicyNames::PolicyName::PolicyName()
    :
    name{YType::str, "name"},
    delay_protection{YType::empty, "delay-protection"},
    security_policy{YType::enumeration, "security-policy"},
    key_server_priority{YType::uint32, "key-server-priority"},
    conf_offset{YType::enumeration, "conf-offset"},
    sak_rekey_interval{YType::uint32, "sak-rekey-interval"},
    policy_exception{YType::enumeration, "policy-exception"},
    window_size{YType::uint32, "window-size"},
    cipher_suite{YType::enumeration, "cipher-suite"},
    include_icv_indicator{YType::empty, "include-icv-indicator"},
    sak_rekey_interval_sec{YType::uint32, "sak-rekey-interval-sec"},
    vlan_tags_in_clear{YType::uint32, "vlan-tags-in-clear"}
{

    yang_name = "policy-name"; yang_parent_name = "policy-names"; is_top_level_class = false; has_list_ancestor = false; 
}

Macsec::PolicyNames::PolicyName::~PolicyName()
{
}

bool Macsec::PolicyNames::PolicyName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| delay_protection.is_set
	|| security_policy.is_set
	|| key_server_priority.is_set
	|| conf_offset.is_set
	|| sak_rekey_interval.is_set
	|| policy_exception.is_set
	|| window_size.is_set
	|| cipher_suite.is_set
	|| include_icv_indicator.is_set
	|| sak_rekey_interval_sec.is_set
	|| vlan_tags_in_clear.is_set;
}

bool Macsec::PolicyNames::PolicyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay_protection.yfilter)
	|| ydk::is_set(security_policy.yfilter)
	|| ydk::is_set(key_server_priority.yfilter)
	|| ydk::is_set(conf_offset.yfilter)
	|| ydk::is_set(sak_rekey_interval.yfilter)
	|| ydk::is_set(policy_exception.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(include_icv_indicator.yfilter)
	|| ydk::is_set(sak_rekey_interval_sec.yfilter)
	|| ydk::is_set(vlan_tags_in_clear.yfilter);
}

std::string Macsec::PolicyNames::PolicyName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec/policy-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Macsec::PolicyNames::PolicyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Macsec::PolicyNames::PolicyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay_protection.is_set || is_set(delay_protection.yfilter)) leaf_name_data.push_back(delay_protection.get_name_leafdata());
    if (security_policy.is_set || is_set(security_policy.yfilter)) leaf_name_data.push_back(security_policy.get_name_leafdata());
    if (key_server_priority.is_set || is_set(key_server_priority.yfilter)) leaf_name_data.push_back(key_server_priority.get_name_leafdata());
    if (conf_offset.is_set || is_set(conf_offset.yfilter)) leaf_name_data.push_back(conf_offset.get_name_leafdata());
    if (sak_rekey_interval.is_set || is_set(sak_rekey_interval.yfilter)) leaf_name_data.push_back(sak_rekey_interval.get_name_leafdata());
    if (policy_exception.is_set || is_set(policy_exception.yfilter)) leaf_name_data.push_back(policy_exception.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (include_icv_indicator.is_set || is_set(include_icv_indicator.yfilter)) leaf_name_data.push_back(include_icv_indicator.get_name_leafdata());
    if (sak_rekey_interval_sec.is_set || is_set(sak_rekey_interval_sec.yfilter)) leaf_name_data.push_back(sak_rekey_interval_sec.get_name_leafdata());
    if (vlan_tags_in_clear.is_set || is_set(vlan_tags_in_clear.yfilter)) leaf_name_data.push_back(vlan_tags_in_clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Macsec::PolicyNames::PolicyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Macsec::PolicyNames::PolicyName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Macsec::PolicyNames::PolicyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-protection")
    {
        delay_protection = value;
        delay_protection.value_namespace = name_space;
        delay_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-policy")
    {
        security_policy = value;
        security_policy.value_namespace = name_space;
        security_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-server-priority")
    {
        key_server_priority = value;
        key_server_priority.value_namespace = name_space;
        key_server_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conf-offset")
    {
        conf_offset = value;
        conf_offset.value_namespace = name_space;
        conf_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sak-rekey-interval")
    {
        sak_rekey_interval = value;
        sak_rekey_interval.value_namespace = name_space;
        sak_rekey_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-exception")
    {
        policy_exception = value;
        policy_exception.value_namespace = name_space;
        policy_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-icv-indicator")
    {
        include_icv_indicator = value;
        include_icv_indicator.value_namespace = name_space;
        include_icv_indicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sak-rekey-interval-sec")
    {
        sak_rekey_interval_sec = value;
        sak_rekey_interval_sec.value_namespace = name_space;
        sak_rekey_interval_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-tags-in-clear")
    {
        vlan_tags_in_clear = value;
        vlan_tags_in_clear.value_namespace = name_space;
        vlan_tags_in_clear.value_namespace_prefix = name_space_prefix;
    }
}

void Macsec::PolicyNames::PolicyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay-protection")
    {
        delay_protection.yfilter = yfilter;
    }
    if(value_path == "security-policy")
    {
        security_policy.yfilter = yfilter;
    }
    if(value_path == "key-server-priority")
    {
        key_server_priority.yfilter = yfilter;
    }
    if(value_path == "conf-offset")
    {
        conf_offset.yfilter = yfilter;
    }
    if(value_path == "sak-rekey-interval")
    {
        sak_rekey_interval.yfilter = yfilter;
    }
    if(value_path == "policy-exception")
    {
        policy_exception.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "include-icv-indicator")
    {
        include_icv_indicator.yfilter = yfilter;
    }
    if(value_path == "sak-rekey-interval-sec")
    {
        sak_rekey_interval_sec.yfilter = yfilter;
    }
    if(value_path == "vlan-tags-in-clear")
    {
        vlan_tags_in_clear.yfilter = yfilter;
    }
}

bool Macsec::PolicyNames::PolicyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay-protection" || name == "security-policy" || name == "key-server-priority" || name == "conf-offset" || name == "sak-rekey-interval" || name == "policy-exception" || name == "window-size" || name == "cipher-suite" || name == "include-icv-indicator" || name == "sak-rekey-interval-sec" || name == "vlan-tags-in-clear")
        return true;
    return false;
}

const Enum::YLeaf MacsecMkaSecurityPolicy::should_secure {0, "should-secure"};
const Enum::YLeaf MacsecMkaSecurityPolicy::must_secure {1, "must-secure"};

const Enum::YLeaf MacsecMkaPolicyException::lacp_in_clear {1, "lacp-in-clear"};

const Enum::YLeaf MacsecMkaCipherSuite::gcm_aes_128 {1, "gcm-aes-128"};
const Enum::YLeaf MacsecMkaCipherSuite::gcm_aes_256 {2, "gcm-aes-256"};
const Enum::YLeaf MacsecMkaCipherSuite::gcm_aes_xpn_128 {3, "gcm-aes-xpn-128"};
const Enum::YLeaf MacsecMkaCipherSuite::gcm_aes_xpn_256 {4, "gcm-aes-xpn-256"};

const Enum::YLeaf MacsecMkaConfOffset::conf_off_set_0 {0, "conf-off-set-0"};
const Enum::YLeaf MacsecMkaConfOffset::conf_off_set_30 {30, "conf-off-set-30"};
const Enum::YLeaf MacsecMkaConfOffset::conf_off_set_50 {50, "conf-off-set-50"};


}
}

