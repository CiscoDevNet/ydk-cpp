
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_80.hpp"
#include "Cisco_IOS_XE_native_81.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Crypto::Key::Import::Ec::Ec()
    :
    name{YType::str, "name"},
    exportable{YType::empty, "exportable"},
    terminal{YType::str, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Key::Import::Ec::Url>())
{
    url->parent = this;

    yang_name = "ec"; yang_parent_name = "import";
}

Native::Crypto::Key::Import::Ec::~Ec()
{
}

bool Native::Crypto::Key::Import::Ec::has_data() const
{
    return name.is_set
	|| exportable.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Ec::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(exportable.operation)
	|| is_set(terminal.operation)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Import::Ec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.operation)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.operation)) leaf_name_data.push_back(terminal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Ec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Import::Ec::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Ec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Key::Import::Ec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "exportable")
    {
        exportable = value;
    }
    if(value_path == "terminal")
    {
        terminal = value;
    }
}

Native::Crypto::Key::Import::Ec::Url::Url()
    :
    file{YType::enumeration, "file"},
    key{YType::str, "key"}
{
    yang_name = "url"; yang_parent_name = "ec";
}

Native::Crypto::Key::Import::Ec::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Ec::Url::has_data() const
{
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Ec::Url::has_operation() const
{
    return is_set(operation)
	|| is_set(file.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Key::Import::Ec::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Import::Ec::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Ec::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Ec::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Import::Ec::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Key::Import::Rsa::Rsa()
    :
    label{YType::str, "label"},
    encryption{YType::empty, "encryption"},
    exportable{YType::empty, "exportable"},
    general_purpose{YType::empty, "general-purpose"},
    on{YType::str, "on"},
    pem{YType::empty, "pem"},
    redundancy{YType::empty, "redundancy"},
    signature{YType::empty, "signature"},
    storage{YType::str, "storage"},
    terminal{YType::str, "terminal"},
    usage_keys{YType::empty, "usage-keys"}
    	,
    url(std::make_shared<Native::Crypto::Key::Import::Rsa::Url>())
{
    url->parent = this;

    yang_name = "rsa"; yang_parent_name = "import";
}

Native::Crypto::Key::Import::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Import::Rsa::has_data() const
{
    return label.is_set
	|| encryption.is_set
	|| exportable.is_set
	|| general_purpose.is_set
	|| on.is_set
	|| pem.is_set
	|| redundancy.is_set
	|| signature.is_set
	|| storage.is_set
	|| terminal.is_set
	|| usage_keys.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Key::Import::Rsa::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(encryption.operation)
	|| is_set(exportable.operation)
	|| is_set(general_purpose.operation)
	|| is_set(on.operation)
	|| is_set(pem.operation)
	|| is_set(redundancy.operation)
	|| is_set(signature.operation)
	|| is_set(storage.operation)
	|| is_set(terminal.operation)
	|| is_set(usage_keys.operation)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Key::Import::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa" <<"[label='" <<label <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Import::Rsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/import/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.operation)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (general_purpose.is_set || is_set(general_purpose.operation)) leaf_name_data.push_back(general_purpose.get_name_leafdata());
    if (on.is_set || is_set(on.operation)) leaf_name_data.push_back(on.get_name_leafdata());
    if (pem.is_set || is_set(pem.operation)) leaf_name_data.push_back(pem.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (signature.is_set || is_set(signature.operation)) leaf_name_data.push_back(signature.get_name_leafdata());
    if (storage.is_set || is_set(storage.operation)) leaf_name_data.push_back(storage.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.operation)) leaf_name_data.push_back(terminal.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.operation)) leaf_name_data.push_back(usage_keys.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Crypto::Key::Import::Rsa::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Crypto::Key::Import::Rsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "exportable")
    {
        exportable = value;
    }
    if(value_path == "general-purpose")
    {
        general_purpose = value;
    }
    if(value_path == "on")
    {
        on = value;
    }
    if(value_path == "pem")
    {
        pem = value;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
    if(value_path == "signature")
    {
        signature = value;
    }
    if(value_path == "storage")
    {
        storage = value;
    }
    if(value_path == "terminal")
    {
        terminal = value;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
    }
}

Native::Crypto::Key::Import::Rsa::Url::Url()
    :
    file{YType::enumeration, "file"},
    key{YType::str, "key"}
{
    yang_name = "url"; yang_parent_name = "rsa";
}

Native::Crypto::Key::Import::Rsa::Url::~Url()
{
}

bool Native::Crypto::Key::Import::Rsa::Url::has_data() const
{
    return file.is_set
	|| key.is_set;
}

bool Native::Crypto::Key::Import::Rsa::Url::has_operation() const
{
    return is_set(operation)
	|| is_set(file.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Key::Import::Rsa::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Import::Rsa::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::Import::Rsa::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Import::Rsa::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Import::Rsa::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Key::Move::Move()
    :
    rsa(std::make_shared<Native::Crypto::Key::Move::Rsa>())
{
    rsa->parent = this;

    yang_name = "move"; yang_parent_name = "key";
}

Native::Crypto::Key::Move::~Move()
{
}

bool Native::Crypto::Key::Move::has_data() const
{
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::Move::has_operation() const
{
    return is_set(operation)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Move::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "move";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Move::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::Move::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::Move::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Move::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::Move::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::Move::Rsa::Rsa()
    :
    label{YType::str, "label"},
    non_exportable{YType::empty, "non-exportable"},
    on{YType::str, "on"},
    redundancy{YType::empty, "redundancy"},
    storage{YType::str, "storage"}
{
    yang_name = "rsa"; yang_parent_name = "move";
}

Native::Crypto::Key::Move::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::Move::Rsa::has_data() const
{
    return label.is_set
	|| non_exportable.is_set
	|| on.is_set
	|| redundancy.is_set
	|| storage.is_set;
}

bool Native::Crypto::Key::Move::Rsa::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(non_exportable.operation)
	|| is_set(on.operation)
	|| is_set(redundancy.operation)
	|| is_set(storage.operation);
}

std::string Native::Crypto::Key::Move::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Move::Rsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/move/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (non_exportable.is_set || is_set(non_exportable.operation)) leaf_name_data.push_back(non_exportable.get_name_leafdata());
    if (on.is_set || is_set(on.operation)) leaf_name_data.push_back(on.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (storage.is_set || is_set(storage.operation)) leaf_name_data.push_back(storage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::Move::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::Move::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::Move::Rsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "non-exportable")
    {
        non_exportable = value;
    }
    if(value_path == "on")
    {
        on = value;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
    if(value_path == "storage")
    {
        storage = value;
    }
}

Native::Crypto::Key::PubkeyChain::PubkeyChain()
    :
    rsa(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>())
{
    rsa->parent = this;

    yang_name = "pubkey-chain"; yang_parent_name = "key";
}

Native::Crypto::Key::PubkeyChain::~PubkeyChain()
{
}

bool Native::Crypto::Key::PubkeyChain::has_data() const
{
    return (rsa !=  nullptr && rsa->has_data());
}

bool Native::Crypto::Key::PubkeyChain::has_operation() const
{
    return is_set(operation)
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::PubkeyChain::Rsa::Rsa()
    :
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_>())
{
    default_->parent = this;

    yang_name = "rsa"; yang_parent_name = "pubkey-chain";
}

Native::Crypto::Key::PubkeyChain::Rsa::~Rsa()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_data() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        for(auto const & c : addressed_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey>();
        c->parent = this;
        addressed_key.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "named-key")
    {
        for(auto const & c : named_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey>();
        c->parent = this;
        named_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addressed_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : named_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"},
    use{YType::enumeration, "use"}
    	,
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_>())
	,key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>())
{
    default_->parent = this;

    key_string->parent = this;

    yang_name = "addressed-key"; yang_parent_name = "rsa";
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::~AddressedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_data() const
{
    return ip.is_set
	|| address.is_set
	|| serial_number.is_set
	|| use.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(address.operation)
	|| is_set(serial_number.operation)
	|| is_set(use.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (use.is_set || is_set(use.operation)) leaf_name_data.push_back(use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "use")
    {
        use = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{
    yang_name = "key-string"; yang_parent_name = "addressed-key";
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_data() const
{
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(hex_data.operation)
	|| is_set(quit.operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.operation)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.operation)) leaf_name_data.push_back(quit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
    }
    if(value_path == "quit")
    {
        quit = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::Default_()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
    	,
    key_string(nullptr) // presence node
{
    yang_name = "default"; yang_parent_name = "addressed-key";
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::~Default_()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::has_data() const
{
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(serial_number.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::KeyString()
{
    yang_name = "key-string"; yang_parent_name = "default";
}

Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::has_data() const
{
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::Default_::KeyString::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    address{YType::str, "address"},
    serial_number{YType::str, "serial-number"},
    use{YType::enumeration, "use"}
    	,
    default_(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_>())
	,key_string(std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>())
{
    default_->parent = this;

    key_string->parent = this;

    yang_name = "named-key"; yang_parent_name = "rsa";
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::~NamedKey()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_data() const
{
    return name.is_set
	|| address.is_set
	|| serial_number.is_set
	|| use.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(address.operation)
	|| is_set(serial_number.operation)
	|| is_set(use.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (use.is_set || is_set(use.operation)) leaf_name_data.push_back(use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "use")
    {
        use = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::KeyString()
    :
    hex_data{YType::str, "hex-data"},
    quit{YType::empty, "quit"}
{
    yang_name = "key-string"; yang_parent_name = "named-key";
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_data() const
{
    return hex_data.is_set
	|| quit.is_set;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(hex_data.operation)
	|| is_set(quit.operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_data.is_set || is_set(hex_data.operation)) leaf_name_data.push_back(hex_data.get_name_leafdata());
    if (quit.is_set || is_set(quit.operation)) leaf_name_data.push_back(quit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hex-data")
    {
        hex_data = value;
    }
    if(value_path == "quit")
    {
        quit = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::Default_()
    :
    address{YType::empty, "address"},
    serial_number{YType::empty, "serial-number"}
    	,
    key_string(nullptr) // presence node
{
    yang_name = "default"; yang_parent_name = "named-key";
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::~Default_()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::has_data() const
{
    return address.is_set
	|| serial_number.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(serial_number.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::KeyString()
{
    yang_name = "key-string"; yang_parent_name = "default";
}

Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::~KeyString()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::has_data() const
{
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::Default_::KeyString::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::Default_()
{
    yang_name = "default"; yang_parent_name = "rsa";
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::~Default_()
{
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::has_data() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Key::PubkeyChain::Rsa::Default_::has_operation() const
{
    for (std::size_t index=0; index<addressed_key.size(); index++)
    {
        if(addressed_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<named_key.size(); index++)
    {
        if(named_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressed-key")
    {
        for(auto const & c : addressed_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey>();
        c->parent = this;
        addressed_key.push_back(c);
        return c;
    }

    if(child_yang_name == "named-key")
    {
        for(auto const & c : named_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey>();
        c->parent = this;
        named_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Key::PubkeyChain::Rsa::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addressed_key)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : named_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::AddressedKey()
    :
    ip{YType::str, "ip"},
    use{YType::enumeration, "use"}
{
    yang_name = "addressed-key"; yang_parent_name = "default";
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
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(use.operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressed-key" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (use.is_set || is_set(use.operation)) leaf_name_data.push_back(use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "use")
    {
        use = value;
    }
}

Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::NamedKey()
    :
    name{YType::str, "name"},
    use{YType::enumeration, "use"}
{
    yang_name = "named-key"; yang_parent_name = "default";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(use.operation);
}

std::string Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-key" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/pubkey-chain/rsa/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (use.is_set || is_set(use.operation)) leaf_name_data.push_back(use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "use")
    {
        use = value;
    }
}

Native::Crypto::Key::Zeroize::Zeroize()
    :
    ec(nullptr) // presence node
	,pubkey_chain(nullptr) // presence node
	,rsa(nullptr) // presence node
{
    yang_name = "zeroize"; yang_parent_name = "key";
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
    return is_set(operation)
	|| (ec !=  nullptr && ec->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Crypto::Key::Zeroize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zeroize";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Zeroize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Key::Zeroize::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Key::Zeroize::Ec::Ec()
    :
    label{YType::str, "label"}
{
    yang_name = "ec"; yang_parent_name = "zeroize";
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
    return is_set(operation)
	|| is_set(label.operation);
}

std::string Native::Crypto::Key::Zeroize::Ec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Zeroize::Ec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Key::Zeroize::Ec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Crypto::Key::Zeroize::PubkeyChain::PubkeyChain()
    :
    index_{YType::uint16, "index"}
{
    yang_name = "pubkey-chain"; yang_parent_name = "zeroize";
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
    return is_set(operation)
	|| is_set(index_.operation);
}

std::string Native::Crypto::Key::Zeroize::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Zeroize::PubkeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Key::Zeroize::PubkeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Native::Crypto::Key::Zeroize::Rsa::Rsa()
    :
    label{YType::str, "label"}
{
    yang_name = "rsa"; yang_parent_name = "zeroize";
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
    return is_set(operation)
	|| is_set(label.operation);
}

std::string Native::Crypto::Key::Zeroize::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Key::Zeroize::Rsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:key/zeroize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Key::Zeroize::Rsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
}

Native::Crypto::Keyring::Keyring()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Crypto::Keyring::Default_>())
	,pre_shared_key(std::make_shared<Native::Crypto::Keyring::PreSharedKey>())
	,rsa_pubkey(std::make_shared<Native::Crypto::Keyring::RsaPubkey>())
{
    default_->parent = this;

    pre_shared_key->parent = this;

    rsa_pubkey->parent = this;

    yang_name = "keyring"; yang_parent_name = "crypto";
}

Native::Crypto::Keyring::~Keyring()
{
}

bool Native::Crypto::Keyring::has_data() const
{
    return name.is_set
	|| description.is_set
	|| local_address.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_data());
}

bool Native::Crypto::Keyring::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(vrf.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:keyring" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
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

    yang_name = "default"; yang_parent_name = "keyring";
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
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation())
	|| (rsa_pubkey !=  nullptr && rsa_pubkey->has_operation());
}

std::string Native::Crypto::Keyring::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
}

Native::Crypto::Keyring::Default_::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Address>())
	,hostname(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Hostname>())
	,ipv4_addr(std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr>())
{
    address->parent = this;

    hostname->parent = this;

    ipv4_addr->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "default";
}

Native::Crypto::Keyring::Default_::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_data());
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_operation());
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::PreSharedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreSharedKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "ipv4-addr")
    {
        if(ipv4_addr == nullptr)
        {
            ipv4_addr = std::make_shared<Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr>();
        }
        return ipv4_addr;
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

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(ipv4_addr != nullptr)
    {
        children["ipv4-addr"] = ipv4_addr;
    }

    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::Ipv4Addr()
    :
    address{YType::str, "address"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    mask{YType::str, "mask"},
    unencryt_key{YType::str, "unencryt-key"}
{
    yang_name = "ipv4-addr"; yang_parent_name = "pre-shared-key";
}

Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::has_data() const
{
    return address.is_set
	|| encryption.is_set
	|| key.is_set
	|| mask.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation)
	|| is_set(mask.operation)
	|| is_set(unencryt_key.operation);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.operation)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
    }
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::Address()
    :
    encryption{YType::enumeration, "encryption"},
    ipv6{YType::str, "ipv6"},
    key{YType::empty, "key"},
    unencryt_key{YType::str, "unencryt-key"}
{
    yang_name = "address"; yang_parent_name = "pre-shared-key";
}

Native::Crypto::Keyring::Default_::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_data() const
{
    return encryption.is_set
	|| ipv6.is_set
	|| key.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(ipv6.operation)
	|| is_set(key.operation)
	|| is_set(unencryt_key.operation);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.operation)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::Default_::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::Default_::PreSharedKey::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
    }
}

Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::Hostname()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    name{YType::str, "name"},
    unencryt_key{YType::str, "unencryt-key"}
{
    yang_name = "hostname"; yang_parent_name = "pre-shared-key";
}

Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_data() const
{
    return encryption.is_set
	|| key.is_set
	|| name.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation)
	|| is_set(name.operation)
	|| is_set(unencryt_key.operation);
}

std::string Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.operation)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
    }
}

Native::Crypto::Keyring::Default_::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::Default_::RsaPubkey::Hostname>())
{
    addr->parent = this;

    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "default";
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
    return is_set(operation)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::RsaPubkey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RsaPubkey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::Default_::RsaPubkey::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Keyring::Default_::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{
    yang_name = "addr"; yang_parent_name = "rsa-pubkey";
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
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(way.operation);
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::RsaPubkey::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.operation)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::Default_::RsaPubkey::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "way")
    {
        way = value;
    }
}

Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{
    yang_name = "hostname"; yang_parent_name = "rsa-pubkey";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(way.operation);
}

std::string Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.operation)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "way")
    {
        way = value;
    }
}

Native::Crypto::Keyring::PreSharedKey::PreSharedKey()
    :
    address(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Address>())
	,hostname(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Hostname>())
	,ipv4_addr(std::make_shared<Native::Crypto::Keyring::PreSharedKey::Ipv4Addr>())
{
    address->parent = this;

    hostname->parent = this;

    ipv4_addr->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "keyring";
}

Native::Crypto::Keyring::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Keyring::PreSharedKey::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_data());
}

bool Native::Crypto::Keyring::PreSharedKey::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (ipv4_addr !=  nullptr && ipv4_addr->has_operation());
}

std::string Native::Crypto::Keyring::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::PreSharedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreSharedKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "ipv4-addr")
    {
        if(ipv4_addr == nullptr)
        {
            ipv4_addr = std::make_shared<Native::Crypto::Keyring::PreSharedKey::Ipv4Addr>();
        }
        return ipv4_addr;
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

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(ipv4_addr != nullptr)
    {
        children["ipv4-addr"] = ipv4_addr;
    }

    return children;
}

void Native::Crypto::Keyring::PreSharedKey::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::Ipv4Addr()
    :
    address{YType::str, "address"},
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    mask{YType::str, "mask"},
    unencryt_key{YType::str, "unencryt-key"}
{
    yang_name = "ipv4-addr"; yang_parent_name = "pre-shared-key";
}

Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::~Ipv4Addr()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::has_data() const
{
    return address.is_set
	|| encryption.is_set
	|| key.is_set
	|| mask.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation)
	|| is_set(mask.operation)
	|| is_set(unencryt_key.operation);
}

std::string Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Addr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.operation)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
    }
}

Native::Crypto::Keyring::PreSharedKey::Address::Address()
    :
    encryption{YType::enumeration, "encryption"},
    ipv6{YType::str, "ipv6"},
    key{YType::empty, "key"},
    unencryt_key{YType::str, "unencryt-key"}
{
    yang_name = "address"; yang_parent_name = "pre-shared-key";
}

Native::Crypto::Keyring::PreSharedKey::Address::~Address()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_data() const
{
    return encryption.is_set
	|| ipv6.is_set
	|| key.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(ipv6.operation)
	|| is_set(key.operation)
	|| is_set(unencryt_key.operation);
}

std::string Native::Crypto::Keyring::PreSharedKey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::PreSharedKey::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.operation)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Keyring::PreSharedKey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Keyring::PreSharedKey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Keyring::PreSharedKey::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
    }
}

Native::Crypto::Keyring::PreSharedKey::Hostname::Hostname()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::empty, "key"},
    name{YType::str, "name"},
    unencryt_key{YType::str, "unencryt-key"}
{
    yang_name = "hostname"; yang_parent_name = "pre-shared-key";
}

Native::Crypto::Keyring::PreSharedKey::Hostname::~Hostname()
{
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_data() const
{
    return encryption.is_set
	|| key.is_set
	|| name.is_set
	|| unencryt_key.is_set;
}

bool Native::Crypto::Keyring::PreSharedKey::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation)
	|| is_set(name.operation)
	|| is_set(unencryt_key.operation);
}

std::string Native::Crypto::Keyring::PreSharedKey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::PreSharedKey::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (unencryt_key.is_set || is_set(unencryt_key.operation)) leaf_name_data.push_back(unencryt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::PreSharedKey::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "unencryt-key")
    {
        unencryt_key = value;
    }
}

Native::Crypto::Keyring::RsaPubkey::RsaPubkey()
    :
    addr(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Addr>())
	,hostname(std::make_shared<Native::Crypto::Keyring::RsaPubkey::Hostname>())
{
    addr->parent = this;

    hostname->parent = this;

    yang_name = "rsa-pubkey"; yang_parent_name = "keyring";
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
    return is_set(operation)
	|| (addr !=  nullptr && addr->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Keyring::RsaPubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa-pubkey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::RsaPubkey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RsaPubkey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::RsaPubkey::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Keyring::RsaPubkey::Addr::Addr()
    :
    address{YType::str, "address"},
    way{YType::enumeration, "way"}
{
    yang_name = "addr"; yang_parent_name = "rsa-pubkey";
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
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(way.operation);
}

std::string Native::Crypto::Keyring::RsaPubkey::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::RsaPubkey::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (way.is_set || is_set(way.operation)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::RsaPubkey::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "way")
    {
        way = value;
    }
}

Native::Crypto::Keyring::RsaPubkey::Hostname::Hostname()
    :
    name{YType::str, "name"},
    way{YType::enumeration, "way"}
{
    yang_name = "hostname"; yang_parent_name = "rsa-pubkey";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(way.operation);
}

std::string Native::Crypto::Keyring::RsaPubkey::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Keyring::RsaPubkey::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (way.is_set || is_set(way.operation)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Keyring::RsaPubkey::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "way")
    {
        way = value;
    }
}

Native::Crypto::Logging::Logging()
    :
    ikev2{YType::empty, "ikev2"},
    session{YType::empty, "session"}
    	,
    ezvpn(nullptr) // presence node
{
    yang_name = "logging"; yang_parent_name = "crypto";
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
    return is_set(operation)
	|| is_set(ikev2.operation)
	|| is_set(session.operation)
	|| (ezvpn !=  nullptr && ezvpn->has_operation());
}

std::string Native::Crypto::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:logging";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ikev2.is_set || is_set(ikev2.operation)) leaf_name_data.push_back(ikev2.get_name_leafdata());
    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ikev2")
    {
        ikev2 = value;
    }
    if(value_path == "session")
    {
        session = value;
    }
}

Native::Crypto::Logging::Ezvpn::Ezvpn()
    :
    group{YType::str, "group"}
{
    yang_name = "ezvpn"; yang_parent_name = "logging";
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
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Crypto::Logging::Ezvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ezvpn";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Logging::Ezvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Logging::Ezvpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Crypto::MapIpv6::MapIpv6()
{
    yang_name = "map-ipv6"; yang_parent_name = "crypto";
}

Native::Crypto::MapIpv6::~MapIpv6()
{
}

bool Native::Crypto::MapIpv6::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::MapIpv6::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::MapIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-ipv6";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Crypto::MapIpv6::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::MapIpv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapIpv6::Map::Map()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dynamic{YType::str, "dynamic"},
    ipv6{YType::empty, "ipv6"},
    keying{YType::enumeration, "keying"},
    profile{YType::str, "profile"},
    sequence_number{YType::uint16, "sequence-number"}
    	,
    default_(std::make_shared<Native::Crypto::MapIpv6::Map::Default_>())
	,dialer(std::make_shared<Native::Crypto::MapIpv6::Map::Dialer>())
	,match(std::make_shared<Native::Crypto::MapIpv6::Map::Match>())
	,qos(std::make_shared<Native::Crypto::MapIpv6::Map::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::MapIpv6::Map::Set>())
{
    default_->parent = this;

    dialer->parent = this;

    match->parent = this;

    qos->parent = this;

    set->parent = this;

    yang_name = "map"; yang_parent_name = "map-ipv6";
}

Native::Crypto::MapIpv6::Map::~Map()
{
}

bool Native::Crypto::MapIpv6::Map::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dynamic.is_set
	|| ipv6.is_set
	|| keying.is_set
	|| profile.is_set
	|| sequence_number.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::MapIpv6::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(dynamic.operation)
	|| is_set(ipv6.operation)
	|| is_set(keying.operation)
	|| is_set(profile.operation)
	|| is_set(sequence_number.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (keying.is_set || is_set(keying.operation)) leaf_name_data.push_back(keying.get_name_leafdata());
    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::MapIpv6::Map::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::MapIpv6::Map::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6::Map::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::MapIpv6::Map::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::MapIpv6::Map::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::MapIpv6::Map::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::get_children() const
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

void Native::Crypto::MapIpv6::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "keying")
    {
        keying = value;
    }
    if(value_path == "profile")
    {
        profile = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Dialer>())
	,match(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Match>())
	,qos(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set>())
{
    dialer->parent = this;

    match->parent = this;

    qos->parent = this;

    set->parent = this;

    yang_name = "default"; yang_parent_name = "map";
}

Native::Crypto::MapIpv6::Map::Default_::~Default_()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::MapIpv6::Map::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::get_children() const
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

void Native::Crypto::MapIpv6::Map::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "dialer"; yang_parent_name = "default";
}

Native::Crypto::MapIpv6::Map::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::MapIpv6::Map::Default_::Dialer::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Dialer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dialer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Dialer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{
    yang_name = "match"; yang_parent_name = "default";
}

Native::Crypto::MapIpv6::Map::Default_::Match::~Match()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6::Map::Default_::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "qos"; yang_parent_name = "default";
}

Native::Crypto::MapIpv6::Map::Default_::Qos::~Qos()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::MapIpv6::Map::Default_::Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::ReverseRoute()
{
    yang_name = "reverse-route"; yang_parent_name = "default";
}

Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapIpv6::Map::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default";
}

Native::Crypto::MapIpv6::Map::Default_::Set::~Set()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::has_data() const
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

bool Native::Crypto::MapIpv6::Map::Default_::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(identity.operation)
	|| is_set(ikev2_profile.operation)
	|| is_set(isakmp_profile.operation)
	|| is_set(transform_set.operation)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.operation)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.operation)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.operation)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.operation)) leaf_name_data.push_back(transform_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::get_children() const
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

void Native::Crypto::MapIpv6::Map::Default_::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "identity")
    {
        identity = value;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::Pfs()
{
    yang_name = "pfs"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Set::Pfs::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::ReverseRoute()
{
    yang_name = "reverse-route"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Set::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(dfbit.operation)
	|| is_set(ecn.operation)
	|| is_set(level.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.operation)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.operation)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::get_children() const
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

void Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
    }
    if(value_path == "ecn")
    {
        ecn = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::Dummy()
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dummy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::empty, "idle-time"}
{
    yang_name = "idle-time-container"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(idle_time.operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(kilobytes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.operation)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{
    yang_name = "replay"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(window_size.operation);
}

std::string Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Crypto::MapIpv6::Map::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "dialer"; yang_parent_name = "map";
}

Native::Crypto::MapIpv6::Map::Dialer::~Dialer()
{
}

bool Native::Crypto::MapIpv6::Map::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::MapIpv6::Map::Dialer::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::MapIpv6::Map::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Dialer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dialer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Dialer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::MapIpv6::Map::Match::Match()
    :
    address{YType::str, "address"}
{
    yang_name = "match"; yang_parent_name = "map";
}

Native::Crypto::MapIpv6::Map::Match::~Match()
{
}

bool Native::Crypto::MapIpv6::Map::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::MapIpv6::Map::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Crypto::MapIpv6::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Crypto::MapIpv6::Map::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{
    yang_name = "qos"; yang_parent_name = "map";
}

Native::Crypto::MapIpv6::Map::Qos::~Qos()
{
}

bool Native::Crypto::MapIpv6::Map::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::MapIpv6::Map::Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(pre_classify.operation);
}

std::string Native::Crypto::MapIpv6::Map::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.operation)) leaf_name_data.push_back(pre_classify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
    }
}

