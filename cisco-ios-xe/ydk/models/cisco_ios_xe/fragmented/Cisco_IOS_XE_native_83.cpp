
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_83.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"}
{

    yang_name = "addressed-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::has_data() const
{
    return ip.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"}
{

    yang_name = "named-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::has_data() const
{
    return name.is_set
	|| use.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(use.yfilter);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.yfilter)) leaf_name_data.push_back(use.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use")
    {
        use = value;
        use.value_namespace = name_space;
        use.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "use")
    {
        use.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "use")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Zeroize()
    :
    ec(nullptr) // presence node
	,pubkey_chain(nullptr) // presence node
	,rsa(nullptr) // presence node
{

    yang_name = "zeroize"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::~Zeroize()
{
}

bool Native::Crypto::Key::Zeroize::has_data() const
{
    return (ec !=  nullptr && ec->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Zeroize::has_operation() const
{
    return is_set(yfilter)
	|| (ec !=  nullptr && ec->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Zeroize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zeroize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec")
    {
        if(ec == nullptr)
        {
            ec = std::make_shared<Native::Crypto::Key::Zeroize::Ec>();
        }
        return ec;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Crypto::Key::Zeroize::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Zeroize::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ec != nullptr)
    {
        children["ec"] = ec;
    }

    if(pubkey_chain != nullptr)
    {
        children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Zeroize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Key::Zeroize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Key::Zeroize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec" || name == "pubkey-chain" || name == "rsa")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Ec::Ec()
    :
    label{YType::str, "label"}
{

    yang_name = "ec"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::Ec::~Ec()
{
}

bool Native::Crypto::Key::Zeroize::Ec::has_data() const
{
    return label.is_set;
}

bool Native::Crypto::Key::Zeroize::Ec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Zeroize::Ec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::Ec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Zeroize::Ec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::Ec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::Ec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::PubkeyChain::PubkeyChain()
    :
    index_{YType::uint16, "index"}
{

    yang_name = "pubkey-chain"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_data() const
{
    return index_.is_set;
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::PubkeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Zeroize::PubkeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::PubkeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::PubkeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

Native::Crypto::Key::Zeroize::Rsa::Rsa()
    :
    label{YType::str, "label"}
{

    yang_name = "rsa"; yang_parent_name = "zeroize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Key::Zeroize::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Zeroize::Rsa::has_data() const
{
    return label.is_set;
}

bool Native::Crypto::Key::Zeroize::Rsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Key::Zeroize::Rsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Key::Zeroize::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Zeroize::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Zeroize::Rsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Key::Zeroize::Rsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Crypto::Key::Zeroize::Rsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Crypto::Keyring::Keyring()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"},
    description{YType::str, "description"},
    local_address{YType::str, "local-address"}
    	,
    default_(std::make_shared<Native::Crypto::Keyring::Default_>())
	,pre_shared_key(std::make_shared<Native::Crypto::Keyring::PreSharedKey>())
	,rsa_pubkey(std::make_shared<Native::Crypto::Keyring::RsaPubkey>())
{
    default_->parent = this;
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "keyring"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Keyring::~Keyring()
{
}

bool Native::Crypto::Keyring::has_data() const
{
    return name.is_set
	|| vrf.is_set
	|| description.is_set
	|| local_address.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:keyring" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Keyring::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        children["rsa-pubkey"] = rsa_pubkey;
    }

    return children;
}

void Native::Crypto::Keyring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "pre-shared-key" || name == "rsa-pubkey" || name == "name" || name == "vrf" || name == "description" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::Default_()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"}
    	,
    pre_shared_key(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey>())
	,rsa_pubkey(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey>())
{
    pre_shared_key->parent = this;
    rsa_pubkey->parent = this;

    yang_name = "default"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::~Default_()
{
}

bool Native::Crypto::Keyring::Default_::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey>();
        }
        return pre_shared_key;
    }

    if(child_yang_name == "rsa-pubkey")
    {
        if(rsa_pubkey == nullptr)
        {
            rsa_pubkey = std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey>();
        }
        return rsa_pubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    if(rsa_pubkey != nullptr)
    {
        children["rsa-pubkey"] = rsa_pubkey;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-shared-key" || name == "rsa-pubkey" || name == "description" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address>())
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_data() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        for(auto const & c : hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default_::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::has_data() const
{
    return ipv4_addr.is_set
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-addr='" <<ipv4_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::has_data() const
{
    return ipv6.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_data() const
{
    return name.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::has_data() const
{
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::Default_::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Addr::has_data() const
{
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::has_data() const
{
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>())
{
    address->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_data() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_data())
            return true;
    }
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Keyring::PreSharedKey::has_operation() const
{
    for (std::size_t index=0; index<hostname.size(); index++)
    {
        if(hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Keyring::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        for(auto const & c : hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Hostname>();
        c->parent = this;
        hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Address()
{

    yang_name = "address"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Ipv4()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    mask{YType::str, "mask"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_data() const
{
    return ipv4_addr.is_set
	|| mask.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-addr='" <<ipv4_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "mask" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::~Ipv6()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_data() const
{
    return ipv6.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::PreSharedKey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    key{YType::empty, "key"},
    encryption{YType::enumeration, "encryption"},
    unencryt_key{YType::str, "unencryt-key"}
{

    yang_name = "hostname"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_data() const
{
    return name.is_set
	|| key.is_set
	|| encryption.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(unencryt_key.yfilter);
}

std::string Native::Crypto::Keyring::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::PreSharedKey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.yfilter)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
        unencryt_key.value_namespace = name_space;
        unencryt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "key" || name == "encryption" || name == "unencryt-key")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>())
{
    addr->parent = this;
    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "keyring"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::RsaPubkey::~RsaPubkey()
{
}

bool Native::Crypto::Keyring::RsaPubkey::has_data() const
{
    return (addr !=  nullptr && addr->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Keyring::RsaPubkey::has_operation() const
{
    return is_set(yfilter)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::RsaPubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>();
        }
        return addr;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::RsaPubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Keyring::RsaPubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Keyring::RsaPubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Keyring::RsaPubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "hostname")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{

    yang_name = "addr"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::RsaPubkey::Addr::~Addr()
{
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_data() const
{
    return address.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::RsaPubkey::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::RsaPubkey::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::RsaPubkey::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::RsaPubkey::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::RsaPubkey::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "way")
        return true;
    return false;
}

Native::Crypto::Keyring::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{

    yang_name = "hostname"; yang_parent_name = "rsa-pubkey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Keyring::RsaPubkey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_data() const
{
    return name.is_set
	|| way.is_set;
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(way.yfilter);
}

std::string Native::Crypto::Keyring::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Keyring::RsaPubkey::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.yfilter)) leaf_name_data.push_back(way.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::RsaPubkey::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::RsaPubkey::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "way")
    {
        way = value;
        way.value_namespace = name_space;
        way.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "way")
    {
        way.yfilter = yfilter;
    }
}

bool Native::Crypto::Keyring::RsaPubkey::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "way")
        return true;
    return false;
}

Native::Crypto::Logging::Logging()
    :
    ikev2{YType::empty, "ikev2"},
    session{YType::empty, "session"}
    	,
    ezvpn(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Logging::~Logging()
{
}

bool Native::Crypto::Logging::has_data() const
{
    return ikev2.is_set
	|| session.is_set
	|| (ezvpn !=  nullptr && ezvpn->has_data());
}

bool Native::Crypto::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ikev2.yfilter)
	|| ydk::is_set(session.yfilter)
	|| (ezvpn !=  nullptr && ezvpn->has_operation());
}

std::string Native::Crypto::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikev2.is_set || is_set(ikev2.yfilter)) leaf_name_data.push_back(ikev2.get_name_leafdata());
    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ezvpn")
    {
        if(ezvpn == nullptr)
        {
            ezvpn = std::make_shared<Native::Crypto::Logging::Ezvpn>();
        }
        return ezvpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ezvpn != nullptr)
    {
        children["ezvpn"] = ezvpn;
    }

    return children;
}

void Native::Crypto::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ikev2")
    {
        ikev2 = value;
        ikev2.value_namespace = name_space;
        ikev2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ikev2")
    {
        ikev2.yfilter = yfilter;
    }
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
}

bool Native::Crypto::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ezvpn" || name == "ikev2" || name == "session")
        return true;
    return false;
}

Native::Crypto::Logging::Ezvpn::Ezvpn()
    :
    group{YType::str, "group"}
{

    yang_name = "ezvpn"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Logging::Ezvpn::~Ezvpn()
{
}

bool Native::Crypto::Logging::Ezvpn::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::Logging::Ezvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::Logging::Ezvpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Logging::Ezvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ezvpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Logging::Ezvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Logging::Ezvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Logging::Ezvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Logging::Ezvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Logging::Ezvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::Logging::Ezvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::CryptoMap::CryptoMap()
{

    yang_name = "crypto-map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::CryptoMap::~CryptoMap()
{
}

bool Native::Crypto::CryptoMap::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::CryptoMap::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::CryptoMap::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::CryptoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    sequence_number{YType::uint16, "sequence-number"},
    keying{YType::enumeration, "keying"},
    dynamic{YType::str, "dynamic"},
    profile{YType::str, "profile"},
    description{YType::str, "description"}
    	,
    default_(std::make_shared<Native::Crypto::CryptoMap::Map::Default_>())
	,dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>())
	,match(std::make_shared<Native::Crypto::CryptoMap::Map::Match>())
	,qos(std::make_shared<Native::Crypto::CryptoMap::Map::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::CryptoMap::Map::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "map"; yang_parent_name = "crypto-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::CryptoMap::Map::~Map()
{
}

bool Native::Crypto::CryptoMap::Map::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| sequence_number.is_set
	|| keying.is_set
	|| dynamic.is_set
	|| profile.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(keying.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:crypto-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (keying.is_set || is_set(keying.yfilter)) leaf_name_data.push_back(keying.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::CryptoMap::Map::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keying")
    {
        keying = value;
        keying.value_namespace = name_space;
        keying.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "keying")
    {
        keying.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "name" || name == "ipv6" || name == "sequence-number" || name == "keying" || name == "dynamic" || name == "profile" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Dialer>())
	,match(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Match>())
	,qos(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set>())
{
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::~Default_()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer-conatiner" || name == "static")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    remote_peer{YType::str, "remote-peer"},
    gateway{YType::empty, "gateway"},
    static_{YType::empty, "static"}
{

    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_data() const
{
    return remote_peer.is_set
	|| gateway.is_set
	|| static_.is_set;
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_peer.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_peer.is_set || is_set(remote_peer.yfilter)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-peer")
    {
        remote_peer = value;
        remote_peer.value_namespace = name_space;
        remote_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-peer")
    {
        remote_peer.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer" || name == "gateway" || name == "static")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::CryptoMap::Map::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::CryptoMap::Map::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation>())
{
    peer->parent = this;
    reverse_route->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::CryptoMap::Map::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

void Native::Crypto::CryptoMap::Map::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::Peer::~Peer()
{
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::MapIpv6Gdoi()
{

    yang_name = "map-ipv6-gdoi"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapIpv6Gdoi::~MapIpv6Gdoi()
{
}

bool Native::Crypto::MapIpv6Gdoi::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapIpv6Gdoi::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapIpv6Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-ipv6-gdoi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapIpv6Gdoi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapIpv6Gdoi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    gdoi{YType::enumeration, "gdoi"},
    activate{YType::empty, "activate"}
    	,
    default_(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_>())
	,match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>())
{
    default_->parent = this;
    match->parent = this;

    yang_name = "map"; yang_parent_name = "map-ipv6-gdoi"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapIpv6Gdoi::Map::~Map()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| gdoi.is_set
	|| activate.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-ipv6-gdoi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "name" || name == "ipv6" || name == "gdoi" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Default_()
    :
    activate{YType::empty, "activate"}
    	,
    match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_::Match>())
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::~Default_()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::has_data() const
{
    return activate.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "activate")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapIpv6Gdoi::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapIpv6Gdoi::Map::Match::~Match()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapIpv6Gdoi::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6Gdoi::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6Gdoi::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapIpv6Gdoi::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapClient::MapClient()
{

    yang_name = "map-client"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapClient::~MapClient()
{
}

bool Native::Crypto::MapClient::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapClient::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::MapClient::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::MapClient::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::MapClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Map()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    isakmp_profile{YType::str, "isakmp-profile"},
    local_address{YType::str, "local-address"}
    	,
    client(std::make_shared<Native::Crypto::MapClient::Map::Client>())
	,isakmp(std::make_shared<Native::Crypto::MapClient::Map::Isakmp>())
	,redundancy(std::make_shared<Native::Crypto::MapClient::Map::Redundancy>())
{
    client->parent = this;
    isakmp->parent = this;
    redundancy->parent = this;

    yang_name = "map"; yang_parent_name = "map-client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::MapClient::Map::~Map()
{
}

bool Native::Crypto::MapClient::Map::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| isakmp_profile.is_set
	|| local_address.is_set
	|| (client !=  nullptr && client->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Crypto::MapClient::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Crypto::MapClient::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::MapClient::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::MapClient::Map::Client>();
        }
        return client;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::MapClient::Map::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::MapClient::Map::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::Crypto::MapClient::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "isakmp" || name == "redundancy" || name == "name" || name == "ipv6" || name == "isakmp-profile" || name == "local-address")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Client()
    :
    accounting(std::make_shared<Native::Crypto::MapClient::Map::Client::Accounting>())
	,authentication(std::make_shared<Native::Crypto::MapClient::Map::Client::Authentication>())
	,configuration(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration>())
{
    accounting->parent = this;
    authentication->parent = this;
    configuration->parent = this;

    yang_name = "client"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::~Client()
{
}

bool Native::Crypto::MapClient::Map::Client::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::Crypto::MapClient::Map::Client::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Crypto::MapClient::Map::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::MapClient::Map::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "configuration")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Accounting::Accounting()
    :
    list{YType::str, "list"}
{

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Accounting::~Accounting()
{
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Authentication::~Authentication()
{
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_data() const
{
    return list.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Configuration::Configuration()
    :
    address(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>())
{
    address->parent = this;

    yang_name = "configuration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Configuration::~Configuration()
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Client::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Client::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::Address()
    :
    initiate{YType::empty, "initiate"},
    respond{YType::empty, "respond"}
{

    yang_name = "address"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::~Address()
{
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_data() const
{
    return initiate.is_set
	|| respond.is_set;
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initiate.yfilter)
	|| ydk::is_set(respond.yfilter);
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Client::Configuration::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initiate.is_set || is_set(initiate.yfilter)) leaf_name_data.push_back(initiate.get_name_leafdata());
    if (respond.is_set || is_set(respond.yfilter)) leaf_name_data.push_back(respond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Client::Configuration::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Client::Configuration::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initiate")
    {
        initiate = value;
        initiate.value_namespace = name_space;
        initiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respond")
    {
        respond = value;
        respond.value_namespace = name_space;
        respond.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initiate")
    {
        initiate.yfilter = yfilter;
    }
    if(value_path == "respond")
    {
        respond.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Client::Configuration::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initiate" || name == "respond")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Isakmp::Isakmp()
    :
    authorization{YType::empty, "authorization"},
    list{YType::str, "list"}
{

    yang_name = "isakmp"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Isakmp::~Isakmp()
{
}

bool Native::Crypto::MapClient::Map::Isakmp::has_data() const
{
    return authorization.is_set
	|| list.is_set;
}

bool Native::Crypto::MapClient::Map::Isakmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Crypto::MapClient::Map::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Isakmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Isakmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Isakmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Isakmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Isakmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Isakmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "list")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::Redundancy()
    :
    replay_interval(std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>())
{
    replay_interval->parent = this;

    yang_name = "redundancy"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Redundancy::~Redundancy()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_data() const
{
    return (replay_interval !=  nullptr && replay_interval->has_data());
}

bool Native::Crypto::MapClient::Map::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (replay_interval !=  nullptr && replay_interval->has_operation());
}

std::string Native::Crypto::MapClient::Map::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-interval")
    {
        if(replay_interval == nullptr)
        {
            replay_interval = std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>();
        }
        return replay_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(replay_interval != nullptr)
    {
        children["replay-interval"] = replay_interval;
    }

    return children;
}

void Native::Crypto::MapClient::Map::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::MapClient::Map::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::MapClient::Map::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-interval")
        return true;
    return false;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::ReplayInterval()
    :
    inbound{YType::uint32, "inbound"},
    outbound{YType::uint32, "outbound"}
{

    yang_name = "replay-interval"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::~ReplayInterval()
{
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_data() const
{
    return inbound.is_set
	|| outbound.is_set;
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inbound.yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

Native::Crypto::Mib::Mib()
    :
    ipsec(std::make_shared<Native::Crypto::Mib::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "mib"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::~Mib()
{
}

bool Native::Crypto::Mib::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Mib::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Ipsec()
    :
    flowmib(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>())
{
    flowmib->parent = this;

    yang_name = "ipsec"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Mib::Ipsec::has_data() const
{
    return (flowmib !=  nullptr && flowmib->has_data());
}

bool Native::Crypto::Mib::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (flowmib !=  nullptr && flowmib->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowmib")
    {
        if(flowmib == nullptr)
        {
            flowmib = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>();
        }
        return flowmib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flowmib != nullptr)
    {
        children["flowmib"] = flowmib;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowmib")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::Flowmib()
    :
    history(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>())
{
    history->parent = this;

    yang_name = "flowmib"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::~Flowmib()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_data() const
{
    return (history !=  nullptr && history->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::History()
    :
    failure(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>())
	,tunnel(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>())
{
    failure->parent = this;
    tunnel->parent = this;

    yang_name = "history"; yang_parent_name = "flowmib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::~History()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_data() const
{
    return (failure !=  nullptr && failure->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "tunnel")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::Failure()
    :
    size{YType::uint8, "size"}
{

    yang_name = "failure"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::~Failure()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::Tunnel()
    :
    size{YType::uint8, "size"}
{

    yang_name = "tunnel"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::~Tunnel()
{
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Pki::Pki()
    :
    authenticate{YType::str, "authenticate"},
    enroll{YType::str, "enroll"}
    	,
    certificate(std::make_shared<Native::Crypto::Pki::Certificate>())
	,crl(std::make_shared<Native::Crypto::Pki::Crl>())
	,profile(std::make_shared<Native::Crypto::Pki::Profile>())
	,server(std::make_shared<Native::Crypto::Pki::Server>())
	,token(std::make_shared<Native::Crypto::Pki::Token>())
	,trustpool(std::make_shared<Native::Crypto::Pki::Trustpool>())
	,default_(std::make_shared<Native::Crypto::Pki::Default_>())
{
    certificate->parent = this;
    crl->parent = this;
    profile->parent = this;
    server->parent = this;
    token->parent = this;
    trustpool->parent = this;
    default_->parent = this;

    yang_name = "pki"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::~Pki()
{
}

bool Native::Crypto::Pki::has_data() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trustpoint.size(); index++)
    {
        if(trustpoint[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| enroll.is_set
	|| (certificate !=  nullptr && certificate->has_data())
	|| (crl !=  nullptr && crl->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (token !=  nullptr && token->has_data())
	|| (trustpool !=  nullptr && trustpool->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Pki::has_operation() const
{
    for (std::size_t index=0; index<export_.size(); index++)
    {
        if(export_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import.size(); index++)
    {
        if(import[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trustpoint.size(); index++)
    {
        if(trustpoint[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(enroll.yfilter)
	|| (certificate !=  nullptr && certificate->has_operation())
	|| (crl !=  nullptr && crl->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (token !=  nullptr && token->has_operation())
	|| (trustpool !=  nullptr && trustpool->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Pki::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:pki";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (enroll.is_set || is_set(enroll.yfilter)) leaf_name_data.push_back(enroll.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        if(certificate == nullptr)
        {
            certificate = std::make_shared<Native::Crypto::Pki::Certificate>();
        }
        return certificate;
    }

    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Pki::Crl>();
        }
        return crl;
    }

    if(child_yang_name == "export")
    {
        for(auto const & c : export_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Export_>();
        c->parent = this;
        export_.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        for(auto const & c : import)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Import>();
        c->parent = this;
        import.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Crypto::Pki::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Pki::Server>();
        }
        return server;
    }

    if(child_yang_name == "trustpoint")
    {
        for(auto const & c : trustpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Trustpoint>();
        c->parent = this;
        trustpoint.push_back(c);
        return c;
    }

    if(child_yang_name == "token")
    {
        if(token == nullptr)
        {
            token = std::make_shared<Native::Crypto::Pki::Token>();
        }
        return token;
    }

    if(child_yang_name == "trustpool")
    {
        if(trustpool == nullptr)
        {
            trustpool = std::make_shared<Native::Crypto::Pki::Trustpool>();
        }
        return trustpool;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(certificate != nullptr)
    {
        children["certificate"] = certificate;
    }

    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    for (auto const & c : export_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import)
    {
        children[c->get_segment_path()] = c;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    for (auto const & c : trustpoint)
    {
        children[c->get_segment_path()] = c;
    }

    if(token != nullptr)
    {
        children["token"] = token;
    }

    if(trustpool != nullptr)
    {
        children["trustpool"] = trustpool;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Pki::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enroll")
    {
        enroll = value;
        enroll.value_namespace = name_space;
        enroll.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "enroll")
    {
        enroll.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "crl" || name == "export" || name == "import" || name == "profile" || name == "server" || name == "trustpoint" || name == "token" || name == "trustpool" || name == "default" || name == "authenticate" || name == "enroll")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Certificate()
    :
    pool{YType::empty, "pool"},
    query{YType::empty, "query"},
    validate{YType::str, "validate"}
    	,
    storage(std::make_shared<Native::Crypto::Pki::Certificate::Storage>())
{
    storage->parent = this;

    yang_name = "certificate"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::~Certificate()
{
}

bool Native::Crypto::Pki::Certificate::has_data() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return pool.is_set
	|| query.is_set
	|| validate.is_set
	|| (storage !=  nullptr && storage->has_data());
}

bool Native::Crypto::Pki::Certificate::has_operation() const
{
    for (std::size_t index=0; index<chain.size(); index++)
    {
        if(chain[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pool.yfilter)
	|| ydk::is_set(query.yfilter)
	|| ydk::is_set(validate.yfilter)
	|| (storage !=  nullptr && storage->has_operation());
}

std::string Native::Crypto::Pki::Certificate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool.is_set || is_set(pool.yfilter)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (query.is_set || is_set(query.yfilter)) leaf_name_data.push_back(query.get_name_leafdata());
    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chain")
    {
        for(auto const & c : chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Chain>();
        c->parent = this;
        chain.push_back(c);
        return c;
    }

    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    if(child_yang_name == "storage")
    {
        if(storage == nullptr)
        {
            storage = std::make_shared<Native::Crypto::Pki::Certificate::Storage>();
        }
        return storage;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : chain)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    if(storage != nullptr)
    {
        children["storage"] = storage;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool")
    {
        pool = value;
        pool.value_namespace = name_space;
        pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query")
    {
        query = value;
        query.value_namespace = name_space;
        query.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool")
    {
        pool.yfilter = yfilter;
    }
    if(value_path == "query")
    {
        query.yfilter = yfilter;
    }
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chain" || name == "map" || name == "storage" || name == "pool" || name == "query" || name == "validate")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Chain::Chain()
    :
    name{YType::str, "name"}
{

    yang_name = "chain"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Chain::~Chain()
{
}

bool Native::Crypto::Pki::Certificate::Chain::has_data() const
{
    for (std::size_t index=0; index<certificate.size(); index++)
    {
        if(certificate[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Crypto::Pki::Certificate::Chain::has_operation() const
{
    for (std::size_t index=0; index<certificate.size(); index++)
    {
        if(certificate[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Chain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Chain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Chain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certificate")
    {
        for(auto const & c : certificate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Certificate::Chain::Certificate_>();
        c->parent = this;
        certificate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Chain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : certificate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Chain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Chain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Chain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certificate" || name == "name")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Chain::Certificate_::Certificate_()
    :
    serial{YType::str, "serial"},
    certtype{YType::enumeration, "certtype"}
{

    yang_name = "certificate"; yang_parent_name = "chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Chain::Certificate_::~Certificate_()
{
}

bool Native::Crypto::Pki::Certificate::Chain::Certificate_::has_data() const
{
    return serial.is_set
	|| certtype.is_set;
}

bool Native::Crypto::Pki::Certificate::Chain::Certificate_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(certtype.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Chain::Certificate_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate" <<"[serial='" <<serial <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Chain::Certificate_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (certtype.is_set || is_set(certtype.yfilter)) leaf_name_data.push_back(certtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Chain::Certificate_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Chain::Certificate_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Chain::Certificate_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certtype")
    {
        certtype = value;
        certtype.value_namespace = name_space;
        certtype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Chain::Certificate_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "certtype")
    {
        certtype.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Chain::Certificate_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial" || name == "certtype")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::Map()
    :
    tag{YType::str, "tag"},
    sequence{YType::uint16, "sequence"}
    	,
    alt_subject_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::AltSubjectName>())
	,expires_on(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn>())
	,issuer_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::IssuerName>())
	,name(std::make_shared<Native::Crypto::Pki::Certificate::Map::Name>())
	,serial_number(std::make_shared<Native::Crypto::Pki::Certificate::Map::SerialNumber>())
	,subject_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::SubjectName>())
	,unstructured_subject_name(std::make_shared<Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName>())
	,valid_start(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart>())
{
    alt_subject_name->parent = this;
    expires_on->parent = this;
    issuer_name->parent = this;
    name->parent = this;
    serial_number->parent = this;
    subject_name->parent = this;
    unstructured_subject_name->parent = this;
    valid_start->parent = this;

    yang_name = "map"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Map::~Map()
{
}

bool Native::Crypto::Pki::Certificate::Map::has_data() const
{
    return tag.is_set
	|| sequence.is_set
	|| (alt_subject_name !=  nullptr && alt_subject_name->has_data())
	|| (expires_on !=  nullptr && expires_on->has_data())
	|| (issuer_name !=  nullptr && issuer_name->has_data())
	|| (name !=  nullptr && name->has_data())
	|| (serial_number !=  nullptr && serial_number->has_data())
	|| (subject_name !=  nullptr && subject_name->has_data())
	|| (unstructured_subject_name !=  nullptr && unstructured_subject_name->has_data())
	|| (valid_start !=  nullptr && valid_start->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (alt_subject_name !=  nullptr && alt_subject_name->has_operation())
	|| (expires_on !=  nullptr && expires_on->has_operation())
	|| (issuer_name !=  nullptr && issuer_name->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (serial_number !=  nullptr && serial_number->has_operation())
	|| (subject_name !=  nullptr && subject_name->has_operation())
	|| (unstructured_subject_name !=  nullptr && unstructured_subject_name->has_operation())
	|| (valid_start !=  nullptr && valid_start->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alt-subject-name")
    {
        if(alt_subject_name == nullptr)
        {
            alt_subject_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::AltSubjectName>();
        }
        return alt_subject_name;
    }

    if(child_yang_name == "expires-on")
    {
        if(expires_on == nullptr)
        {
            expires_on = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn>();
        }
        return expires_on;
    }

    if(child_yang_name == "issuer-name")
    {
        if(issuer_name == nullptr)
        {
            issuer_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::IssuerName>();
        }
        return issuer_name;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Crypto::Pki::Certificate::Map::Name>();
        }
        return name;
    }

    if(child_yang_name == "serial-number")
    {
        if(serial_number == nullptr)
        {
            serial_number = std::make_shared<Native::Crypto::Pki::Certificate::Map::SerialNumber>();
        }
        return serial_number;
    }

    if(child_yang_name == "subject-name")
    {
        if(subject_name == nullptr)
        {
            subject_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::SubjectName>();
        }
        return subject_name;
    }

    if(child_yang_name == "unstructured-subject-name")
    {
        if(unstructured_subject_name == nullptr)
        {
            unstructured_subject_name = std::make_shared<Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName>();
        }
        return unstructured_subject_name;
    }

    if(child_yang_name == "valid-start")
    {
        if(valid_start == nullptr)
        {
            valid_start = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart>();
        }
        return valid_start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(alt_subject_name != nullptr)
    {
        children["alt-subject-name"] = alt_subject_name;
    }

    if(expires_on != nullptr)
    {
        children["expires-on"] = expires_on;
    }

    if(issuer_name != nullptr)
    {
        children["issuer-name"] = issuer_name;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(serial_number != nullptr)
    {
        children["serial-number"] = serial_number;
    }

    if(subject_name != nullptr)
    {
        children["subject-name"] = subject_name;
    }

    if(unstructured_subject_name != nullptr)
    {
        children["unstructured-subject-name"] = unstructured_subject_name;
    }

    if(valid_start != nullptr)
    {
        children["valid-start"] = valid_start;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt-subject-name" || name == "expires-on" || name == "issuer-name" || name == "name" || name == "serial-number" || name == "subject-name" || name == "unstructured-subject-name" || name == "valid-start" || name == "tag" || name == "sequence")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::AltSubjectName::AltSubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "alt-subject-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::AltSubjectName::~AltSubjectName()
{
}

bool Native::Crypto::Pki::Certificate::Map::AltSubjectName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::AltSubjectName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt-subject-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::AltSubjectName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::AltSubjectName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::AltSubjectName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::ExpiresOn()
    :
    eq(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq>())
	,ge(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge>())
	,lt(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt>())
	,ne(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne>())
{
    eq->parent = this;
    ge->parent = this;
    lt->parent = this;
    ne->parent = this;

    yang_name = "expires-on"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::~ExpiresOn()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::has_data() const
{
    return (eq !=  nullptr && eq->has_data())
	|| (ge !=  nullptr && ge->has_data())
	|| (lt !=  nullptr && lt->has_data())
	|| (ne !=  nullptr && ne->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::has_operation() const
{
    return is_set(yfilter)
	|| (eq !=  nullptr && eq->has_operation())
	|| (ge !=  nullptr && ge->has_operation())
	|| (lt !=  nullptr && lt->has_operation())
	|| (ne !=  nullptr && ne->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expires-on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eq")
    {
        if(eq == nullptr)
        {
            eq = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq>();
        }
        return eq;
    }

    if(child_yang_name == "ge")
    {
        if(ge == nullptr)
        {
            ge = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge>();
        }
        return ge;
    }

    if(child_yang_name == "lt")
    {
        if(lt == nullptr)
        {
            lt = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt>();
        }
        return lt;
    }

    if(child_yang_name == "ne")
    {
        if(ne == nullptr)
        {
            ne = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne>();
        }
        return ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eq != nullptr)
    {
        children["eq"] = eq;
    }

    if(ge != nullptr)
    {
        children["ge"] = ge;
    }

    if(lt != nullptr)
    {
        children["lt"] = lt;
    }

    if(ne != nullptr)
    {
        children["ne"] = ne;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "ge" || name == "lt" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Eq()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time>())
{
    time->parent = this;

    yang_name = "eq"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::~Eq()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "eq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Ge()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time>())
{
    time->parent = this;

    yang_name = "ge"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::~Ge()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ge"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Lt()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time>())
{
    time->parent = this;

    yang_name = "lt"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::~Lt()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "lt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Ne()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time>())
{
    time->parent = this;

    yang_name = "ne"; yang_parent_name = "expires-on"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::~Ne()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ne"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::IssuerName::IssuerName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "issuer-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::IssuerName::~IssuerName()
{
}

bool Native::Crypto::Pki::Certificate::Map::IssuerName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::IssuerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::IssuerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::IssuerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::IssuerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::IssuerName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::IssuerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::IssuerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::IssuerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::Name::Name()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::Name::~Name()
{
}

bool Native::Crypto::Pki::Certificate::Map::Name::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::SerialNumber::SerialNumber()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "serial-number"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::SerialNumber::~SerialNumber()
{
}

bool Native::Crypto::Pki::Certificate::Map::SerialNumber::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::SerialNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::SerialNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::SerialNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::SerialNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::SerialNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::SerialNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::SerialNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::SubjectName::SubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "subject-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::SubjectName::~SubjectName()
{
}

bool Native::Crypto::Pki::Certificate::Map::SubjectName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::SubjectName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::SubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subject-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::SubjectName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::SubjectName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::SubjectName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::SubjectName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::SubjectName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::SubjectName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::UnstructuredSubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{

    yang_name = "unstructured-subject-name"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::~UnstructuredSubjectName()
{
}

bool Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::has_data() const
{
    return co.is_set
	|| eq.is_set
	|| nc.is_set
	|| ne.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(co.yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(nc.yfilter)
	|| ydk::is_set(ne.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unstructured-subject-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.yfilter)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.yfilter)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.yfilter)) leaf_name_data.push_back(ne.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "co")
    {
        co = value;
        co.value_namespace = name_space;
        co.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nc")
    {
        nc = value;
        nc.value_namespace = name_space;
        nc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ne")
    {
        ne = value;
        ne.value_namespace = name_space;
        ne.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "co")
    {
        co.yfilter = yfilter;
    }
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "nc")
    {
        nc.yfilter = yfilter;
    }
    if(value_path == "ne")
    {
        ne.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "co" || name == "eq" || name == "nc" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::ValidStart()
    :
    eq(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq>())
	,ge(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge>())
	,lt(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt>())
	,ne(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne>())
{
    eq->parent = this;
    ge->parent = this;
    lt->parent = this;
    ne->parent = this;

    yang_name = "valid-start"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::~ValidStart()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::has_data() const
{
    return (eq !=  nullptr && eq->has_data())
	|| (ge !=  nullptr && ge->has_data())
	|| (lt !=  nullptr && lt->has_data())
	|| (ne !=  nullptr && ne->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::has_operation() const
{
    return is_set(yfilter)
	|| (eq !=  nullptr && eq->has_operation())
	|| (ge !=  nullptr && ge->has_operation())
	|| (lt !=  nullptr && lt->has_operation())
	|| (ne !=  nullptr && ne->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "valid-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eq")
    {
        if(eq == nullptr)
        {
            eq = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq>();
        }
        return eq;
    }

    if(child_yang_name == "ge")
    {
        if(ge == nullptr)
        {
            ge = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge>();
        }
        return ge;
    }

    if(child_yang_name == "lt")
    {
        if(lt == nullptr)
        {
            lt = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt>();
        }
        return lt;
    }

    if(child_yang_name == "ne")
    {
        if(ne == nullptr)
        {
            ne = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne>();
        }
        return ne;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eq != nullptr)
    {
        children["eq"] = eq;
    }

    if(ge != nullptr)
    {
        children["ge"] = ge;
    }

    if(lt != nullptr)
    {
        children["lt"] = lt;
    }

    if(ne != nullptr)
    {
        children["ne"] = ne;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "ge" || name == "lt" || name == "ne")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Eq()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time>())
{
    time->parent = this;

    yang_name = "eq"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::~Eq()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "eq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Ge()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time>())
{
    time->parent = this;

    yang_name = "ge"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::~Ge()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ge"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Lt()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time>())
{
    time->parent = this;

    yang_name = "lt"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::~Lt()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "lt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Ne()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time>())
{
    time->parent = this;

    yang_name = "ne"; yang_parent_name = "valid-start"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::~Ne()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::has_data() const
{
    return (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::Time()
    :
    date1{YType::uint8, "date1"},
    month1{YType::str, "month1"},
    date2{YType::uint8, "date2"},
    month2{YType::str, "month2"},
    year{YType::uint16, "year"},
    clock_{YType::str, "clock"},
    utc{YType::empty, "utc"}
{

    yang_name = "time"; yang_parent_name = "ne"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_data() const
{
    return date1.is_set
	|| month1.is_set
	|| date2.is_set
	|| month2.is_set
	|| year.is_set
	|| clock_.is_set
	|| utc.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date1.yfilter)
	|| ydk::is_set(month1.yfilter)
	|| ydk::is_set(date2.yfilter)
	|| ydk::is_set(month2.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(clock_.yfilter)
	|| ydk::is_set(utc.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date1.is_set || is_set(date1.yfilter)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (month1.is_set || is_set(month1.yfilter)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (date2.is_set || is_set(date2.yfilter)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month2.is_set || is_set(month2.yfilter)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());
    if (utc.is_set || is_set(utc.yfilter)) leaf_name_data.push_back(utc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date1")
    {
        date1 = value;
        date1.value_namespace = name_space;
        date1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month1")
    {
        month1 = value;
        month1.value_namespace = name_space;
        month1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date2")
    {
        date2 = value;
        date2.value_namespace = name_space;
        date2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month2")
    {
        month2 = value;
        month2.value_namespace = name_space;
        month2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utc")
    {
        utc = value;
        utc.value_namespace = name_space;
        utc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date1")
    {
        date1.yfilter = yfilter;
    }
    if(value_path == "month1")
    {
        month1.yfilter = yfilter;
    }
    if(value_path == "date2")
    {
        date2.yfilter = yfilter;
    }
    if(value_path == "month2")
    {
        month2.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
    if(value_path == "utc")
    {
        utc.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date1" || name == "month1" || name == "date2" || name == "month2" || name == "year" || name == "clock" || name == "utc")
        return true;
    return false;
}

Native::Crypto::Pki::Certificate::Storage::Storage()
    :
    path{YType::str, "path"},
    on{YType::empty, "on"},
    with_keypair{YType::empty, "with-keypair"}
{

    yang_name = "storage"; yang_parent_name = "certificate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Certificate::Storage::~Storage()
{
}

bool Native::Crypto::Pki::Certificate::Storage::has_data() const
{
    return path.is_set
	|| on.is_set
	|| with_keypair.is_set;
}

bool Native::Crypto::Pki::Certificate::Storage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(on.yfilter)
	|| ydk::is_set(with_keypair.yfilter);
}

std::string Native::Crypto::Pki::Certificate::Storage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Certificate::Storage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Certificate::Storage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (on.is_set || is_set(on.yfilter)) leaf_name_data.push_back(on.get_name_leafdata());
    if (with_keypair.is_set || is_set(with_keypair.yfilter)) leaf_name_data.push_back(with_keypair.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Certificate::Storage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Certificate::Storage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Certificate::Storage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on")
    {
        on = value;
        on.value_namespace = name_space;
        on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-keypair")
    {
        with_keypair = value;
        with_keypair.value_namespace = name_space;
        with_keypair.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Certificate::Storage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "on")
    {
        on.yfilter = yfilter;
    }
    if(value_path == "with-keypair")
    {
        with_keypair.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Certificate::Storage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "on" || name == "with-keypair")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Crl()
    :
    request{YType::str, "request"}
    	,
    cache(std::make_shared<Native::Crypto::Pki::Crl::Cache>())
	,download(std::make_shared<Native::Crypto::Pki::Crl::Download>())
{
    cache->parent = this;
    download->parent = this;

    yang_name = "crl"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::~Crl()
{
}

bool Native::Crypto::Pki::Crl::has_data() const
{
    return request.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::Crypto::Pki::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Crypto::Pki::Crl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Crypto::Pki::Crl::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Crypto::Pki::Crl::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Crypto::Pki::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "download" || name == "request")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Cache::Cache()
    :
    size{YType::uint32, "size"}
{

    yang_name = "cache"; yang_parent_name = "crl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Cache::~Cache()
{
}

bool Native::Crypto::Pki::Crl::Cache::has_data() const
{
    return size.is_set;
}

bool Native::Crypto::Pki::Crl::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Crypto::Pki::Crl::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Crl::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Download()
    :
    trustpoint{YType::str, "trustpoint"}
    	,
    schedule(std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule>())
	,url(std::make_shared<Native::Crypto::Pki::Crl::Download::Url>())
{
    schedule->parent = this;
    url->parent = this;

    yang_name = "download"; yang_parent_name = "crl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::~Download()
{
}

bool Native::Crypto::Pki::Crl::Download::has_data() const
{
    return trustpoint.is_set
	|| (schedule !=  nullptr && schedule->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Crl::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter)
	|| (schedule !=  nullptr && schedule->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Crl::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule>();
        }
        return schedule;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Crl::Download::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Crl::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule" || name == "url" || name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Schedule()
    :
    prepublish{YType::uint16, "prepublish"}
    	,
    retries(std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Retries>())
	,time(std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Time>())
{
    retries->parent = this;
    time->parent = this;

    yang_name = "schedule"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Schedule::~Schedule()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::has_data() const
{
    return prepublish.is_set
	|| (retries !=  nullptr && retries->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Pki::Crl::Download::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prepublish.yfilter)
	|| (retries !=  nullptr && retries->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepublish.is_set || is_set(prepublish.yfilter)) leaf_name_data.push_back(prepublish.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retries")
    {
        if(retries == nullptr)
        {
            retries = std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Retries>();
        }
        return retries;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Pki::Crl::Download::Schedule::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(retries != nullptr)
    {
        children["retries"] = retries;
    }

    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Pki::Crl::Download::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prepublish")
    {
        prepublish = value;
        prepublish.value_namespace = name_space;
        prepublish.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prepublish")
    {
        prepublish.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retries" || name == "time" || name == "prepublish")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Retries::Retries()
    :
    number{YType::uint8, "number"},
    interval{YType::uint16, "interval"}
{

    yang_name = "retries"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Retries::~Retries()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_data() const
{
    return number.is_set
	|| interval.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Crl::Download::Schedule::Retries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Schedule::Retries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "interval")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Time::Time()
    :
    date{YType::enumeration, "date"},
    clock_{YType::str, "clock"}
{

    yang_name = "time"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Schedule::Time::~Time()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_data() const
{
    return date.is_set
	|| clock_.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(clock_.yfilter);
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Time::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Schedule::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (clock_.is_set || is_set(clock_.yfilter)) leaf_name_data.push_back(clock_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Schedule::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Schedule::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Crl::Download::Schedule::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clock")
    {
        clock_ = value;
        clock_.value_namespace = name_space;
        clock_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Schedule::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "clock")
    {
        clock_.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date" || name == "clock")
        return true;
    return false;
}

Native::Crypto::Pki::Crl::Download::Url::Url()
    :
    name{YType::str, "name"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Crl::Download::Url::~Url()
{
}

bool Native::Crypto::Pki::Crl::Download::Url::has_data() const
{
    return name.is_set
	|| source_interface.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Crl::Download::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Crl::Download::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Crl::Download::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Crl::Download::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Crl::Download::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Crl::Download::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Crl::Download::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Crl::Download::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-interface" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Export_()
    :
    name{YType::str, "name"}
    	,
    pem(std::make_shared<Native::Crypto::Pki::Export_::Pem>())
	,pkcs12(std::make_shared<Native::Crypto::Pki::Export_::Pkcs12>())
{
    pem->parent = this;
    pkcs12->parent = this;

    yang_name = "export"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Export_::~Export_()
{
}

bool Native::Crypto::Pki::Export_::has_data() const
{
    return name.is_set
	|| (pem !=  nullptr && pem->has_data())
	|| (pkcs12 !=  nullptr && pkcs12->has_data());
}

bool Native::Crypto::Pki::Export_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pem !=  nullptr && pem->has_operation())
	|| (pkcs12 !=  nullptr && pkcs12->has_operation());
}

std::string Native::Crypto::Pki::Export_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Pki::Export_::Pem>();
        }
        return pem;
    }

    if(child_yang_name == "pkcs12")
    {
        if(pkcs12 == nullptr)
        {
            pkcs12 = std::make_shared<Native::Crypto::Pki::Export_::Pkcs12>();
        }
        return pkcs12;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    if(pkcs12 != nullptr)
    {
        children["pkcs12"] = pkcs12;
    }

    return children;
}

void Native::Crypto::Pki::Export_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "pkcs12" || name == "name")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Pem::Pem()
    :
    terminal(nullptr) // presence node
	,url(std::make_shared<Native::Crypto::Pki::Export_::Pem::Url>())
{
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export_::Pem::~Pem()
{
}

bool Native::Crypto::Pki::Export_::Pem::has_data() const
{
    return (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Export_::Pem::has_operation() const
{
    return is_set(yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Export_::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Export_::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Export_::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Export_::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Export_::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Pem::Terminal::Terminal()
    :
    rollover{YType::empty, "rollover"}
    	,
    pem_3des(std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des>())
	,des(std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Des>())
{
    pem_3des->parent = this;
    des->parent = this;

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export_::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::has_data() const
{
    return rollover.is_set
	|| (pem_3des !=  nullptr && pem_3des->has_data())
	|| (des !=  nullptr && des->has_data());
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rollover.yfilter)
	|| (pem_3des !=  nullptr && pem_3des->has_operation())
	|| (des !=  nullptr && des->has_operation());
}

std::string Native::Crypto::Pki::Export_::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rollover.is_set || is_set(rollover.yfilter)) leaf_name_data.push_back(rollover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem-3des")
    {
        if(pem_3des == nullptr)
        {
            pem_3des = std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des>();
        }
        return pem_3des;
    }

    if(child_yang_name == "des")
    {
        if(des == nullptr)
        {
            des = std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Des>();
        }
        return des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pem_3des != nullptr)
    {
        children["pem-3des"] = pem_3des;
    }

    if(des != nullptr)
    {
        children["des"] = des;
    }

    return children;
}

void Native::Crypto::Pki::Export_::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rollover")
    {
        rollover = value;
        rollover.value_namespace = name_space;
        rollover.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export_::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rollover")
    {
        rollover.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem-3des" || name == "des" || name == "rollover")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::Pem3des()
    :
    password{YType::str, "password"}
{

    yang_name = "pem-3des"; yang_parent_name = "terminal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::~Pem3des()
{
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem-3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Pem3des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Pem::Terminal::Des::Des()
    :
    password{YType::str, "password"}
{

    yang_name = "des"; yang_parent_name = "terminal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export_::Pem::Terminal::Des::~Des()
{
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Des::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Des::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export_::Pem::Terminal::Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::Pem::Terminal::Des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::Terminal::Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::Terminal::Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Export_::Pem::Terminal::Des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export_::Pem::Terminal::Des::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    encrypt{YType::enumeration, "encrypt"},
    password{YType::str, "password"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export_::Pem::Url::~Url()
{
}

bool Native::Crypto::Pki::Export_::Pem::Url::has_data() const
{
    return file.is_set
	|| encrypt.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Export_::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export_::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Export_::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export_::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export_::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "encrypt" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Export_::Pkcs12::Pkcs12()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{

    yang_name = "pkcs12"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Export_::Pkcs12::~Pkcs12()
{
}

bool Native::Crypto::Pki::Export_::Pkcs12::has_data() const
{
    return file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Export_::Pkcs12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Export_::Pkcs12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkcs12";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Export_::Pkcs12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pkcs12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pkcs12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Export_::Pkcs12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Export_::Pkcs12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Export_::Pkcs12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Import()
    :
    name{YType::str, "name"},
    certificate{YType::empty, "certificate"}
    	,
    pem(std::make_shared<Native::Crypto::Pki::Import::Pem>())
	,pkcs12(std::make_shared<Native::Crypto::Pki::Import::Pkcs12>())
{
    pem->parent = this;
    pkcs12->parent = this;

    yang_name = "import"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Import::~Import()
{
}

bool Native::Crypto::Pki::Import::has_data() const
{
    return name.is_set
	|| certificate.is_set
	|| (pem !=  nullptr && pem->has_data())
	|| (pkcs12 !=  nullptr && pkcs12->has_data());
}

bool Native::Crypto::Pki::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(certificate.yfilter)
	|| (pem !=  nullptr && pem->has_operation())
	|| (pkcs12 !=  nullptr && pkcs12->has_operation());
}

std::string Native::Crypto::Pki::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (certificate.is_set || is_set(certificate.yfilter)) leaf_name_data.push_back(certificate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pem")
    {
        if(pem == nullptr)
        {
            pem = std::make_shared<Native::Crypto::Pki::Import::Pem>();
        }
        return pem;
    }

    if(child_yang_name == "pkcs12")
    {
        if(pkcs12 == nullptr)
        {
            pkcs12 = std::make_shared<Native::Crypto::Pki::Import::Pkcs12>();
        }
        return pkcs12;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pem != nullptr)
    {
        children["pem"] = pem;
    }

    if(pkcs12 != nullptr)
    {
        children["pkcs12"] = pkcs12;
    }

    return children;
}

void Native::Crypto::Pki::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificate")
    {
        certificate = value;
        certificate.value_namespace = name_space;
        certificate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "certificate")
    {
        certificate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem" || name == "pkcs12" || name == "name" || name == "certificate")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pem::Pem()
    :
    check{YType::empty, "check"},
    exportable{YType::empty, "exportable"},
    usage_keys{YType::empty, "usage-keys"}
    	,
    terminal(std::make_shared<Native::Crypto::Pki::Import::Pem::Terminal>())
	,url(std::make_shared<Native::Crypto::Pki::Import::Pem::Url>())
{
    terminal->parent = this;
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pem::~Pem()
{
}

bool Native::Crypto::Pki::Import::Pem::has_data() const
{
    return check.is_set
	|| exportable.is_set
	|| usage_keys.is_set
	|| (terminal !=  nullptr && terminal->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Import::Pem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check.yfilter)
	|| ydk::is_set(exportable.yfilter)
	|| ydk::is_set(usage_keys.yfilter)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Import::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.yfilter)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.yfilter)) leaf_name_data.push_back(usage_keys.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Pki::Import::Pem::Terminal>();
        }
        return terminal;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Import::Pem::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Import::Pem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exportable")
    {
        exportable = value;
        exportable.value_namespace = name_space;
        exportable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
        usage_keys.value_namespace = name_space;
        usage_keys.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
    if(value_path == "exportable")
    {
        exportable.yfilter = yfilter;
    }
    if(value_path == "usage-keys")
    {
        usage_keys.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminal" || name == "url" || name == "check" || name == "exportable" || name == "usage-keys")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pem::Terminal::Terminal()
    :
    password{YType::str, "password"}
{

    yang_name = "terminal"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Import::Pem::Terminal::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Import::Pem::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Import::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pem::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Import::Pem::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pem::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pem::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{

    yang_name = "url"; yang_parent_name = "pem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pem::Url::~Url()
{
}

bool Native::Crypto::Pki::Import::Pem::Url::has_data() const
{
    return file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Import::Pem::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Import::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pem::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pem::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pem::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Import::Pem::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pem::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pem::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Import::Pkcs12::Pkcs12()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{

    yang_name = "pkcs12"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Import::Pkcs12::~Pkcs12()
{
}

bool Native::Crypto::Pki::Import::Pkcs12::has_data() const
{
    return file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Import::Pkcs12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Crypto::Pki::Import::Pkcs12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkcs12";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Import::Pkcs12::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Import::Pkcs12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Import::Pkcs12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Import::Pkcs12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Import::Pkcs12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Import::Pkcs12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file" || name == "password")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Profile()
{

    yang_name = "profile"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Profile::~Profile()
{
}

bool Native::Crypto::Pki::Profile::has_data() const
{
    for (std::size_t index=0; index<enrollment.size(); index++)
    {
        if(enrollment[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Pki::Profile::has_operation() const
{
    for (std::size_t index=0; index<enrollment.size(); index++)
    {
        if(enrollment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Pki::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enrollment")
    {
        for(auto const & c : enrollment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Profile::Enrollment>();
        c->parent = this;
        enrollment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : enrollment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Pki::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Pki::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Pki::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enrollment")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment()
    :
    tag{YType::str, "tag"},
    method_est{YType::empty, "method-est"},
    source_interface{YType::str, "source-interface"}
    	,
    authentication(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_>())
	,reenrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment>())
	,default_(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_>())
{
    authentication->parent = this;
    enrollment->parent = this;
    reenrollment->parent = this;
    default_->parent = this;

    yang_name = "enrollment"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Profile::Enrollment::~Enrollment()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::has_data() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_data())
            return true;
    }
    return tag.is_set
	|| method_est.is_set
	|| source_interface.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (reenrollment !=  nullptr && reenrollment->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::has_operation() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(method_est.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (reenrollment !=  nullptr && reenrollment->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Profile::Enrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment" <<"[tag='" <<tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (method_est.is_set || is_set(method_est.yfilter)) leaf_name_data.push_back(method_est.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "enrollment")
    {
        if(enrollment == nullptr)
        {
            enrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_>();
        }
        return enrollment;
    }

    if(child_yang_name == "parameter")
    {
        for(auto const & c : parameter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Parameter>();
        c->parent = this;
        parameter.push_back(c);
        return c;
    }

    if(child_yang_name == "reenrollment")
    {
        if(reenrollment == nullptr)
        {
            reenrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment>();
        }
        return reenrollment;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(enrollment != nullptr)
    {
        children["enrollment"] = enrollment;
    }

    for (auto const & c : parameter)
    {
        children[c->get_segment_path()] = c;
    }

    if(reenrollment != nullptr)
    {
        children["reenrollment"] = reenrollment;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-est")
    {
        method_est = value;
        method_est.value_namespace = name_space;
        method_est.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "method-est")
    {
        method_est.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "enrollment" || name == "parameter" || name == "reenrollment" || name == "default" || name == "tag" || name == "method-est" || name == "source-interface")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Authentication()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication::Url>())
{
    url->parent = this;

    yang_name = "authentication"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::~Authentication()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Enrollment_()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"},
    credential{YType::str, "credential"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url>())
{
    url->parent = this;

    yang_name = "enrollment"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::~Enrollment_()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| credential.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| ydk::is_set(credential.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());
    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal" || name == "credential")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Parameter::Parameter()
    :
    number{YType::uint8, "number"},
    prompt{YType::str, "prompt"},
    value_{YType::str, "value"}
{

    yang_name = "parameter"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Parameter::~Parameter()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Parameter::has_data() const
{
    return number.is_set
	|| prompt.is_set
	|| value_.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Parameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(prompt.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Parameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Parameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.yfilter)) leaf_name_data.push_back(prompt.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Parameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Parameter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Parameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt")
    {
        prompt = value;
        prompt.value_namespace = name_space;
        prompt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Parameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "prompt")
    {
        prompt.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Parameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "prompt" || name == "value")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Reenrollment()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url>())
{
    url->parent = this;

    yang_name = "reenrollment"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::~Reenrollment()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reenrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "reenrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Default_()
    :
    method_est{YType::empty, "method-est"},
    source_interface{YType::str, "source-interface"}
    	,
    authentication(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_>())
	,reenrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment>())
{
    authentication->parent = this;
    enrollment->parent = this;
    reenrollment->parent = this;

    yang_name = "default"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::~Default_()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::has_data() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_data())
            return true;
    }
    return method_est.is_set
	|| source_interface.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (reenrollment !=  nullptr && reenrollment->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::has_operation() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(method_est.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (reenrollment !=  nullptr && reenrollment->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_est.is_set || is_set(method_est.yfilter)) leaf_name_data.push_back(method_est.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "enrollment")
    {
        if(enrollment == nullptr)
        {
            enrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_>();
        }
        return enrollment;
    }

    if(child_yang_name == "parameter")
    {
        for(auto const & c : parameter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter>();
        c->parent = this;
        parameter.push_back(c);
        return c;
    }

    if(child_yang_name == "reenrollment")
    {
        if(reenrollment == nullptr)
        {
            reenrollment = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment>();
        }
        return reenrollment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(enrollment != nullptr)
    {
        children["enrollment"] = enrollment;
    }

    for (auto const & c : parameter)
    {
        children[c->get_segment_path()] = c;
    }

    if(reenrollment != nullptr)
    {
        children["reenrollment"] = reenrollment;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-est")
    {
        method_est = value;
        method_est.value_namespace = name_space;
        method_est.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-est")
    {
        method_est.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "enrollment" || name == "parameter" || name == "reenrollment" || name == "method-est" || name == "source-interface")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Authentication()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url>())
{
    url->parent = this;

    yang_name = "authentication"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::~Authentication()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Authentication::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Enrollment_()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"},
    credential{YType::str, "credential"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url>())
{
    url->parent = this;

    yang_name = "enrollment"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::~Enrollment_()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| credential.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| ydk::is_set(credential.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());
    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal" || name == "credential")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Enrollment_::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::Parameter()
    :
    number{YType::uint8, "number"},
    prompt{YType::str, "prompt"},
    value_{YType::str, "value"}
{

    yang_name = "parameter"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::~Parameter()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::has_data() const
{
    return number.is_set
	|| prompt.is_set
	|| value_.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(prompt.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.yfilter)) leaf_name_data.push_back(prompt.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt")
    {
        prompt = value;
        prompt.value_namespace = name_space;
        prompt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "prompt")
    {
        prompt.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Parameter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "prompt" || name == "value")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Reenrollment()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url>())
{
    url->parent = this;

    yang_name = "reenrollment"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::~Reenrollment()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::has_data() const
{
    return command.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(terminal.yfilter)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reenrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.yfilter)) leaf_name_data.push_back(terminal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal")
    {
        terminal = value;
        terminal.value_namespace = name_space;
        terminal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "terminal")
    {
        terminal.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "command" || name == "terminal")
        return true;
    return false;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "url"; yang_parent_name = "reenrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::~Url()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::has_data() const
{
    return name.is_set
	|| vrf.is_set;
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Profile::Enrollment::Default_::Reenrollment::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Server::Server()
    :
    name{YType::str, "name"},
    rollover{YType::empty, "rollover"},
    cancel{YType::empty, "cancel"}
{

    yang_name = "server"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Server::~Server()
{
}

bool Native::Crypto::Pki::Server::has_data() const
{
    return name.is_set
	|| rollover.is_set
	|| cancel.is_set;
}

bool Native::Crypto::Pki::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rollover.yfilter)
	|| ydk::is_set(cancel.yfilter);
}

std::string Native::Crypto::Pki::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rollover.is_set || is_set(rollover.yfilter)) leaf_name_data.push_back(rollover.get_name_leafdata());
    if (cancel.is_set || is_set(cancel.yfilter)) leaf_name_data.push_back(cancel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rollover")
    {
        rollover = value;
        rollover.value_namespace = name_space;
        rollover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cancel")
    {
        cancel = value;
        cancel.value_namespace = name_space;
        cancel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rollover")
    {
        rollover.yfilter = yfilter;
    }
    if(value_path == "cancel")
    {
        cancel.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rollover" || name == "cancel")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Trustpoint()
    :
    id{YType::str, "id"},
    revocation_check{YType::enumeration, "revocation-check"},
    subject_name{YType::str, "subject-name"},
    vrf{YType::str, "vrf"}
    	,
    auto_enroll(std::make_shared<Native::Crypto::Pki::Trustpoint::AutoEnroll>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment>())
	,password(nullptr) // presence node
	,rsakeypair(std::make_shared<Native::Crypto::Pki::Trustpoint::Rsakeypair>())
	,serial_number(nullptr) // presence node
	,ip_address(std::make_shared<Native::Crypto::Pki::Trustpoint::IpAddress>())
{
    auto_enroll->parent = this;
    enrollment->parent = this;
    rsakeypair->parent = this;
    ip_address->parent = this;

    yang_name = "trustpoint"; yang_parent_name = "pki"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Pki::Trustpoint::~Trustpoint()
{
}

bool Native::Crypto::Pki::Trustpoint::has_data() const
{
    return id.is_set
	|| revocation_check.is_set
	|| subject_name.is_set
	|| vrf.is_set
	|| (auto_enroll !=  nullptr && auto_enroll->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (rsakeypair !=  nullptr && rsakeypair->has_data())
	|| (serial_number !=  nullptr && serial_number->has_data())
	|| (ip_address !=  nullptr && ip_address->has_data());
}

bool Native::Crypto::Pki::Trustpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(revocation_check.yfilter)
	|| ydk::is_set(subject_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (auto_enroll !=  nullptr && auto_enroll->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (rsakeypair !=  nullptr && rsakeypair->has_operation())
	|| (serial_number !=  nullptr && serial_number->has_operation())
	|| (ip_address !=  nullptr && ip_address->has_operation());
}

std::string Native::Crypto::Pki::Trustpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Pki::Trustpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustpoint" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (revocation_check.is_set || is_set(revocation_check.yfilter)) leaf_name_data.push_back(revocation_check.get_name_leafdata());
    if (subject_name.is_set || is_set(subject_name.yfilter)) leaf_name_data.push_back(subject_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-enroll")
    {
        if(auto_enroll == nullptr)
        {
            auto_enroll = std::make_shared<Native::Crypto::Pki::Trustpoint::AutoEnroll>();
        }
        return auto_enroll;
    }

    if(child_yang_name == "enrollment")
    {
        if(enrollment == nullptr)
        {
            enrollment = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment>();
        }
        return enrollment;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Pki::Trustpoint::Password>();
        }
        return password;
    }

    if(child_yang_name == "rsakeypair")
    {
        if(rsakeypair == nullptr)
        {
            rsakeypair = std::make_shared<Native::Crypto::Pki::Trustpoint::Rsakeypair>();
        }
        return rsakeypair;
    }

    if(child_yang_name == "serial-number")
    {
        if(serial_number == nullptr)
        {
            serial_number = std::make_shared<Native::Crypto::Pki::Trustpoint::SerialNumber>();
        }
        return serial_number;
    }

    if(child_yang_name == "ip-address")
    {
        if(ip_address == nullptr)
        {
            ip_address = std::make_shared<Native::Crypto::Pki::Trustpoint::IpAddress>();
        }
        return ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_enroll != nullptr)
    {
        children["auto-enroll"] = auto_enroll;
    }

    if(enrollment != nullptr)
    {
        children["enrollment"] = enrollment;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(rsakeypair != nullptr)
    {
        children["rsakeypair"] = rsakeypair;
    }

    if(serial_number != nullptr)
    {
        children["serial-number"] = serial_number;
    }

    if(ip_address != nullptr)
    {
        children["ip-address"] = ip_address;
    }

    return children;
}

void Native::Crypto::Pki::Trustpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revocation-check")
    {
        revocation_check = value;
        revocation_check.value_namespace = name_space;
        revocation_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subject-name")
    {
        subject_name = value;
        subject_name.value_namespace = name_space;
        subject_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "revocation-check")
    {
        revocation_check.yfilter = yfilter;
    }
    if(value_path == "subject-name")
    {
        subject_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-enroll" || name == "enrollment" || name == "password" || name == "rsakeypair" || name == "serial-number" || name == "ip-address" || name == "id" || name == "revocation-check" || name == "subject-name" || name == "vrf")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::AutoEnroll::AutoEnroll()
    :
    percent{YType::uint8, "percent"},
    regenerate{YType::empty, "regenerate"}
{

    yang_name = "auto-enroll"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::AutoEnroll::~AutoEnroll()
{
}

bool Native::Crypto::Pki::Trustpoint::AutoEnroll::has_data() const
{
    return percent.is_set
	|| regenerate.is_set;
}

bool Native::Crypto::Pki::Trustpoint::AutoEnroll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(regenerate.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::AutoEnroll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-enroll";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::AutoEnroll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (regenerate.is_set || is_set(regenerate.yfilter)) leaf_name_data.push_back(regenerate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::AutoEnroll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::AutoEnroll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::AutoEnroll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regenerate")
    {
        regenerate = value;
        regenerate.value_namespace = name_space;
        regenerate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::AutoEnroll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "regenerate")
    {
        regenerate.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::AutoEnroll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "regenerate")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Enrollment()
    :
    http_proxy{YType::str, "http-proxy"},
    pkcs12{YType::empty, "pkcs12"},
    profile{YType::str, "profile"},
    selfsigned{YType::empty, "selfsigned"},
    url{YType::str, "url"}
    	,
    mode(std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Mode>())
	,retry(std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Retry>())
	,terminal(nullptr) // presence node
{
    mode->parent = this;
    retry->parent = this;

    yang_name = "enrollment"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::~Enrollment()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::has_data() const
{
    return http_proxy.is_set
	|| pkcs12.is_set
	|| profile.is_set
	|| selfsigned.is_set
	|| url.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (retry !=  nullptr && retry->has_data())
	|| (terminal !=  nullptr && terminal->has_data());
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(http_proxy.yfilter)
	|| ydk::is_set(pkcs12.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(selfsigned.yfilter)
	|| ydk::is_set(url.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (retry !=  nullptr && retry->has_operation())
	|| (terminal !=  nullptr && terminal->has_operation());
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http_proxy.is_set || is_set(http_proxy.yfilter)) leaf_name_data.push_back(http_proxy.get_name_leafdata());
    if (pkcs12.is_set || is_set(pkcs12.yfilter)) leaf_name_data.push_back(pkcs12.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (selfsigned.is_set || is_set(selfsigned.yfilter)) leaf_name_data.push_back(selfsigned.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "retry")
    {
        if(retry == nullptr)
        {
            retry = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Retry>();
        }
        return retry;
    }

    if(child_yang_name == "terminal")
    {
        if(terminal == nullptr)
        {
            terminal = std::make_shared<Native::Crypto::Pki::Trustpoint::Enrollment::Terminal>();
        }
        return terminal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(retry != nullptr)
    {
        children["retry"] = retry;
    }

    if(terminal != nullptr)
    {
        children["terminal"] = terminal;
    }

    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http-proxy")
    {
        http_proxy = value;
        http_proxy.value_namespace = name_space;
        http_proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkcs12")
    {
        pkcs12 = value;
        pkcs12.value_namespace = name_space;
        pkcs12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selfsigned")
    {
        selfsigned = value;
        selfsigned.value_namespace = name_space;
        selfsigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http-proxy")
    {
        http_proxy.yfilter = yfilter;
    }
    if(value_path == "pkcs12")
    {
        pkcs12.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "selfsigned")
    {
        selfsigned.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "retry" || name == "terminal" || name == "http-proxy" || name == "pkcs12" || name == "profile" || name == "selfsigned" || name == "url")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Mode::Mode()
    :
    ra{YType::empty, "ra"}
{

    yang_name = "mode"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Mode::~Mode()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Mode::has_data() const
{
    return ra.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ra.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ra.is_set || is_set(ra.yfilter)) leaf_name_data.push_back(ra.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ra")
    {
        ra = value;
        ra.value_namespace = name_space;
        ra.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ra")
    {
        ra.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Retry::Retry()
    :
    count{YType::uint8, "count"},
    period{YType::uint8, "period"}
{

    yang_name = "retry"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Retry::~Retry()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Retry::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Retry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::Retry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Retry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Retry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Retry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::Terminal()
    :
    pem{YType::empty, "pem"}
{

    yang_name = "terminal"; yang_parent_name = "enrollment"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::has_data() const
{
    return pem.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pem.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pem.is_set || is_set(pem.yfilter)) leaf_name_data.push_back(pem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pem")
    {
        pem = value;
        pem.value_namespace = name_space;
        pem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pem")
    {
        pem.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Enrollment::Terminal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pem")
        return true;
    return false;
}

Native::Crypto::Pki::Trustpoint::Password::Password()
    :
    encryption_type{YType::uint8, "encryption_type"},
    clear_password{YType::str, "clear_password"}
{

    yang_name = "password"; yang_parent_name = "trustpoint"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Pki::Trustpoint::Password::~Password()
{
}

bool Native::Crypto::Pki::Trustpoint::Password::has_data() const
{
    return encryption_type.is_set
	|| clear_password.is_set;
}

bool Native::Crypto::Pki::Trustpoint::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption_type.yfilter)
	|| ydk::is_set(clear_password.yfilter);
}

std::string Native::Crypto::Pki::Trustpoint::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Pki::Trustpoint::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());
    if (clear_password.is_set || is_set(clear_password.yfilter)) leaf_name_data.push_back(clear_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Trustpoint::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Trustpoint::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Trustpoint::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption_type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear_password")
    {
        clear_password = value;
        clear_password.value_namespace = name_space;
        clear_password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Pki::Trustpoint::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption_type")
    {
        encryption_type.yfilter = yfilter;
    }
    if(value_path == "clear_password")
    {
        clear_password.yfilter = yfilter;
    }
}

bool Native::Crypto::Pki::Trustpoint::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption_type" || name == "clear_password")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::Use::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::Use::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv4::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::Ipv6::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::Encryption::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::Way::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::Way::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_isakmp {0, "ipsec-isakmp"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_manual {1, "ipsec-manual"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::gdoi {2, "gdoi"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ckm {3, "ckm"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Level::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::MapIpv6Gdoi::Map::Gdoi::fail_close {0, "fail-close"};

const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ca {0, "ca"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ra_encrypt {1, "ra-encrypt"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ra_general {2, "ra-general"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::ra_sign {3, "ra-sign"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::rollover {4, "rollover"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::Certtype::self_signed {5, "self-signed"};

const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::Path::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::Path::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::Path::nvram__COLON__ {2, "nvram:"};

const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Friday {0, "Friday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Monday {1, "Monday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Saturday {2, "Saturday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Sunday {3, "Sunday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Thursday {4, "Thursday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Tuesday {5, "Tuesday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::Date::Wednesday {6, "Wednesday"};

const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::Encrypt::Y_3des {0, "3des"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::Encrypt::des {1, "des"};

const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::File::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Trustpoint::RevocationCheck::crl {0, "crl"};
const Enum::YLeaf Native::Crypto::Pki::Trustpoint::RevocationCheck::none {1, "none"};
const Enum::YLeaf Native::Crypto::Pki::Trustpoint::RevocationCheck::ocsp {2, "ocsp"};


}
}

