
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_mka_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_mka_cfg {

Macsec::Macsec()
{
    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-mka-cfg";
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec";

    return path_buffer.str();

}

EntityPath Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Macsec::Policy>();
        c->parent = this;
        policy.push_back(std::move(c));
        children[segment_path] = policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Macsec::get_children()
{
    for (auto const & c : policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Macsec::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Macsec::clone_ptr() const
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

Macsec::Policy::Policy()
    :
    name{YType::str, "name"},
    cipher_suite{YType::enumeration, "cipher-suite"},
    conf_offset{YType::enumeration, "conf-offset"},
    delay_protection{YType::boolean, "delay-protection"},
    include_icv_indicator{YType::boolean, "include-icv-indicator"},
    key_server_priority{YType::uint32, "key-server-priority"},
    policy_exception{YType::enumeration, "policy-exception"},
    sak_rekey_interval{YType::uint32, "sak-rekey-interval"},
    security_policy{YType::enumeration, "security-policy"},
    vlan_tags_in_clear{YType::uint32, "vlan-tags-in-clear"},
    window_size{YType::uint32, "window-size"}
{
    yang_name = "policy"; yang_parent_name = "macsec";
}

Macsec::Policy::~Policy()
{
}

bool Macsec::Policy::has_data() const
{
    return name.is_set
	|| cipher_suite.is_set
	|| conf_offset.is_set
	|| delay_protection.is_set
	|| include_icv_indicator.is_set
	|| key_server_priority.is_set
	|| policy_exception.is_set
	|| sak_rekey_interval.is_set
	|| security_policy.is_set
	|| vlan_tags_in_clear.is_set
	|| window_size.is_set;
}

bool Macsec::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(cipher_suite.operation)
	|| is_set(conf_offset.operation)
	|| is_set(delay_protection.operation)
	|| is_set(include_icv_indicator.operation)
	|| is_set(key_server_priority.operation)
	|| is_set(policy_exception.operation)
	|| is_set(sak_rekey_interval.operation)
	|| is_set(security_policy.operation)
	|| is_set(vlan_tags_in_clear.operation)
	|| is_set(window_size.operation);
}

std::string Macsec::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Macsec::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (conf_offset.is_set || is_set(conf_offset.operation)) leaf_name_data.push_back(conf_offset.get_name_leafdata());
    if (delay_protection.is_set || is_set(delay_protection.operation)) leaf_name_data.push_back(delay_protection.get_name_leafdata());
    if (include_icv_indicator.is_set || is_set(include_icv_indicator.operation)) leaf_name_data.push_back(include_icv_indicator.get_name_leafdata());
    if (key_server_priority.is_set || is_set(key_server_priority.operation)) leaf_name_data.push_back(key_server_priority.get_name_leafdata());
    if (policy_exception.is_set || is_set(policy_exception.operation)) leaf_name_data.push_back(policy_exception.get_name_leafdata());
    if (sak_rekey_interval.is_set || is_set(sak_rekey_interval.operation)) leaf_name_data.push_back(sak_rekey_interval.get_name_leafdata());
    if (security_policy.is_set || is_set(security_policy.operation)) leaf_name_data.push_back(security_policy.get_name_leafdata());
    if (vlan_tags_in_clear.is_set || is_set(vlan_tags_in_clear.operation)) leaf_name_data.push_back(vlan_tags_in_clear.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Macsec::Policy::get_children()
{
    return children;
}

void Macsec::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "conf-offset")
    {
        conf_offset = value;
    }
    if(value_path == "delay-protection")
    {
        delay_protection = value;
    }
    if(value_path == "include-icv-indicator")
    {
        include_icv_indicator = value;
    }
    if(value_path == "key-server-priority")
    {
        key_server_priority = value;
    }
    if(value_path == "policy-exception")
    {
        policy_exception = value;
    }
    if(value_path == "sak-rekey-interval")
    {
        sak_rekey_interval = value;
    }
    if(value_path == "security-policy")
    {
        security_policy = value;
    }
    if(value_path == "vlan-tags-in-clear")
    {
        vlan_tags_in_clear = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

const Enum::YLeaf MacsecMkaConfOffsetEnum::conf_off_set_0 {0, "conf-off-set-0"};
const Enum::YLeaf MacsecMkaConfOffsetEnum::conf_off_set_30 {30, "conf-off-set-30"};
const Enum::YLeaf MacsecMkaConfOffsetEnum::conf_off_set_50 {50, "conf-off-set-50"};

const Enum::YLeaf MacsecMkaSecurityPolicyEnum::should_secure {0, "should-secure"};
const Enum::YLeaf MacsecMkaSecurityPolicyEnum::must_secure {1, "must-secure"};

const Enum::YLeaf MacsecMkaPolicyExceptionEnum::lacp_in_clear {1, "lacp-in-clear"};

const Enum::YLeaf MacsecMkaCipherSuiteEnum::gcm_aes_128 {1, "gcm-aes-128"};
const Enum::YLeaf MacsecMkaCipherSuiteEnum::gcm_aes_256 {2, "gcm-aes-256"};
const Enum::YLeaf MacsecMkaCipherSuiteEnum::gcm_aes_xpn_128 {3, "gcm-aes-xpn-128"};
const Enum::YLeaf MacsecMkaCipherSuiteEnum::gcm_aes_xpn_256 {4, "gcm-aes-xpn-256"};


}
}