Native::Crypto::MapIpv6::Map::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "map";
}

Native::Crypto::MapIpv6::Map::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::MapIpv6::Map::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::MapIpv6::Map::ReverseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(static_.operation)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::MapIpv6::Map::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    gateway{YType::empty, "gateway"},
    remote_peer{YType::str, "remote-peer"},
    static_{YType::empty, "static"}
{
    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route";
}

Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::has_data() const
{
    return gateway.is_set
	|| remote_peer.is_set
	|| static_.is_set;
}

bool Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(operation)
	|| is_set(gateway.operation)
	|| is_set(remote_peer.operation)
	|| is_set(static_.operation);
}

std::string Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePeerConatiner' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (remote_peer.is_set || is_set(remote_peer.operation)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "remote-peer")
    {
        remote_peer = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::MapIpv6::Map::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::MapIpv6::Map::Set::ReverseRoute>())
	,security_association(std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation>())
{
    peer->parent = this;

    reverse_route->parent = this;

    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "map";
}

Native::Crypto::MapIpv6::Map::Set::~Set()
{
}

bool Native::Crypto::MapIpv6::Map::Set::has_data() const
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

bool Native::Crypto::MapIpv6::Map::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(group.operation)
	|| is_set(identity.operation)
	|| is_set(ikev2_profile.operation)
	|| is_set(isakmp_profile.operation)
	|| is_set(transform_set.operation)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.operation)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.operation)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.operation)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::MapIpv6::Map::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::MapIpv6::Map::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::MapIpv6::Map::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::get_children() const
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

void Native::Crypto::MapIpv6::Map::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "identity")
    {
        identity = value;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

Native::Crypto::MapIpv6::Map::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{
    yang_name = "peer"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Set::Peer::~Peer()
{
}

bool Native::Crypto::MapIpv6::Map::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(default_.operation)
	|| is_set(dynamic.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{
    yang_name = "pfs"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::MapIpv6::Map::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::Pfs::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::Pfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::Pfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{
    yang_name = "reverse-route"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::MapIpv6::Map::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::ReverseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(tag.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::ReverseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseRoute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::ReverseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;

    idle_time_container->parent = this;

    lifetime->parent = this;

    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set";
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(dfbit.operation)
	|| is_set(ecn.operation)
	|| is_set(level.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityAssociation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.operation)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.operation)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::get_children() const
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

void Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
    }
    if(value_path == "ecn")
    {
        ecn = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "dummy"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(pps.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dummy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.operation)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pps")
    {
        pps = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::uint32, "idle-time"}
{
    yang_name = "idle-time-container"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(idle_time.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleTimeContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(kilobytes.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.operation)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{
    yang_name = "replay"; yang_parent_name = "security-association";
}

Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(window_size.operation);
}

std::string Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Crypto::MapIpv6Gdoi::MapIpv6Gdoi()
{
    yang_name = "map-ipv6-gdoi"; yang_parent_name = "crypto";
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
    return is_set(operation);
}

std::string Native::Crypto::MapIpv6Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-ipv6-gdoi";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6Gdoi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapIpv6Gdoi::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapIpv6Gdoi::Map::Map()
    :
    name{YType::str, "name"},
    activate{YType::empty, "activate"},
    gdoi{YType::enumeration, "gdoi"},
    ipv6{YType::empty, "ipv6"}
    	,
    default_(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_>())
	,match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Match>())
{
    default_->parent = this;

    match->parent = this;

    yang_name = "map"; yang_parent_name = "map-ipv6-gdoi";
}

Native::Crypto::MapIpv6Gdoi::Map::~Map()
{
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_data() const
{
    return name.is_set
	|| activate.is_set
	|| gdoi.is_set
	|| ipv6.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::MapIpv6Gdoi::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(activate.operation)
	|| is_set(gdoi.operation)
	|| is_set(ipv6.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6Gdoi::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-ipv6-gdoi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.operation)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapIpv6Gdoi::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Default_()
    :
    activate{YType::empty, "activate"}
    	,
    match(std::make_shared<Native::Crypto::MapIpv6Gdoi::Map::Default_::Match>())
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(activate.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6Gdoi::Map::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapIpv6Gdoi::Map::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activate")
    {
        activate = value;
    }
}

Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{
    yang_name = "match"; yang_parent_name = "default";
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
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapIpv6Gdoi::Map::Default_::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Crypto::MapIpv6Gdoi::Map::Match::Match()
    :
    address{YType::str, "address"}
{
    yang_name = "match"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Crypto::MapIpv6Gdoi::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapIpv6Gdoi::Map::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapIpv6Gdoi::Map::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Crypto::MapClient::MapClient()
{
    yang_name = "map-client"; yang_parent_name = "crypto";
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
    return is_set(operation);
}

std::string Native::Crypto::MapClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:map-client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "map"; yang_parent_name = "map-client";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(ipv6.operation)
	|| is_set(isakmp_profile.operation)
	|| is_set(local_address.operation)
	|| (client !=  nullptr && client->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Crypto::MapClient::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:map-client/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.operation)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
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

    yang_name = "client"; yang_parent_name = "map";
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
    return is_set(operation)
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

const EntityPath Native::Crypto::MapClient::Map::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Client::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapClient::Map::Client::Accounting::Accounting()
    :
    list{YType::str, "list"}
{
    yang_name = "accounting"; yang_parent_name = "client";
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
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Crypto::MapClient::Map::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Client::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Client::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Crypto::MapClient::Map::Client::Authentication::Authentication()
    :
    list{YType::str, "list"}
{
    yang_name = "authentication"; yang_parent_name = "client";
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
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Crypto::MapClient::Map::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Client::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Client::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Crypto::MapClient::Map::Client::Configuration::Configuration()
    :
    address(std::make_shared<Native::Crypto::MapClient::Map::Client::Configuration::Address>())
{
    address->parent = this;

    yang_name = "configuration"; yang_parent_name = "client";
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
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Client::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Client::Configuration::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapClient::Map::Client::Configuration::Address::Address()
    :
    initiate{YType::empty, "initiate"},
    respond{YType::empty, "respond"}
{
    yang_name = "address"; yang_parent_name = "configuration";
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
    return is_set(operation)
	|| is_set(initiate.operation)
	|| is_set(respond.operation);
}

std::string Native::Crypto::MapClient::Map::Client::Configuration::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Client::Configuration::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initiate.is_set || is_set(initiate.operation)) leaf_name_data.push_back(initiate.get_name_leafdata());
    if (respond.is_set || is_set(respond.operation)) leaf_name_data.push_back(respond.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Client::Configuration::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initiate")
    {
        initiate = value;
    }
    if(value_path == "respond")
    {
        respond = value;
    }
}

Native::Crypto::MapClient::Map::Isakmp::Isakmp()
    :
    authorization{YType::empty, "authorization"},
    list{YType::str, "list"}
{
    yang_name = "isakmp"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(authorization.operation)
	|| is_set(list.operation);
}

std::string Native::Crypto::MapClient::Map::Isakmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isakmp";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Isakmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isakmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization.is_set || is_set(authorization.operation)) leaf_name_data.push_back(authorization.get_name_leafdata());
    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Isakmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authorization")
    {
        authorization = value;
    }
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Crypto::MapClient::Map::Redundancy::Redundancy()
    :
    replay_interval(std::make_shared<Native::Crypto::MapClient::Map::Redundancy::ReplayInterval>())
{
    replay_interval->parent = this;

    yang_name = "redundancy"; yang_parent_name = "map";
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
    return is_set(operation)
	|| (replay_interval !=  nullptr && replay_interval->has_operation());
}

std::string Native::Crypto::MapClient::Map::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Redundancy::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::ReplayInterval()
    :
    inbound{YType::uint32, "inbound"},
    outbound{YType::uint32, "outbound"}
{
    yang_name = "replay-interval"; yang_parent_name = "redundancy";
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
    return is_set(operation)
	|| is_set(inbound.operation)
	|| is_set(outbound.operation);
}

std::string Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-interval";

    return path_buffer.str();

}

const EntityPath Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReplayInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.operation)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.operation)) leaf_name_data.push_back(outbound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::MapClient::Map::Redundancy::ReplayInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound")
    {
        inbound = value;
    }
    if(value_path == "outbound")
    {
        outbound = value;
    }
}

Native::Crypto::Mib::Mib()
    :
    ipsec(std::make_shared<Native::Crypto::Mib::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "mib"; yang_parent_name = "crypto";
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
    return is_set(operation)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:mib";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Mib::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Mib::Ipsec::Ipsec()
    :
    flowmib(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib>())
{
    flowmib->parent = this;

    yang_name = "ipsec"; yang_parent_name = "mib";
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
    return is_set(operation)
	|| (flowmib !=  nullptr && flowmib->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Mib::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Mib::Ipsec::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Mib::Ipsec::Flowmib::Flowmib()
    :
    history(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History>())
{
    history->parent = this;

    yang_name = "flowmib"; yang_parent_name = "ipsec";
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
    return is_set(operation)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowmib";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Mib::Ipsec::Flowmib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Mib::Ipsec::Flowmib::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Mib::Ipsec::Flowmib::History::History()
    :
    failure(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Failure>())
	,tunnel(std::make_shared<Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel>())
{
    failure->parent = this;

    tunnel->parent = this;

    yang_name = "history"; yang_parent_name = "flowmib";
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
    return is_set(operation)
	|| (failure !=  nullptr && failure->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Mib::Ipsec::Flowmib::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Mib::Ipsec::Flowmib::History::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::Failure()
    :
    size{YType::uint8, "size"}
{
    yang_name = "failure"; yang_parent_name = "history";
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
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Mib::Ipsec::Flowmib::History::Failure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::Tunnel()
    :
    size{YType::uint8, "size"}
{
    yang_name = "tunnel"; yang_parent_name = "history";
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
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:mib/ipsec/flowmib/history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Mib::Ipsec::Flowmib::History::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Crypto::Pki::Pki()
    :
    authenticate{YType::str, "authenticate"},
    enroll{YType::str, "enroll"}
    	,
    certificate(std::make_shared<Native::Crypto::Pki::Certificate>())
	,crl(std::make_shared<Native::Crypto::Pki::Crl>())
	,default_(std::make_shared<Native::Crypto::Pki::Default_>())
	,profile(std::make_shared<Native::Crypto::Pki::Profile>())
	,server(std::make_shared<Native::Crypto::Pki::Server>())
	,token(std::make_shared<Native::Crypto::Pki::Token>())
	,trustpool(std::make_shared<Native::Crypto::Pki::Trustpool>())
{
    certificate->parent = this;

    crl->parent = this;

    default_->parent = this;

    profile->parent = this;

    server->parent = this;

    token->parent = this;

    trustpool->parent = this;

    yang_name = "pki"; yang_parent_name = "crypto";
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
	|| (default_ !=  nullptr && default_->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (token !=  nullptr && token->has_data())
	|| (trustpool !=  nullptr && trustpool->has_data());
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
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(enroll.operation)
	|| (certificate !=  nullptr && certificate->has_operation())
	|| (crl !=  nullptr && crl->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (token !=  nullptr && token->has_operation())
	|| (trustpool !=  nullptr && trustpool->has_operation());
}

std::string Native::Crypto::Pki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:pki";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (enroll.is_set || is_set(enroll.operation)) leaf_name_data.push_back(enroll.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Default_>();
        }
        return default_;
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

    if(child_yang_name == "token")
    {
        if(token == nullptr)
        {
            token = std::make_shared<Native::Crypto::Pki::Token>();
        }
        return token;
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

    if(child_yang_name == "trustpool")
    {
        if(trustpool == nullptr)
        {
            trustpool = std::make_shared<Native::Crypto::Pki::Trustpool>();
        }
        return trustpool;
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

    if(default_ != nullptr)
    {
        children["default"] = default_;
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

    if(token != nullptr)
    {
        children["token"] = token;
    }

    for (auto const & c : trustpoint)
    {
        children[c->get_segment_path()] = c;
    }

    if(trustpool != nullptr)
    {
        children["trustpool"] = trustpool;
    }

    return children;
}

void Native::Crypto::Pki::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "enroll")
    {
        enroll = value;
    }
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

    yang_name = "certificate"; yang_parent_name = "pki";
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
    return is_set(operation)
	|| is_set(pool.operation)
	|| is_set(query.operation)
	|| is_set(validate.operation)
	|| (storage !=  nullptr && storage->has_operation());
}

std::string Native::Crypto::Pki::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool.is_set || is_set(pool.operation)) leaf_name_data.push_back(pool.get_name_leafdata());
    if (query.is_set || is_set(query.operation)) leaf_name_data.push_back(query.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool")
    {
        pool = value;
    }
    if(value_path == "query")
    {
        query = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

Native::Crypto::Pki::Certificate::Chain::Chain()
    :
    name{YType::str, "name"}
{
    yang_name = "chain"; yang_parent_name = "certificate";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Crypto::Pki::Certificate::Chain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chain" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Chain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Chain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Crypto::Pki::Certificate::Chain::Certificate_::Certificate_()
    :
    serial{YType::str, "serial"},
    certtype{YType::enumeration, "certtype"}
{
    yang_name = "certificate"; yang_parent_name = "chain";
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
    return is_set(operation)
	|| is_set(serial.operation)
	|| is_set(certtype.operation);
}

std::string Native::Crypto::Pki::Certificate::Chain::Certificate_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate" <<"[serial='" <<serial <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Chain::Certificate_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Certificate_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (certtype.is_set || is_set(certtype.operation)) leaf_name_data.push_back(certtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Chain::Certificate_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "serial")
    {
        serial = value;
    }
    if(value_path == "certtype")
    {
        certtype = value;
    }
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

    yang_name = "map"; yang_parent_name = "certificate";
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
    return is_set(operation)
	|| is_set(tag.operation)
	|| is_set(sequence.operation)
	|| (alt_subject_name !=  nullptr && alt_subject_name->has_operation())
	|| (expires_on !=  nullptr && expires_on->has_operation())
	|| (issuer_name !=  nullptr && issuer_name->has_operation())
	|| (name !=  nullptr && name->has_operation())
	|| (serial_number !=  nullptr && serial_number->has_operation())
	|| (subject_name !=  nullptr && subject_name->has_operation())
	|| (unstructured_subject_name !=  nullptr && unstructured_subject_name->has_operation())
	|| (valid_start !=  nullptr && valid_start->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[tag='" <<tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "sequence")
    {
        sequence = value;
    }
}

Native::Crypto::Pki::Certificate::Map::AltSubjectName::AltSubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{
    yang_name = "alt-subject-name"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(co.operation)
	|| is_set(eq.operation)
	|| is_set(nc.operation)
	|| is_set(ne.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alt-subject-name";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::AltSubjectName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AltSubjectName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.operation)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.operation)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.operation)) leaf_name_data.push_back(ne.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::AltSubjectName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "co")
    {
        co = value;
    }
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "nc")
    {
        nc = value;
    }
    if(value_path == "ne")
    {
        ne = value;
    }
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

    yang_name = "expires-on"; yang_parent_name = "map";
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
    return is_set(operation)
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

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExpiresOn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Eq()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time>())
{
    time->parent = this;

    yang_name = "eq"; yang_parent_name = "expires-on";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eq";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eq' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "eq";
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Eq::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Ge()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time>())
{
    time->parent = this;

    yang_name = "ge"; yang_parent_name = "expires-on";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ge";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ge' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "ge";
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ge::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Lt()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time>())
{
    time->parent = this;

    yang_name = "lt"; yang_parent_name = "expires-on";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "lt";
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Lt::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Ne()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time>())
{
    time->parent = this;

    yang_name = "ne"; yang_parent_name = "expires-on";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ne";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ne' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "ne";
}

Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ExpiresOn::Ne::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::IssuerName::IssuerName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{
    yang_name = "issuer-name"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(co.operation)
	|| is_set(eq.operation)
	|| is_set(nc.operation)
	|| is_set(ne.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::IssuerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer-name";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::IssuerName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuerName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.operation)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.operation)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.operation)) leaf_name_data.push_back(ne.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::IssuerName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "co")
    {
        co = value;
    }
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "nc")
    {
        nc = value;
    }
    if(value_path == "ne")
    {
        ne = value;
    }
}

Native::Crypto::Pki::Certificate::Map::Name::Name()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{
    yang_name = "name"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(co.operation)
	|| is_set(eq.operation)
	|| is_set(nc.operation)
	|| is_set(ne.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.operation)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.operation)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.operation)) leaf_name_data.push_back(ne.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "co")
    {
        co = value;
    }
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "nc")
    {
        nc = value;
    }
    if(value_path == "ne")
    {
        ne = value;
    }
}

Native::Crypto::Pki::Certificate::Map::SerialNumber::SerialNumber()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{
    yang_name = "serial-number"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(co.operation)
	|| is_set(eq.operation)
	|| is_set(nc.operation)
	|| is_set(ne.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::SerialNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serial-number";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::SerialNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SerialNumber' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.operation)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.operation)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.operation)) leaf_name_data.push_back(ne.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::SerialNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "co")
    {
        co = value;
    }
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "nc")
    {
        nc = value;
    }
    if(value_path == "ne")
    {
        ne = value;
    }
}

Native::Crypto::Pki::Certificate::Map::SubjectName::SubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{
    yang_name = "subject-name"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(co.operation)
	|| is_set(eq.operation)
	|| is_set(nc.operation)
	|| is_set(ne.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::SubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subject-name";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::SubjectName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubjectName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.operation)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.operation)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.operation)) leaf_name_data.push_back(ne.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::SubjectName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "co")
    {
        co = value;
    }
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "nc")
    {
        nc = value;
    }
    if(value_path == "ne")
    {
        ne = value;
    }
}

Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::UnstructuredSubjectName()
    :
    co{YType::str, "co"},
    eq{YType::str, "eq"},
    nc{YType::str, "nc"},
    ne{YType::str, "ne"}
{
    yang_name = "unstructured-subject-name"; yang_parent_name = "map";
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
    return is_set(operation)
	|| is_set(co.operation)
	|| is_set(eq.operation)
	|| is_set(nc.operation)
	|| is_set(ne.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unstructured-subject-name";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnstructuredSubjectName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (co.is_set || is_set(co.operation)) leaf_name_data.push_back(co.get_name_leafdata());
    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (nc.is_set || is_set(nc.operation)) leaf_name_data.push_back(nc.get_name_leafdata());
    if (ne.is_set || is_set(ne.operation)) leaf_name_data.push_back(ne.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::UnstructuredSubjectName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "co")
    {
        co = value;
    }
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "nc")
    {
        nc = value;
    }
    if(value_path == "ne")
    {
        ne = value;
    }
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

    yang_name = "valid-start"; yang_parent_name = "map";
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
    return is_set(operation)
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

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ValidStart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Eq()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time>())
{
    time->parent = this;

    yang_name = "eq"; yang_parent_name = "valid-start";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eq";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eq' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "eq";
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Eq::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Ge()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time>())
{
    time->parent = this;

    yang_name = "ge"; yang_parent_name = "valid-start";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ge";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ge' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "ge";
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ge::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Lt()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time>())
{
    time->parent = this;

    yang_name = "lt"; yang_parent_name = "valid-start";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lt";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "lt";
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Lt::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Ne()
    :
    time(std::make_shared<Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time>())
{
    time->parent = this;

    yang_name = "ne"; yang_parent_name = "valid-start";
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
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ne";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ne' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::Time()
    :
    clock{YType::str, "clock"},
    date1{YType::uint8, "date1"},
    date2{YType::uint8, "date2"},
    month1{YType::str, "month1"},
    month2{YType::str, "month2"},
    utc{YType::empty, "utc"},
    year{YType::uint16, "year"}
{
    yang_name = "time"; yang_parent_name = "ne";
}

Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::~Time()
{
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_data() const
{
    return clock.is_set
	|| date1.is_set
	|| date2.is_set
	|| month1.is_set
	|| month2.is_set
	|| utc.is_set
	|| year.is_set;
}

bool Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date1.operation)
	|| is_set(date2.operation)
	|| is_set(month1.operation)
	|| is_set(month2.operation)
	|| is_set(utc.operation)
	|| is_set(year.operation);
}

std::string Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date1.is_set || is_set(date1.operation)) leaf_name_data.push_back(date1.get_name_leafdata());
    if (date2.is_set || is_set(date2.operation)) leaf_name_data.push_back(date2.get_name_leafdata());
    if (month1.is_set || is_set(month1.operation)) leaf_name_data.push_back(month1.get_name_leafdata());
    if (month2.is_set || is_set(month2.operation)) leaf_name_data.push_back(month2.get_name_leafdata());
    if (utc.is_set || is_set(utc.operation)) leaf_name_data.push_back(utc.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Map::ValidStart::Ne::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date1")
    {
        date1 = value;
    }
    if(value_path == "date2")
    {
        date2 = value;
    }
    if(value_path == "month1")
    {
        month1 = value;
    }
    if(value_path == "month2")
    {
        month2 = value;
    }
    if(value_path == "utc")
    {
        utc = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

Native::Crypto::Pki::Certificate::Storage::Storage()
    :
    on{YType::empty, "on"},
    path{YType::str, "path"},
    with_keypair{YType::empty, "with-keypair"}
{
    yang_name = "storage"; yang_parent_name = "certificate";
}

Native::Crypto::Pki::Certificate::Storage::~Storage()
{
}

bool Native::Crypto::Pki::Certificate::Storage::has_data() const
{
    return on.is_set
	|| path.is_set
	|| with_keypair.is_set;
}

bool Native::Crypto::Pki::Certificate::Storage::has_operation() const
{
    return is_set(operation)
	|| is_set(on.operation)
	|| is_set(path.operation)
	|| is_set(with_keypair.operation);
}

std::string Native::Crypto::Pki::Certificate::Storage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Certificate::Storage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/certificate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.operation)) leaf_name_data.push_back(on.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (with_keypair.is_set || is_set(with_keypair.operation)) leaf_name_data.push_back(with_keypair.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Certificate::Storage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "on")
    {
        on = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "with-keypair")
    {
        with_keypair = value;
    }
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

    yang_name = "crl"; yang_parent_name = "pki";
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
    return is_set(operation)
	|| is_set(request.operation)
	|| (cache !=  nullptr && cache->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Crypto::Pki::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request.is_set || is_set(request.operation)) leaf_name_data.push_back(request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "request")
    {
        request = value;
    }
}

Native::Crypto::Pki::Crl::Cache::Cache()
    :
    size{YType::uint32, "size"}
{
    yang_name = "cache"; yang_parent_name = "crl";
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
    return is_set(operation)
	|| is_set(size.operation);
}

std::string Native::Crypto::Pki::Crl::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::Cache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
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

    yang_name = "download"; yang_parent_name = "crl";
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
    return is_set(operation)
	|| is_set(trustpoint.operation)
	|| (schedule !=  nullptr && schedule->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Crl::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::Download::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::Download::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
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

    yang_name = "schedule"; yang_parent_name = "download";
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
    return is_set(operation)
	|| is_set(prepublish.operation)
	|| (retries !=  nullptr && retries->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::Download::Schedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prepublish.is_set || is_set(prepublish.operation)) leaf_name_data.push_back(prepublish.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::Download::Schedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prepublish")
    {
        prepublish = value;
    }
}

Native::Crypto::Pki::Crl::Download::Schedule::Retries::Retries()
    :
    interval{YType::uint16, "interval"},
    number{YType::uint8, "number"}
{
    yang_name = "retries"; yang_parent_name = "schedule";
}

Native::Crypto::Pki::Crl::Download::Schedule::Retries::~Retries()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_data() const
{
    return interval.is_set
	|| number.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Retries::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(number.operation);
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retries";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::Download::Schedule::Retries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/schedule/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::Download::Schedule::Retries::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Crypto::Pki::Crl::Download::Schedule::Time::Time()
    :
    clock{YType::str, "clock"},
    date{YType::enumeration, "date"}
{
    yang_name = "time"; yang_parent_name = "schedule";
}

Native::Crypto::Pki::Crl::Download::Schedule::Time::~Time()
{
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_data() const
{
    return clock.is_set
	|| date.is_set;
}

bool Native::Crypto::Pki::Crl::Download::Schedule::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(clock.operation)
	|| is_set(date.operation);
}

std::string Native::Crypto::Pki::Crl::Download::Schedule::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::Download::Schedule::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/schedule/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock.is_set || is_set(clock.operation)) leaf_name_data.push_back(clock.get_name_leafdata());
    if (date.is_set || is_set(date.operation)) leaf_name_data.push_back(date.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::Download::Schedule::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clock")
    {
        clock = value;
    }
    if(value_path == "date")
    {
        date = value;
    }
}

Native::Crypto::Pki::Crl::Download::Url::Url()
    :
    name{YType::str, "name"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"}
{
    yang_name = "url"; yang_parent_name = "download";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(source_interface.operation)
	|| is_set(vrf.operation);
}

std::string Native::Crypto::Pki::Crl::Download::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Crl::Download::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/crl/download/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Crl::Download::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
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

    yang_name = "export"; yang_parent_name = "pki";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| (pem !=  nullptr && pem->has_operation())
	|| (pkcs12 !=  nullptr && pkcs12->has_operation());
}

std::string Native::Crypto::Pki::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Export_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Crypto::Pki::Export_::Pem::Pem()
    :
    terminal(nullptr) // presence node
	,url(std::make_shared<Native::Crypto::Pki::Export_::Pem::Url>())
{
    url->parent = this;

    yang_name = "pem"; yang_parent_name = "export";
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
    return is_set(operation)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Export_::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::Pem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Export_::Pem::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Export_::Pem::Terminal::Terminal()
    :
    rollover{YType::empty, "rollover"}
    	,
    des(std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Des>())
	,pem_3des(std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des>())
{
    des->parent = this;

    pem_3des->parent = this;

    yang_name = "terminal"; yang_parent_name = "pem";
}

Native::Crypto::Pki::Export_::Pem::Terminal::~Terminal()
{
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::has_data() const
{
    return rollover.is_set
	|| (des !=  nullptr && des->has_data())
	|| (pem_3des !=  nullptr && pem_3des->has_data());
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::has_operation() const
{
    return is_set(operation)
	|| is_set(rollover.operation)
	|| (des !=  nullptr && des->has_operation())
	|| (pem_3des !=  nullptr && pem_3des->has_operation());
}

std::string Native::Crypto::Pki::Export_::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::Pem::Terminal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Terminal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rollover.is_set || is_set(rollover.operation)) leaf_name_data.push_back(rollover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::Terminal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "des")
    {
        if(des == nullptr)
        {
            des = std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Des>();
        }
        return des;
    }

    if(child_yang_name == "pem-3des")
    {
        if(pem_3des == nullptr)
        {
            pem_3des = std::make_shared<Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des>();
        }
        return pem_3des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::Terminal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(des != nullptr)
    {
        children["des"] = des;
    }

    if(pem_3des != nullptr)
    {
        children["pem-3des"] = pem_3des;
    }

    return children;
}

void Native::Crypto::Pki::Export_::Pem::Terminal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rollover")
    {
        rollover = value;
    }
}

Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::Pem3Des()
    :
    password{YType::str, "password"}
{
    yang_name = "pem-3des"; yang_parent_name = "terminal";
}

Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::~Pem3Des()
{
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::has_data() const
{
    return password.is_set;
}

bool Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem-3des";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pem3Des' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Pki::Export_::Pem::Terminal::Pem3Des::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Crypto::Pki::Export_::Pem::Terminal::Des::Des()
    :
    password{YType::str, "password"}
{
    yang_name = "des"; yang_parent_name = "terminal";
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
    return is_set(operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Export_::Pem::Terminal::Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "des";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::Pem::Terminal::Des::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Des' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Export_::Pem::Terminal::Des::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Crypto::Pki::Export_::Pem::Url::Url()
    :
    encrypt{YType::enumeration, "encrypt"},
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{
    yang_name = "url"; yang_parent_name = "pem";
}

Native::Crypto::Pki::Export_::Pem::Url::~Url()
{
}

bool Native::Crypto::Pki::Export_::Pem::Url::has_data() const
{
    return encrypt.is_set
	|| file.is_set
	|| password.is_set;
}

bool Native::Crypto::Pki::Export_::Pem::Url::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(file.operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Export_::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::Pem::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Export_::Pem::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Crypto::Pki::Export_::Pkcs12::Pkcs12()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{
    yang_name = "pkcs12"; yang_parent_name = "export";
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
    return is_set(operation)
	|| is_set(file.operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Export_::Pkcs12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkcs12";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Export_::Pkcs12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pkcs12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Export_::Pkcs12::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
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

    yang_name = "import"; yang_parent_name = "pki";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(certificate.operation)
	|| (pem !=  nullptr && pem->has_operation())
	|| (pkcs12 !=  nullptr && pkcs12->has_operation());
}

std::string Native::Crypto::Pki::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (certificate.is_set || is_set(certificate.operation)) leaf_name_data.push_back(certificate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "certificate")
    {
        certificate = value;
    }
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

    yang_name = "pem"; yang_parent_name = "import";
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
    return is_set(operation)
	|| is_set(check.operation)
	|| is_set(exportable.operation)
	|| is_set(usage_keys.operation)
	|| (terminal !=  nullptr && terminal->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Import::Pem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pem";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Import::Pem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());
    if (exportable.is_set || is_set(exportable.operation)) leaf_name_data.push_back(exportable.get_name_leafdata());
    if (usage_keys.is_set || is_set(usage_keys.operation)) leaf_name_data.push_back(usage_keys.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Import::Pem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check")
    {
        check = value;
    }
    if(value_path == "exportable")
    {
        exportable = value;
    }
    if(value_path == "usage-keys")
    {
        usage_keys = value;
    }
}

Native::Crypto::Pki::Import::Pem::Terminal::Terminal()
    :
    password{YType::str, "password"}
{
    yang_name = "terminal"; yang_parent_name = "pem";
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
    return is_set(operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Import::Pem::Terminal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminal";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Import::Pem::Terminal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Terminal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Import::Pem::Terminal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Crypto::Pki::Import::Pem::Url::Url()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{
    yang_name = "url"; yang_parent_name = "pem";
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
    return is_set(operation)
	|| is_set(file.operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Import::Pem::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Import::Pem::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Import::Pem::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Crypto::Pki::Import::Pkcs12::Pkcs12()
    :
    file{YType::enumeration, "file"},
    password{YType::str, "password"}
{
    yang_name = "pkcs12"; yang_parent_name = "import";
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
    return is_set(operation)
	|| is_set(file.operation)
	|| is_set(password.operation);
}

std::string Native::Crypto::Pki::Import::Pkcs12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkcs12";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Import::Pkcs12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pkcs12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file.is_set || is_set(file.operation)) leaf_name_data.push_back(file.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Import::Pkcs12::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "file")
    {
        file = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Crypto::Pki::Profile::Profile()
{
    yang_name = "profile"; yang_parent_name = "pki";
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
    return is_set(operation);
}

std::string Native::Crypto::Pki::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment()
    :
    tag{YType::str, "tag"},
    method_est{YType::empty, "method-est"},
    source_interface{YType::str, "source-interface"}
    	,
    authentication(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication>())
	,default_(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_>())
	,enrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_>())
	,reenrollment(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment>())
{
    authentication->parent = this;

    default_->parent = this;

    enrollment->parent = this;

    reenrollment->parent = this;

    yang_name = "enrollment"; yang_parent_name = "profile";
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
	|| (default_ !=  nullptr && default_->has_data())
	|| (enrollment !=  nullptr && enrollment->has_data())
	|| (reenrollment !=  nullptr && reenrollment->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::has_operation() const
{
    for (std::size_t index=0; index<parameter.size(); index++)
    {
        if(parameter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tag.operation)
	|| is_set(method_est.operation)
	|| is_set(source_interface.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (enrollment !=  nullptr && enrollment->has_operation())
	|| (reenrollment !=  nullptr && reenrollment->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment" <<"[tag='" <<tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:pki/profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (method_est.is_set || is_set(method_est.operation)) leaf_name_data.push_back(method_est.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Default_>();
        }
        return default_;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Pki::Profile::Enrollment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
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

void Native::Crypto::Pki::Profile::Enrollment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "method-est")
    {
        method_est = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Authentication()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Authentication::Url>())
{
    url->parent = this;

    yang_name = "authentication"; yang_parent_name = "enrollment";
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
    return is_set(operation)
	|| is_set(command.operation)
	|| is_set(terminal.operation)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.operation)) leaf_name_data.push_back(terminal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
    if(value_path == "terminal")
    {
        terminal = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{
    yang_name = "url"; yang_parent_name = "authentication";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vrf.operation);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Authentication::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Enrollment_()
    :
    command{YType::str, "command"},
    credential{YType::str, "credential"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url>())
{
    url->parent = this;

    yang_name = "enrollment"; yang_parent_name = "enrollment";
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::~Enrollment_()
{
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_data() const
{
    return command.is_set
	|| credential.is_set
	|| terminal.is_set
	|| (url !=  nullptr && url->has_data());
}

bool Native::Crypto::Pki::Profile::Enrollment::Enrollment_::has_operation() const
{
    return is_set(operation)
	|| is_set(command.operation)
	|| is_set(credential.operation)
	|| is_set(terminal.operation)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enrollment";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Enrollment_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enrollment_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());
    if (credential.is_set || is_set(credential.operation)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.operation)) leaf_name_data.push_back(terminal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
    if(value_path == "credential")
    {
        credential = value;
    }
    if(value_path == "terminal")
    {
        terminal = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{
    yang_name = "url"; yang_parent_name = "enrollment";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vrf.operation);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Enrollment_::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Parameter::Parameter()
    :
    number{YType::uint8, "number"},
    prompt{YType::str, "prompt"},
    value_{YType::str, "value"}
{
    yang_name = "parameter"; yang_parent_name = "enrollment";
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
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(prompt.operation)
	|| is_set(value_.operation);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Parameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Parameter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (prompt.is_set || is_set(prompt.operation)) leaf_name_data.push_back(prompt.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Parameter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "prompt")
    {
        prompt = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Reenrollment()
    :
    command{YType::str, "command"},
    terminal{YType::empty, "terminal"}
    	,
    url(std::make_shared<Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url>())
{
    url->parent = this;

    yang_name = "reenrollment"; yang_parent_name = "enrollment";
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
    return is_set(operation)
	|| is_set(command.operation)
	|| is_set(terminal.operation)
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reenrollment";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Reenrollment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reenrollment' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());
    if (terminal.is_set || is_set(terminal.operation)) leaf_name_data.push_back(terminal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
    if(value_path == "terminal")
    {
        terminal = value;
    }
}

Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::Url()
    :
    name{YType::str, "name"},
    vrf{YType::str, "vrf"}
{
    yang_name = "url"; yang_parent_name = "reenrollment";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vrf.operation);
}

std::string Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Url' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Reenrollment::Url::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
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

    yang_name = "default"; yang_parent_name = "enrollment";
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
    return is_set(operation)
	|| is_set(method_est.operation)
	|| is_set(source_interface.operation)
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

const EntityPath Native::Crypto::Pki::Profile::Enrollment::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_est.is_set || is_set(method_est.operation)) leaf_name_data.push_back(method_est.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Native::Crypto::Pki::Profile::Enrollment::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "method-est")
    {
        method_est = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Ec::Url::FileEnum::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::cns__COLON__ {1, "cns:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::flash__COLON__ {2, "flash:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::ftp__COLON__ {3, "ftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::http__COLON__ {4, "http:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::https__COLON__ {5, "https:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::null__COLON__ {6, "null:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::nvram__COLON__ {7, "nvram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::pram__COLON__ {8, "pram:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::rcp__COLON__ {9, "rcp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::scp__COLON__ {10, "scp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::system__COLON__ {11, "system:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::tar__COLON__ {12, "tar:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::tftp__COLON__ {13, "tftp:"};
const Enum::YLeaf Native::Crypto::Key::Import::Rsa::Url::FileEnum::tmpsys__COLON__ {14, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::UseEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::AddressedKey::UseEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::UseEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::NamedKey::UseEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::UseEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::AddressedKey::UseEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::UseEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Key::PubkeyChain::Rsa::Default_::NamedKey::UseEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Ipv4Addr::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Address::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::PreSharedKey::Hostname::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Addr::WayEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Addr::WayEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::WayEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::Default_::RsaPubkey::Hostname::WayEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Ipv4Addr::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Address::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Keyring::PreSharedKey::Hostname::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::WayEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Addr::WayEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::WayEnum::encryption {0, "encryption"};
const Enum::YLeaf Native::Crypto::Keyring::RsaPubkey::Hostname::WayEnum::signature {1, "signature"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::KeyingEnum::ipsec_isakmp {0, "ipsec-isakmp"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::KeyingEnum::ipsec_manual {1, "ipsec-manual"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::KeyingEnum::gdoi {2, "gdoi"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::KeyingEnum::ckm {3, "ckm"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Default_::Set::SecurityAssociation::LevelEnum::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::Pfs::GroupEnum::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::DfbitEnum::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::DfbitEnum::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::DfbitEnum::set {2, "set"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::EcnEnum::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::EcnEnum::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::LevelEnum::per_host {0, "per-host"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Lifetime::KilobytesEnum::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::MapIpv6::Map::Set::SecurityAssociation::Replay::WindowSizeEnum::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::MapIpv6Gdoi::Map::GdoiEnum::fail_close {0, "fail-close"};

const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum::ca {0, "ca"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum::ra_encrypt {1, "ra-encrypt"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum::ra_general {2, "ra-general"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum::ra_sign {3, "ra-sign"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum::rollover {4, "rollover"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Chain::Certificate_::CerttypeEnum::self_signed {5, "self-signed"};

const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::PathEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::PathEnum::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Certificate::Storage::PathEnum::nvram__COLON__ {2, "nvram:"};

const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Friday {0, "Friday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Monday {1, "Monday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Saturday {2, "Saturday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Sunday {3, "Sunday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Thursday {4, "Thursday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Tuesday {5, "Tuesday"};
const Enum::YLeaf Native::Crypto::Pki::Crl::Download::Schedule::Time::DateEnum::Wednesday {6, "Wednesday"};

const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::FileEnum::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::EncryptEnum::Y_3des {0, "3des"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pem::Url::EncryptEnum::des {1, "des"};

const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Export_::Pkcs12::FileEnum::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pem::Url::FileEnum::tmpsys__COLON__ {12, "tmpsys:"};

const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::bootflash__COLON__ {0, "bootflash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::flash__COLON__ {1, "flash:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::ftp__COLON__ {2, "ftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::http__COLON__ {3, "http:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::https__COLON__ {4, "https:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::null__COLON__ {5, "null:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::nvram__COLON__ {6, "nvram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::pram__COLON__ {7, "pram:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::rcp__COLON__ {8, "rcp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::scp__COLON__ {9, "scp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::system__COLON__ {10, "system:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::tftp__COLON__ {11, "tftp:"};
const Enum::YLeaf Native::Crypto::Pki::Import::Pkcs12::FileEnum::tmpsys__COLON__ {12, "tmpsys:"};


}
}

